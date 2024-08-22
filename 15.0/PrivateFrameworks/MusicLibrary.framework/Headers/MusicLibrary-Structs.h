typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct ? {
    id __prevOp;
    id NSOperation;
    id __nextOp;
    id NSOperation;
    id __nextPriOp;
    id NSOperation;
    NSInteger __queue;
    id NSOperationQueue;
    unk __dependencies;
    void NSMutableArray;
    void __down_dependencies;
    CGFloat NSHashTable;
    char * __unfinished_deps;
    id __completion;
    id __obsInfo;
    unk __implicitObsInfo;
    _opaque_pthread_mutex_t __thread_prio;
    _opaque_pthread_cond_t __nameBuffer;
    os_unfair_lock_s _voucher;
    BOOL NSObject<OS_voucher>;
    uint8_t __schedule;
    unsigned char __wait_mutex;
    char __wait_cond;
    uint8_t __lock;
    BOOL _shouldRemoveDependenciesAfterFinish;
    uint8_t __state;
    BOOL __prio;
    uint8_t __cached_isReady;
    unsigned char __isCancelled;
    uint8_t __propertyQoS;
    unsigned char __isExecutingObserverCount;
    uint8_t __isFinishedObserverCount;
    unsigned char __isReadyObserverCount;
    uint8_t __isCancelledObserverCount;
    unsigned char field34;
    uint8_t field35;
    unsigned char field36;
} ?;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct ML3DAAPImportItem {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<ML3DAAPImportItem> {
    ML3DAAPImportItem field0;
    __shared_weak_count field1;
} shared_ptr<ML3DAAPImportItem>;

typedef struct Element {
} // Error Processing Struct Fields

typedef struct shared_ptr<ML3CPP::Element> {
} // Error Processing Struct Fields

typedef struct DAAPParserDelegate {
} // Error Processing Struct Fields

typedef struct shared_ptr<DAAPParserDelegate> {
} // Error Processing Struct Fields

typedef struct iPhoneSortKeyBuilder {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct SearchCriteriaList {
} // Error Processing Struct Fields

typedef struct ChapterData {
} // Error Processing Struct Fields

typedef struct sqlite3_module {
    int field0;
    unk field1;
    unk field2;
    unk field3;
    unk field4;
    unk field5;
    unk field6;
    unk field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    unk field12;
    unk field13;
    unk field14;
    unk field15;
    unk field16;
    unk field17;
    unk field18;
    unk field19;
    unk field20;
    unk field21;
    unk field22;
    unk field23;
} sqlite3_module;

typedef struct ML3ImportItem {
} // Error Processing Struct Fields

typedef struct shared_ptr<ML3ImportItem> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<long long *, std::allocator<long long>> {
    NSInteger __value_;
} __compressed_pair<long long *, std::allocator<long long>>;

typedef struct vector<long long, std::allocator<long long>> {
    NSInteger __begin_;
    NSInteger __end_;
    __compressed_pair<long long *, std::allocator<long long>> __end_cap_;
} vector<long long, std::allocator<long long>>;

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * __value_;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned long>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned long>>>;

typedef struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> {
    __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned long>>> __tree_;
} map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, NSString *>, std::hash<long long>, std::equal_to<long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, NSString *>, std::hash<long long>, std::equal_to<long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, NSString *>, std::equal_to<long long>, std::hash<long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, NSString *>, std::equal_to<long long>, std::hash<long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<long long, NSString *>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, NSString *>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, NSString *>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, NSString *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, NSString *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, NSString *>, std::hash<long long>, std::equal_to<long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, NSString *>, std::equal_to<long long>, std::hash<long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<long long, NSString *>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, NSString *>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, NSString *>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, NSString *>>>;

typedef struct unordered_map<long long, NSString *, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, NSString *>>> {
    __hash_table<std::__hash_value_type<long long, NSString *>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, NSString *>, std::hash<long long>, std::equal_to<long long>, true>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, NSString *>, std::equal_to<long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<long long, NSString *>>> __table_;
} unordered_map<long long, NSString *, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, NSString *>>>;

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

typedef struct ML3VirtualTableDataSource {
} // Error Processing Struct Fields

typedef struct shared_ptr<ML3VirtualTableDataSource> {
} // Error Processing Struct Fields

typedef struct sqlite3_blob {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

