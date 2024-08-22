typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct Point {
    short v;
    short h;
} Point;

typedef struct UniString {
    NSUInteger capacity;
    NSUInteger length;
    unsigned short buffer;
} UniString;

typedef struct Blob {
    unsigned int capacity;
    unsigned int length;
    char * buffer;
} Blob;

typedef struct RefCounted {
    int fReferenceCount;
    unsigned int fDataType;
    void fReferenceCounted;
    unk fRetainProc;
    unk fReleaseProc;
} RefCounted;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CFNumber {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFURL {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __CFFileSecurity {
} // Error Processing Struct Fields

typedef struct TPropertyValue {
    unk fData;
    BOOL boo;
    unsigned char cha;
    short i16;
    int i32;
    NSInteger i64;
    unsigned int tos;
    Point tpt;
    UniString str;
    Blob blo;
    RefCounted referenceCounted;
    __CFString string;
    __CFNumber number;
    __CFData data;
    __CFDictionary dictionary;
    void object;
    __CFURL url;
    __CFArray array;
    CGFloat absolutetime;
    __CFFileSecurity filesec;
    char res;
    unsigned int fDataType;
} TPropertyValue;

typedef struct TNodeTask {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<TNodeTask> {
    TNodeTask __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<TNodeTask>;

typedef struct TDSNotifier {
} // Error Processing Struct Fields

typedef struct TRef<TDSNotifier *, TInternalRefCountPolicy<TDSNotifier>> {
    TDSNotifier fRef;
} TRef<TDSNotifier *, TInternalRefCountPolicy<TDSNotifier>>;

typedef struct TNodeEvent {
    unsigned int fEventKind;
    id fFINode;
    unsigned int FINode;
    TPropertyValue fProperty;
    shared_ptr<TNodeTask> fPropertyValue;
    TRef<TDSNotifier *, TInternalRefCountPolicy<TDSNotifier>> fTask;
} TNodeEvent;

typedef struct TKeyValueObserver {
} // Error Processing Struct Fields

typedef struct vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct TDSMutex {
    _opaque_pthread_mutex_t fMutex;
} TDSMutex;

typedef struct OpaqueNodeRef {
} // Error Processing Struct Fields

typedef struct TFSInfo {
} // Error Processing Struct Fields

typedef struct shared_ptr<TFSInfo> {
} // Error Processing Struct Fields

typedef struct TFSVolumeInfo {
} // Error Processing Struct Fields

typedef struct shared_ptr<TFSVolumeInfo> {
} // Error Processing Struct Fields

typedef struct TPrivateNodeInstantiationEnabler {
} // Error Processing Struct Fields

typedef struct OpaqueNodeIterator {
} // Error Processing Struct Fields

typedef struct OpaqueEventNotifier {
} // Error Processing Struct Fields

typedef struct __compressed_pair<FINodeIterator *__strong *, std::allocator<FINodeIterator *>> {
    id __value_;
} __compressed_pair<FINodeIterator *__strong *, std::allocator<FINodeIterator *>>;

typedef struct vector<FINodeIterator *, std::allocator<FINodeIterator *>> {
    id __begin_;
    id __end_;
    __compressed_pair<FINodeIterator *__strong *, std::allocator<FINodeIterator *>> __end_cap_;
} vector<FINodeIterator *, std::allocator<FINodeIterator *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<FINode *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<FINode *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<FINode *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<FINode *, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<FINode *, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<FINode *, void *> *>, std::allocator<std::__hash_node<FINode *, void *>>> {
    __hash_node_base<std::__hash_node<FINode *, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<FINode *, void *> *>, std::allocator<std::__hash_node<FINode *, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<FINode *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<FINode *>>;

typedef struct __compressed_pair<float, std::equal_to<FINode *>> {
    float __value_;
} __compressed_pair<float, std::equal_to<FINode *>>;

typedef struct __hash_table<FINode *, std::hash<FINode *>, std::equal_to<FINode *>, std::allocator<FINode *>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FINode *, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<FINode *, void *> *>, std::allocator<std::__hash_node<FINode *, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<FINode *>> __p2_;
    __compressed_pair<float, std::equal_to<FINode *>> __p3_;
} __hash_table<FINode *, std::hash<FINode *>, std::equal_to<FINode *>, std::allocator<FINode *>>;

typedef struct unordered_set<FINode *, std::hash<FINode *>, std::equal_to<FINode *>, std::allocator<FINode *>> {
    __hash_table<FINode *, std::hash<FINode *>, std::equal_to<FINode *>, std::allocator<FINode *>> __table_;
} unordered_set<FINode *, std::hash<FINode *>, std::equal_to<FINode *>, std::allocator<FINode *>>;

typedef struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> {
} // Error Processing Struct Fields

typedef struct TString {
} // Error Processing Struct Fields

typedef struct TSizerOutput {
    NSInteger field0;
    NSInteger field1;
    NSInteger field2;
    NSInteger field3;
    NSInteger field4;
    NSInteger field5;
    NSInteger field6;
    NSInteger field7;
    NSInteger field8;
    NSInteger field9;
    NSInteger field10;
    NSInteger field11;
    NSInteger field12;
    NSInteger field13;
    TString field14;
    TString field15;
    NSInteger field16;
    NSUInteger field17;
    unsigned int field18;
    BOOL field19;
    BOOL field20;
    BOOL field21;
    BOOL field22;
} TSizerOutput;

typedef struct DestinationSpaceNeeds {
    NSInteger field0;
    NSInteger field1;
    NSInteger field2;
    NSInteger field3;
    NSInteger field4;
    NSInteger field5;
    NSInteger field6;
    NSInteger field7;
    NSInteger field8;
    NSInteger field9;
    NSInteger field10;
    NSInteger field11;
    NSInteger field12;
    char field13;
    char field14;
    NSInteger field15;
    NSUInteger field16;
    BOOL field17;
    unsigned int field18;
    int field19;
} DestinationSpaceNeeds;

typedef struct type {
    unsigned char __lx;
} type;

typedef struct __value_func<void ()> {
    type __buf_;
    void __f_;
} __value_func<void ()>;

typedef struct function<void ()> {
    __value_func<void ()> __f_;
} function<void ()>;

typedef struct __value_func<void (NSDictionary<NSString *,NSObject *> *)> {
    type __buf_;
    void __f_;
} __value_func<void (NSDictionary<NSString *,NSObject *> *)>;

typedef struct function<void (NSDictionary<NSString *,NSObject *> *)> {
    __value_func<void (NSDictionary<NSString *,NSObject *> *)> __f_;
} function<void (NSDictionary<NSString *,NSObject *> *)>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *>, std::allocator<std::__hash_node<NSObject *__unsafe_unretained, void *>>> {
    __hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *>, std::allocator<std::__hash_node<NSObject *__unsafe_unretained, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<NSObject *__unsafe_unretained>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<NSObject *__unsafe_unretained>>;

typedef struct __compressed_pair<float, std::equal_to<NSObject *__unsafe_unretained>> {
    float __value_;
} __compressed_pair<float, std::equal_to<NSObject *__unsafe_unretained>>;

typedef struct __hash_table<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *>, std::allocator<std::__hash_node<NSObject *__unsafe_unretained, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<NSObject *__unsafe_unretained>> __p2_;
    __compressed_pair<float, std::equal_to<NSObject *__unsafe_unretained>> __p3_;
} __hash_table<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>>;

typedef struct unordered_set<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>> {
    __hash_table<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>> __table_;
} unordered_set<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>>;

typedef struct TNodePtr {
    id fFINode;
} TNodePtr;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct condition_variable {
    _opaque_pthread_cond_t __cv_;
} condition_variable;

typedef struct shared_ptr<std::mutex> {
} // Error Processing Struct Fields

typedef struct condition_variable_any {
    condition_variable __cv_;
    shared_ptr<std::mutex> __mut_;
} condition_variable_any;

typedef struct TConditionVariable {
    condition_variable_any fCondition;
    int fWaitCount;
} TConditionVariable;

