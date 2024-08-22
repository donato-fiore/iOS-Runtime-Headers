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

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct CGImage {
} // Error Processing Struct Fields

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

typedef struct animation_completion_handler_container {
} // Error Processing Struct Fields

typedef struct vector<LAUI_CA_utilities::animation_completion_handler_container, std::allocator<LAUI_CA_utilities::animation_completion_handler_container>> {
} // Error Processing Struct Fields

typedef struct configuration_t {
    NSInteger _style;
    BOOL _reduce_blur;
} configuration_t;

typedef struct renderer_t {
} // Error Processing Struct Fields

typedef struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::renderer_t *, std::default_delete<LAUI_uniform_cubic_b_spline_renderer::renderer_t>> {
    renderer_t __value_;
} __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::renderer_t *, std::default_delete<LAUI_uniform_cubic_b_spline_renderer::renderer_t>>;

typedef struct unique_ptr<LAUI_uniform_cubic_b_spline_renderer::renderer_t, std::default_delete<LAUI_uniform_cubic_b_spline_renderer::renderer_t>> {
    __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::renderer_t *, std::default_delete<LAUI_uniform_cubic_b_spline_renderer::renderer_t>> __ptr_;
} unique_ptr<LAUI_uniform_cubic_b_spline_renderer::renderer_t, std::default_delete<LAUI_uniform_cubic_b_spline_renderer::renderer_t>>;

typedef struct face_id_animator_t {
} // Error Processing Struct Fields

typedef struct __compressed_pair<(anonymous namespace)::face_id_animator_t *, std::default_delete<(anonymous namespace)::face_id_animator_t>> {
    face_id_animator_t __value_;
} __compressed_pair<(anonymous namespace)::face_id_animator_t *, std::default_delete<(anonymous namespace)::face_id_animator_t>>;

typedef struct unique_ptr<(anonymous namespace)::face_id_animator_t, std::default_delete<(anonymous namespace)::face_id_animator_t>> {
    __compressed_pair<(anonymous namespace)::face_id_animator_t *, std::default_delete<(anonymous namespace)::face_id_animator_t>> __ptr_;
} unique_ptr<(anonymous namespace)::face_id_animator_t, std::default_delete<(anonymous namespace)::face_id_animator_t>>;

typedef struct optional<UIColor *> {
    unk ;
    char __null_state_;
    id __val_;
    BOOL UIColor;
} optional<UIColor *>;

typedef struct overlayable_property_t<UIColor *, float __attribute__((ext_vector_type(4)))> {
    optional<UIColor *> overlay_value;
} overlayable_property_t<UIColor *, float __attribute__((ext_vector_type(4)))>;

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

typedef struct array<id<MTLRenderPipelineState>, 3UL> {
    id __elems_;
} array<id<MTLRenderPipelineState>, 3UL>;

typedef struct shared_state_t {
    id _device;
    id <MTLDevice>;
    id _depth_stencil_state;
    id <MTLDepthStencilState>;
    array<id<MTLRenderPipelineState>, 3UL> _tesselation_factor_pipeline;
    array<id<MTLRenderPipelineState>, 3UL> <MTLComputePipelineState>;
    id _tube_pipeline;
    id <MTLRenderPipelineState>;
    id _begin_cap_pipelines;
} shared_state_t;

typedef struct optional<LAUI_uniform_cubic_b_spline_renderer::renderer_t::shared_state_t> {
    unk ;
    char __null_state_;
    shared_state_t __val_;
    BOOL __engaged_;
} optional<LAUI_uniform_cubic_b_spline_renderer::renderer_t::shared_state_t>;

