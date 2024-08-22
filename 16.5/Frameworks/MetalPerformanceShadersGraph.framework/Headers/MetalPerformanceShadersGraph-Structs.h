typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct Autodiff {
} // Error Processing Struct Fields

typedef struct MPSKernelDAG {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<MPSKernelDAG> {
    MPSKernelDAG __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<MPSKernelDAG>;

typedef struct AutodiffOpData {
} // Error Processing Struct Fields

typedef struct __compressed_pair<AutodiffOpData *, std::default_delete<AutodiffOpData>> {
    AutodiffOpData __value_;
} __compressed_pair<AutodiffOpData *, std::default_delete<AutodiffOpData>>;

typedef struct unique_ptr<AutodiffOpData, std::default_delete<AutodiffOpData>> {
    __compressed_pair<AutodiffOpData *, std::default_delete<AutodiffOpData>> __ptr_;
} unique_ptr<AutodiffOpData, std::default_delete<AutodiffOpData>>;

typedef struct ValueImpl {
} // Error Processing Struct Fields

typedef struct Value {
    ValueImpl impl;
} Value;

typedef struct NamedAttribute {
} // Error Processing Struct Fields

typedef struct vector<mlir::NamedAttribute, std::allocator<mlir::NamedAttribute>> {
} // Error Processing Struct Fields

typedef struct MLIRContext {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlir::MLIRContext> {
} // Error Processing Struct Fields

typedef struct Operation {
} // Error Processing Struct Fields

typedef struct ModuleOp {
    Operation state;
} ModuleOp;

typedef struct OwningOpRef<mlir::ModuleOp> {
    ModuleOp op;
} OwningOpRef<mlir::ModuleOp>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>, true>>;

typedef struct __hash_table<std::__hash_value_type<void *, unsigned long>, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>, true>, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>, true>, std::allocator<std::__hash_value_type<void *, unsigned long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>, true>> __p3_;
} __hash_table<std::__hash_value_type<void *, unsigned long>, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>, true>, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>, true>, std::allocator<std::__hash_value_type<void *, unsigned long>>>;

typedef struct unordered_map<void *, unsigned long, std::hash<void *>, std::equal_to<void *>, std::allocator<std::pair<void *const, unsigned long>>> {
    __hash_table<std::__hash_value_type<void *, unsigned long>, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>, true>, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>, true>, std::allocator<std::__hash_value_type<void *, unsigned long>>> __table_;
} unordered_map<void *, unsigned long, std::hash<void *>, std::equal_to<void *>, std::allocator<std::pair<void *const, unsigned long>>>;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct ? {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
} ?;

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

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>>>;

typedef struct unordered_map<std::string, std::unique_ptr<GPURuntime>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unique_ptr<GPURuntime>>>> {
    __hash_table<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unique_ptr<GPURuntime>>>> __table_;
} unordered_map<std::string, std::unique_ptr<GPURuntime>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unique_ptr<GPURuntime>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>>>;

typedef struct unordered_map<std::string, std::unique_ptr<BaseRuntime>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unique_ptr<BaseRuntime>>>> {
    __hash_table<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unique_ptr<BaseRuntime>>>> __table_;
} unordered_map<std::string, std::unique_ptr<BaseRuntime>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unique_ptr<BaseRuntime>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>>>;

typedef struct unordered_map<std::string, mlir::OwningOpRef<mlir::ModuleOp>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlir::OwningOpRef<mlir::ModuleOp>>>> {
    __hash_table<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, mlir::OwningOpRef<mlir::ModuleOp>>>> __table_;
} unordered_map<std::string, mlir::OwningOpRef<mlir::ModuleOp>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlir::OwningOpRef<mlir::ModuleOp>>>>;

typedef struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
    uint8_t __a_value;
    int field1;
} __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>;

typedef struct atomic<int> {
    __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> __a_;
} atomic<int>;

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

