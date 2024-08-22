typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL timestamp;
    BOOL recordCount;
    BOOL version;
    BOOL success;
} ?;

typedef struct os_log_s {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _moFactoryClassFlags {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _moFactoryClassFlags;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, os_log_s *>, std::hash<const char *>, std::equal_to<const char *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, os_log_s *>, std::hash<const char *>, std::equal_to<const char *>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, os_log_s *>, std::equal_to<const char *>, std::hash<const char *>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, os_log_s *>, std::equal_to<const char *>, std::hash<const char *>, true>>;

typedef struct __hash_table<std::__hash_value_type<const char *, os_log_s *>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, os_log_s *>, std::hash<const char *>, std::equal_to<const char *>, true>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, os_log_s *>, std::equal_to<const char *>, std::hash<const char *>, true>, std::allocator<std::__hash_value_type<const char *, os_log_s *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, os_log_s *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, os_log_s *>, std::hash<const char *>, std::equal_to<const char *>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, os_log_s *>, std::equal_to<const char *>, std::hash<const char *>, true>> __p3_;
} __hash_table<std::__hash_value_type<const char *, os_log_s *>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, os_log_s *>, std::hash<const char *>, std::equal_to<const char *>, true>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, os_log_s *>, std::equal_to<const char *>, std::hash<const char *>, true>, std::allocator<std::__hash_value_type<const char *, os_log_s *>>>;

typedef struct unordered_map<const char *, os_log_s *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, os_log_s *>>> {
    __hash_table<std::__hash_value_type<const char *, os_log_s *>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, os_log_s *>, std::hash<const char *>, std::equal_to<const char *>, true>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, os_log_s *>, std::equal_to<const char *>, std::hash<const char *>, true>, std::allocator<std::__hash_value_type<const char *, os_log_s *>>> __table_;
} unordered_map<const char *, os_log_s *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, os_log_s *>>>;

