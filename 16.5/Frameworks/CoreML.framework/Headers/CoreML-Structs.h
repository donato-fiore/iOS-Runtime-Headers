typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct e5rt_io_port {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL key;
} ?;

typedef struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> {
    void field0;
} __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>>;

typedef struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> {
    void field0;
    void field1;
    __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> field2;
} vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>>;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct MultiArrayBuffer {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<CoreML::MultiArrayBuffer> {
    MultiArrayBuffer field0;
    __shared_weak_count field1;
} shared_ptr<CoreML::MultiArrayBuffer>;

typedef struct StorageManager {
} // Error Processing Struct Fields

typedef struct __compressed_pair<StorageManager *, std::default_delete<StorageManager>> {
    StorageManager __value_;
} __compressed_pair<StorageManager *, std::default_delete<StorageManager>>;

typedef struct unique_ptr<StorageManager, std::default_delete<StorageManager>> {
    __compressed_pair<StorageManager *, std::default_delete<StorageManager>> __ptr_;
} unique_ptr<StorageManager, std::default_delete<StorageManager>>;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct net {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::net> {
} // Error Processing Struct Fields

typedef struct IRProgram {
} // Error Processing Struct Fields

typedef struct shared_ptr<MIL::IRProgram> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> {
    __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> field0;
} unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>>;

typedef struct svm_parameter {
    int field0;
    int field1;
    int field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    int field8;
    int field9;
    CGFloat field10;
    CGFloat field11;
    CGFloat field12;
    int field13;
    int field14;
} svm_parameter;

typedef struct svm_node {
    int field0;
    CGFloat field1;
} svm_node;

typedef struct svm_model {
    svm_parameter field0;
    int field1;
    int field2;
    svm_node field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    int field8;
    int field9;
    int field10;
    int field11;
} svm_model;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int>>>;

typedef struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> {
    __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int>>> __tree_;
} map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>>;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct vimage2espresso_param {
    float field0;
    int field1;
    int field2;
    int field3;
    float field4;
    float field5;
    float field6;
    float field7;
    int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
    int field12;
    int field13;
    int field14;
} vimage2espresso_param;

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::map<std::string, espresso_buffer_t *> *, std::allocator<std::map<std::string, espresso_buffer_t *>>> {
    void __value_;
} __compressed_pair<std::map<std::string, espresso_buffer_t *> *, std::allocator<std::map<std::string, espresso_buffer_t *>>>;

typedef struct vector<std::map<std::string, espresso_buffer_t *>, std::allocator<std::map<std::string, espresso_buffer_t *>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::map<std::string, espresso_buffer_t *> *, std::allocator<std::map<std::string, espresso_buffer_t *>>> __end_cap_;
} vector<std::map<std::string, espresso_buffer_t *>, std::allocator<std::map<std::string, espresso_buffer_t *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, Espresso::vimage2espresso_param>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, Espresso::vimage2espresso_param>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, Espresso::vimage2espresso_param>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, Espresso::vimage2espresso_param>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, Espresso::vimage2espresso_param>, std::__map_value_compare<std::string, std::__value_type<std::string, Espresso::vimage2espresso_param>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, Espresso::vimage2espresso_param>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, Espresso::vimage2espresso_param>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, Espresso::vimage2espresso_param>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, Espresso::vimage2espresso_param>, std::__map_value_compare<std::string, std::__value_type<std::string, Espresso::vimage2espresso_param>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, Espresso::vimage2espresso_param>>>;

typedef struct map<std::string, Espresso::vimage2espresso_param, std::less<std::string>, std::allocator<std::pair<const std::string, Espresso::vimage2espresso_param>>> {
    __tree<std::__value_type<std::string, Espresso::vimage2espresso_param>, std::__map_value_compare<std::string, std::__value_type<std::string, Espresso::vimage2espresso_param>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, Espresso::vimage2espresso_param>>> __tree_;
} map<std::string, Espresso::vimage2espresso_param, std::less<std::string>, std::allocator<std::pair<const std::string, Espresso::vimage2espresso_param>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<unsigned long>>;

typedef struct vector<bool, std::allocator<bool>> {
    NSUInteger __begin_;
    NSUInteger __size_;
    __compressed_pair<unsigned long, std::allocator<unsigned long>> __cap_alloc_;
} vector<bool, std::allocator<bool>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<std::string>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<std::string>>;

typedef struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<std::string>> __pair3_;
} __tree<std::string, std::less<std::string>, std::allocator<std::string>>;

typedef struct set<std::string, std::less<std::string>, std::allocator<std::string>> {
    __tree<std::string, std::less<std::string>, std::allocator<std::string>> __tree_;
} set<std::string, std::less<std::string>, std::allocator<std::string>>;

typedef struct __long {
    char * __data_;
    NSUInteger __size_;
    BOOL __cap_;
    BOOL __is_long_;
} __long;

typedef struct __short {
    char __data_;
    unsigned char __padding_;
    BOOL __size_;
    BOOL __is_long_;
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

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, bool>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, bool>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, bool>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, bool>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, bool>, std::__map_value_compare<std::string, std::__value_type<std::string, bool>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, bool>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, bool>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, bool>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, bool>, std::__map_value_compare<std::string, std::__value_type<std::string, bool>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, bool>>>;

typedef struct map<std::string, bool, std::less<std::string>, std::allocator<std::pair<const std::string, bool>>> {
    __tree<std::__value_type<std::string, bool>, std::__map_value_compare<std::string, std::__value_type<std::string, bool>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, bool>>> __tree_;
} map<std::string, bool, std::less<std::string>, std::allocator<std::pair<const std::string, bool>>>;

typedef struct OpaqueVTPixelTransferSession {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * __value_;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long long *, std::allocator<unsigned long long>>;

typedef struct vector<unsigned long long, std::allocator<unsigned long long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> __end_cap_;
} vector<unsigned long long, std::allocator<unsigned long long>>;

typedef struct __compressed_pair<std::pair<unsigned long long, double> *, std::allocator<std::pair<unsigned long long, double>>> {
    void __value_;
} __compressed_pair<std::pair<unsigned long long, double> *, std::allocator<std::pair<unsigned long long, double>>>;

typedef struct vector<std::pair<unsigned long long, double>, std::allocator<std::pair<unsigned long long, double>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<unsigned long long, double> *, std::allocator<std::pair<unsigned long long, double>>> __end_cap_;
} vector<std::pair<unsigned long long, double>, std::allocator<std::pair<unsigned long long, double>>>;

typedef struct _MLModelSpecification {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void __value_;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::string *, std::allocator<std::string>> __end_cap_;
} vector<std::string, std::allocator<std::string>>;

typedef struct __compressed_pair<long long *, std::allocator<long long>> {
    NSInteger __value_;
} __compressed_pair<long long *, std::allocator<long long>>;

typedef struct vector<long long, std::allocator<long long>> {
    NSInteger __begin_;
    NSInteger __end_;
    __compressed_pair<long long *, std::allocator<long long>> __end_cap_;
} vector<long long, std::allocator<long long>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, InputNameToShapes>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, InputNameToShapes>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, InputNameToShapes>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, InputNameToShapes>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, InputNameToShapes>, std::__map_value_compare<std::string, std::__value_type<std::string, InputNameToShapes>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, InputNameToShapes>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, InputNameToShapes>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, InputNameToShapes>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, InputNameToShapes>, std::__map_value_compare<std::string, std::__value_type<std::string, InputNameToShapes>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, InputNameToShapes>>>;

typedef struct map<std::string, InputNameToShapes, std::less<std::string>, std::allocator<std::pair<const std::string, InputNameToShapes>>> {
    __tree<std::__value_type<std::string, InputNameToShapes>, std::__map_value_compare<std::string, std::__value_type<std::string, InputNameToShapes>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, InputNameToShapes>>> __tree_;
} map<std::string, InputNameToShapes, std::less<std::string>, std::allocator<std::pair<const std::string, InputNameToShapes>>>;

typedef struct _MLModelInputArchiver {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> {
    void __value_;
} __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>>;

typedef struct vector<std::vector<double>, std::allocator<std::vector<double>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> __end_cap_;
} vector<std::vector<double>, std::allocator<std::vector<double>>>;

typedef struct Model {
} // Error Processing Struct Fields

typedef struct shared_ptr<CoreML::Specification::Model> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct _KDInterval {
} // Error Processing Struct Fields

typedef struct vector<_KDInterval, std::allocator<_KDInterval>> {
} // Error Processing Struct Fields

typedef struct _KDBoundingBox {
} // Error Processing Struct Fields

typedef struct __compressed_pair<long *, std::allocator<long>> {
    NSInteger __value_;
} __compressed_pair<long *, std::allocator<long>>;

typedef struct vector<long, std::allocator<long>> {
    NSInteger __begin_;
    NSInteger __end_;
    __compressed_pair<long *, std::allocator<long>> __end_cap_;
} vector<long, std::allocator<long>>;

typedef struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> {
    unsigned int __x_;
} linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U>;

typedef struct e5rt_execution_stream {
} // Error Processing Struct Fields

typedef struct __compressed_pair<int *, std::allocator<int>> {
    int __value_;
} __compressed_pair<int *, std::allocator<int>>;

typedef struct vector<int, std::allocator<int>> {
    int __begin_;
    int __end_;
    __compressed_pair<int *, std::allocator<int>> __end_cap_;
} vector<int, std::allocator<int>>;

typedef struct e5rt_execution_stream_operation {
} // Error Processing Struct Fields

typedef struct MMappedFile {
} // Error Processing Struct Fields

typedef struct shared_ptr<Archiver::MMappedFile> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::pair<unsigned long, unsigned long> *, std::allocator<std::pair<unsigned long, unsigned long>>> {
    void __value_;
} __compressed_pair<std::pair<unsigned long, unsigned long> *, std::allocator<std::pair<unsigned long, unsigned long>>>;

typedef struct vector<std::pair<unsigned long, unsigned long>, std::allocator<std::pair<unsigned long, unsigned long>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<unsigned long, unsigned long> *, std::allocator<std::pair<unsigned long, unsigned long>>> __end_cap_;
} vector<std::pair<unsigned long, unsigned long>, std::allocator<std::pair<unsigned long, unsigned long>>>;

typedef struct BayesianProbitRegression {
} // Error Processing Struct Fields

typedef struct shared_ptr<CoreML::BayesianProbitRegression::BayesianProbitRegression> {
} // Error Processing Struct Fields

typedef struct Prediction {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    BOOL field5;
} Prediction;

typedef struct FeatureValues {
} // Error Processing Struct Fields

typedef struct shared_ptr<CoreML::BayesianProbitRegression::FeatureValues> {
} // Error Processing Struct Fields

