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

typedef struct MLIRContext {
} // Error Processing Struct Fields

typedef struct shared_ptr<mlir::MLIRContext> {
} // Error Processing Struct Fields

typedef struct Operation {
} // Error Processing Struct Fields

typedef struct ModuleOp {
    Operation state;
} ModuleOp;

typedef struct OwningModuleRef {
    ModuleOp op;
} OwningModuleRef;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct __IOSurface {
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

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, mlir::OwningModuleRef>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, mlir::OwningModuleRef>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, mlir::OwningModuleRef>>>;

typedef struct unordered_map<std::string, mlir::OwningModuleRef, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlir::OwningModuleRef>>> {
    __hash_table<std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlir::OwningModuleRef>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, mlir::OwningModuleRef>>> __table_;
} unordered_map<std::string, mlir::OwningModuleRef, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlir::OwningModuleRef>>>;

