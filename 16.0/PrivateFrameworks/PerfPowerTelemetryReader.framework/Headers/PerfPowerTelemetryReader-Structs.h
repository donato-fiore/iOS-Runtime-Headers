typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    NSUInteger field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
} ?;

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void field0;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void field0;
    void field1;
    __compressed_pair<std::string *, std::allocator<std::string>> field2;
} vector<std::string, std::allocator<std::string>>;

typedef struct __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> {
    void field0;
} __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>>;

typedef struct vector<std::vector<double>, std::allocator<std::vector<double>>> {
    void field0;
    void field1;
    __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> field2;
} vector<std::vector<double>, std::allocator<std::vector<double>>>;

typedef struct __compressed_pair<int *, std::allocator<int>> {
    int field0;
} __compressed_pair<int *, std::allocator<int>>;

typedef struct vector<int, std::allocator<int>> {
    int field0;
    int field1;
    __compressed_pair<int *, std::allocator<int>> field2;
} vector<int, std::allocator<int>>;

typedef struct PPTHistogramBin_Internal<unsigned long, double> {
    NSUInteger field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    vector<std::string, std::allocator<std::string>> field5;
    vector<std::vector<double>, std::allocator<std::vector<double>>> field6;
    vector<int, std::allocator<int>> field7;
} PPTHistogramBin_Internal<unsigned long, double>;

typedef struct __compressed_pair<ppt::PPTHistogram_Internal<unsigned long, double> *, std::default_delete<ppt::PPTHistogram_Internal<unsigned long, double>>> {
    void __value_;
} __compressed_pair<ppt::PPTHistogram_Internal<unsigned long, double> *, std::default_delete<ppt::PPTHistogram_Internal<unsigned long, double>>>;

typedef struct unique_ptr<ppt::PPTHistogram_Internal<unsigned long, double>, std::default_delete<ppt::PPTHistogram_Internal<unsigned long, double>>> {
    __compressed_pair<ppt::PPTHistogram_Internal<unsigned long, double> *, std::default_delete<ppt::PPTHistogram_Internal<unsigned long, double>>> __ptr_;
} unique_ptr<ppt::PPTHistogram_Internal<unsigned long, double>, std::default_delete<ppt::PPTHistogram_Internal<unsigned long, double>>>;

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::pair<double, double> *, std::allocator<std::pair<double, double>>> {
    void __value_;
} __compressed_pair<std::pair<double, double> *, std::allocator<std::pair<double, double>>>;

typedef struct vector<std::pair<double, double>, std::allocator<std::pair<double, double>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<double, double> *, std::allocator<std::pair<double, double>>> __end_cap_;
} vector<std::pair<double, double>, std::allocator<std::pair<double, double>>>;

