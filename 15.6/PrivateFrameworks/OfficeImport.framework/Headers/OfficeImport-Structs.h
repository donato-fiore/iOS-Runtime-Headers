typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct _xmlNode {
} // Error Processing Struct Fields

typedef struct _xmlAttr {
} // Error Processing Struct Fields

typedef struct CsString {
    unk field0;
    unsigned short field1;
    unsigned int field2;
    unsigned int field3;
} CsString;

typedef struct OcText {
    unk field0;
    int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    char * field5;
    char * field6;
    BOOL field7;
} OcText;

typedef struct SsrwOOStream {
    unk field0;
} SsrwOOStream;

typedef struct OcBinaryData {
    unk field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    char * field5;
    BOOL field6;
    SsrwOOStream field7;
} OcBinaryData;

typedef struct ? {
    BOOL sfr_flags;
    BOOL sfr_pathState;
    BOOL sfr_calculatedLengths;
    BOOL sfr_unused;
} ?;

typedef struct WrdDateTime {
    unk field0;
    int field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
    unsigned short field5;
    unsigned short field6;
} WrdDateTime;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct TSUFlushableObjectInfo {
    id field0;
    int field1;
    int field2;
    int field3;
    unsigned int field4;
} TSUFlushableObjectInfo;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFDateFormatter {
} // Error Processing Struct Fields

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct __CFBundle {
} // Error Processing Struct Fields

typedef struct __CFNumberFormatter {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct timeval {
    NSInteger tv_sec;
    int tv_usec;
} timeval;

typedef struct TSUOpstat_s {
    BOOL running;
    NSUInteger count;
    timeval min_time;
    timeval max_time;
    timeval total_time;
    timeval last_time;
} TSUOpstat_s;

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::shared_ptr<TSUStringChunk> *, std::allocator<std::shared_ptr<TSUStringChunk>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<TSUStringChunk> *, std::allocator<std::shared_ptr<TSUStringChunk>>>;

typedef struct vector<std::shared_ptr<TSUStringChunk>, std::allocator<std::shared_ptr<TSUStringChunk>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<TSUStringChunk> *, std::allocator<std::shared_ptr<TSUStringChunk>>> __end_cap_;
} vector<std::shared_ptr<TSUStringChunk>, std::allocator<std::shared_ptr<TSUStringChunk>>>;

typedef struct CGPath {
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

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct PATHSEGMENT {
    BOOL field0;
    BOOL field1;
    CGPoint field2;
} PATHSEGMENT;

typedef struct vector<_NSRange, std::allocator<_NSRange>> {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct _CCCryptor {
} // Error Processing Struct Fields

typedef struct _xmlDoc {
} // Error Processing Struct Fields

typedef struct _xmlTextReader {
} // Error Processing Struct Fields

typedef struct CGDataProvider {
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

typedef struct gzFile_s {
    unsigned int field0;
    char * field1;
    NSInteger field2;
} gzFile_s;

typedef struct SFUZipEndOfCentralDirectory {
    NSUInteger field0;
    NSInteger field1;
    NSInteger field2;
} SFUZipEndOfCentralDirectory;

typedef struct internal_state {
} // Error Processing Struct Fields

typedef struct z_stream_s {
    char * next_in;
    unsigned int avail_in;
    NSUInteger total_in;
    char * next_out;
    unsigned int avail_out;
    NSUInteger total_out;
    char * msg;
    internal_state state;
    unk zalloc;
    unk zfree;
    void opaque;
    int data_type;
    NSUInteger adler;
    NSUInteger reserved;
} z_stream_s;

typedef struct vector<CGRect, std::allocator<CGRect>> {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct tsuSaPage {
    unk field0;
} tsuSaPage;

typedef struct UUIDData<TSP::UUIDData> {
    unk field0;
    unsigned char field1;
    ? field2;
    ? field3;
} UUIDData<TSP::UUIDData>;

typedef struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> {
    void __value_;
} __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>>;

typedef struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> {
    void __begin_;
    void __end_;
    __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> __end_cap_;
} vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::allocator<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *>>> {
    __hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::allocator<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<TSUUUID>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<TSUUUID>>;

typedef struct __compressed_pair<float, std::equal_to<TSU::UUIDData<TSP::UUIDData>>> {
    float __value_;
} __compressed_pair<float, std::equal_to<TSU::UUIDData<TSP::UUIDData>>>;

typedef struct __hash_table<TSU::UUIDData<TSP::UUIDData>, std::hash<TSUUUID>, std::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::allocator<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<TSUUUID>> __p2_;
    __compressed_pair<float, std::equal_to<TSU::UUIDData<TSP::UUIDData>>> __p3_;
} __hash_table<TSU::UUIDData<TSP::UUIDData>, std::hash<TSUUUID>, std::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::allocator<TSU::UUIDData<TSP::UUIDData>>>;

typedef struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::hash<TSUUUID>, std::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> {
    __hash_table<TSU::UUIDData<TSP::UUIDData>, std::hash<TSUUUID>, std::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> __table_;
} unordered_set<TSU::UUIDData<TSP::UUIDData>, std::hash<TSUUUID>, std::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::allocator<TSU::UUIDData<TSP::UUIDData>>>;

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CsColour {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
} CsColour;

typedef struct RGB {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
} RGB;

typedef struct AdjustedColor {
    unsigned char field0;
    unsigned char field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
} AdjustedColor;

typedef struct Data {
    int field0;
    long field1;
    RGB field2;
    unsigned short field3;
    unsigned short field4;
    AdjustedColor field5;
} Data;

typedef struct EshColor {
    Data field0;
} EshColor;

typedef struct _tagOctree {
    _tagOctreeNode field0;
    unsigned short field1;
    unsigned short field2;
    _tagRgbQuad field3;
    _tagLevelItem field4;
} _tagOctree;

typedef struct _tagOctreeNode {
} // Error Processing Struct Fields

typedef struct _tagRgbQuad {
    unsigned char field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
} _tagRgbQuad;

typedef struct _tagLevelItem {
} // Error Processing Struct Fields

typedef struct TCDumpEnumPair {
    int field0;
    id field1;
} TCDumpEnumPair;

typedef struct TCEnumerationStruct {
    int field0;
    id field1;
} TCEnumerationStruct;

typedef struct TCXmlEnumDescription {
    int field0;
    char * field1;
} TCXmlEnumDescription;

typedef struct _xmlNs {
} // Error Processing Struct Fields

typedef struct TCFontStyling {
    int fontClass;
    unsigned int stringEncoding;
    char weight;
    BOOL italic;
    int width;
} TCFontStyling;

typedef struct _xmlTextWriter {
} // Error Processing Struct Fields

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct CsRect<int> {
    int field0;
} CsRect<int>;

typedef struct OADAdjustCoord {
    BOOL isFormulaResult;
    int value;
} OADAdjustCoord;

typedef struct OADAdjustPoint {
    OADAdjustCoord x;
    OADAdjustCoord y;
} OADAdjustPoint;

typedef struct CsPoint<int> {
    int field0;
} CsPoint<int>;

typedef struct EshHeader {
    int field0;
    unsigned int field1;
    short field2;
    unsigned short field3;
    unsigned char field4;
} EshHeader;

typedef struct UID {
    unsigned char field0;
} UID;

typedef struct EshBlip {
    unk field0;
    unsigned short field1;
    EshHeader field2;
    UID field3;
} EshBlip;

typedef struct EshBSE {
} // Error Processing Struct Fields

typedef struct EshContent {
    unk field0;
} EshContent;

typedef struct CsData {
    unsigned int field0;
    char * field1;
} CsData;

typedef struct OABGradientStop {
    id field0;
    float field1;
} OABGradientStop;

typedef struct EshContentData {
} // Error Processing Struct Fields

typedef struct EshFill {
    unk field0;
    unsigned short field1;
    EshContentData field2;
} EshFill;

typedef struct EshShape {
} // Error Processing Struct Fields

typedef struct _SsrwOO_GUID {
    unsigned int field0;
    unsigned short field1;
    unsigned short field2;
    unsigned char field3;
} _SsrwOO_GUID;

typedef struct _Storage {
} // Error Processing Struct Fields

typedef struct SsrwOOStorage {
    _Storage field0;
    unsigned short field1;
} SsrwOOStorage;

typedef struct EshShapeProperties {
} // Error Processing Struct Fields

typedef struct EshPath {
    unk field0;
    unsigned short field1;
    EshContentData field2;
} EshPath;

typedef struct EshComputedValue {
    BOOL field0;
    int field1;
} EshComputedValue;

typedef struct EshStroke {
    unk field0;
    unsigned short field1;
    EshContentData field2;
} EshStroke;

typedef struct EshTextBox {
    unk field0;
    unsigned short field1;
    EshContentData field2;
} EshTextBox;

typedef struct OADFormulaArg {
    int type;
    int value;
} OADFormulaArg;

typedef struct OADTMatrixPos {
    int field0;
    int field1;
} OADTMatrixPos;

typedef struct EshObject {
    unk field0;
    unsigned short field1;
} EshObject;

typedef struct EshObjectFactory {
    unk field0;
    BOOL field1;
} EshObjectFactory;

typedef struct OcReader {
    unk field0;
    EshObjectFactory field1;
} OcReader;

typedef struct OcWriter {
    unk field0;
} OcWriter;

typedef struct OAVGradientStop {
    id field0;
    float field1;
} OAVGradientStop;

typedef struct OAVTextBoxInsets {
    float field0;
    float field1;
    float field2;
    float field3;
} OAVTextBoxInsets;

typedef struct ODIHRange {
    float mMid;
    float mLength;
} ODIHRange;

typedef struct ODILayoutNodeState {
    id field0;
    BOOL field1;
} ODILayoutNodeState;

typedef struct ODIPointIteratorState {
    int field0;
    unsigned int field1;
    int field2;
    int field3;
    id field4;
} ODIPointIteratorState;

typedef struct OADCachedTextStyleData {
    BOOL verticalAlign;
    short lineSpacing;
    short beforeSpacing;
    short afterSpacing;
    short leftMargin;
    short rightMargin;
    short indent;
    short defaultTab;
    BOOL horizontalAlign;
    unsigned short fontFaceIndex;
    short fontSize;
    unsigned short fontColorIndex;
    BOOL bold;
    BOOL italic;
    BOOL underline;
    BOOL format;
    BOOL kerning;
    BOOL strikethrough;
    BOOL caps;
} OADCachedTextStyleData;

typedef struct OcBinaryReader {
    unk field0;
} OcBinaryReader;

typedef struct OCCEncryptionInfoReader {
    unk field0;
} OCCEncryptionInfoReader;

typedef struct OCCCryptoKey {
    unk field0;
    char * field1;
    char * field2;
    char * field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
} OCCCryptoKey;

typedef struct OCCBinaryStreamer {
    unk field0;
    OCCCryptoKey field1;
    char * field2;
} OCCBinaryStreamer;

typedef struct CGShading {
} // Error Processing Struct Fields

typedef struct CGFunction {
} // Error Processing Struct Fields

typedef struct MFPColorMatrix {
    float field0;
} MFPColorMatrix;

typedef struct _SsrwPropertyStorage {
} // Error Processing Struct Fields

typedef struct _SSRW_BLOB {
    unsigned int cbSize;
    char * pData;
} _SSRW_BLOB;

typedef struct _SSRW_FILETIME {
    unsigned int dwLowDateTime;
    unsigned int dwHighDateTime;
} _SSRW_FILETIME;

typedef struct _SSRW_CLIPDATA {
} // Error Processing Struct Fields

typedef struct _SsrwPropVariant {
} // Error Processing Struct Fields

typedef struct _RootStorage {
} // Error Processing Struct Fields

typedef struct _SSRW_GUID {
    unsigned int field0;
    unsigned short field1;
    unsigned short field2;
    unsigned char field3;
} _SSRW_GUID;

typedef struct _StgInfo {
    unsigned short field0;
    int field1;
    unsigned int field2;
    NSUInteger field3;
    NSInteger field4;
    NSInteger field5;
    int field6;
    _SSRW_GUID field7;
} _StgInfo;

typedef struct _Stream {
} // Error Processing Struct Fields

typedef struct OCCStreamer {
    unk field0;
    OCCCryptoKey field1;
    char * field2;
} OCCStreamer;

typedef struct XlChartTextFrame {
} // Error Processing Struct Fields

typedef struct XlChartLineStyle {
    unk field0;
    CsColour field1;
    int field2;
    int field3;
    unsigned short field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    float field8;
    int field9;
} XlChartLineStyle;

typedef struct XlChartPlotAxis {
} // Error Processing Struct Fields

typedef struct XlChartSeriesFormat {
} // Error Processing Struct Fields

typedef struct XlChartFillStyle {
    unk field0;
    CsColour field1;
    CsColour field2;
    unsigned short field3;
    unsigned short field4;
    unsigned short field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
} XlChartFillStyle;

typedef struct XlHeader {
    unsigned int field0;
    short field1;
    unsigned char field2;
} XlHeader;

typedef struct XlChartPicF {
    unk field0;
    XlHeader field1;
    CGFloat field2;
    int field3;
    int field4;
    int field5;
    unsigned char field6;
} XlChartPicF;

typedef struct XlChartMarkerStyle {
    unk field0;
    int field1;
    CsColour field2;
    CsColour field3;
    unsigned int field4;
    unsigned short field5;
    unsigned short field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
} XlChartMarkerStyle;

typedef struct XlChartFrameType {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct XlChart3D {
    unk field0;
    XlHeader field1;
    short field2;
    short field3;
    short field4;
    short field5;
    short field6;
    short field7;
    short field8;
} XlChart3D;

typedef struct EDValue {
    int type;
    unk ;
    BOOL boolean;
    CGFloat number;
    char * string;
    NSUInteger stringIndex;
    int error;
} EDValue;

typedef struct CHDDataPoint {
    NSUInteger index;
    EDValue value;
    NSUInteger contentFormatId;
} CHDDataPoint;

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct EDToken {
    unsigned short field0;
    unsigned int field1;
} EDToken;

typedef struct XlPtg {
    char * field0;
    int field1;
    unsigned int field2;
    unsigned short field3;
} XlPtg;

typedef struct EDCellHeader {
    unsigned int field0;
    unsigned int field1;
} EDCellHeader;

typedef struct XlXf {
    unk field0;
    XlHeader field1;
    short field2;
    short field3;
    short field4;
    int field5;
    int field6;
    unsigned char field7;
    unsigned char field8;
    int field9;
    int field10;
    int field11;
    int field12;
    int field13;
    int field14;
    int field15;
    int field16;
    unsigned char field17;
    unsigned char field18;
    unsigned char field19;
    unsigned char field20;
    unsigned char field21;
    unsigned char field22;
    unsigned char field23;
    BOOL field24;
    BOOL field25;
    BOOL field26;
    BOOL field27;
    BOOL field28;
    BOOL field29;
    BOOL field30;
    BOOL field31;
    BOOL field32;
    BOOL field33;
    BOOL field34;
    BOOL field35;
    BOOL field36;
    BOOL field37;
    BOOL field38;
} XlXf;

typedef struct XlDXfAlign {
    int field0;
    int field1;
    short field2;
    short field3;
    BOOL field4;
    BOOL field5;
    int field6;
} XlDXfAlign;

typedef struct XlDXfUserFmt {
} // Error Processing Struct Fields

typedef struct XlDXfFont {
} // Error Processing Struct Fields

typedef struct XlDXf {
} // Error Processing Struct Fields

typedef struct XlString {
} // Error Processing Struct Fields

typedef struct XlFormulaInfo {
} // Error Processing Struct Fields

typedef struct XlCell {
    unk field0;
    unsigned short field1;
    short field2;
    short field3;
    int field4;
    CGFloat field5;
    XlString field6;
    int field7;
    XlFormulaInfo field8;
    BOOL field9;
    BOOL field10;
    BOOL field11;
} XlCell;

typedef struct EDRowInfo {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned short field5;
    unsigned char field6;
    BOOL field7;
    BOOL field8;
} EDRowInfo;

typedef struct XlCf {
} // Error Processing Struct Fields

typedef struct XlFormat {
} // Error Processing Struct Fields

typedef struct XlFont {
} // Error Processing Struct Fields

typedef struct XLFormulaStream {
    unk field0;
} XLFormulaStream;

typedef struct XlRef {
    unsigned short field0;
    unsigned short field1;
    short field2;
    short field3;
    BOOL field4;
} XlRef;

typedef struct XlHLink {
} // Error Processing Struct Fields

typedef struct XlHLinkToolTip {
} // Error Processing Struct Fields

typedef struct XlName {
} // Error Processing Struct Fields

typedef struct XlWindow2 {
    unk field0;
    XlHeader field1;
    int field2;
    short field3;
    short field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
    BOOL field10;
    BOOL field11;
    BOOL field12;
    BOOL field13;
    BOOL field14;
    BOOL field15;
    BOOL field16;
    unsigned short field17;
    short field18;
} XlWindow2;

typedef struct XlScl {
} // Error Processing Struct Fields

typedef struct XlPane {
} // Error Processing Struct Fields

typedef struct XlSelection {
} // Error Processing Struct Fields

typedef struct XlSheetPresentation {
    unk field0;
    XlWindow2 field1;
    XlScl field2;
    XlPane field3;
    XlSelection field4;
} XlSheetPresentation;

typedef struct XlDXfProtect {
    BOOL field0;
    BOOL field1;
} XlDXfProtect;

typedef struct XlEshObjectFactory {
    unk field0;
    BOOL field1;
} XlEshObjectFactory;

typedef struct XlObjectFactory {
    unk field0;
    XlEshObjectFactory field1;
} XlObjectFactory;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, unsigned long>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>>;

typedef struct __tree<std::__value_type<int, unsigned long>, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>, std::allocator<std::__value_type<int, unsigned long>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, unsigned long>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>> __pair3_;
} __tree<std::__value_type<int, unsigned long>, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>, std::allocator<std::__value_type<int, unsigned long>>>;

typedef struct map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>> {
    __tree<std::__value_type<int, unsigned long>, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>, std::allocator<std::__value_type<int, unsigned long>>> __tree_;
} map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>, true>>;

typedef struct __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, unsigned long>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, unsigned long>>>;

typedef struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> {
    __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, unsigned long>>> __tree_;
} map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>>;

typedef struct EDCellAnchorMarker {
    int columnIndex;
    float columnAdjustment;
    int rowIndex;
    float rowAdjustment;
} EDCellAnchorMarker;

typedef struct EDAreaReference {
    int firstRow;
    int firstColumn;
    int lastRow;
    int lastColumn;
} EDAreaReference;

typedef struct EFRefTok {
    int type;
    unsigned int dataSize;
    unsigned char data;
} EFRefTok;

typedef struct EFStrTok {
    id field0;
    int field1;
    ? field2;
    ? field3;
    ? field4;
} EFStrTok;

typedef struct EDBuildablePtg {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, unsigned long>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, unsigned long>, std::less<long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, unsigned long>, std::less<long>, true>>;

typedef struct __tree<std::__value_type<long, unsigned long>, std::__map_value_compare<long, std::__value_type<long, unsigned long>, std::less<long>, true>, std::allocator<std::__value_type<long, unsigned long>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, unsigned long>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, unsigned long>, std::less<long>, true>> __pair3_;
} __tree<std::__value_type<long, unsigned long>, std::__map_value_compare<long, std::__value_type<long, unsigned long>, std::less<long>, true>, std::allocator<std::__value_type<long, unsigned long>>>;

typedef struct map<long, unsigned long, std::less<long>, std::allocator<std::pair<const long, unsigned long>>> {
    __tree<std::__value_type<long, unsigned long>, std::__map_value_compare<long, std::__value_type<long, unsigned long>, std::less<long>, true>, std::allocator<std::__value_type<long, unsigned long>>> __tree_;
} map<long, unsigned long, std::less<long>, std::allocator<std::pair<const long, unsigned long>>>;

typedef struct WrdAnnotationReferenceDescriptor {
} // Error Processing Struct Fields

typedef struct WrdAnnotation {
} // Error Processing Struct Fields

typedef struct WrdBorder {
    unk field0;
    CsColour field1;
    int field2;
    int field3;
    BOOL field4;
    BOOL field5;
    unsigned char field6;
    unsigned char field7;
} WrdBorder;

typedef struct WrdCharacterPropertiesOverridden {
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
    BOOL field10;
    BOOL field11;
    BOOL field12;
    BOOL field13;
    BOOL field14;
    BOOL field15;
    BOOL field16;
    BOOL field17;
    BOOL field18;
    BOOL field19;
    BOOL field20;
    BOOL field21;
    BOOL field22;
    BOOL field23;
    BOOL field24;
    BOOL field25;
    BOOL field26;
    BOOL field27;
    BOOL field28;
    BOOL field29;
    BOOL field30;
    BOOL field31;
    BOOL field32;
    BOOL field33;
    BOOL field34;
    BOOL field35;
    BOOL field36;
    BOOL field37;
    BOOL field38;
    BOOL field39;
    BOOL field40;
    BOOL field41;
    BOOL field42;
    BOOL field43;
    BOOL field44;
    BOOL field45;
    BOOL field46;
    BOOL field47;
    BOOL field48;
    BOOL field49;
    BOOL field50;
    BOOL field51;
    BOOL field52;
    BOOL field53;
    BOOL field54;
    BOOL field55;
    BOOL field56;
    BOOL field57;
    BOOL field58;
    BOOL field59;
    BOOL field60;
    BOOL field61;
    BOOL field62;
    BOOL field63;
    BOOL field64;
    BOOL field65;
    BOOL field66;
    BOOL field67;
    BOOL field68;
    BOOL field69;
    BOOL field70;
    BOOL field71;
    BOOL field72;
    BOOL field73;
    BOOL field74;
    BOOL field75;
    BOOL field76;
    BOOL field77;
    BOOL field78;
    BOOL field79;
    BOOL field80;
    BOOL field81;
    BOOL field82;
    BOOL field83;
    BOOL field84;
    BOOL field85;
    BOOL field86;
    BOOL field87;
    BOOL field88;
    BOOL field89;
    BOOL field90;
    BOOL field91;
    BOOL field92;
    BOOL field93;
    BOOL field94;
    BOOL field95;
    BOOL field96;
    BOOL field97;
    BOOL field98;
    BOOL field99;
    BOOL field100;
    BOOL field101;
    BOOL field102;
    BOOL field103;
    BOOL field104;
    BOOL field105;
    BOOL field106;
    BOOL field107;
} WrdCharacterPropertiesOverridden;

typedef struct WrdShading {
    unk field0;
    int field1;
    BOOL field2;
    CsColour field3;
    CsColour field4;
    BOOL field5;
    int field6;
    int field7;
} WrdShading;

typedef struct WrdCharacterProperties {
} // Error Processing Struct Fields

typedef struct WrdCharacterTextRun {
} // Error Processing Struct Fields

typedef struct WrdDOPTypography {
} // Error Processing Struct Fields

typedef struct WrdDrawingObjectGrid {
} // Error Processing Struct Fields

typedef struct WrdAutoSummaryInfo {
} // Error Processing Struct Fields

typedef struct WrdDocumentProperties {
} // Error Processing Struct Fields

typedef struct WrdFieldDescriptor {
} // Error Processing Struct Fields

typedef struct WrdFieldPosition {
    unk field0;
    int field1;
    WrdFieldDescriptor field2;
} WrdFieldPosition;

typedef struct WrdFontFamilyName {
    unk field0;
    CsString field1;
    CsString field2;
    int field3;
    char * field4;
    char * field5;
    unsigned short field6;
    BOOL field7;
    unsigned char field8;
    unsigned char field9;
    unsigned char field10;
} WrdFontFamilyName;

typedef struct WrdParagraphProperties {
} // Error Processing Struct Fields

typedef struct WrdListLevelFormat {
} // Error Processing Struct Fields

typedef struct WrdListLevelFormatOverride {
} // Error Processing Struct Fields

typedef struct WrdObject {
} // Error Processing Struct Fields

typedef struct WrdFileShapeAddress {
    unk field0;
    int field1;
    int field2;
    int field3;
    int field4;
    int field5;
    int field6;
    int field7;
    int field8;
    int field9;
    int field10;
    BOOL field11;
    BOOL field12;
    BOOL field13;
    int field14;
} WrdFileShapeAddress;

typedef struct EshContentProperties {
    unk field0;
    unsigned short field1;
    EshContentData field2;
} EshContentProperties;

typedef struct WrdParagraphTextRun {
} // Error Processing Struct Fields

typedef struct WrdEshObjectFactory {
    unk field0;
    BOOL field1;
} WrdEshObjectFactory;

typedef struct WrdTextRun {
    unk field0;
    int field1;
    unsigned int field2;
    unsigned int field3;
} WrdTextRun;

typedef struct WBTextBoxReaderInfo {
    id field0;
    unsigned short field1;
} WBTextBoxReaderInfo;

typedef struct WrdFieldPositionTable {
} // Error Processing Struct Fields

typedef struct WrdSectionProperties {
} // Error Processing Struct Fields

typedef struct WrdSectionTextRun {
} // Error Processing Struct Fields

typedef struct PptAnimColorBehavior_Color_Struct {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
} PptAnimColorBehavior_Color_Struct;

typedef struct PptTextAutoNumberScheme {
    BOOL field0;
    short field1;
} PptTextAutoNumberScheme;

typedef struct PptParaProperty9 {
    ? field0;
    short field1;
    BOOL field2;
    PptTextAutoNumberScheme field3;
} PptParaProperty9;

typedef struct PptColor {
    CsColour field0;
    int field1;
} PptColor;

typedef struct PptCharProperty {
    ? field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
    BOOL field10;
    BOOL field11;
    BOOL field12;
    unsigned short field13;
    unsigned short field14;
    unsigned short field15;
    unsigned short field16;
    unsigned short field17;
    PptColor field18;
    short field19;
} PptCharProperty;

typedef struct SpellingInfo {
    BOOL field0;
    BOOL field1;
    BOOL field2;
} SpellingInfo;

typedef struct PptSpecialInfo {
    ? field0;
    SpellingInfo field1;
    int field2;
    int field3;
} PptSpecialInfo;

typedef struct PptCharRun {
    int field0;
    PptCharProperty field1;
} PptCharRun;

typedef struct PptColorSchemeAtom {
    unk field0;
    unsigned short field1;
    EshHeader field2;
    unk field3;
    int field4;
    BOOL field5;
    unk field6;
    CsColour field7;
    CsColour field8;
    CsColour field9;
    CsColour field10;
    CsColour field11;
    CsColour field12;
    CsColour field13;
    CsColour field14;
} PptColorSchemeAtom;

typedef struct PptHeadersFootersAtom {
    unk field0;
    unsigned short field1;
    EshHeader field2;
    unk field3;
    int field4;
    BOOL field5;
    int field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
    BOOL field10;
    BOOL field11;
    BOOL field12;
} PptHeadersFootersAtom;

typedef struct PptRecolorSpec {
    unk field0;
    EshColor field1;
    EshColor field2;
    BOOL field3;
    BOOL field4;
} PptRecolorSpec;

typedef struct PptOEPlaceholderAtom {
    unk field0;
    unsigned short field1;
    EshHeader field2;
    unk field3;
    int field4;
    BOOL field5;
    int field6;
    BOOL field7;
    BOOL field8;
} PptOEPlaceholderAtom;

typedef struct PptTextMasterStyleAtom {
} // Error Processing Struct Fields

typedef struct PptTextMasterStyle9Atom {
} // Error Processing Struct Fields

typedef struct PBReaderMasterStyleInfo {
    PptTextMasterStyleAtom field0;
    PptTextMasterStyle9Atom field1;
} PBReaderMasterStyleInfo;

typedef struct PBTextFormatProgTagInfo {
    unsigned short field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
} PBTextFormatProgTagInfo;

typedef struct PptEshObjectFactory {
} // Error Processing Struct Fields

typedef struct PptObjectFactory {
    unk field0;
    PptEshObjectFactory field1;
} PptObjectFactory;

typedef struct PptSSSlideInfoAtom {
    unk field0;
    unsigned short field1;
    EshHeader field2;
    unk field3;
    int field4;
    BOOL field5;
    int field6;
    int field7;
    unsigned char field8;
    int field9;
    unsigned short field10;
    int field11;
} PptSSSlideInfoAtom;

typedef struct __CFAttributedString {
} // Error Processing Struct Fields

typedef struct PptTxInteracInfoAtom {
    unk field0;
    unsigned short field1;
    EshHeader field2;
    unk field3;
    int field4;
    BOOL field5;
    int field6;
    int field7;
} PptTxInteracInfoAtom;

typedef struct PptTextHeaderAtom {
    unk field0;
    unsigned short field1;
    EshHeader field2;
    unk field3;
    int field4;
    BOOL field5;
    int field6;
} PptTextHeaderAtom;

typedef struct CGDataConsumer {
} // Error Processing Struct Fields

