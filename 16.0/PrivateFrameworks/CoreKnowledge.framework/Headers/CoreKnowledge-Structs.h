typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct RefCountBitsT<swift::RefCountIsInline> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> {
    uint8_t __a_value;
    RefCountBitsT<swift::RefCountIsInline> field1;
} __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>>;

typedef struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> {
    __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> __a_;
} atomic<swift::RefCountBitsT<swift::RefCountIsInline>>;

typedef struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> {
    atomic<swift::RefCountBitsT<swift::RefCountIsInline>> refCounts;
} RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<long long, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<long long, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *>, std::allocator<std::__hash_node<long long, void *>>> {
    __hash_node_base<std::__hash_node<long long, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *>, std::allocator<std::__hash_node<long long, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<long long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<long long>>;

typedef struct __compressed_pair<float, std::equal_to<long long>> {
    float __value_;
} __compressed_pair<float, std::equal_to<long long>>;

typedef struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *>, std::allocator<std::__hash_node<long long, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<long long>> __p2_;
    __compressed_pair<float, std::equal_to<long long>> __p3_;
} __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>>;

typedef struct unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> {
    __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> __table_;
} unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>>;

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * __value_;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct ? {
    NSUInteger field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
} ?;

typedef struct OntologyNodeName {
} // Error Processing Struct Fields

typedef struct OntologyEdgeName {
} // Error Processing Struct Fields

typedef struct pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *> {
    OntologyNodeName field0;
    OntologyEdgeName field1;
} pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *>;

typedef struct optional<std::pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *>> {
    unk field0;
    char field1;
    pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *> field2;
    BOOL field3;
} optional<std::pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *>>;

typedef struct __CFBundle {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

