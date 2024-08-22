typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct CATransform3D {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    CGFloat field9;
    CGFloat field10;
    CGFloat field11;
    CGFloat field12;
    CGFloat field13;
    CGFloat field14;
    CGFloat field15;
} CATransform3D;

typedef struct _UITraitCollectionTraitChanges {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
} _UITraitCollectionTraitChanges;

typedef struct _UITraitCollectionChangeDescription {
    id field0;
    id field1;
    BOOL field2;
    _UITraitCollectionTraitChanges field3;
} _UITraitCollectionChangeDescription;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct __IOSurface {
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

typedef struct OpaqueNodeRef {
} // Error Processing Struct Fields

typedef struct TFSInfo {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<TFSInfo> {
    TFSInfo __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<TFSInfo>;

typedef struct TFSVolumeInfo {
} // Error Processing Struct Fields

typedef struct shared_ptr<TFSVolumeInfo> {
} // Error Processing Struct Fields

typedef struct TNodePtr {
    id fFINode;
} TNodePtr;

typedef struct TOperationLock {
} // Error Processing Struct Fields

typedef struct __compressed_pair<TOperationLock *, std::default_delete<TOperationLock>> {
    TOperationLock __value_;
} __compressed_pair<TOperationLock *, std::default_delete<TOperationLock>>;

typedef struct unique_ptr<TOperationLock, std::default_delete<TOperationLock>> {
    __compressed_pair<TOperationLock *, std::default_delete<TOperationLock>> __ptr_;
} unique_ptr<TOperationLock, std::default_delete<TOperationLock>>;

typedef struct TNode {
} // Error Processing Struct Fields

typedef struct TChildrenList {
} // Error Processing Struct Fields

typedef struct __compressed_pair<TChildrenList *, std::default_delete<TChildrenList>> {
    TChildrenList __value_;
} __compressed_pair<TChildrenList *, std::default_delete<TChildrenList>>;

typedef struct unique_ptr<TChildrenList, std::default_delete<TChildrenList>> {
    __compressed_pair<TChildrenList *, std::default_delete<TChildrenList>> __ptr_;
} unique_ptr<TChildrenList, std::default_delete<TChildrenList>>;

typedef struct TNotifierList {
} // Error Processing Struct Fields

typedef struct __compressed_pair<TNotifierList *, std::default_delete<TNotifierList>> {
    TNotifierList __value_;
} __compressed_pair<TNotifierList *, std::default_delete<TNotifierList>>;

typedef struct unique_ptr<TNotifierList, std::default_delete<TNotifierList>> {
    __compressed_pair<TNotifierList *, std::default_delete<TNotifierList>> __ptr_;
} unique_ptr<TNotifierList, std::default_delete<TNotifierList>>;

typedef struct TPrivateNodeInstantiationEnabler {
    shared_ptr<TFSVolumeInfo> fVolumeInfoPtr;
    shared_ptr<TFSInfo> fFSInfo;
    TNodePtr fAliasTarget;
    unique_ptr<TOperationLock, std::default_delete<TOperationLock>> fOperationLock;
    TNode fParent;
    unique_ptr<TChildrenList, std::default_delete<TChildrenList>> fChildrenList;
    void fCustomNode;
    unique_ptr<TNotifierList, std::default_delete<TNotifierList>> fNotifierList;
    unsigned char fFlags;
    BOOL fSyncMark;
    BOOL fIsRegisteredForProgress;
    BOOL fSyncUbiquityAttrs;
    BOOL fPrefetchPropertiesOnSync;
    BOOL fSyncWithLSProperties;
} TPrivateNodeInstantiationEnabler;

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

