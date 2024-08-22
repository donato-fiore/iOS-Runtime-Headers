typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, long long>, std::hash<NSString *>, std::equal_to<NSString *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, long long>, std::hash<NSString *>, std::equal_to<NSString *>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, long long>, std::equal_to<NSString *>, std::hash<NSString *>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, long long>, std::equal_to<NSString *>, std::hash<NSString *>, true>>;

typedef struct __hash_table<std::__hash_value_type<NSString *, long long>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, long long>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, long long>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, long long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, long long>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, long long>, std::hash<NSString *>, std::equal_to<NSString *>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, long long>, std::equal_to<NSString *>, std::hash<NSString *>, true>> __p3_;
} __hash_table<std::__hash_value_type<NSString *, long long>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, long long>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, long long>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, long long>>>;

typedef struct unordered_map<NSString *, long long, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, long long>>> {
    __hash_table<std::__hash_value_type<NSString *, long long>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, long long>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, long long>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, long long>>> __table_;
} unordered_map<NSString *, long long, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, long long>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<semantic_pair, std::__hash_value_type<semantic_pair, materialsForPair>, std::hash<semantic_pair>, std::equal_to<semantic_pair>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<semantic_pair, std::__hash_value_type<semantic_pair, materialsForPair>, std::hash<semantic_pair>, std::equal_to<semantic_pair>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<semantic_pair, std::__hash_value_type<semantic_pair, materialsForPair>, std::equal_to<semantic_pair>, std::hash<semantic_pair>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<semantic_pair, std::__hash_value_type<semantic_pair, materialsForPair>, std::equal_to<semantic_pair>, std::hash<semantic_pair>, true>>;

typedef struct __hash_table<std::__hash_value_type<semantic_pair, materialsForPair>, std::__unordered_map_hasher<semantic_pair, std::__hash_value_type<semantic_pair, materialsForPair>, std::hash<semantic_pair>, std::equal_to<semantic_pair>, true>, std::__unordered_map_equal<semantic_pair, std::__hash_value_type<semantic_pair, materialsForPair>, std::equal_to<semantic_pair>, std::hash<semantic_pair>, true>, std::allocator<std::__hash_value_type<semantic_pair, materialsForPair>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<semantic_pair, materialsForPair>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<semantic_pair, std::__hash_value_type<semantic_pair, materialsForPair>, std::hash<semantic_pair>, std::equal_to<semantic_pair>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<semantic_pair, std::__hash_value_type<semantic_pair, materialsForPair>, std::equal_to<semantic_pair>, std::hash<semantic_pair>, true>> __p3_;
} __hash_table<std::__hash_value_type<semantic_pair, materialsForPair>, std::__unordered_map_hasher<semantic_pair, std::__hash_value_type<semantic_pair, materialsForPair>, std::hash<semantic_pair>, std::equal_to<semantic_pair>, true>, std::__unordered_map_equal<semantic_pair, std::__hash_value_type<semantic_pair, materialsForPair>, std::equal_to<semantic_pair>, std::hash<semantic_pair>, true>, std::allocator<std::__hash_value_type<semantic_pair, materialsForPair>>>;

typedef struct unordered_map<semantic_pair, materialsForPair, std::hash<semantic_pair>, std::equal_to<semantic_pair>, std::allocator<std::pair<const semantic_pair, materialsForPair>>> {
    __hash_table<std::__hash_value_type<semantic_pair, materialsForPair>, std::__unordered_map_hasher<semantic_pair, std::__hash_value_type<semantic_pair, materialsForPair>, std::hash<semantic_pair>, std::equal_to<semantic_pair>, true>, std::__unordered_map_equal<semantic_pair, std::__hash_value_type<semantic_pair, materialsForPair>, std::equal_to<semantic_pair>, std::hash<semantic_pair>, true>, std::allocator<std::__hash_value_type<semantic_pair, materialsForPair>>> __table_;
} unordered_map<semantic_pair, materialsForPair, std::hash<semantic_pair>, std::equal_to<semantic_pair>, std::allocator<std::pair<const semantic_pair, materialsForPair>>>;

typedef struct materialsForPair {
    id field0;
    id field1;
    id field2;
} materialsForPair;

typedef struct semantic_pair {
    NSInteger field0;
    NSInteger field1;
    NSUInteger field2;
} semantic_pair;

