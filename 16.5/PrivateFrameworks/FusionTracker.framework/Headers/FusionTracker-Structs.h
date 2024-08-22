typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct ? {
    NSInteger value;
    int timescale;
    unsigned int flags;
    NSInteger epoch;
} ?;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct Track {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<ft::Track> {
    Track field0;
    __shared_weak_count field1;
} shared_ptr<ft::Track>;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct Rect<double> {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} Rect<double>;

typedef struct CinematicTracker {
} // Error Processing Struct Fields

typedef struct shared_ptr<ft::CinematicTracker> {
} // Error Processing Struct Fields

typedef struct Frame {
} // Error Processing Struct Fields

typedef struct shared_ptr<ft::Frame> {
} // Error Processing Struct Fields

typedef struct Observation {
} // Error Processing Struct Fields

typedef struct vector<ft::Observation, std::allocator<ft::Observation>> {
} // Error Processing Struct Fields

typedef struct HungarianMatcher {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ft::HungarianMatcher *, std::default_delete<ft::HungarianMatcher>> {
    HungarianMatcher __value_;
} __compressed_pair<ft::HungarianMatcher *, std::default_delete<ft::HungarianMatcher>>;

typedef struct unique_ptr<ft::HungarianMatcher, std::default_delete<ft::HungarianMatcher>> {
    __compressed_pair<ft::HungarianMatcher *, std::default_delete<ft::HungarianMatcher>> __ptr_;
} unique_ptr<ft::HungarianMatcher, std::default_delete<ft::HungarianMatcher>>;

typedef struct EspressoNet {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> {
    EspressoNet __value_;
} __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>>;

typedef struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> {
    __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> __ptr_;
} unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>>;

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct TensorShape {
    vector<unsigned long, std::allocator<unsigned long>> sizes_;
} TensorShape;

typedef struct TensorStorage {
} // Error Processing Struct Fields

typedef struct shared_ptr<ik::TensorStorage> {
} // Error Processing Struct Fields

typedef struct PixelBufferTensor {
    unk _vptr$Tensor;
    int type_;
    TensorShape shape_;
    shared_ptr<ik::TensorStorage> storage_;
} PixelBufferTensor;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, ik::Tensor>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, ik::Tensor>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, ik::Tensor>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, ik::Tensor>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, ik::Tensor>>>;

typedef struct unordered_map<std::string, ik::Tensor, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, ik::Tensor>>> {
    __hash_table<std::__hash_value_type<std::string, ik::Tensor>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, ik::Tensor>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, ik::Tensor>>> __table_;
} unordered_map<std::string, ik::Tensor, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, ik::Tensor>>>;

typedef struct EspressoTensor {
    unk _vptr$Tensor;
    int type_;
    TensorShape shape_;
    shared_ptr<ik::TensorStorage> storage_;
} EspressoTensor;

typedef struct MemoryScalerRotator {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ik::MemoryScalerRotator *, std::default_delete<ik::MemoryScalerRotator>> {
    MemoryScalerRotator __value_;
} __compressed_pair<ik::MemoryScalerRotator *, std::default_delete<ik::MemoryScalerRotator>>;

typedef struct unique_ptr<ik::MemoryScalerRotator, std::default_delete<ik::MemoryScalerRotator>> {
    __compressed_pair<ik::MemoryScalerRotator *, std::default_delete<ik::MemoryScalerRotator>> __ptr_;
} unique_ptr<ik::MemoryScalerRotator, std::default_delete<ik::MemoryScalerRotator>>;

typedef struct OpaqueVTPixelTransferSession {
} // Error Processing Struct Fields

typedef struct shared_ptr<__CVBuffer> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void field0;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void field0;
    void field1;
    __compressed_pair<std::string *, std::allocator<std::string>> field2;
} vector<std::string, std::allocator<std::string>>;

typedef struct optional<espresso_engine_t> {
    unk field0;
    char field1;
    int field2;
    BOOL field3;
} optional<espresso_engine_t>;

typedef struct optional<espresso_plan_priority_t> {
    unk field0;
    char field1;
    int field2;
    BOOL field3;
} optional<espresso_plan_priority_t>;

typedef struct optional<void *> {
    unk field0;
    char field1;
    void field2;
    BOOL field3;
} optional<void *>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>> field0;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>>> {
    void field0;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>> field1;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>>> field0;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> {
    void field0;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> field0;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float field0;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *> *>>> field0;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, void *>>> field1;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::hash<std::string>, std::equal_to<std::string>, true>> field2;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::equal_to<std::string>, std::hash<std::string>, true>> field3;
} __hash_table<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>>>;

typedef struct unordered_map<std::string, espresso_simple_image_preprocessing_params_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_simple_image_preprocessing_params_t>>> {
    __hash_table<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, espresso_simple_image_preprocessing_params_t>>> field0;
} unordered_map<std::string, espresso_simple_image_preprocessing_params_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_simple_image_preprocessing_params_t>>>;

typedef struct __long {
    char * field0;
    NSUInteger field1;
    BOOL field2;
    BOOL field3;
} __long;

typedef struct __short {
    char field0;
    unsigned char field1;
    BOOL field2;
    BOOL field3;
} __short;

typedef struct __raw {
    NSUInteger field0;
} __raw;

typedef struct __rep {
    unk field0;
    __long field1;
    __short field2;
    __raw field3;
} __rep;

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep field0;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> field0;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct EspressoConfig {
    vector<std::string, std::allocator<std::string>> field0;
    optional<espresso_engine_t> field1;
    int field2;
    int field3;
    int field4;
    optional<espresso_plan_priority_t> field5;
    optional<void *> field6;
    unordered_map<std::string, espresso_simple_image_preprocessing_params_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_simple_image_preprocessing_params_t>>> field7;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field8;
} EspressoConfig;

