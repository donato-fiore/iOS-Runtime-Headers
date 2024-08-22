typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

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

typedef struct _LXLexicon {
} // Error Processing Struct Fields

typedef struct __Mecabra {
} // Error Processing Struct Fields

typedef struct __MecabraContext {
} // Error Processing Struct Fields

typedef struct CGVector {
    CGFloat dx;
    CGFloat dy;
} CGVector;

typedef struct CHCodeMap {
    char * field0;
    NSUInteger field1;
    unsigned int field2;
    unsigned int field3;
} CHCodeMap;

typedef struct CHNeuralNetwork {
    unk field0;
    BOOL field1;
    CHCodeMap field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    id field7;
    id field8;
    CGRect field9;
} CHNeuralNetwork;

typedef struct VariantMap {
    int field0;
    int field1;
    int field2;
    int field3;
    int field4;
    NSUInteger field5;
} VariantMap;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::set<long>, std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::less<std::set<long>>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::set<long>, std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::less<std::set<long>>, true>>;

typedef struct __tree<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::__map_value_compare<std::set<long>, std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::less<std::set<long>>, true>, std::allocator<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::set<long>, std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::less<std::set<long>>, true>> __pair3_;
} __tree<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::__map_value_compare<std::set<long>, std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::less<std::set<long>>, true>, std::allocator<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>>>;

typedef struct map<std::set<long>, std::vector<CHCandidateResult>, std::less<std::set<long>>, std::allocator<std::pair<const std::set<long>, std::vector<CHCandidateResult>>>> {
    __tree<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::__map_value_compare<std::set<long>, std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::less<std::set<long>>, true>, std::allocator<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>>> __tree_;
} map<std::set<long>, std::vector<CHCandidateResult>, std::less<std::set<long>>, std::allocator<std::pair<const std::set<long>, std::vector<CHCandidateResult>>>>;

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct __compressed_pair<const void **, std::allocator<const void *>> {
    void field0;
} __compressed_pair<const void **, std::allocator<const void *>>;

typedef struct vector<const void *, std::allocator<const void *>> {
    void field0;
    void field1;
    __compressed_pair<const void **, std::allocator<const void *>> field2;
} vector<const void *, std::allocator<const void *>>;

typedef struct CHCandidateResult {
    unsigned int field0;
    float field1;
} CHCandidateResult;

typedef struct _LXCursor {
} // Error Processing Struct Fields

typedef struct __compressed_pair<long *, std::allocator<long>> {
    NSInteger field0;
} __compressed_pair<long *, std::allocator<long>>;

typedef struct vector<long, std::allocator<long>> {
    NSInteger field0;
    NSInteger field1;
    __compressed_pair<long *, std::allocator<long>> field2;
} vector<long, std::allocator<long>>;

typedef struct vector<CHCandidateResult, std::allocator<CHCandidateResult>> {
} // Error Processing Struct Fields

typedef struct NetworkEdge {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    CGFloat field4;
    CGFloat field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
} NetworkEdge;

typedef struct __long {
    char * field0;
    NSUInteger field1;
    NSUInteger field2;
} __long;

typedef struct ? {
    CGFloat strokeClutterFilteringDuration;
    CGFloat strokeClassificationDuration;
    CGFloat groupingDuration;
    CGFloat recognitionDuration;
    CGFloat totalDuration;
} ?;

typedef struct __short {
    char field0;
    ? field1;
} __short;

typedef struct __raw {
    NSUInteger field0;
} __raw;

typedef struct __rep {
    unk field0;
    __long field1;
    __short field2;
    __raw field3;
} __rep;

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep field0;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> field0;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned int>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, unsigned int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned int>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned int>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, unsigned int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned int>>>;

typedef struct map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> {
    __tree<std::__value_type<unsigned int, unsigned int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned int>>> __tree_;
} map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<long>>;

typedef struct __tree<long, std::less<long>, std::allocator<long>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<long>> __pair3_;
} __tree<long, std::less<long>, std::allocator<long>>;

typedef struct set<long, std::less<long>, std::allocator<long>> {
    __tree<long, std::less<long>, std::allocator<long>> __tree_;
} set<long, std::less<long>, std::allocator<long>>;

typedef struct vector<CGPoint, std::allocator<CGPoint>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> {
    void __value_;
} __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>>;

typedef struct vector<std::vector<double>, std::allocator<std::vector<double>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> __end_cap_;
} vector<std::vector<double>, std::allocator<std::vector<double>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<unsigned long>>;

typedef struct vector<bool, std::allocator<bool>> {
    NSUInteger __begin_;
    NSUInteger __size_;
    __compressed_pair<unsigned long, std::allocator<unsigned long>> __cap_alloc_;
} vector<bool, std::allocator<bool>>;

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct Matrix<double> {
    unk _vptr$Matrix;
    CGFloat _data;
    unsigned int _w;
    unsigned int _h;
} Matrix<double>;

typedef struct __compressed_pair<int *, std::allocator<int>> {
    int __value_;
} __compressed_pair<int *, std::allocator<int>>;

typedef struct vector<int, std::allocator<int>> {
    int __begin_;
    int __end_;
    __compressed_pair<int *, std::allocator<int>> __end_cap_;
} vector<int, std::allocator<int>>;

typedef struct CHDrawingStrokes {
    vector<std::vector<double>, std::allocator<std::vector<double>>> strokeBounds;
    vector<bool, std::allocator<bool>> strokeBoundsValidity;
    vector<double, std::allocator<double>> startTimes;
    vector<double, std::allocator<double>> endTimes;
    vector<std::vector<double>, std::allocator<std::vector<double>>> strokes;
    NSInteger currentStrokeIndex;
    unsigned int mSize;
    Matrix<double> bitmap;
    CGFloat lineHeight;
    vector<int, std::allocator<int>> sparseBitmap;
} CHDrawingStrokes;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct Matrix<float> {
    unk field0;
    float field1;
    unsigned int field2;
    unsigned int field3;
} Matrix<float>;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::map<long, long> *, std::allocator<std::map<long, long>>> {
    void __value_;
} __compressed_pair<std::map<long, long> *, std::allocator<std::map<long, long>>>;

typedef struct vector<std::map<long, long>, std::allocator<std::map<long, long>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::map<long, long> *, std::allocator<std::map<long, long>>> __end_cap_;
} vector<std::map<long, long>, std::allocator<std::map<long, long>>>;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct vector<CGVector, std::allocator<CGVector>> {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> {
} // Error Processing Struct Fields

typedef struct vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> {
    __compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> __begin_;
} vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>>;

typedef struct CVNLPTextDecodingPruningPolicy {
    NSInteger strategy;
    BOOL shouldSort;
    float threshold;
    unsigned int maxNumberOfCandidates;
} CVNLPTextDecodingPruningPolicy;

typedef struct pair<double, double> {
    CGFloat field0;
    CGFloat field1;
} pair<double, double>;

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct __CTParagraphStyle {
} // Error Processing Struct Fields

typedef struct CHLineSegment {
    CGPoint field0;
    CGPoint field1;
} CHLineSegment;

typedef struct CHTextLineStraighteningResult {
    id field0;
    id field1;
    id field2;
} CHTextLineStraighteningResult;

typedef struct BoundingBox {
} // Error Processing Struct Fields

typedef struct vector<CoreHandwriting::BoundingBox, std::allocator<CoreHandwriting::BoundingBox>> {
} // Error Processing Struct Fields

typedef struct _CFBurstTrie {
} // Error Processing Struct Fields

typedef struct _LXEntry {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned long>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned long>>>;

typedef struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> {
    __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned long>>> __tree_;
} map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, int>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, int>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, int>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, int>>>;

typedef struct map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> {
    __tree<std::__value_type<unsigned int, int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, int>>> __tree_;
} map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>>;

typedef struct vector<CGRect, std::allocator<CGRect>> {
} // Error Processing Struct Fields

typedef struct CHFastGroupingCluster {
} // Error Processing Struct Fields

typedef struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::pair<std::string, double>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::pair<std::string, double>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<std::string, double>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<std::string, double>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::pair<std::string, double>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<std::string, double>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::pair<std::string, double>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::pair<std::string, double>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<std::string, double>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::pair<std::string, double>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<std::string, double>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::pair<std::string, double>>>>;

typedef struct map<std::string, std::pair<std::string, double>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<std::string, double>>>> {
    __tree<std::__value_type<std::string, std::pair<std::string, double>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<std::string, double>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::pair<std::string, double>>>> __tree_;
} map<std::string, std::pair<std::string, double>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<std::string, double>>>>;

