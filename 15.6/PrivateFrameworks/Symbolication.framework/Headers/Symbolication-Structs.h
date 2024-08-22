typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _VMURegionNode {
} // Error Processing Struct Fields

typedef struct _VMURegionMap {
    void field0;
    _VMURegionNode field1;
    unsigned int field2;
    NSUInteger field3;
    NSUInteger field4;
    unsigned int field5;
} _VMURegionMap;

typedef struct _VMURange {
    NSUInteger location;
    NSUInteger length;
} _VMURange;

typedef struct ? {
    CGFloat t_begin;
    CGFloat t_end;
    int pid;
    unsigned int thread;
    int run_state;
    NSUInteger dispatch_queue_serial_num;
} ?;

typedef struct _VMUBlockNode {
    NSUInteger field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
} _VMUBlockNode;

typedef struct malloc_introspection_t {
} // Error Processing Struct Fields

typedef struct _VMUZoneNode {
    NSUInteger field0;
    id field1;
    malloc_introspection_t field2;
} _VMUZoneNode;

typedef struct _VMUInstanceValues {
    NSUInteger field0;
    id field1;
} _VMUInstanceValues;

typedef struct _VMUScanLocationCache {
} // Error Processing Struct Fields

typedef struct _CSTypeRef {
    NSUInteger _opaque_1;
    NSUInteger _opaque_2;
} _CSTypeRef;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::unordered_set<unsigned long long>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::unordered_set<unsigned long long>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<unsigned long long>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<unsigned long long>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::unordered_set<unsigned long long>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<unsigned long long>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::unordered_set<unsigned long long>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::unordered_set<unsigned long long>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<unsigned long long>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::unordered_set<unsigned long long>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<unsigned long long>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::unordered_set<unsigned long long>>>>;

typedef struct map<std::string, std::unordered_set<unsigned long long>, std::less<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<unsigned long long>>>> {
    __tree<std::__value_type<std::string, std::unordered_set<unsigned long long>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<unsigned long long>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::unordered_set<unsigned long long>>>> __tree_;
} map<std::string, std::unordered_set<unsigned long long>, std::less<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<unsigned long long>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<unsigned long long, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> {
    __hash_node_base<std::__hash_node<unsigned long long, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<unsigned long long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<unsigned long long>>;

typedef struct __compressed_pair<float, std::equal_to<unsigned long long>> {
    float __value_;
} __compressed_pair<float, std::equal_to<unsigned long long>>;

typedef struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<unsigned long long>> __p2_;
    __compressed_pair<float, std::equal_to<unsigned long long>> __p3_;
} __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>>;

typedef struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> {
    __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> __table_;
} unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>>;

typedef struct __sbuf {
    char * field0;
    int field1;
} __sbuf;

typedef struct __sFILEX {
} // Error Processing Struct Fields

typedef struct __sFILE {
    char * field0;
    int field1;
    int field2;
    short field3;
    short field4;
    __sbuf field5;
    int field6;
    void field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    __sbuf field12;
    __sFILEX field13;
    int field14;
    unsigned char field15;
    unsigned char field16;
    __sbuf field17;
    int field18;
    NSInteger field19;
} __sFILE;

typedef struct re_guts {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct _CSArchitecture {
    int field0;
    int field1;
} _CSArchitecture;

typedef struct timeval {
    NSInteger tv_sec;
    int tv_usec;
} timeval;

typedef struct mapped_memory_t {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct sampling_context_t {
} // Error Processing Struct Fields

typedef struct mapped_region_node_t {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    unsigned int field3;
} mapped_region_node_t;

typedef struct swift_typeinfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
} swift_typeinfo;

typedef struct SwiftReflectionInteropContext {
} // Error Processing Struct Fields

typedef struct libSwiftRemoteMirrorWrapper {
    SwiftReflectionInteropContext field0;
    NSUInteger field1;
} libSwiftRemoteMirrorWrapper;

typedef struct objc_ivar {
} // Error Processing Struct Fields

typedef struct VMUAutoreleasePoolPageLayout {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    NSUInteger field3;
    unsigned int field4;
} VMUAutoreleasePoolPageLayout;

typedef struct _VMUSwiftRemoteMirrorReaderContext {
    _CSTypeRef symbolicator;
    id memoryReader;
    unk remoteAddressToLocalAddressAndSizeMap;
    id NSMapTable;
    id remoteStringToLengthMap;
    BOOL NSMapTable;
    int needToValidateAddressRange;
    unsigned int swiftRemoteMirrorMemoryReadsLogLevel;
    unsigned int readBytesCallCount;
    id getStringLengthCallCount;
    id objectIdentifier;
} _VMUSwiftRemoteMirrorReaderContext;

typedef struct _opaque_pthread_rwlock_t {
    NSInteger field0;
    char field1;
} _opaque_pthread_rwlock_t;

typedef struct vmu_backtrace_uniquing_table_t {
    void field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    unsigned int field5;
    int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    _opaque_pthread_rwlock_t field10;
} vmu_backtrace_uniquing_table_t;

typedef struct backtrace_uniquing_table {
} // Error Processing Struct Fields

typedef struct _VMUDirectedGraphEdge {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} _VMUDirectedGraphEdge;

typedef struct _VMUObjectGraphEdge {
    unk field0;
    ? field1;
    ? field2;
} _VMUObjectGraphEdge;

typedef struct _VMUObjectGraphEdgeLarge {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} _VMUObjectGraphEdgeLarge;

typedef struct swift_typeref_interop {
    NSUInteger field0;
    int field1;
} swift_typeref_interop;

typedef struct _VMUVMRegionDataExtra {
    NSUInteger field0;
    NSUInteger field1;
} _VMUVMRegionDataExtra;

typedef struct _VMUVMRegionData {
    NSUInteger field0;
    NSUInteger field1;
    unsigned int field2;
    int field3;
    int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    int field10;
    unsigned int field11;
    unsigned char field12;
    unsigned char field13;
    unsigned char field14;
    unsigned int field15;
    unsigned int field16;
    BOOL field17;
    BOOL field18;
    BOOL field19;
    BOOL field20;
    BOOL field21;
    BOOL field22;
    NSUInteger field23;
    NSUInteger field24;
    NSUInteger field25;
    NSUInteger field26;
    NSUInteger field27;
    NSUInteger field28;
    NSUInteger field29;
} _VMUVMRegionData;

