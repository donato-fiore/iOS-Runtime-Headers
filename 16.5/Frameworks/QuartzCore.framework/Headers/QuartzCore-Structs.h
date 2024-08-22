typedef struct ? {
    float matrix;
} ?;

typedef struct Atomic {
    ? field0;
} Atomic;

typedef struct Object {
    unk field0;
    Atomic field1;
    BOOL field2;
    BOOL field3;
} Object;

typedef struct ValueInterpolator {
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
    BOOL field14;
} ValueInterpolator;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CACornerRadii {
    CGSize field0;
    CGSize field1;
    CGSize field2;
    CGSize field3;
} CACornerRadii;

typedef struct CAColorMatrix {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    float field8;
    float field9;
    float field10;
    float field11;
    float field12;
    float field13;
    float field14;
    float field15;
    float field16;
    float field17;
    float field18;
    float field19;
} CAColorMatrix;

typedef struct CAPoint3D {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
} CAPoint3D;

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

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct CGColorSpace {
} // Error Processing Struct Fields

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

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct _CARenderRendererInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
} _CARenderRendererInfo;

typedef struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void layer;
    void _objc_observation_info;
} _CALayerIvars;

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct Mode {
    unk field0;
    ? field1;
    NSUInteger field2;
} Mode;

typedef struct CADisplayModePriv {
    Mode field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
    unsigned int field4;
    id field5;
} CADisplayModePriv;

typedef struct EDIDAttributes {
    int dolbyVision;
    int pqEOTF;
    int bt2020YCC;
    int hdrStaticMetadataType1;
    int discreteMediaRefreshRate;
    BOOL legacyHDMI;
    unsigned int product_id;
    unsigned int manufacturer_id;
    unsigned int week_of_manufacture;
    unsigned int year_of_manufacture;
    unsigned int serial_number;
} EDIDAttributes;

typedef struct CADisplayPreferencesPriv {
    BOOL field0;
    int field1;
} CADisplayPreferencesPriv;

typedef struct CADisplayModeCriteriaPriv {
    CGSize field0;
    CGFloat field1;
    int field2;
} CADisplayModeCriteriaPriv;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CGPattern {
} // Error Processing Struct Fields

typedef struct CGPathElement {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct _CAMLParserData {
} // Error Processing Struct Fields

typedef struct CAMeshVertex {
    CGPoint field0;
    CAPoint3D field1;
} CAMeshVertex;

typedef struct CAMeshFace {
    unsigned int field0;
    float field1;
} CAMeshFace;

typedef struct CAMediaTimingFunctionPrivate {
    float field0;
    float field1;
} CAMediaTimingFunctionPrivate;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CTLine {
} // Error Processing Struct Fields

typedef struct __CTTypesetter {
} // Error Processing Struct Fields

typedef struct CATextLayerPrivate {
} // Error Processing Struct Fields

typedef struct CAFrameIntervalRange {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
} CAFrameIntervalRange;

typedef struct DynamicFrameRateSource {
    unsigned int field0;
    void field1;
    CAFrameRateRange field2;
    CAFrameIntervalRange field3;
    NSUInteger field4;
    int field5;
    NSUInteger field6;
    NSUInteger field7;
    unsigned int field8;
    BOOL field9;
    DynamicFrameRateSource field10;
    BOOL field11;
} DynamicFrameRateSource;

typedef struct _EAGLNativeWindowObject {
    int field0;
    unsigned int field1;
    unk field2;
    unk field3;
    unk field4;
    unk field5;
    unk field6;
    unk field7;
    unk field8;
} _EAGLNativeWindowObject;

typedef struct x_list_struct {
} // Error Processing Struct Fields

typedef struct SpinLock {
    ? _l;
} SpinLock;

typedef struct _CAImageQueue {
} // Error Processing Struct Fields

typedef struct _CAEAGLNativeWindow {
} // Error Processing Struct Fields

typedef struct CABackingStore {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct Mutex {
    _opaque_pthread_mutex_t _m;
} Mutex;

typedef struct _CAMetalLayerPrivate {
} // Error Processing Struct Fields

typedef struct _CAMetalDrawablePrivate {
} // Error Processing Struct Fields

typedef struct CALinearMaskContext {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct _CALayerArrayIvars {
    id layers;
    NSUInteger count;
    NSUInteger capacity;
    NSUInteger mutations;
    BOOL retained;
} _CALayerArrayIvars;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct CAWindowServerImpl {
    __CFArray field0;
    unsigned int field1;
    id field2;
    unk field3;
} CAWindowServerImpl;

typedef struct CGColorTRCParametric {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
} CGColorTRCParametric;

typedef struct CGColorTRCBoundaryExtension {
    float field0;
    float field1;
} CGColorTRCBoundaryExtension;

typedef struct CGColorTRCTable {
    NSUInteger field0;
    float field1;
    CGColorTRCBoundaryExtension field2;
    CGColorTRCBoundaryExtension field3;
} CGColorTRCTable;

typedef struct CGColorTRC {
    int field0;
    unk field1;
    CGColorTRCParametric field2;
    CGColorTRCTable field3;
} CGColorTRC;

typedef struct Server {
} // Error Processing Struct Fields

typedef struct CABrightnessTransaction {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    ? field8;
    float field9;
    BOOL field10;
    unsigned int field11;
} CABrightnessTransaction;

typedef struct CAWindowServerDisplayImpl {
    Mutex field0;
    Server field1;
    CABrightnessTransaction field2;
    id field3;
    unk field4;
    id field5;
    id field6;
    id field7;
    id field8;
    BOOL field9;
    BOOL field10;
} CAWindowServerDisplayImpl;

typedef struct AveragePixelConstraints {
    float field0;
    float field1;
    float field2;
    NSUInteger field3;
    float field4;
    float field5;
} AveragePixelConstraints;

typedef struct _CAEDRMetadataPrivate {
    ? field0;
    ? field1;
    BOOL field2;
    float field3;
} _CAEDRMetadataPrivate;

typedef struct _CAPackageData {
    id field0;
    id field1;
    id field2;
    BOOL field3;
    BOOL field4;
    id field5;
    id field6;
} _CAPackageData;

typedef struct _CAMLWriterElement {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct __CFURL {
} // Error Processing Struct Fields

typedef struct _CAMLWriterPriv {
} // Error Processing Struct Fields

typedef struct _CAStateControllerData {
} // Error Processing Struct Fields

typedef struct CVSMPTETime {
    short field0;
    short field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    short field5;
    short field6;
    short field7;
    short field8;
} CVSMPTETime;

