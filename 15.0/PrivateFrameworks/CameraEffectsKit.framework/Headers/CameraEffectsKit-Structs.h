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

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

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

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct _UITraitCollectionTraitChanges {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _UITraitCollectionTraitChanges;

typedef struct _UITraitCollectionChangeDescription {
    id field0;
    id field1;
    BOOL field2;
    _UITraitCollectionTraitChanges field3;
} _UITraitCollectionChangeDescription;

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

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct DepthProcessingDataRGBD {
} // Error Processing Struct Fields

typedef struct CVASegmentation {
} // Error Processing Struct Fields

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct PVTransformAnimationInfo {
    ? time;
    CGPoint translation;
    CGFloat scale;
    CGFloat rotation;
} PVTransformAnimationInfo;

typedef struct __CVMetalTextureCache {
} // Error Processing Struct Fields

typedef struct PVCGPointQuad {
    CGPoint a;
    CGPoint b;
    CGPoint c;
    CGPoint d;
} PVCGPointQuad;

typedef struct OpaqueVTImageRotationSession {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct PVTransformInfo {
    ? translation;
} PVTransformInfo;

typedef struct opaqueCMFormatDescription {
} // Error Processing Struct Fields

typedef struct OpaqueVTDecompressionSession {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct OpaqueVTCompressionSession {
} // Error Processing Struct Fields

typedef struct EncoderConfig {
    int field0;
    int field1;
    int field2;
    int field3;
    CGFloat field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
} EncoderConfig;

typedef struct HEVCLosslessEncoder {
    int field0;
    int field1;
    CGFloat field2;
    OpaqueVTCompressionSession field3;
    EncoderConfig field4;
    ? field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
} HEVCLosslessEncoder;

typedef struct promise<opaqueCMSampleBuffer *> {
    void __state_;
} promise<opaqueCMSampleBuffer *>;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct CGImageMetadata {
} // Error Processing Struct Fields

typedef struct _CARenderRendererInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
} _CARenderRendererInfo;

typedef struct _CAPropertyInfo {
} // Error Processing Struct Fields

typedef struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void layer;
    void _objc_observation_info;
} _CALayerIvars;

typedef struct CGImageDestination {
} // Error Processing Struct Fields

typedef struct OpaqueVTPixelTransferSession {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct OpaqueCMBlockBuffer {
} // Error Processing Struct Fields

typedef struct vImage_Buffer {
    void field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
} vImage_Buffer;

typedef struct ContourMemoryPool {
    char * field0;
    char * field1;
    int field2;
    int field3;
} ContourMemoryPool;

