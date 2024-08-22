typedef struct DataProperties {
    int field0;
    id field1;
    NSUInteger field2;
    id field3;
    unsigned int field4;
} DataProperties;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGDataProvider {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL isLazyLoadingDocumentProperties;
    BOOL isLazyLoadingZip;
} ?;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct vector<_NSRange, std::allocator<_NSRange>> {
} // Error Processing Struct Fields

typedef struct UUIDData<TSP::UUIDData> {
    unk field0;
    unsigned char field1;
    ? field2;
    ? field3;
} UUIDData<TSP::UUIDData>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, TSP::ObjectInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ObjectInfo>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, TSP::ObjectInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ObjectInfo>>>;

typedef struct IdentifierMap<TSP::ObjectInfo> {
    __hash_table<std::__hash_value_type<const long long, TSP::ObjectInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ObjectInfo>>> __table_;
} IdentifierMap<TSP::ObjectInfo>;

typedef struct UnarchiverRepeatedReference {
} // Error Processing Struct Fields

typedef struct vector<TSP::UnarchiverRepeatedReference, std::allocator<TSP::UnarchiverRepeatedReference>> {
} // Error Processing Struct Fields

typedef struct InternalMetadata {
    void ptr_;
} InternalMetadata;

typedef struct Message {
    unk field0;
    InternalMetadata field1;
} Message;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, long long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, long long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, long long>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, long long>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, long long>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, long long>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, long long>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, long long>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, long long>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, long long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, long long>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, long long>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, long long>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, long long>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, long long>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, long long>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, long long>>>;

typedef struct IdentifierMap<long long> {
    __hash_table<std::__hash_value_type<const long long, long long>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, long long>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, long long>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, long long>>> __table_;
} IdentifierMap<long long>;

typedef struct Descriptor {
} // Error Processing Struct Fields

typedef struct ReflectionSchema {
} // Error Processing Struct Fields

typedef struct DescriptorPool {
} // Error Processing Struct Fields

typedef struct MessageFactory {
} // Error Processing Struct Fields

typedef struct Reflection {
    Descriptor field0;
    ReflectionSchema field1;
    DescriptorPool field2;
    MessageFactory field3;
    int field4;
} Reflection;

typedef struct UnknownFieldSet {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<google::protobuf::UnknownFieldSet> {
    UnknownFieldSet __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<google::protobuf::UnknownFieldSet>;

typedef struct HasBits<1> {
    unsigned int has_bits_;
} HasBits<1>;

typedef struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
    uint8_t __a_value;
    int field1;
} __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>;

typedef struct atomic<int> {
    __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> __a_;
} atomic<int>;

typedef struct CachedSize {
    atomic<int> size_;
} CachedSize;

typedef struct RepeatedField<unsigned long long> {
    int current_size_;
    int total_size_;
    void arena_or_elements_;
} RepeatedField<unsigned long long>;

typedef struct RepeatedField<unsigned int> {
    int current_size_;
    int total_size_;
    void arena_or_elements_;
} RepeatedField<unsigned int>;

typedef struct TaggedPtr<std::string> {
    void ptr_;
} TaggedPtr<std::string>;

typedef struct ArenaStringPtr {
    TaggedPtr<std::string> tagged_ptr_;
} ArenaStringPtr;

typedef struct FieldPath {
} // Error Processing Struct Fields

typedef struct FieldInfo {
    unk _vptr$MessageLite;
    InternalMetadata _internal_metadata_;
    HasBits<1> _has_bits_;
    CachedSize _cached_size_;
    RepeatedField<unsigned long long> object_references_;
    atomic<int> _object_references_cached_byte_size_;
    RepeatedField<unsigned long long> data_references_;
    atomic<int> _data_references_cached_byte_size_;
    RepeatedField<unsigned int> known_field_version_;
    atomic<int> _known_field_version_cached_byte_size_;
    ArenaStringPtr known_field_feature_identifier_;
    FieldPath path_;
    int type_;
    int unknown_field_rule_;
    int known_field_rule_;
} FieldInfo;

typedef struct TSPObjectLocation {
    NSInteger field0;
    NSInteger field1;
} TSPObjectLocation;

typedef struct WrittenComponentInfo {
    id field0;
    id field1;
    BOOL field2;
    BOOL field3;
    id field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    id field8;
    id field9;
    BOOL field10;
    unsigned char field11;
    NSInteger field12;
    NSUInteger field13;
    NSUInteger field14;
    NSUInteger field15;
    NSUInteger field16;
    BOOL field17;
    id field18;
    id field19;
    id field20;
    id field21;
    id field22;
    id field23;
    id field24;
    id field25;
} WrittenComponentInfo;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>>>;

typedef struct IdentifierMap<TSP::ComponentPropertiesSnapshot> {
    __hash_table<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>>> __table_;
} IdentifierMap<TSP::ComponentPropertiesSnapshot>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>>>;

typedef struct IdentifierMap<TSP::WrittenComponentInfo> {
    __hash_table<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::WrittenComponentInfo>>> __table_;
} IdentifierMap<TSP::WrittenComponentInfo>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ComponentProperties>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ComponentProperties>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ComponentProperties>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ComponentProperties>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, TSP::ComponentProperties>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ComponentProperties>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ComponentProperties>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ComponentProperties>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ComponentProperties>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ComponentProperties>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ComponentProperties>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, TSP::ComponentProperties>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ComponentProperties>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ComponentProperties>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ComponentProperties>>>;

typedef struct IdentifierMap<TSP::ComponentProperties> {
    __hash_table<std::__hash_value_type<const long long, TSP::ComponentProperties>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ComponentProperties>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ComponentProperties>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ComponentProperties>>> __table_;
} IdentifierMap<TSP::ComponentProperties>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::map<long long, TSPComponent *>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::map<long long, TSPComponent *>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::map<long long, TSPComponent *>>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::map<long long, TSPComponent *>>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, std::map<long long, TSPComponent *>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::map<long long, TSPComponent *>>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, std::map<long long, TSPComponent *>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::map<long long, TSPComponent *>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::map<long long, TSPComponent *>>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, std::map<long long, TSPComponent *>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::map<long long, TSPComponent *>>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, std::map<long long, TSPComponent *>>>>;

typedef struct map<unsigned int, std::map<long long, TSPComponent *>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::map<long long, TSPComponent *>>>> {
    __tree<std::__value_type<unsigned int, std::map<long long, TSPComponent *>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::map<long long, TSPComponent *>>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, std::map<long long, TSPComponent *>>>> __tree_;
} map<unsigned int, std::map<long long, TSPComponent *>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::map<long long, TSPComponent *>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>>>;

typedef struct IdentifierMap<TSP::WrittenObjectInfo> {
    __hash_table<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::WrittenObjectInfo>>> __table_;
} IdentifierMap<TSP::WrittenObjectInfo>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, const long long>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, const long long>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, const long long>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, const long long>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, const long long>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, const long long>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, const long long>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, const long long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, const long long>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, const long long>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, const long long>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, const long long>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, const long long>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, const long long>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, const long long>>>;

typedef struct IdentifierMap<const long long> {
    __hash_table<std::__hash_value_type<const long long, const long long>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, const long long>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, const long long>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, const long long>>> __table_;
} IdentifierMap<const long long>;

typedef struct WrittenObjectInfo {
} // Error Processing Struct Fields

typedef struct __split_buffer<TSP::WrittenObjectInfo *, std::allocator<TSP::WrittenObjectInfo *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<TSP::WrittenObjectInfo>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<TSP::WrittenObjectInfo>>;

typedef struct deque<TSP::WrittenObjectInfo, std::allocator<TSP::WrittenObjectInfo>> {
    __split_buffer<TSP::WrittenObjectInfo *, std::allocator<TSP::WrittenObjectInfo *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<TSP::WrittenObjectInfo>> __size_;
} deque<TSP::WrittenObjectInfo, std::allocator<TSP::WrittenObjectInfo>>;

typedef struct queue<TSP::WrittenObjectInfo, std::deque<TSP::WrittenObjectInfo>> {
    deque<TSP::WrittenObjectInfo, std::allocator<TSP::WrittenObjectInfo>> c;
} queue<TSP::WrittenObjectInfo, std::deque<TSP::WrittenObjectInfo>>;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, bool>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, bool>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, bool>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, bool>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, bool>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, bool>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, bool>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, bool>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, bool>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, bool>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, bool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, bool>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, bool>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, bool>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, bool>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, bool>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, bool>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, bool>>>;

typedef struct IdentifierMap<bool> {
    __hash_table<std::__hash_value_type<const long long, bool>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, bool>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, bool>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, bool>>> __table_;
} IdentifierMap<bool>;

typedef struct __compressed_pair<TSP::IdentifierMap<bool> *, std::default_delete<TSP::IdentifierMap<bool>>> {
    void __value_;
} __compressed_pair<TSP::IdentifierMap<bool> *, std::default_delete<TSP::IdentifierMap<bool>>>;

typedef struct unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> {
    __compressed_pair<TSP::IdentifierMap<bool> *, std::default_delete<TSP::IdentifierMap<bool>>> __ptr_;
} unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>>;

typedef struct DispatchDataInputStream {
    unk field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
    id field4;
    NSUInteger field5;
    char * field6;
} DispatchDataInputStream;

typedef struct ArchiveInfo {
    unk _vptr$MessageLite;
    InternalMetadata _internal_metadata_;
    HasBits<1> _has_bits_;
    CachedSize _cached_size_;
    RepeatedPtrField<TSP::MessageInfo> message_infos_;
    NSUInteger identifier_;
    BOOL should_merge_;
} ArchiveInfo;

typedef struct shared_ptr<TSP::ArchiveInfo> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<google::protobuf::Message *, std::default_delete<google::protobuf::Message>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<google::protobuf::Message, std::default_delete<google::protobuf::Message>> {
    __compressed_pair<google::protobuf::Message *, std::default_delete<google::protobuf::Message>> __ptr_;
} unique_ptr<google::protobuf::Message, std::default_delete<google::protobuf::Message>>;

typedef struct Arena {
} // Error Processing Struct Fields

typedef struct Rep {
} // Error Processing Struct Fields

typedef struct RepeatedPtrField<TSP::FieldPath> {
    Arena arena_;
    int current_size_;
    int total_size_;
    Rep rep_;
} RepeatedPtrField<TSP::FieldPath>;

typedef struct UnarchiverReference {
} // Error Processing Struct Fields

typedef struct vector<TSP::UnarchiverReference, std::allocator<TSP::UnarchiverReference>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<void (^__strong *)(), std::allocator<void (^)()>> {
    id __value_;
    unk field1;
} __compressed_pair<void (^__strong *)(), std::allocator<void (^)()>>;

typedef struct vector<void (^)(), std::allocator<void (^)()>> {
    id __begin_;
    unk __end_;
    id __end_cap_;
    unk field3;
    __compressed_pair<void (^__strong *)(), std::allocator<void (^)()>> field4;
} vector<void (^)(), std::allocator<void (^)()>>;

typedef struct CC_SHA1state_st {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    int field8;
} CC_SHA1state_st;

typedef struct array<unsigned char, 20> {
    unsigned char __elems_;
} array<unsigned char, 20>;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct sqlite3_blob {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataProperties>, TSP::TSPDigestHash, TSP::TSPDigestEqualTo, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataProperties>, TSP::TSPDigestHash, TSP::TSPDigestEqualTo, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataProperties>, TSP::TSPDigestEqualTo, TSP::TSPDigestHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataProperties>, TSP::TSPDigestEqualTo, TSP::TSPDigestHash, true>>;

typedef struct __hash_table<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, std::__unordered_map_hasher<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataProperties>, TSP::TSPDigestHash, TSP::TSPDigestEqualTo, true>, std::__unordered_map_equal<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataProperties>, TSP::TSPDigestEqualTo, TSP::TSPDigestHash, true>, std::allocator<std::__hash_value_type<TSPDigest *, TSP::DataProperties>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataProperties>, TSP::TSPDigestHash, TSP::TSPDigestEqualTo, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataProperties>, TSP::TSPDigestEqualTo, TSP::TSPDigestHash, true>> __p3_;
} __hash_table<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, std::__unordered_map_hasher<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataProperties>, TSP::TSPDigestHash, TSP::TSPDigestEqualTo, true>, std::__unordered_map_equal<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataProperties>, TSP::TSPDigestEqualTo, TSP::TSPDigestHash, true>, std::allocator<std::__hash_value_type<TSPDigest *, TSP::DataProperties>>>;

typedef struct DigestMap<TSP::DataProperties> {
    __hash_table<std::__hash_value_type<TSPDigest *, TSP::DataProperties>, std::__unordered_map_hasher<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataProperties>, TSP::TSPDigestHash, TSP::TSPDigestEqualTo, true>, std::__unordered_map_equal<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataProperties>, TSP::TSPDigestEqualTo, TSP::TSPDigestHash, true>, std::allocator<std::__hash_value_type<TSPDigest *, TSP::DataProperties>>> __table_;
} DigestMap<TSP::DataProperties>;

typedef struct _xmlNode {
} // Error Processing Struct Fields

typedef struct _xmlDoc {
} // Error Processing Struct Fields

typedef struct _xmlTextReader {
} // Error Processing Struct Fields

typedef struct ZeroCopyInputStream {
    unk field0;
} ZeroCopyInputStream;

typedef struct DataCollaborationProperties {
    BOOL field0;
    BOOL field1;
    int field2;
    NSInteger field3;
    BOOL field4;
} DataCollaborationProperties;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, TSP::TSPDigestHash, TSP::TSPDigestEqualTo, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, TSP::TSPDigestHash, TSP::TSPDigestEqualTo, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, TSP::TSPDigestEqualTo, TSP::TSPDigestHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, TSP::TSPDigestEqualTo, TSP::TSPDigestHash, true>>;

typedef struct __hash_table<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, std::__unordered_map_hasher<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, TSP::TSPDigestHash, TSP::TSPDigestEqualTo, true>, std::__unordered_map_equal<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, TSP::TSPDigestEqualTo, TSP::TSPDigestHash, true>, std::allocator<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, TSP::TSPDigestHash, TSP::TSPDigestEqualTo, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, TSP::TSPDigestEqualTo, TSP::TSPDigestHash, true>> __p3_;
} __hash_table<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, std::__unordered_map_hasher<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, TSP::TSPDigestHash, TSP::TSPDigestEqualTo, true>, std::__unordered_map_equal<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, TSP::TSPDigestEqualTo, TSP::TSPDigestHash, true>, std::allocator<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>>>;

typedef struct DigestMap<TSP::DataCollaborationProperties> {
    __hash_table<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, std::__unordered_map_hasher<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, TSP::TSPDigestHash, TSP::TSPDigestEqualTo, true>, std::__unordered_map_equal<TSPDigest *, std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>, TSP::TSPDigestEqualTo, TSP::TSPDigestHash, true>, std::allocator<std::__hash_value_type<TSPDigest *, TSP::DataCollaborationProperties>>> __table_;
} DigestMap<TSP::DataCollaborationProperties>;

typedef struct __compressed_pair<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo> *, std::default_delete<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>>> {
    void __value_;
} __compressed_pair<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo> *, std::default_delete<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>>>;

typedef struct unique_ptr<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>, std::default_delete<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>>> {
    __compressed_pair<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo> *, std::default_delete<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>>> __ptr_;
} unique_ptr<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>, std::default_delete<std::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo>>>;

typedef struct RepeatedPtrField<TSP::MessageInfo> {
    Arena arena_;
    int current_size_;
    int total_size_;
    Rep rep_;
} RepeatedPtrField<TSP::MessageInfo>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>>>;

typedef struct IdentifierMap<TSP::ExternalReferenceInfo> {
    __hash_table<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>>> __table_;
} IdentifierMap<TSP::ExternalReferenceInfo>;

typedef struct RepeatedExternalReferenceCompletionInfo {
} // Error Processing Struct Fields

typedef struct vector<TSP::RepeatedExternalReferenceCompletionInfo, std::allocator<TSP::RepeatedExternalReferenceCompletionInfo>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, const google::protobuf::Message *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, const google::protobuf::Message *>>>;

typedef struct unordered_map<unsigned int, const google::protobuf::Message *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, const google::protobuf::Message *>>> {
    __hash_table<std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, const google::protobuf::Message *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, const google::protobuf::Message *>>> __table_;
} unordered_map<unsigned int, const google::protobuf::Message *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, const google::protobuf::Message *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const google::protobuf::Descriptor *, std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, TSP::DescriptorHash, std::equal_to<const google::protobuf::Descriptor *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const google::protobuf::Descriptor *, std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, TSP::DescriptorHash, std::equal_to<const google::protobuf::Descriptor *>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const google::protobuf::Descriptor *, std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::equal_to<const google::protobuf::Descriptor *>, TSP::DescriptorHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const google::protobuf::Descriptor *, std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::equal_to<const google::protobuf::Descriptor *>, TSP::DescriptorHash, true>>;

typedef struct __hash_table<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::__unordered_map_hasher<const google::protobuf::Descriptor *, std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, TSP::DescriptorHash, std::equal_to<const google::protobuf::Descriptor *>, true>, std::__unordered_map_equal<const google::protobuf::Descriptor *, std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::equal_to<const google::protobuf::Descriptor *>, TSP::DescriptorHash, true>, std::allocator<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const google::protobuf::Descriptor *, std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, TSP::DescriptorHash, std::equal_to<const google::protobuf::Descriptor *>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const google::protobuf::Descriptor *, std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::equal_to<const google::protobuf::Descriptor *>, TSP::DescriptorHash, true>> __p3_;
} __hash_table<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::__unordered_map_hasher<const google::protobuf::Descriptor *, std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, TSP::DescriptorHash, std::equal_to<const google::protobuf::Descriptor *>, true>, std::__unordered_map_equal<const google::protobuf::Descriptor *, std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::equal_to<const google::protobuf::Descriptor *>, TSP::DescriptorHash, true>, std::allocator<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>>>;

typedef struct unordered_map<const google::protobuf::Descriptor *, unsigned int, TSP::DescriptorHash, std::equal_to<const google::protobuf::Descriptor *>, std::allocator<std::pair<const google::protobuf::Descriptor *const, unsigned int>>> {
    __hash_table<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::__unordered_map_hasher<const google::protobuf::Descriptor *, std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, TSP::DescriptorHash, std::equal_to<const google::protobuf::Descriptor *>, true>, std::__unordered_map_equal<const google::protobuf::Descriptor *, std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>, std::equal_to<const google::protobuf::Descriptor *>, TSP::DescriptorHash, true>, std::allocator<std::__hash_value_type<const google::protobuf::Descriptor *, unsigned int>>> __table_;
} unordered_map<const google::protobuf::Descriptor *, unsigned int, TSP::DescriptorHash, std::equal_to<const google::protobuf::Descriptor *>, std::allocator<std::pair<const google::protobuf::Descriptor *const, unsigned int>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, const char *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, const char *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, const char *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, const char *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, const char *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, const char *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, const char *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, const char *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, const char *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, const char *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, const char *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, const char *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, const char *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, const char *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, const char *>>>;

typedef struct unordered_map<unsigned int, const char *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, const char *>>> {
    __hash_table<std::__hash_value_type<unsigned int, const char *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, const char *>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, const char *>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, const char *>>> __table_;
} unordered_map<unsigned int, const char *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, const char *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, unsigned int>, TSP::CStringHash, TSP::CStringEqualTo, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, unsigned int>, TSP::CStringHash, TSP::CStringEqualTo, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, unsigned int>, TSP::CStringEqualTo, TSP::CStringHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, unsigned int>, TSP::CStringEqualTo, TSP::CStringHash, true>>;

typedef struct __hash_table<std::__hash_value_type<const char *, unsigned int>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, unsigned int>, TSP::CStringHash, TSP::CStringEqualTo, true>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, unsigned int>, TSP::CStringEqualTo, TSP::CStringHash, true>, std::allocator<std::__hash_value_type<const char *, unsigned int>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, unsigned int>, TSP::CStringHash, TSP::CStringEqualTo, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, unsigned int>, TSP::CStringEqualTo, TSP::CStringHash, true>> __p3_;
} __hash_table<std::__hash_value_type<const char *, unsigned int>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, unsigned int>, TSP::CStringHash, TSP::CStringEqualTo, true>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, unsigned int>, TSP::CStringEqualTo, TSP::CStringHash, true>, std::allocator<std::__hash_value_type<const char *, unsigned int>>>;

typedef struct unordered_map<const char *, unsigned int, TSP::CStringHash, TSP::CStringEqualTo, std::allocator<std::pair<const char *const, unsigned int>>> {
    __hash_table<std::__hash_value_type<const char *, unsigned int>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, unsigned int>, TSP::CStringHash, TSP::CStringEqualTo, true>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, unsigned int>, TSP::CStringEqualTo, TSP::CStringHash, true>, std::allocator<std::__hash_value_type<const char *, unsigned int>>> __table_;
} unordered_map<const char *, unsigned int, TSP::CStringHash, TSP::CStringEqualTo, std::allocator<std::pair<const char *const, unsigned int>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, __unsafe_unretained Class>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, __unsafe_unretained Class>>>;

typedef struct unordered_map<unsigned int, __unsafe_unretained Class, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, __unsafe_unretained Class>>> {
    __hash_table<std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, __unsafe_unretained Class>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, __unsafe_unretained Class>>> __table_;
} unordered_map<unsigned int, __unsafe_unretained Class, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, __unsafe_unretained Class>>>;

typedef struct ComponentExternalReferenceInfo {
    NSInteger field0;
    BOOL field1;
    BOOL field2;
} ComponentExternalReferenceInfo;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>>>;

typedef struct IdentifierMap<NSMutableArray<TSPObjectContextObserver *> *> {
    __hash_table<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, NSMutableArray<TSPObjectContextObserver *> *>>> __table_;
} IdentifierMap<NSMutableArray<TSPObjectContextObserver *> *>;

typedef struct RepeatedPtrField<TSP::FieldInfo> {
    Arena arena_;
    int current_size_;
    int total_size_;
    Rep rep_;
} RepeatedPtrField<TSP::FieldInfo>;

typedef struct MessageInfo {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<const std::string, TSP::DataInfo>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<const std::string, TSP::DataInfo>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<const std::string, std::__value_type<const std::string, TSP::DataInfo>, std::less<const std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<const std::string, std::__value_type<const std::string, TSP::DataInfo>, std::less<const std::string>, true>>;

typedef struct __tree<std::__value_type<const std::string, TSP::DataInfo>, std::__map_value_compare<const std::string, std::__value_type<const std::string, TSP::DataInfo>, std::less<const std::string>, true>, std::allocator<std::__value_type<const std::string, TSP::DataInfo>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<const std::string, TSP::DataInfo>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<const std::string, std::__value_type<const std::string, TSP::DataInfo>, std::less<const std::string>, true>> __pair3_;
} __tree<std::__value_type<const std::string, TSP::DataInfo>, std::__map_value_compare<const std::string, std::__value_type<const std::string, TSP::DataInfo>, std::less<const std::string>, true>, std::allocator<std::__value_type<const std::string, TSP::DataInfo>>>;

typedef struct map<const std::string, TSP::DataInfo, std::less<const std::string>, std::allocator<std::pair<const std::string, TSP::DataInfo>>> {
    __tree<std::__value_type<const std::string, TSP::DataInfo>, std::__map_value_compare<const std::string, std::__value_type<const std::string, TSP::DataInfo>, std::less<const std::string>, true>, std::allocator<std::__value_type<const std::string, TSP::DataInfo>>> __tree_;
} map<const std::string, TSP::DataInfo, std::less<const std::string>, std::allocator<std::pair<const std::string, TSP::DataInfo>>>;

typedef struct RepeatedPtrField<TSP::ComponentInfo> {
    Arena arena_;
    int current_size_;
    int total_size_;
    Rep rep_;
} RepeatedPtrField<TSP::ComponentInfo>;

typedef struct RepeatedPtrField<TSP::DataInfo> {
    Arena arena_;
    int current_size_;
    int total_size_;
    Rep rep_;
} RepeatedPtrField<TSP::DataInfo>;

typedef struct DocumentRevision {
} // Error Processing Struct Fields

typedef struct Reference {
} // Error Processing Struct Fields

typedef struct PackageMetadata {
    unk _vptr$MessageLite;
    InternalMetadata _internal_metadata_;
    HasBits<1> _has_bits_;
    CachedSize _cached_size_;
    RepeatedPtrField<TSP::ComponentInfo> components_;
    RepeatedPtrField<TSP::DataInfo> datas_;
    RepeatedField<unsigned int> read_version_;
    atomic<int> _read_version_cached_byte_size_;
    RepeatedField<unsigned int> write_version_;
    atomic<int> _write_version_cached_byte_size_;
    RepeatedField<unsigned int> file_format_version_;
    atomic<int> _file_format_version_cached_byte_size_;
    RepeatedPtrField<TSP::ComponentInfo> versioned_components_;
    DocumentRevision revision_;
    Reference data_metadata_map_;
    NSUInteger last_object_identifier_;
    NSUInteger save_token_;
    int preferred_package_type_;
} PackageMetadata;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>>>;

typedef struct IdentifierMap<TSP::ReferenceMapInfo> {
    __hash_table<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>>> __table_;
} IdentifierMap<TSP::ReferenceMapInfo>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, __unsafe_unretained Class>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, __unsafe_unretained Class>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, __unsafe_unretained Class>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, __unsafe_unretained Class>>>;

typedef struct IdentifierMap<__unsafe_unretained Class> {
    __hash_table<std::__hash_value_type<const long long, __unsafe_unretained Class>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, __unsafe_unretained Class>>> __table_;
} IdentifierMap<__unsafe_unretained Class>;

typedef struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> {
    Arena arena_;
    int current_size_;
    int total_size_;
    Rep rep_;
} RepeatedPtrField<TSP::ObjectUUIDMapEntry>;

typedef struct ComponentInfo {
} // Error Processing Struct Fields

typedef struct UUID {
} // Error Processing Struct Fields

typedef struct ViewStateMetadata {
    unk _vptr$MessageLite;
    InternalMetadata _internal_metadata_;
    HasBits<1> _has_bits_;
    CachedSize _cached_size_;
    RepeatedField<unsigned int> version_;
    atomic<int> _version_cached_byte_size_;
    RepeatedPtrField<TSP::ObjectUUIDMapEntry> external_object_uuid_map_entries_;
    RepeatedField<unsigned int> read_version_;
    atomic<int> _read_version_cached_byte_size_;
    ComponentInfo component_;
    UUID version_uuid_;
} ViewStateMetadata;

typedef struct CGDataConsumer {
} // Error Processing Struct Fields

typedef struct __long {
    char * __data_;
    NSUInteger __size_;
    NSUInteger __cap_;
} __long;

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

typedef struct RepeatedField<std::string> {
    int current_size_;
    int total_size_;
    void arena_or_elements_;
} RepeatedField<std::string>;

typedef struct RepeatedField<long long> {
    int current_size_;
    int total_size_;
    void arena_or_elements_;
} RepeatedField<long long>;

typedef struct sqlite3 {
} // Error Processing Struct Fields

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct ObjectStateIdentifier {
    BOOL field0;
    NSInteger field1;
    BOOL field2;
    id field3;
} ObjectStateIdentifier;

typedef struct ObjectSerializationMetadata {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, TSPFieldTreeNode *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, TSPFieldTreeNode *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, TSPFieldTreeNode *>, std::less<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, TSPFieldTreeNode *>, std::less<int>, true>>;

typedef struct __tree<std::__value_type<int, TSPFieldTreeNode *>, std::__map_value_compare<int, std::__value_type<int, TSPFieldTreeNode *>, std::less<int>, true>, std::allocator<std::__value_type<int, TSPFieldTreeNode *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, TSPFieldTreeNode *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, TSPFieldTreeNode *>, std::less<int>, true>> __pair3_;
} __tree<std::__value_type<int, TSPFieldTreeNode *>, std::__map_value_compare<int, std::__value_type<int, TSPFieldTreeNode *>, std::less<int>, true>, std::allocator<std::__value_type<int, TSPFieldTreeNode *>>>;

typedef struct map<int, TSPFieldTreeNode *, std::less<int>, std::allocator<std::pair<const int, TSPFieldTreeNode *>>> {
    __tree<std::__value_type<int, TSPFieldTreeNode *>, std::__map_value_compare<int, std::__value_type<int, TSPFieldTreeNode *>, std::less<int>, true>, std::allocator<std::__value_type<int, TSPFieldTreeNode *>>> __tree_;
} map<int, TSPFieldTreeNode *, std::less<int>, std::allocator<std::pair<const int, TSPFieldTreeNode *>>>;

typedef struct __compressed_pair<std::unique_ptr<TSP::PersistedObjectUUIDMapOperation> *, std::allocator<std::unique_ptr<TSP::PersistedObjectUUIDMapOperation>>> {
    void __value_;
} __compressed_pair<std::unique_ptr<TSP::PersistedObjectUUIDMapOperation> *, std::allocator<std::unique_ptr<TSP::PersistedObjectUUIDMapOperation>>>;

typedef struct vector<std::unique_ptr<TSP::PersistedObjectUUIDMapOperation>, std::allocator<std::unique_ptr<TSP::PersistedObjectUUIDMapOperation>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::unique_ptr<TSP::PersistedObjectUUIDMapOperation> *, std::allocator<std::unique_ptr<TSP::PersistedObjectUUIDMapOperation>>> __end_cap_;
} vector<std::unique_ptr<TSP::PersistedObjectUUIDMapOperation>, std::allocator<std::unique_ptr<TSP::PersistedObjectUUIDMapOperation>>>;

typedef struct SnappySource {
    unk field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
    id field4;
    NSUInteger field5;
    NSUInteger field6;
    char * field7;
} SnappySource;

typedef struct RepeatedPtrField<TSP::ObjectSerializationDirectory_Entry> {
    Arena arena_;
    int current_size_;
    int total_size_;
    Rep rep_;
} RepeatedPtrField<TSP::ObjectSerializationDirectory_Entry>;

typedef struct ObjectSerializationDirectory {
    unk _vptr$MessageLite;
    InternalMetadata _internal_metadata_;
    RepeatedPtrField<TSP::ObjectSerializationDirectory_Entry> entries_;
    CachedSize _cached_size_;
} ObjectSerializationDirectory;

typedef struct ObjectStackEntry {
} // Error Processing Struct Fields

typedef struct vector<TSP::ObjectStackEntry, std::allocator<TSP::ObjectStackEntry>> {
} // Error Processing Struct Fields

typedef struct _CCCryptor {
} // Error Processing Struct Fields

typedef struct shared_ptr<google::protobuf::Message> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long long, TSP::DescriptionPrinterMessage>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long long, TSP::DescriptionPrinterMessage>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, TSP::DescriptionPrinterMessage>, std::less<long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, TSP::DescriptionPrinterMessage>, std::less<long long>, true>>;

typedef struct __tree<std::__value_type<long long, TSP::DescriptionPrinterMessage>, std::__map_value_compare<long long, std::__value_type<long long, TSP::DescriptionPrinterMessage>, std::less<long long>, true>, std::allocator<std::__value_type<long long, TSP::DescriptionPrinterMessage>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long long, TSP::DescriptionPrinterMessage>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<long long, std::__value_type<long long, TSP::DescriptionPrinterMessage>, std::less<long long>, true>> __pair3_;
} __tree<std::__value_type<long long, TSP::DescriptionPrinterMessage>, std::__map_value_compare<long long, std::__value_type<long long, TSP::DescriptionPrinterMessage>, std::less<long long>, true>, std::allocator<std::__value_type<long long, TSP::DescriptionPrinterMessage>>>;

typedef struct map<long long, TSP::DescriptionPrinterMessage, std::less<long long>, std::allocator<std::pair<const long long, TSP::DescriptionPrinterMessage>>> {
    __tree<std::__value_type<long long, TSP::DescriptionPrinterMessage>, std::__map_value_compare<long long, std::__value_type<long long, TSP::DescriptionPrinterMessage>, std::less<long long>, true>, std::allocator<std::__value_type<long long, TSP::DescriptionPrinterMessage>>> __tree_;
} map<long long, TSP::DescriptionPrinterMessage, std::less<long long>, std::allocator<std::pair<const long long, TSP::DescriptionPrinterMessage>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, TSPData *__weak>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSPData *__weak>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, TSPData *__weak>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSPData *__weak>>>;

typedef struct IdentifierMap<TSPData *__weak> {
    __hash_table<std::__hash_value_type<const long long, TSPData *__weak>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSPData *__weak>>> __table_;
} IdentifierMap<TSPData *__weak>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestHash, TSP::DigestEqualTo, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestHash, TSP::DigestEqualTo, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestEqualTo, TSP::DigestHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestEqualTo, TSP::DigestHash, true>>;

typedef struct __hash_table<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestHash, TSP::DigestEqualTo, true>, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestEqualTo, TSP::DigestHash, true>, std::allocator<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestHash, TSP::DigestEqualTo, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestEqualTo, TSP::DigestHash, true>> __p3_;
} __hash_table<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestHash, TSP::DigestEqualTo, true>, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestEqualTo, TSP::DigestHash, true>, std::allocator<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>>>;

typedef struct unordered_map<const std::array<unsigned char, 20>, TSPData *__weak, TSP::DigestHash, TSP::DigestEqualTo, std::allocator<std::pair<const std::array<unsigned char, 20>, TSPData *__weak>>> {
    __hash_table<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestHash, TSP::DigestEqualTo, true>, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestEqualTo, TSP::DigestHash, true>, std::allocator<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>>> __table_;
} unordered_map<const std::array<unsigned char, 20>, TSPData *__weak, TSP::DigestHash, TSP::DigestEqualTo, std::allocator<std::pair<const std::array<unsigned char, 20>, TSPData *__weak>>>;

typedef struct PasteboardMetadata {
} // Error Processing Struct Fields

typedef struct FinalizeHandlerItem {
} // Error Processing Struct Fields

typedef struct vector<TSP::FinalizeHandlerItem *, std::allocator<TSP::FinalizeHandlerItem *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::hash<long long>, std::equal_to<const long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::hash<long long>, std::equal_to<const long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::equal_to<const long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::equal_to<const long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::hash<long long>, std::equal_to<const long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::equal_to<const long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>>>;

typedef struct IdentifierMap<TSP::FinalizeHandlerItem> {
    __hash_table<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>>> __table_;
} IdentifierMap<TSP::FinalizeHandlerItem>;

