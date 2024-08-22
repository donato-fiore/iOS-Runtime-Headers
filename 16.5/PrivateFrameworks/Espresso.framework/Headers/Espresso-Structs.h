typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct vImage_Buffer {
    void data;
    NSUInteger height;
    NSUInteger width;
    NSUInteger rowBytes;
} vImage_Buffer;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct ? {
    void data;
    void reserved;
    NSUInteger dim;
    NSUInteger stride;
    NSUInteger width;
    NSUInteger height;
    NSUInteger channels;
    NSUInteger batch_number;
    NSUInteger sequence_length;
    NSUInteger stride_width;
    NSUInteger stride_height;
    NSUInteger stride_channels;
    NSUInteger stride_batch_number;
    NSUInteger stride_sequence_length;
    int storage_type;
} ?;

typedef struct __compressed_pair<void **, std::allocator<void *>> {
    void __value_;
} __compressed_pair<void **, std::allocator<void *>>;

typedef struct vector<void *, std::allocator<void *>> {
    void __begin_;
    void __end_;
    __compressed_pair<void **, std::allocator<void *>> __end_cap_;
} vector<void *, std::allocator<void *>>;

typedef struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct vimage2espresso_param {
    float scale;
    int center_mean;
    int is_image_bgr;
    int is_network_bgr;
    float bias_r;
    float bias_g;
    float bias_b;
    float bias_a;
    int metal_output_plane;
    unsigned int width;
    unsigned int height;
    unsigned int rowbytes;
    int scaleXY;
    int translateXY;
    int rotate_deg;
} vimage2espresso_param;

typedef struct blob_cpu {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::blob_cpu> {
    blob_cpu __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<Espresso::blob_cpu>;

typedef struct abstract_context {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::abstract_context> {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::pair<NSString *, unsigned long> *, std::allocator<std::pair<NSString *, unsigned long>>> {
    void __value_;
} __compressed_pair<std::pair<NSString *, unsigned long> *, std::allocator<std::pair<NSString *, unsigned long>>>;

typedef struct vector<std::pair<NSString *, unsigned long>, std::allocator<std::pair<NSString *, unsigned long>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<NSString *, unsigned long> *, std::allocator<std::pair<NSString *, unsigned long>>> __end_cap_;
} vector<std::pair<NSString *, unsigned long>, std::allocator<std::pair<NSString *, unsigned long>>>;

typedef struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> {
    id __value_;
} __compressed_pair<NSString *__strong *, std::allocator<NSString *>>;

typedef struct vector<NSString *, std::allocator<NSString *>> {
    id __begin_;
    id __end_;
    __compressed_pair<NSString *__strong *, std::allocator<NSString *>> __end_cap_;
} vector<NSString *, std::allocator<NSString *>>;

typedef struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> {
    unsigned int __x_;
} linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U>;

typedef struct net {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::net> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void __value_;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::string *, std::allocator<std::string>> __end_cap_;
} vector<std::string, std::allocator<std::string>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, unsigned long>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, unsigned long>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned long>>>;

typedef struct unordered_map<std::string, unsigned long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> {
    __hash_table<std::__hash_value_type<std::string, unsigned long>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned long>>> __table_;
} unordered_map<std::string, unsigned long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned long>>>;

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

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>>;

typedef struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> {
    __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> __table_;
} unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>>;

typedef struct pair<int, int> {
    int field0;
    int field1;
} pair<int, int>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, float>, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, float>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, float>, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, float>>>;

typedef struct map<std::string, float, std::less<std::string>, std::allocator<std::pair<const std::string, float>>> {
    __tree<std::__value_type<std::string, float>, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, float>>> __tree_;
} map<std::string, float, std::less<std::string>, std::allocator<std::pair<const std::string, float>>>;

typedef struct postprocessing_settings_t {
    basic_string<char, std::char_traits<char>, std::allocator<char>> name;
    basic_string<char, std::char_traits<char>, std::allocator<char>> network;
    int do_blend;
    float blend_alpha;
    int grayscale_i0;
    int grayscale_i1;
    float temporal_alpha;
    float gamma;
    float saturation;
    float contrast;
    float brightness;
    int color_transfer_mode;
    int width;
    int height;
    int width_fast;
    int height_fast;
    int width_capture;
    int height_capture;
    int width_miniature;
    int height_miniature;
    int width_fullscreen;
    int height_fullscreen;
    int width_hd;
    int height_hd;
    float old_frame_scale;
    float noise_strength;
    int dyn_noise;
    float noise_speed;
    float preprocessing_bias_b;
    float preprocessing_bias_g;
    float preprocessing_bias_r;
    float preprocessing_scale;
    float preprocessing_old_frame_bias_scale;
    BOOL high_quality_scaling;
} postprocessing_settings_t;

typedef struct v9_noise_kernel {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::V9Engine::v9_noise_kernel> {
} // Error Processing Struct Fields

typedef struct generic_load_constant_kernel {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::generic_load_constant_kernel> {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::blob<float, 1>> {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

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

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>>;

typedef struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> {
    __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> __table_;
} unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>>;

typedef struct FaceLandmarkDetectorPoint {
} // Error Processing Struct Fields

typedef struct vector<FaceLandmarkDetectorPoint, std::allocator<FaceLandmarkDetectorPoint>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::shared_ptr<Espresso::net> *, std::allocator<std::shared_ptr<Espresso::net>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<Espresso::net> *, std::allocator<std::shared_ptr<Espresso::net>>>;

typedef struct vector<std::shared_ptr<Espresso::net>, std::allocator<std::shared_ptr<Espresso::net>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<Espresso::net> *, std::allocator<std::shared_ptr<Espresso::net>>> __end_cap_;
} vector<std::shared_ptr<Espresso::net>, std::allocator<std::shared_ptr<Espresso::net>>>;

typedef struct shared_ptr<Espresso::blob<float, 3>> {
} // Error Processing Struct Fields

typedef struct padding_params_t {
    short pad_mode;
    short fill_mode;
    float value;
    short l;
    short r;
    short t;
    short b;
    short front;
    short back;
} padding_params_t;

typedef struct convolution_uniforms {
    int W;
    int H;
    int Winput;
    int Hinput;
    int start_channel_low_priority_split;
    int output_row_bytes;
    int fused_relu;
    int fused_tanh;
    int has_biases;
    float leaky_relu_alpha;
    int C;
    int K;
    int Nx;
    int Ny;
    int backward_stride;
    int fused_activation_mode;
    float fused_activation_alpha;
    float fused_activation_beta;
    padding_params_t pad;
    short stride_x;
    short stride_y;
    short dilation_x;
    short dilation_y;
    unsigned short mtl_pad_l;
    unsigned short mtl_pad_t;
    int has_8bit_weights;
    int do_ncc;
    int has_batch_norm;
    int n_groups;
    int n_parallel;
    unsigned short start_channel_bottom;
    unsigned short start_channel_top;
    unsigned short total_channel_bottom;
    unsigned short total_channel_top;
    unsigned short split_K_channels_low_priority_split;
    short n_batch;
    int deconv_out_width;
    int deconv_out_height;
    int low_precision_accumulation;
    int hint_use_winograd_win_size;
    int Nt;
    short stride_t;
    int disable_bnns_client_ptr;
    BOOL use_sequential_cblas;
} convolution_uniforms;

typedef struct shared_ptr<Espresso::blob<unsigned char, 4>> {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::blob<float, 4>> {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::blob<unsigned short, 4>> {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1>> {
} // Error Processing Struct Fields

typedef struct inner_product_uniforms {
    unsigned int nC;
    unsigned int nB;
    int has_biases;
    int has_relu;
    int has_tanh;
    float tanh_alpha;
    float tanh_beta;
    int has_prelu;
    int is_lookup;
    int quantization_mode;
    BOOL nd_mode;
    int add_to_output;
    int use_raw_buffers;
    int fused_activation_mode;
    float fused_activation_alpha;
    float fused_activation_beta;
    unsigned int m;
    unsigned int k;
    unsigned int n;
    unsigned int Abytes;
    unsigned int Bbytes;
    unsigned int k4;
    unsigned int n4;
    unsigned int n8;
    unsigned int n8_splitk;
    int argmax_tree_n_clusters;
    int argmax_tree_n_clusters_keep;
    int sparse_block_size_x;
    int sparse_block_size_y;
    int low_precision_accumulation;
    int compute_every;
    int is_lookup_rounds_to_nearest;
    int disable_bnns_client_ptr;
} inner_product_uniforms;

typedef struct shared_ptr<Espresso::blob<float, 2>> {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::blob<unsigned short, 2>> {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::blob<unsigned char, 2>> {
} // Error Processing Struct Fields

typedef struct float_buffer_t {
    float ptr;
    NSUInteger size;
    BOOL free_when_done;
} float_buffer_t;

typedef struct __compressed_pair<std::shared_ptr<unsigned char> *, std::allocator<std::shared_ptr<unsigned char>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<unsigned char> *, std::allocator<std::shared_ptr<unsigned char>>>;

typedef struct vector<std::shared_ptr<unsigned char>, std::allocator<std::shared_ptr<unsigned char>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<unsigned char> *, std::allocator<std::shared_ptr<unsigned char>>> __end_cap_;
} vector<std::shared_ptr<unsigned char>, std::allocator<std::shared_ptr<unsigned char>>>;

typedef struct abstract_blob_container {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::abstract_blob_container> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, vImage_Buffer>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, vImage_Buffer>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, vImage_Buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, vImage_Buffer>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, vImage_Buffer>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, vImage_Buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, vImage_Buffer>>>;

typedef struct map<std::string, vImage_Buffer, std::less<std::string>, std::allocator<std::pair<const std::string, vImage_Buffer>>> {
    __tree<std::__value_type<std::string, vImage_Buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, vImage_Buffer>>> __tree_;
} map<std::string, vImage_Buffer, std::less<std::string>, std::allocator<std::pair<const std::string, vImage_Buffer>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, ETDataPoint_buffer>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, ETDataPoint_buffer>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, ETDataPoint_buffer>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, ETDataPoint_buffer>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, ETDataPoint_buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, ETDataPoint_buffer>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, ETDataPoint_buffer>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, ETDataPoint_buffer>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, ETDataPoint_buffer>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, ETDataPoint_buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, ETDataPoint_buffer>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, ETDataPoint_buffer>>>;

typedef struct map<std::string, ETDataPoint_buffer, std::less<std::string>, std::allocator<std::pair<const std::string, ETDataPoint_buffer>>> {
    __tree<std::__value_type<std::string, ETDataPoint_buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, ETDataPoint_buffer>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, ETDataPoint_buffer>>> __tree_;
} map<std::string, ETDataPoint_buffer, std::less<std::string>, std::allocator<std::pair<const std::string, ETDataPoint_buffer>>>;

typedef struct gradient_builder {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::gradient_builder> {
} // Error Processing Struct Fields

typedef struct shared_ptr<float> {
} // Error Processing Struct Fields

typedef struct shared_ptr<std::string> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>>;

typedef struct map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> {
    __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> __tree_;
} map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>>;

typedef struct map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> {
    __tree<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> __tree_;
} map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>>>;

typedef struct map<std::string, std::shared_ptr<Espresso::blob<float, 2>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 2>>>>> {
    __tree<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>>> __tree_;
} map<std::string, std::shared_ptr<Espresso::blob<float, 2>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 2>>>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, ETDataPoint *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, ETDataPoint *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>, true>>;

typedef struct __tree<std::__value_type<int, ETDataPoint *>, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>, true>, std::allocator<std::__value_type<int, ETDataPoint *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, ETDataPoint *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>, true>> __pair3_;
} __tree<std::__value_type<int, ETDataPoint *>, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>, true>, std::allocator<std::__value_type<int, ETDataPoint *>>>;

typedef struct map<int, ETDataPoint *, std::less<int>, std::allocator<std::pair<const int, ETDataPoint *>>> {
    __tree<std::__value_type<int, ETDataPoint *>, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>, true>, std::allocator<std::__value_type<int, ETDataPoint *>>> __tree_;
} map<int, ETDataPoint *, std::less<int>, std::allocator<std::pair<const int, ETDataPoint *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float_buffer_t>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float_buffer_t>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, float_buffer_t>, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, float_buffer_t>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float_buffer_t>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, float_buffer_t>, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, float_buffer_t>>>;

typedef struct map<std::string, float_buffer_t, std::less<std::string>, std::allocator<std::pair<const std::string, float_buffer_t>>> {
    __tree<std::__value_type<std::string, float_buffer_t>, std::__map_value_compare<std::string, std::__value_type<std::string, float_buffer_t>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, float_buffer_t>>> __tree_;
} map<std::string, float_buffer_t, std::less<std::string>, std::allocator<std::pair<const std::string, float_buffer_t>>>;

typedef struct _mxnetTools_recordHeader_t_ {
    unsigned int magic;
    unsigned int lrecord;
} _mxnetTools_recordHeader_t_;

typedef struct _mxnetTools_imageID_t_ {
    NSUInteger ID;
} _mxnetTools_imageID_t_;

typedef struct _mxnetTools_imageHeader_t_ {
    unsigned int flag;
    float label;
    _mxnetTools_imageID_t_ imageID;
} _mxnetTools_imageHeader_t_;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>>>;

typedef struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 1>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> {
    __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> __table_;
} unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 1>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 1>>>>>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct MPSStateTextureInfo {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
} MPSStateTextureInfo;

typedef struct fast_pyramid_resizer {
} // Error Processing Struct Fields

typedef struct shared_ptr<Espresso::fast_pyramid_resizer> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<int *, std::allocator<int>> {
    int __value_;
} __compressed_pair<int *, std::allocator<int>>;

typedef struct vector<int, std::allocator<int>> {
    int __begin_;
    int __end_;
    __compressed_pair<int *, std::allocator<int>> __end_cap_;
} vector<int, std::allocator<int>>;

typedef struct net_strides_configuration {
    int num_layer;
    vector<int, std::allocator<int>> kernel_size;
    vector<int, std::allocator<int>> stride;
    vector<int, std::allocator<int>> pad;
} net_strides_configuration;

typedef struct __compressed_pair<std::pair<unsigned long long, unsigned long long> *, std::allocator<std::pair<unsigned long long, unsigned long long>>> {
    void __value_;
} __compressed_pair<std::pair<unsigned long long, unsigned long long> *, std::allocator<std::pair<unsigned long long, unsigned long long>>>;

typedef struct vector<std::pair<unsigned long long, unsigned long long>, std::allocator<std::pair<unsigned long long, unsigned long long>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<unsigned long long, unsigned long long> *, std::allocator<std::pair<unsigned long long, unsigned long long>>> __end_cap_;
} vector<std::pair<unsigned long long, unsigned long long>, std::allocator<std::pair<unsigned long long, unsigned long long>>>;

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct __compressed_pair<std::shared_ptr<Espresso::fast_pyramid_resizer> *, std::allocator<std::shared_ptr<Espresso::fast_pyramid_resizer>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<Espresso::fast_pyramid_resizer> *, std::allocator<std::shared_ptr<Espresso::fast_pyramid_resizer>>>;

typedef struct vector<std::shared_ptr<Espresso::fast_pyramid_resizer>, std::allocator<std::shared_ptr<Espresso::fast_pyramid_resizer>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<Espresso::fast_pyramid_resizer> *, std::allocator<std::shared_ptr<Espresso::fast_pyramid_resizer>>> __end_cap_;
} vector<std::shared_ptr<Espresso::fast_pyramid_resizer>, std::allocator<std::shared_ptr<Espresso::fast_pyramid_resizer>>>;

typedef struct __compressed_pair<std::shared_ptr<Espresso::blob<float, 3>> *, std::allocator<std::shared_ptr<Espresso::blob<float, 3>>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<Espresso::blob<float, 3>> *, std::allocator<std::shared_ptr<Espresso::blob<float, 3>>>>;

typedef struct vector<std::shared_ptr<Espresso::blob<float, 3>>, std::allocator<std::shared_ptr<Espresso::blob<float, 3>>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<Espresso::blob<float, 3>> *, std::allocator<std::shared_ptr<Espresso::blob<float, 3>>>> __end_cap_;
} vector<std::shared_ptr<Espresso::blob<float, 3>>, std::allocator<std::shared_ptr<Espresso::blob<float, 3>>>>;

typedef struct pair<unsigned long long, unsigned long long> {
    NSUInteger first;
    NSUInteger second;
} pair<unsigned long long, unsigned long long>;

typedef struct _AnalyticsData {
    unsigned int field0;
    unsigned int field1;
    char field2;
} _AnalyticsData;

typedef struct _AnalyticsGroupInfo {
    unsigned int field0;
    NSUInteger field1;
    unsigned int field2;
    NSUInteger field3;
} _AnalyticsGroupInfo;

typedef struct _AnalyticsLayerInfo {
    char field0;
    char field1;
    float field2;
} _AnalyticsLayerInfo;

typedef struct _AnalyticsProcedureInfo {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    NSUInteger field5;
    unsigned int field6;
    NSUInteger field7;
} _AnalyticsProcedureInfo;

typedef struct _AnalyticsTaskInfo {
    unsigned int field0;
    NSUInteger field1;
} _AnalyticsTaskInfo;

typedef struct shared_ptr<Espresso::blob<unsigned char, 1>> {
} // Error Processing Struct Fields

typedef struct surface_and_buffer {
} // Error Processing Struct Fields

typedef struct vector<Espresso::ANERuntimeEngine::surface_and_buffer, std::allocator<Espresso::ANERuntimeEngine::surface_and_buffer>> {
} // Error Processing Struct Fields

