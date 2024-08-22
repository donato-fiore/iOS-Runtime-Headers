typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct OpaqueVTPixelTransferSession {
} // Error Processing Struct Fields

typedef struct ? {
    void plan;
    int network_index;
} ?;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, espresso_buffer_t>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, espresso_buffer_t>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, espresso_buffer_t>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, espresso_buffer_t>>>;

typedef struct unordered_map<std::string, espresso_buffer_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_buffer_t>>> {
    __hash_table<std::__hash_value_type<std::string, espresso_buffer_t>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, espresso_buffer_t>>> __table_;
} unordered_map<std::string, espresso_buffer_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_buffer_t>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, __CVBuffer *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, __CVBuffer *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, __CVBuffer *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, __CVBuffer *>>>;

typedef struct unordered_map<std::string, __CVBuffer *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, __CVBuffer *>>> {
    __hash_table<std::__hash_value_type<std::string, __CVBuffer *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, __CVBuffer *>>> __table_;
} unordered_map<std::string, __CVBuffer *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, __CVBuffer *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, std::vector<unsigned long>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::vector<unsigned long>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::vector<unsigned long>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, std::vector<unsigned long>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::vector<unsigned long>>>>;

typedef struct unordered_map<std::string, std::vector<unsigned long>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::vector<unsigned long>>>> {
    __hash_table<std::__hash_value_type<std::string, std::vector<unsigned long>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<unsigned long>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::vector<unsigned long>>>> __table_;
} unordered_map<std::string, std::vector<unsigned long>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::vector<unsigned long>>>>;

typedef struct _SITensorDim {
    NSUInteger value;
} _SITensorDim;

typedef struct inputparams_t {
    ? preprocessor;
    CGSize resolution;
} inputparams_t;

typedef struct outputparams_t {
    CGSize resolution;
} outputparams_t;

typedef struct vImage_Buffer {
    void data;
    NSUInteger height;
    NSUInteger width;
    NSUInteger rowBytes;
} vImage_Buffer;

typedef struct networkparams_t {
    inputparams_t input;
    outputparams_t output;
    vImage_Buffer temp;
} networkparams_t;

typedef struct outputvariables_t {
    _SITensorDim labels;
    _SITensorDim normals;
    _SITensorDim propabilities;
} outputvariables_t;

typedef struct networkvariables_t {
    outputvariables_t output;
} networkvariables_t;

typedef struct SIImageFormat_struct {
    NSUInteger field0;
    NSUInteger field1;
    unsigned int field2;
    NSUInteger field3;
} SIImageFormat_struct;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

