#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_vector(const vector<int>& v) {
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}

vector<int> insertion_sort(const vector<int>& v) {
    //TODO
}

vector<int> merge_sort(const vector<int>& v) {
    //TODO
}


void verify(const vector<int>& v, const vector<int>& original) {
    if (v == original)
        cout << "RIGHT" << endl;
    else
        cout << "WRONG" << endl;
    }

int main() {
    const int size = 10;
    vector<int> v(size);
    for (int i = 0; i < v.size(); ++i)
        v[i] = i;
    vector<int> original = v;
    random_shuffle(v.begin(), v.end());
    cout << "Unsorted array: ";
    print_vector(v);
   
    vector<int> isv = insertion_sort(v);
    cout << "Sorted using insertion sort: ";
    print_vector(isv);
    verify(isv, original);

    vector<int> msv = insertion_sort(v);
    cout << "Sorted using insertion sort: ";
    print_vector(msv);
    verify(msv, original);

    return 0;
}
