typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct NUNIViewport {
    int width;
    int height;
} NUNIViewport;

typedef struct NUNIClassicRendererResources {
    id pipelines;
    id <MTLRenderPipelineState>;
    id vertexBuffer;
} NUNIClassicRendererResources;

typedef struct NUNIClassicGeometryRange {
    int start;
    int count;
} NUNIClassicGeometryRange;

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct NUNIClassicRendererState {
    NUNIViewport viewport;
    NSUInteger projectionType;
    NSUInteger collectionType;
    float yearsSince1970;
    float cameraRoll;
    NUNIClassicGeometryRange octGeomRange;
    NUNIClassicGeometryRange quadGeomRange;
    ? cameraPosition;
    ? cameraTarget;
    ? cameraUp;
} NUNIClassicRendererState;

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

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
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
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
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct CLLocationCoordinate2D {
    CGFloat latitude;
    CGFloat longitude;
} CLLocationCoordinate2D;

typedef struct CLKUIQuadSize {
    int field0;
    int field1;
} CLKUIQuadSize;

typedef struct NUNIAegirStyleDefinition {
    float orbit;
    float cameraOffset;
} NUNIAegirStyleDefinition;

typedef struct NUNIClassicVertex {
} // Error Processing Struct Fields

typedef struct NUNIAegirRenderOptions {
    float bloomRadius;
    float bloomStrength;
    float bloomThreshold;
    float sunDistance;
    float sunEquatorialRadius;
    float sunGlowRadiusScale;
    float sunExpMin;
    float sunColorRed;
    float sunColorGreen;
    float sunColorBlue;
    float earthLightPower;
    float earthSpecularPower;
    float earthSpecularStrength;
    float earthSpecularBreakup;
    float earthSurfaceAmbientStrength;
    float earthIlluminationRed;
    float earthIlluminationGreen;
    float earthIlluminationBlue;
    float earthIlluminationStrength;
    float earthCloudShadowStrength;
    float earthCloudShadowEaseFrom;
    float earthCloudShadowEaseTo;
    float earthCloudAmbientStrength;
    float earthCloudAlpha;
    float earthAtmosphereRed;
    float earthAtmosphereGreen;
    float earthAtmosphereBlue;
    float earthAtmosphereStrength;
    float earthAtmosphereGlowExpMin;
    float earthAtmosphereTerminatorEaseFrom;
    float earthAtmosphereTerminatorEaseTo;
    float lunaLightPower;
    float lunaSpecularPower;
    float lunaSpecularStrength;
    float lunaSurfaceAmbientStrength;
} NUNIAegirRenderOptions;

typedef struct NUNIAegirRenderUniforms {
    ? sprite;
    ? sphere;
    float lightDirection;
    float viewModelInverseMatrix;
    float viewModelMatrix;
    float offset;
    float aspect;
    float invResolution;
    float nearPlane;
    float opacity;
    float falloff;
    float falloffOverrideOpacity;
    NUNIAegirRenderOptions sunExpMin;
} NUNIAegirRenderUniforms;

typedef struct NUNIAegirRendererState {
    NUNIViewport viewport;
    float cameraRoll;
    float aspect;
    float fovY;
    ? cameraOffset;
    ? cameraPosition;
} NUNIAegirRendererState;

typedef struct NUNIAstronomyInteractionSettings {
    float field0;
    float field1;
    float field2;
    float field3;
} NUNIAstronomyInteractionSettings;

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

