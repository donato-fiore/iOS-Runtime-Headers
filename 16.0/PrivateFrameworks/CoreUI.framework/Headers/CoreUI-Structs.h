typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGImage {
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

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGSVGDocument {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct ? {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} ?;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct _renditionkeytoken {
    unsigned short identifier;
    unsigned short value;
} _renditionkeytoken;

typedef struct _csimetadata {
    unsigned int field0;
    unsigned short field1;
    unsigned short field2;
    char field3;
} _csimetadata;

typedef struct _csibitmaplist {
    unsigned int field0;
    unsigned int field1;
} _csibitmaplist;

typedef struct _csiheader {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    BOOL field7;
    BOOL field8;
    _csimetadata field9;
    unsigned int field10;
    _csibitmaplist field11;
} _csiheader;

typedef struct CGPDFDocument {
} // Error Processing Struct Fields

typedef struct _csitextstyle {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    float field3;
    float field4;
    float field5;
    unsigned int field6;
    unsigned int field7;
    char field8;
} _csitextstyle;

typedef struct cuithemerenditionrenditionflags {
    BOOL isVectorBased;
    BOOL isOpaque;
    BOOL bitmapEncoding;
    BOOL optOutOfThinning;
    BOOL isFlippable;
    BOOL isTintable;
    BOOL preservedVectorRepresentation;
    BOOL preserveForArchiveOnly;
    BOOL reserved;
} cuithemerenditionrenditionflags;

typedef struct _csicolor {
    unsigned int field0;
    unsigned int field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    unsigned int field5;
    CGFloat field6;
} _csicolor;

typedef struct CGPattern {
} // Error Processing Struct Fields

typedef struct CGGradient {
} // Error Processing Struct Fields

typedef struct _cuieffectlist {
    unsigned int field0;
    unsigned int field1;
} _cuieffectlist;

typedef struct _cuieffectdata {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    _cuieffectlist field4;
} _cuieffectdata;

typedef struct _psdGradientColor {
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat alpha;
} _psdGradientColor;

typedef struct _renditionkeyfmt {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} _renditionkeyfmt;

typedef struct CUIDesignColorTraits {
    NSInteger field0;
    NSInteger field1;
    NSInteger field2;
    NSInteger field3;
    NSInteger field4;
    NSInteger field5;
    NSInteger field6;
} CUIDesignColorTraits;

typedef struct _PSDImageInfo {
    unsigned int field0;
    unsigned int field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
    int field5;
} _PSDImageInfo;

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct _cuiniproperties {
    BOOL isVectorBased;
    BOOL hasSliceInformation;
    BOOL hasAlignmentInformation;
    BOOL resizingMode;
    BOOL templateRenderingMode;
    BOOL exifOrientation;
    BOOL isAlphaCropped;
    BOOL isFlippable;
    BOOL isTintable;
    BOOL preservedVectorRepresentation;
    BOOL _reserved;
} _cuiniproperties;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct _rgbcolor {
    unsigned char r;
    unsigned char g;
    unsigned char b;
} _rgbcolor;

typedef struct _CUIVibrantColorMatrixOptions {
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
} _CUIVibrantColorMatrixOptions;

typedef struct _renditionkeyattributeindex {
    NSUInteger keymask;
    unsigned char keyindices;
    unsigned int nkeys;
    unsigned int keylist;
} _renditionkeyattributeindex;

typedef struct _rgbquad {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} _rgbquad;

typedef struct _colordef {
    unsigned int field0;
    unsigned int field1;
    _rgbquad field2;
} _colordef;

typedef struct CGFunction {
} // Error Processing Struct Fields

typedef struct _carheader {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    char field5;
    char field6;
    unsigned char field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
} _carheader;

typedef struct _carextendedMetadata {
    unsigned int field0;
    char field1;
    char field2;
    char field3;
    char field4;
} _carextendedMetadata;

typedef struct _BOMStorage {
} // Error Processing Struct Fields

typedef struct FontValue {
    char field0;
    float field1;
} FontValue;

typedef struct _cuintproperties {
    BOOL exifOrientation;
    BOOL isAlphaCropped;
    BOOL isOpaque;
    BOOL _reserved;
} _cuintproperties;

typedef struct crmFlags {
    BOOL scalesVertically;
    BOOL scalesHorizontally;
    BOOL reserved;
} crmFlags;

typedef struct __CFBoolean {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct _slice {
    unsigned int x;
    unsigned int y;
    unsigned int width;
    unsigned int height;
} _slice;

typedef struct _csibitmapflags {
    BOOL field0;
    BOOL field1;
    BOOL field2;
} _csibitmapflags;

typedef struct _csibitmap {
    unsigned int field0;
    unk field1;
    unsigned int field2;
    _csibitmapflags field3;
    unsigned int field4;
    unsigned int field5;
    unsigned char field6;
} _csibitmap;

typedef struct vImage_Buffer {
    void field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
} vImage_Buffer;

typedef struct PSDRect {
} // Error Processing Struct Fields

