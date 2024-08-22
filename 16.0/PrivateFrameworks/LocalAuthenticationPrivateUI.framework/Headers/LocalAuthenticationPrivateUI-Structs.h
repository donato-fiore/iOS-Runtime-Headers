typedef struct _NSZone {
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

typedef struct CGContext {
} // Error Processing Struct Fields

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
    float minimum;
    float maximum;
    float preferred;
} CAFrameRateRange;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<CALayer *__unsafe_unretained, CALayer *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<CALayer *__unsafe_unretained, CALayer *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::less<CALayer *__unsafe_unretained>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::less<CALayer *__unsafe_unretained>, true>>;

typedef struct __tree<std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::less<CALayer *__unsafe_unretained>, true>, std::allocator<std::__value_type<CALayer *__unsafe_unretained, CALayer *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<CALayer *__unsafe_unretained, CALayer *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::less<CALayer *__unsafe_unretained>, true>> __pair3_;
} __tree<std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::less<CALayer *__unsafe_unretained>, true>, std::allocator<std::__value_type<CALayer *__unsafe_unretained, CALayer *>>>;

typedef struct map<CALayer *__unsafe_unretained, CALayer *, std::less<CALayer *__unsafe_unretained>, std::allocator<std::pair<CALayer *const __unsafe_unretained, CALayer *>>> {
    __tree<std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::less<CALayer *__unsafe_unretained>, true>, std::allocator<std::__value_type<CALayer *__unsafe_unretained, CALayer *>>> __tree_;
} map<CALayer *__unsafe_unretained, CALayer *, std::less<CALayer *__unsafe_unretained>, std::allocator<std::pair<CALayer *const __unsafe_unretained, CALayer *>>>;

typedef struct __compressed_pair<UIView *__strong *, std::allocator<UIView *>> {
    id __value_;
} __compressed_pair<UIView *__strong *, std::allocator<UIView *>>;

typedef struct vector<UIView *, std::allocator<UIView *>> {
    id __begin_;
    id __end_;
    __compressed_pair<UIView *__strong *, std::allocator<UIView *>> __end_cap_;
} vector<UIView *, std::allocator<UIView *>>;

typedef struct periodic_animation_state {
    BOOL enabled;
    id _key;
    id NSString;
    id _layer;
} periodic_animation_state;

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct array<id<MTLRenderPipelineState>, 3UL> {
    id __elems_;
} array<id<MTLRenderPipelineState>, 3UL>;

typedef struct renderer_shared_state {
    id device;
    id <MTLDevice>;
    id depth_stencil_state;
    id <MTLDepthStencilState>;
    array<id<MTLRenderPipelineState>, 3UL> tesselation_factor_pipeline;
    array<id<MTLRenderPipelineState>, 3UL> <MTLComputePipelineState>;
    id tube_pipeline;
    id <MTLRenderPipelineState>;
    id begin_cap_pipelines;
} renderer_shared_state;

typedef struct buffer_group {
} // Error Processing Struct Fields

typedef struct vector<(anonymous namespace)::buffer_group, std::allocator<(anonymous namespace)::buffer_group>> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> {
    uint8_t __a_value;
    unsigned char field1;
} __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>>;

typedef struct atomic<unsigned char> {
    __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> __a_;
} atomic<unsigned char>;

typedef struct array<id<MTLTexture>, 2UL> {
    id __elems_;
} array<id<MTLTexture>, 2UL>;

typedef struct control_point {
} // Error Processing Struct Fields

typedef struct vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> {
    unsigned short __value_;
} __compressed_pair<unsigned short *, std::allocator<unsigned short>>;

typedef struct vector<unsigned short, std::allocator<unsigned short>> {
    unsigned short __begin_;
    unsigned short __end_;
    __compressed_pair<unsigned short *, std::allocator<unsigned short>> __end_cap_;
} vector<unsigned short, std::allocator<unsigned short>>;

typedef struct instance_uniform {
} // Error Processing Struct Fields

typedef struct vector<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform>> {
} // Error Processing Struct Fields

typedef struct animator<float, 0> {
    float _target;
    float _intermediate;
    float _actual;
    float _k;
    float _elapsed_n;
    float _target_n;
    float _visual_target_n;
    unsigned char _interpolation;
} animator<float, 0>;

typedef struct animator<std::nullptr_t, 0> {
    char * _target;
    char * _intermediate;
    char * _actual;
    float _k;
    float _elapsed_n;
    float _target_n;
    float _visual_target_n;
    unsigned char _interpolation;
} animator<std::nullptr_t, 0>;

typedef struct global_state_animator {
    animator<float, 0> accumulator_growth;
    animator<float, 0> accumulator_persistence;
    animator<float, 0> accumulator_luminance_alpha_factor;
    animator<float, 0> blur_scale;
    animator<std::nullptr_t, 0> hidden_animator;
} global_state_animator;

typedef struct global_state {
    float accumulator_growth;
    float accumulator_persistence;
    float accumulator_luminance_alpha_factor;
    float blur_scale;
    float k;
    float epsilon;
} global_state;

typedef struct vector<LAUI_uniform_cubic_b_spline_renderer::global_state, std::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state>> {
} // Error Processing Struct Fields

typedef struct animation_completion_handler_container {
    id _completion;
    unk field1;
} animation_completion_handler_container;

typedef struct spline {
} // Error Processing Struct Fields

typedef struct vector<LAUI_uniform_cubic_b_spline_renderer::spline, std::allocator<LAUI_uniform_cubic_b_spline_renderer::spline>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance> *, std::allocator<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>> {
    void __value_;
} __compressed_pair<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance> *, std::allocator<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>>;

typedef struct vector<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>, std::allocator<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance> *, std::allocator<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>> __end_cap_;
} vector<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>, std::allocator<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>>;

typedef struct double4x4 {
} // Error Processing Struct Fields

typedef struct blur_container {
    id view;
    periodic_animation_state UIImageView;
} blur_container;

typedef struct array<(anonymous namespace)::blur_container, 2UL> {
    blur_container __elems_;
} array<(anonymous namespace)::blur_container, 2UL>;

typedef struct CACornerRadii {
    CGSize field0;
    CGSize field1;
    CGSize field2;
    CGSize field3;
} CACornerRadii;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct _CARenderRendererInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
} _CARenderRendererInfo;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _CAPropertyInfo {
    unsigned int field0;
    BOOL field1;
    BOOL field2;
    SEL field3;
    char * field4;
    __CFString field5;
} _CAPropertyInfo;

typedef struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void layer;
    void _objc_observation_info;
} _CALayerIvars;

typedef struct __compressed_pair<CAShapeLayer *__strong *, std::allocator<CAShapeLayer *>> {
    id __value_;
} __compressed_pair<CAShapeLayer *__strong *, std::allocator<CAShapeLayer *>>;

typedef struct vector<CAShapeLayer *, std::allocator<CAShapeLayer *>> {
    id __begin_;
    id __end_;
    __compressed_pair<CAShapeLayer *__strong *, std::allocator<CAShapeLayer *>> __end_cap_;
} vector<CAShapeLayer *, std::allocator<CAShapeLayer *>>;

typedef struct vector<LAUI_CA_utilities::animation_completion_handler_container, std::allocator<LAUI_CA_utilities::animation_completion_handler_container>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>>>;

typedef struct unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>>> {
    __hash_table<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>>> __table_;
} unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<unsigned long>>;

typedef struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<unsigned long>> __pair3_;
} __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>>;

typedef struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> {
    __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> __tree_;
} set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>>>;

typedef struct unordered_map<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>>> {
    __hash_table<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>>> __table_;
} unordered_map<unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::unordered_map<unsigned long, std::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>>>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::set<unsigned long>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::set<unsigned long>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::set<unsigned long>>, std::less<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::set<unsigned long>>, std::less<unsigned long>, true>>;

typedef struct __tree<std::__value_type<unsigned long, std::set<unsigned long>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::set<unsigned long>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::set<unsigned long>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::set<unsigned long>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::set<unsigned long>>, std::less<unsigned long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long, std::set<unsigned long>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::set<unsigned long>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::set<unsigned long>>>>;

typedef struct map<unsigned long, std::set<unsigned long>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::set<unsigned long>>>> {
    __tree<std::__value_type<unsigned long, std::set<unsigned long>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::set<unsigned long>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::set<unsigned long>>>> __tree_;
} map<unsigned long, std::set<unsigned long>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::set<unsigned long>>>>;

typedef struct __compressed_pair<void (^__strong *)(bool), std::allocator<void (^)(bool)>> {
    id __value_;
    unk field1;
} __compressed_pair<void (^__strong *)(bool), std::allocator<void (^)(bool)>>;

typedef struct vector<void (^)(bool), std::allocator<void (^)(bool)>> {
    id __begin_;
    unk __end_;
    id __end_cap_;
    unk field3;
    __compressed_pair<void (^__strong *)(bool), std::allocator<void (^)(bool)>> field4;
} vector<void (^)(bool), std::allocator<void (^)(bool)>>;

