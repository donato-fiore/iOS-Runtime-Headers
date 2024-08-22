typedef struct ? {
    void plan;
    int network_index;
} ?;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct opaqueCMFormatDescription {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct PTFocusEdge {
    float width;
    float gradientThreshold;
    float gradientWeight;
    float minMaxThreshold;
} PTFocusEdge;

typedef struct PTFigCaptureStreamFocusBlurMapHeader {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
    unsigned short field5;
    unsigned short field6;
    unsigned short field7;
    unsigned short field8;
    unsigned short field9;
    unsigned short field10;
    unsigned char field11;
    unsigned char field12;
    unsigned char field13;
    unsigned char field14;
    unsigned char field15;
    unsigned char field16;
    float field17;
    float field18;
} PTFigCaptureStreamFocusBlurMapHeader;

typedef struct PTFigCaptureStreamFocusBlurMapTile {
    short field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
    unsigned char field4;
    unsigned char field5;
    unsigned char field6;
} PTFigCaptureStreamFocusBlurMapTile;

typedef struct PTFigCaptureStreamFocusBlurMap {
    unsigned char field0;
    PTFigCaptureStreamFocusBlurMapHeader field1;
    PTFigCaptureStreamFocusBlurMapTile field2;
} PTFigCaptureStreamFocusBlurMap;

typedef struct OpaqueVTPixelTransferSession {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct __IOSurfaceAccelerator {
} // Error Processing Struct Fields

typedef struct FaceRectsWrapper {
    int field0;
} FaceRectsWrapper;

typedef struct PTSyntheticLightConfig {
    BOOL firstFrame;
    int framesSinceLightEstimate;
    int lightEstimateFrequency;
    float emaCoefficient;
    float fgDiffuseMinLightIntensity;
    float fgDiffuseMaxLightIntensity;
} PTSyntheticLightConfig;

typedef struct PTFocus {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
} PTFocus;

typedef struct PTNoiseValues {
    float field0;
    float field1;
} PTNoiseValues;

typedef struct Half2 {
} // Error Processing Struct Fields

typedef struct PTRandomDisk {
    Half2 field0;
    int field1;
} PTRandomDisk;

typedef struct FrameHeaderData_0 {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    float field8;
    unsigned int field9;
} FrameHeaderData_0;

typedef struct SmoothFaceRect {
    float faceCenter;
    float faceRadius;
    float bodyPos;
    float bodySize;
    float leftEyeCenter;
} SmoothFaceRect;

typedef struct SmoothFaceRectData {
    float aspect;
    float lightMaskExponent;
    float preumbraBendFactor;
    float lightMaskWidth;
    float lightMaskFaceOffsetY;
    ? faceEyeWeight;
    SmoothFaceRect rotation;
} SmoothFaceRectData;

typedef struct RelightingParam {
    float bgLightIntensity;
    float bgVignetteLightIntensity;
    float bgVignetteFalloff;
    float fgOffsetFactorNear;
    float fgOffsetFactorFar;
    float bgThresholdDisparity;
    float bgEffectThresholdDisparity;
    float fgLightDesaturation;
    float fgLightColor;
    float bgToneCurveReciprocal;
} RelightingParam;

typedef struct DetectionData_0 {
    NSUInteger field0;
    NSUInteger field1;
    unsigned int field2;
    float field3;
    float field4;
} DetectionData_0;

typedef struct PTHumanDetection {
    int groupId;
    float faceRect;
    BOOL faceRectCenteredEma;
    float faceRectCenteredEmaEma;
} PTHumanDetection;

typedef struct MTLTargetDeviceArch {
    NSUInteger field0;
    unsigned int field1;
    char * field2;
} MTLTargetDeviceArch;

typedef struct IndirectArgumentBufferCapabilities {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} IndirectArgumentBufferCapabilities;

typedef struct MTLCompilerConnectionManager {
} // Error Processing Struct Fields

typedef struct MPSFunctionTable {
} // Error Processing Struct Fields

typedef struct half4 {
} // Error Processing Struct Fields

typedef struct half3x4 {
    half4 field0;
} half3x4;

typedef struct bool2 {
    BOOL field0;
    BOOL field1;
} bool2;

