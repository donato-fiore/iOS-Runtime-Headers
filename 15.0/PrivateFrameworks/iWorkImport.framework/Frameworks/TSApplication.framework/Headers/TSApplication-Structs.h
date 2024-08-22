typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL unarchiverSourceType;
    BOOL isTransientObject;
} ?;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct UIEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIEdgeInsets;

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct TSUCellCoord {
    unsigned int row;
    unsigned short column;
    BOOL _preserveRow;
    BOOL _preserveColumn;
} TSUCellCoord;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct TSUCellRect {
    TSUCellCoord origin;
    ? size;
} TSUCellRect;

typedef struct TSWPParagraphEnumerator {
    id _storage;
    id TSWPStorage;
    NSUInteger _styleProvider;
    NSUInteger NSObject<TSWPStyleProvider>;
    NSUInteger _parIndex;
    NSUInteger _endParIndex;
    BOOL _firstParIndex;
    _NSRange _lastParIndex;
} TSWPParagraphEnumerator;

