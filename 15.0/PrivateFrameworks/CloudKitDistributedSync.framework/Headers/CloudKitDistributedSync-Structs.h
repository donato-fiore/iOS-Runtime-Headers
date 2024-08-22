typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXStructProperties>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXStructProperties>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXStructProperties>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXStructProperties>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, CKXStructProperties>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXStructProperties>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXStructProperties>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXStructProperties>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXStructProperties>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXStructProperties>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXStructProperties>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, CKXStructProperties>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXStructProperties>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXStructProperties>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXStructProperties>>>;

typedef struct unordered_map<unsigned long, CKXStructProperties, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXStructProperties>>> {
    __hash_table<std::__hash_value_type<unsigned long, CKXStructProperties>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXStructProperties>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXStructProperties>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXStructProperties>>> __table_;
} unordered_map<unsigned long, CKXStructProperties, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXStructProperties>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::vector<unsigned long>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::vector<unsigned long>>>>;

typedef struct unordered_map<unsigned long, std::vector<unsigned long>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::vector<unsigned long>>>> {
    __hash_table<std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::vector<unsigned long>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::vector<unsigned long>>>> __table_;
} unordered_map<unsigned long, std::vector<unsigned long>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::vector<unsigned long>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXFieldProperties>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXFieldProperties>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXFieldProperties>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXFieldProperties>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, CKXFieldProperties>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXFieldProperties>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXFieldProperties>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXFieldProperties>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXFieldProperties>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXFieldProperties>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXFieldProperties>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, CKXFieldProperties>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXFieldProperties>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXFieldProperties>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXFieldProperties>>>;

typedef struct unordered_map<unsigned long, CKXFieldProperties, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXFieldProperties>>> {
    __hash_table<std::__hash_value_type<unsigned long, CKXFieldProperties>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXFieldProperties>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXFieldProperties>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXFieldProperties>>> __table_;
} unordered_map<unsigned long, CKXFieldProperties, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXFieldProperties>>>;

typedef struct ? {
    NSUInteger timestamp;
    NSUInteger timestamp_identifier;
    NSUInteger timestamp_modifier;
    NSUInteger timestamp_clock;
    NSUInteger timestamp_unordered;
    NSUInteger location;
    NSUInteger location_identifier;
    NSUInteger location_zone_name;
    NSUInteger location_zone_owner_name;
    NSUInteger reference;
    NSUInteger reference_type;
    NSUInteger reference_location;
    NSUInteger reference_timestamp;
    NSUInteger atom;
    NSUInteger atom_version;
    NSUInteger atom_location;
    NSUInteger atom_timestamp;
    NSUInteger atom_references;
    NSUInteger atom_atom_behavior;
    NSUInteger atom_atom_type;
    NSUInteger atom_value;
    NSUInteger atomBatch;
    NSUInteger atomBatch_atoms;
} ?;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXListInstance>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXListInstance>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXListInstance>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXListInstance>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, CKXListInstance>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXListInstance>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXListInstance>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXListInstance>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXListInstance>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXListInstance>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXListInstance>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, CKXListInstance>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXListInstance>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXListInstance>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXListInstance>>>;

typedef struct unordered_map<unsigned long, CKXListInstance, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXListInstance>>> {
    __hash_table<std::__hash_value_type<unsigned long, CKXListInstance>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXListInstance>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXListInstance>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXListInstance>>> __table_;
} unordered_map<unsigned long, CKXListInstance, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXListInstance>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>>>;

typedef struct unordered_map<unsigned long, std::pair<CKXStructInstance, unsigned long>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::pair<CKXStructInstance, unsigned long>>>> {
    __hash_table<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::pair<CKXStructInstance, unsigned long>>>> __table_;
} unordered_map<unsigned long, std::pair<CKXStructInstance, unsigned long>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::pair<CKXStructInstance, unsigned long>>>>;

typedef struct Reader {
} // Error Processing Struct Fields

typedef struct __compressed_pair<orc::Reader *, std::default_delete<orc::Reader>> {
    Reader __value_;
} __compressed_pair<orc::Reader *, std::default_delete<orc::Reader>>;

typedef struct unique_ptr<orc::Reader, std::default_delete<orc::Reader>> {
    __compressed_pair<orc::Reader *, std::default_delete<orc::Reader>> __ptr_;
} unique_ptr<orc::Reader, std::default_delete<orc::Reader>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>>>;

typedef struct unordered_map<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>>> {
    __hash_table<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>>> __table_;
} unordered_map<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSIndexSet *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSIndexSet *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSIndexSet *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSIndexSet *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, NSIndexSet *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSIndexSet *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSIndexSet *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, NSIndexSet *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, NSIndexSet *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSIndexSet *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSIndexSet *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, NSIndexSet *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSIndexSet *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSIndexSet *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, NSIndexSet *>>>;

typedef struct unordered_map<unsigned long, NSIndexSet *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, NSIndexSet *>>> {
    __hash_table<std::__hash_value_type<unsigned long, NSIndexSet *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSIndexSet *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSIndexSet *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, NSIndexSet *>>> __table_;
} unordered_map<unsigned long, NSIndexSet *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, NSIndexSet *>>>;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct Writer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<orc::Writer *, std::default_delete<orc::Writer>> {
    Writer __value_;
} __compressed_pair<orc::Writer *, std::default_delete<orc::Writer>>;

typedef struct unique_ptr<orc::Writer, std::default_delete<orc::Writer>> {
    __compressed_pair<orc::Writer *, std::default_delete<orc::Writer>> __ptr_;
} unique_ptr<orc::Writer, std::default_delete<orc::Writer>>;

typedef struct OutputStream {
} // Error Processing Struct Fields

typedef struct __compressed_pair<orc::OutputStream *, std::default_delete<orc::OutputStream>> {
    OutputStream __value_;
} __compressed_pair<orc::OutputStream *, std::default_delete<orc::OutputStream>>;

typedef struct unique_ptr<orc::OutputStream, std::default_delete<orc::OutputStream>> {
    __compressed_pair<orc::OutputStream *, std::default_delete<orc::OutputStream>> __ptr_;
} unique_ptr<orc::OutputStream, std::default_delete<orc::OutputStream>>;

typedef struct ColumnVectorBatch {
} // Error Processing Struct Fields

typedef struct __compressed_pair<orc::ColumnVectorBatch *, std::default_delete<orc::ColumnVectorBatch>> {
    ColumnVectorBatch __value_;
} __compressed_pair<orc::ColumnVectorBatch *, std::default_delete<orc::ColumnVectorBatch>>;

typedef struct unique_ptr<orc::ColumnVectorBatch, std::default_delete<orc::ColumnVectorBatch>> {
    __compressed_pair<orc::ColumnVectorBatch *, std::default_delete<orc::ColumnVectorBatch>> __ptr_;
} unique_ptr<orc::ColumnVectorBatch, std::default_delete<orc::ColumnVectorBatch>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<CKXStructInstance, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<CKXStructInstance, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<CKXStructInstance>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<CKXStructInstance>>;

typedef struct __tree<CKXStructInstance, std::less<CKXStructInstance>, std::allocator<CKXStructInstance>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<CKXStructInstance, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<CKXStructInstance>> __pair3_;
} __tree<CKXStructInstance, std::less<CKXStructInstance>, std::allocator<CKXStructInstance>>;

typedef struct set<CKXStructInstance, std::less<CKXStructInstance>, std::allocator<CKXStructInstance>> {
    __tree<CKXStructInstance, std::less<CKXStructInstance>, std::allocator<CKXStructInstance>> __tree_;
} set<CKXStructInstance, std::less<CKXStructInstance>, std::allocator<CKXStructInstance>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, CKXProxyBase *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXProxyBase *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, CKXProxyBase *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, CKXProxyBase *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXProxyBase *>>>;

typedef struct unordered_map<unsigned long, CKXProxyBase *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXProxyBase *>>> {
    __hash_table<std::__hash_value_type<unsigned long, CKXProxyBase *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CKXProxyBase *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, CKXProxyBase *>>> __table_;
} unordered_map<unsigned long, CKXProxyBase *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXProxyBase *>>>;

