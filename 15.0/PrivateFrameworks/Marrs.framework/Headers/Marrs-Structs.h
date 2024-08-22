typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __long {
    char * __data_;
    NSUInteger __size_;
    NSUInteger __cap_;
} __long;

typedef struct ? {
    unsigned char __size_;
} ?;

typedef struct __short {
    char __data_;
    ? ;
} __short;

typedef struct __raw {
    NSUInteger __words;
} __raw;

typedef struct __rep {
    unk ;
    __long __l;
    __short __s;
    __raw __r;
} __rep;

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep __value_;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> __r_;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void __value_;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::string *, std::allocator<std::string>> __end_cap_;
} vector<std::string, std::allocator<std::string>>;

typedef struct QRToken {
    basic_string<char, std::char_traits<char>, std::allocator<char>> field0;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field1;
    vector<std::string, std::allocator<std::string>> field2;
    BOOL field3;
    BOOL field4;
    NSUInteger field5;
    NSUInteger field6;
    CGFloat field7;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field8;
    BOOL field9;
} QRToken;

typedef struct Uuid {
    NSUInteger field0;
    NSUInteger field1;
} Uuid;

typedef struct vector<marrs::qr::orchestration::QRToken, std::allocator<marrs::qr::orchestration::QRToken>> {
} // Error Processing Struct Fields

typedef struct QRUtterance {
} // Error Processing Struct Fields

typedef struct vector<marrs::qr::orchestration::QRUtterance, std::allocator<marrs::qr::orchestration::QRUtterance>> {
} // Error Processing Struct Fields

typedef struct QRInteraction {
} // Error Processing Struct Fields

typedef struct QRHypothesis {
    Uuid field0;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field1;
    CGFloat field2;
    int field3;
} QRHypothesis;

typedef struct QRRequest {
    Uuid field0;
    vector<marrs::qr::orchestration::QRInteraction, std::allocator<marrs::qr::orchestration::QRInteraction>> field1;
} QRRequest;

typedef struct __compressed_pair<marrs::qr::orchestration::QRRequest *, std::default_delete<marrs::qr::orchestration::QRRequest>> {
    QRRequest field0;
} __compressed_pair<marrs::qr::orchestration::QRRequest *, std::default_delete<marrs::qr::orchestration::QRRequest>>;

typedef struct unique_ptr<marrs::qr::orchestration::QRRequest, std::default_delete<marrs::qr::orchestration::QRRequest>> {
    __compressed_pair<marrs::qr::orchestration::QRRequest *, std::default_delete<marrs::qr::orchestration::QRRequest>> field0;
} unique_ptr<marrs::qr::orchestration::QRRequest, std::default_delete<marrs::qr::orchestration::QRRequest>>;

typedef struct vector<marrs::qr::orchestration::QRInteraction, std::allocator<marrs::qr::orchestration::QRInteraction>> {
} // Error Processing Struct Fields

typedef struct exception_ptr {
    void field0;
} exception_ptr;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>>>;

typedef struct unordered_map<unsigned int, std::unordered_map<unsigned int, float>, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, std::unordered_map<unsigned int, float>>>> {
    __hash_table<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, std::unordered_map<unsigned int, float>>>> __table_;
} unordered_map<unsigned int, std::unordered_map<unsigned int, float>, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, std::unordered_map<unsigned int, float>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>>>;

typedef struct unordered_map<std::string, std::unordered_map<std::string, float>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_map<std::string, float>>>> {
    __hash_table<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, float>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unordered_map<std::string, float>>>> __table_;
} unordered_map<std::string, std::unordered_map<std::string, float>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_map<std::string, float>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, unsigned int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned int>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned int>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, unsigned int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned int>>>;

typedef struct unordered_map<std::string, unsigned int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int>>> {
    __hash_table<std::__hash_value_type<std::string, unsigned int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned int>>> __table_;
} unordered_map<std::string, unsigned int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int>>>;

typedef struct SymbolMapper {
    basic_string<char, std::char_traits<char>, std::allocator<char>> mEpsilonString;
    unsigned int mEpsilonPhone;
    unordered_map<std::string, unsigned int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int>>> mSymbolMap;
} SymbolMapper;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string>>>;

typedef struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> {
    __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string>>> __tree_;
} map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::string, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::string, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> {
    __hash_node_base<std::__hash_node<std::string, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<std::string>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<std::string>>;

typedef struct __compressed_pair<float, std::equal_to<std::string>> {
    float __value_;
} __compressed_pair<float, std::equal_to<std::string>>;

typedef struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<std::string>> __p2_;
    __compressed_pair<float, std::equal_to<std::string>> __p3_;
} __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>>;

typedef struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> {
    __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> __table_;
} unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>>;

typedef struct CorrectionsRepetitionPredictorPlugin {
    unk _vptr$RepetitionPredictorBase;
    unordered_map<unsigned int, std::unordered_map<unsigned int, float>, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, std::unordered_map<unsigned int, float>>>> cost_matrix;
    unordered_map<std::string, std::unordered_map<std::string, float>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_map<std::string, float>>>> symbolic_cost_matrix;
    SymbolMapper symbol_map;
    map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> mConfig;
    vector<std::string, std::allocator<std::string>> trigger_phrases;
    unk _vptr$InputValidator;
    basic_string<char, std::char_traits<char>, std::allocator<char>> locale;
    unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> skiplist;
    float asr_confidence_model_weight;
    basic_string<char, std::char_traits<char>, std::allocator<char>> operating_point;
    basic_string<char, std::char_traits<char>, std::allocator<char>> asset_version;
} CorrectionsRepetitionPredictorPlugin;

typedef struct QueryRewriteOrchestrator {
} // Error Processing Struct Fields

typedef struct __compressed_pair<marrs::qr::orchestration::QueryRewriteOrchestrator *, std::default_delete<marrs::qr::orchestration::QueryRewriteOrchestrator>> {
    QueryRewriteOrchestrator __value_;
} __compressed_pair<marrs::qr::orchestration::QueryRewriteOrchestrator *, std::default_delete<marrs::qr::orchestration::QueryRewriteOrchestrator>>;

typedef struct unique_ptr<marrs::qr::orchestration::QueryRewriteOrchestrator, std::default_delete<marrs::qr::orchestration::QueryRewriteOrchestrator>> {
    __compressed_pair<marrs::qr::orchestration::QueryRewriteOrchestrator *, std::default_delete<marrs::qr::orchestration::QueryRewriteOrchestrator>> __ptr_;
} unique_ptr<marrs::qr::orchestration::QueryRewriteOrchestrator, std::default_delete<marrs::qr::orchestration::QueryRewriteOrchestrator>>;

typedef struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> {
} // Error Processing Struct Fields

typedef struct QRResponse {
    Uuid field0;
    vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> field1;
    int field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    int field6;
} QRResponse;

