typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

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

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL _isiChatTypesetter;
    BOOL _resToWillSetLineFragmentRect;
    BOOL _limitsLayoutForSuspiciousContents;
    BOOL _baselineRendering;
    BOOL _forceWordWrapping;
    BOOL _reserved;
} ?;

typedef struct __CTTypesetter {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __CTGlyphStorage {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct _NSAttributeDictionaryElement {
    NSUInteger hash;
    id key;
    id value;
} _NSAttributeDictionaryElement;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct UIEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIEdgeInsets;

typedef struct UINibDecoderObjectEntry {
    unsigned int field0;
    unsigned int field1;
} UINibDecoderObjectEntry;

typedef struct UINibDecoderValue {
    unsigned int field0;
    unsigned int field1;
} UINibDecoderValue;

typedef struct UINibArchiveTableInfo {
    unsigned int count;
    unsigned int offset;
} UINibArchiveTableInfo;

typedef struct UINibDecoderHeader {
    unsigned char type;
    unsigned int formatVersion;
    unsigned int coderVersion;
    UINibArchiveTableInfo objects;
    UINibArchiveTableInfo keys;
    UINibArchiveTableInfo values;
    UINibArchiveTableInfo classes;
} UINibDecoderHeader;

typedef struct UINibDecoderRecursiveState {
    NSInteger objectID;
    NSInteger nextGenericKey;
    unsigned int nextValueSearchIndex;
    BOOL replaced;
} UINibDecoderRecursiveState;

typedef struct UIKeyToKeyIDCache {
    id previousKey;
    void NSString;
    BOOL previousKeyID;
    NSInteger previousKeyExists;
    NSInteger hashHits;
    NSInteger hashHotMisses;
} UIKeyToKeyIDCache;

typedef struct UIKeyAndScopeToValueCache {
} // Error Processing Struct Fields

typedef struct UIStringIDTableBucket {
} // Error Processing Struct Fields

typedef struct __CFStringTokenizer {
} // Error Processing Struct Fields

typedef struct UBreakIterator {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct _NSGlyphNode {
} // Error Processing Struct Fields

typedef struct _NSGlyphTree {
} // Error Processing Struct Fields

typedef struct _NSLayoutNode {
} // Error Processing Struct Fields

typedef struct _NSLayoutTree {
} // Error Processing Struct Fields

typedef struct __lmFlags2 {
    BOOL glyphCause;
    BOOL layoutCause;
    BOOL delegateRespondsToTempAttrs;
    BOOL processingFirstTextViewVisible;
    BOOL temporarySpacingChange;
    BOOL alwaysDrawsActive;
    BOOL usesOldShowPackedGlyphs;
    BOOL drawsUnderlinesLikeWebKit;
    BOOL drawsDebugBaselines;
    BOOL mirrorsTextAlignment;
    BOOL forcesTrackingFloor;
    BOOL isLiveScrolling;
    BOOL hasCustomUnderlineColor;
    BOOL applicationPlatformContext;
    BOOL limitsLayoutForSuspiciousContents;
    BOOL delegateRespondsToRenderingColor;
    BOOL firstTextViewRespondsToRenderingColor;
    BOOL usesCustomBackgroundRectArray;
    BOOL usesDefaultHyphenation;
    BOOL reserved;
} __lmFlags2;

typedef struct _NSGlyphIndexForPointCache {
    CGPoint point;
    void textContainer;
    NSUInteger indexCache;
    CGFloat fractionCache;
} _NSGlyphIndexForPointCache;

typedef struct _NSStoredContainerUsage {
    CGRect field0;
    CGRect field1;
    ? field2;
    CGRect field3;
    _NSRange field4;
} _NSStoredContainerUsage;

typedef struct __lmFlags {
    BOOL containersAreFull;
    BOOL glyphsMightDrawOutsideLines;
    BOOL backgroundLayoutEnabled;
    BOOL resizingInProgress;
    BOOL allowScreenFonts;
    BOOL cachedRectArrayInUse;
    BOOL displayInvalidationInProgress;
    BOOL insertionPointNeedsUpdate;
    BOOL layoutManagerInDirtyList;
    BOOL originalFontOverride;
    BOOL showInvisibleCharacters;
    BOOL showControlCharacters;
    BOOL delegateRespondsToDidInvalidate;
    BOOL delegateRespondsToDidComplete;
    BOOL glyphFormat;
    BOOL textStorageRespondsToIsEditing;
    BOOL notifyEditedInProgress;
    BOOL containersChanged;
    BOOL isGeneratingGlyphs;
    BOOL hasNonGeneratedGlyphData;
    BOOL syncAlignmentToDirection;
    BOOL defaultAttachmentScaling;
    BOOL usesFontLeading;
    BOOL seenRightToLeft;
    BOOL ignoresViewTransformations;
    BOOL needToFlushGlyph;
    BOOL flipsIfNeeded;
    BOOL allowNonContig;
    BOOL useNonContig;
    BOOL inBackgroundLayout;
} __lmFlags;

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct __CTLine {
} // Error Processing Struct Fields

typedef struct __CTRun {
} // Error Processing Struct Fields

typedef struct _NSRunBlock {
    NSUInteger field0;
    unsigned char field1;
} _NSRunBlock;

typedef struct NSEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSEdgeInsets;

typedef struct __tcFlags {
    BOOL widthTracksTextView;
    BOOL heightTracksTextView;
    BOOL observingFrameChanges;
    BOOL lineBreakMode;
    BOOL oldAPI;
    BOOL _reserved;
} __tcFlags;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGFont {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct _NSAttributeInfo {
    unsigned int toUniCharEncoding;
    unsigned int codePageEncoding;
    id font;
    CGFloat NSFont;
    CGFloat fontSize;
    id kern;
    short paraStyle;
    BOOL NSMutableParagraphStyle;
    BOOL fontPalette;
    BOOL bold;
    BOOL italic;
    BOOL fontIsValid;
    BOOL paraStyleIsValid;
    BOOL kernIsValid;
    BOOL attributesSameAsBefore;
    BOOL multiByteEncoding;
    BOOL unicodeAlternativeLength;
    BOOL tabStopType;
    BOOL curAttributesNeedsCopying;
    BOOL paraStyleNeedsCopying;
} _NSAttributeInfo;

typedef struct RTFFont {
} // Error Processing Struct Fields

typedef struct RTFColor {
} // Error Processing Struct Fields

typedef struct RTFStyle {
} // Error Processing Struct Fields

typedef struct _NSRTFPriv {
    void reader;
    char * rtfInput;
    NSUInteger rtfInputLength;
    NSUInteger rtfInputLocation;
    NSUInteger rtfHeaderEndLocation;
    int pushedChar;
    int pushedClass;
    int pushedMajor;
    int pushedMinor;
    int pushedParam;
    char pushedTextBuf;
    int prevChar;
    int bumpLine;
    RTFFont fontList;
    RTFColor colorList;
    RTFStyle styleList;
    char * inputName;
    char * outputName;
    unk ccb;
    unk readHook;
    unk msgProc;
    unk panicProc;
    char textBuf;
    int textLen;
    int class;
    int major;
    int minor;
    int param;
    NSInteger lineNum;
    NSInteger linePos;
    int groupState;
} _NSRTFPriv;

typedef struct __CTRunDelegate {
} // Error Processing Struct Fields

