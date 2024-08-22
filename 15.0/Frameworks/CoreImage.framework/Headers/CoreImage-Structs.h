typedef struct _NSZone {
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

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct BGHashMapContext {
} // Error Processing Struct Fields

typedef struct ? {
    NSUInteger width;
    NSUInteger height;
    NSUInteger depth;
} ?;

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct CGImageMetadata {
} // Error Processing Struct Fields

typedef struct IPoint {
    NSInteger field0;
    NSInteger field1;
} IPoint;

typedef struct ISize {
    NSUInteger field0;
    NSUInteger field1;
} ISize;

typedef struct IRect {
    IPoint field0;
    ISize field1;
} IRect;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CGLayer {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct Trilean {
    char field0;
} Trilean;

typedef struct CIBitmapContextPrivate {
    void field0;
    NSInteger field1;
    CGRect field2;
    int field3;
} CIBitmapContextPrivate;

typedef struct __SVMScaleOffset {
    float field0;
    float field1;
} __SVMScaleOffset;

typedef struct CIBurstSupportVector {
    CGFloat field0;
    CGFloat field1;
} CIBurstSupportVector;

typedef struct __SVMParameters {
} // Error Processing Struct Fields

typedef struct __sbuf {
    char * field0;
    int field1;
} __sbuf;

typedef struct __sFILEX {
} // Error Processing Struct Fields

typedef struct __sFILE {
    char * field0;
    int field1;
    int field2;
    short field3;
    short field4;
    __sbuf field5;
    int field6;
    void field7;
    unk field8;
    unk field9;
    unk field10;
    unk field11;
    __sbuf field12;
    __sFILEX field13;
    int field14;
    unsigned char field15;
    unsigned char field16;
    __sbuf field17;
    int field18;
    NSInteger field19;
} __sFILE;

typedef struct GridROI_t {
    int startX;
    int startY;
    int endX;
    int endY;
} GridROI_t;

typedef struct Projections_meanStdTable {
    float sumTable;
    float sumSqTable;
} Projections_meanStdTable;

typedef struct FastRegistration_Signatures {
    float piRow;
    NSUInteger nPiRow;
    Projections_meanStdTable piRowTable;
    float piCol;
    NSUInteger nPiCol;
    Projections_meanStdTable piColTable;
} FastRegistration_Signatures;

typedef struct SharpnessGridElement_t {
    unsigned char field0;
    unsigned char field1;
    float field2;
} SharpnessGridElement_t;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CIPredictionModelImageFeatures {
    id name;
    NSInteger NSString;
    NSInteger width;
    unsigned int height;
} CIPredictionModelImageFeatures;

typedef struct filterShape {
    CGRect field0;
} filterShape;

typedef struct CGSRegionObject {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct CGDataConsumer {
} // Error Processing Struct Fields

typedef struct __CFURL {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct Texture {
    unk field0;
    NSUInteger field1;
    ? field2;
    ? field3;
} Texture;

typedef struct __compressed_pair<CI::KernelArgumentType *, std::allocator<CI::KernelArgumentType>> {
    int field0;
} __compressed_pair<CI::KernelArgumentType *, std::allocator<CI::KernelArgumentType>>;

typedef struct vector<CI::KernelArgumentType, std::allocator<CI::KernelArgumentType>> {
    int field0;
    int field1;
    __compressed_pair<CI::KernelArgumentType *, std::allocator<CI::KernelArgumentType>> field2;
} vector<CI::KernelArgumentType, std::allocator<CI::KernelArgumentType>>;

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void field0;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void field0;
    void field1;
    __compressed_pair<std::string *, std::allocator<std::string>> field2;
} vector<std::string, std::allocator<std::string>>;

typedef struct CIKernelReflection {
    int field0;
    int field1;
    char * field2;
    char * field3;
    vector<CI::KernelArgumentType, std::allocator<CI::KernelArgumentType>> field4;
    vector<std::string, std::allocator<std::string>> field5;
    id field6;
    unsigned int field7;
    int field8;
    NSUInteger field9;
    NSUInteger field10;
    BOOL field11;
    BOOL field12;
} CIKernelReflection;

typedef struct SerialObjectPtrArray {
    int field0;
    int field1;
    int field2;
    void field3;
} SerialObjectPtrArray;

typedef struct Rectangle {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} Rectangle;

typedef struct vec2 {
    unk field0;
    float field1;
    float field2;
    unk field3;
    float field4;
    float field5;
} vec2;

typedef struct vec3 {
    unk field0;
    ? field1;
    ? field2;
    ? field3;
    ? field4;
} vec3;

typedef struct vec4 {
    unk field0;
    ? field1;
    ? field2;
    ? field3;
    ? field4;
    ? field5;
    ? field6;
} vec4;

typedef struct RenderDestination {
} // Error Processing Struct Fields

typedef struct CIRenderDestinationInternal {
    RenderDestination field0;
    NSUInteger field1;
    NSUInteger field2;
    int field3;
    int field4;
    ? field5;
    NSUInteger field6;
    BOOL field7;
    BOOL field8;
    int field9;
    BOOL field10;
    BOOL field11;
    BOOL field12;
    id field13;
} CIRenderDestinationInternal;

typedef struct float3x3 {
} // Error Processing Struct Fields

typedef struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> {
} // Error Processing Struct Fields

typedef struct LineCostProxy {
} // Error Processing Struct Fields

typedef struct vector<LineCostProxy, std::allocator<LineCostProxy>> {
} // Error Processing Struct Fields

typedef struct Solution {
    float rX;
    float rY;
    float rZ;
    float cost;
} Solution;

typedef struct vImage_Buffer {
    void field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
} vImage_Buffer;

typedef struct PseudoRand {
    unsigned int u;
    unsigned int v;
} PseudoRand;

typedef struct CGImageBlockSet {
} // Error Processing Struct Fields

