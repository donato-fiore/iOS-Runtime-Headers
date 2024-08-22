typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct vImage_Buffer {
    void data;
    NSUInteger height;
    NSUInteger width;
    NSUInteger rowBytes;
} vImage_Buffer;

typedef struct CRImageBuffer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CRImageBuffer *, std::default_delete<CRImageBuffer>> {
    CRImageBuffer field0;
} __compressed_pair<CRImageBuffer *, std::default_delete<CRImageBuffer>>;

typedef struct unique_ptr<CRImageBuffer, std::default_delete<CRImageBuffer>> {
    __compressed_pair<CRImageBuffer *, std::default_delete<CRImageBuffer>> field0;
} unique_ptr<CRImageBuffer, std::default_delete<CRImageBuffer>>;

typedef struct __compressed_pair<std::unique_ptr<CRImageBuffer> *, std::allocator<std::unique_ptr<CRImageBuffer>>> {
    void field0;
} __compressed_pair<std::unique_ptr<CRImageBuffer> *, std::allocator<std::unique_ptr<CRImageBuffer>>>;

typedef struct vector<std::unique_ptr<CRImageBuffer>, std::allocator<std::unique_ptr<CRImageBuffer>>> {
    void field0;
    void field1;
    __compressed_pair<std::unique_ptr<CRImageBuffer> *, std::allocator<std::unique_ptr<CRImageBuffer>>> field2;
} vector<std::unique_ptr<CRImageBuffer>, std::allocator<std::unique_ptr<CRImageBuffer>>>;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct _LXLexicon {
} // Error Processing Struct Fields

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct ? {
    void data;
    void reserved;
    NSUInteger dim;
    NSUInteger stride;
    NSUInteger width;
    NSUInteger height;
    NSUInteger channels;
    NSUInteger batch_number;
    NSUInteger sequence_length;
    NSUInteger stride_width;
    NSUInteger stride_height;
    NSUInteger stride_channels;
    NSUInteger stride_batch_number;
    NSUInteger stride_sequence_length;
    int storage_type;
} ?;

typedef struct __compressed_pair<const char **, std::allocator<const char *>> {
    char * __value_;
} __compressed_pair<const char **, std::allocator<const char *>>;

typedef struct vector<const char *, std::allocator<const char *>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<const char **, std::allocator<const char *>> __end_cap_;
} vector<const char *, std::allocator<const char *>>;

typedef struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> {
} // Error Processing Struct Fields

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct CRConstrainedTextLineDetectionImpl {
    float field0;
    int field1;
    int field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    int field8;
    int field9;
    float field10;
    float field11;
    BOOL field12;
} CRConstrainedTextLineDetectionImpl;

typedef struct CTLDRegion {
    int field0;
    float field1;
    float field2;
    float field3;
    float field4;
    CGPoint field5;
    CGPoint field6;
    CGPoint field7;
    CGPoint field8;
    float field9;
    vector<CRTextRecognition::CRCTLD::CTLDRegion, std::allocator<CRTextRecognition::CRCTLD::CTLDRegion>> field10;
    float field11;
} CTLDRegion;

typedef struct vector<CRTextRecognition::CRCTLD::CTLDRegion, std::allocator<CRTextRecognition::CRCTLD::CTLDRegion>> {
} // Error Processing Struct Fields

typedef struct CRCtcCandidate {
    int symbol;
    float prob;
} CRCtcCandidate;

typedef struct __compressed_pair<std::vector<std::vector<float>> *, std::allocator<std::vector<std::vector<float>>>> {
    void field0;
} __compressed_pair<std::vector<std::vector<float>> *, std::allocator<std::vector<std::vector<float>>>>;

typedef struct vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>> {
    void field0;
    void field1;
    __compressed_pair<std::vector<std::vector<float>> *, std::allocator<std::vector<std::vector<float>>>> field2;
} vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

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

typedef struct __compressed_pair<float **, std::allocator<float *>> {
    float field0;
} __compressed_pair<float **, std::allocator<float *>>;

typedef struct vector<float *, std::allocator<float *>> {
    float field0;
    float field1;
    __compressed_pair<float **, std::allocator<float *>> field2;
} vector<float *, std::allocator<float *>>;

typedef struct __compressed_pair<long *, std::allocator<long>> {
    NSInteger field0;
} __compressed_pair<long *, std::allocator<long>>;

typedef struct vector<long, std::allocator<long>> {
    NSInteger field0;
    NSInteger field1;
    __compressed_pair<long *, std::allocator<long>> field2;
} vector<long, std::allocator<long>>;

typedef struct CVNLPTextDecodingPruningPolicy {
    NSInteger field0;
    BOOL field1;
    float field2;
    unsigned int field3;
} CVNLPTextDecodingPruningPolicy;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct _LXCursor {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> {
    unsigned int __value_;
} __compressed_pair<unsigned int *, std::allocator<unsigned int>>;

typedef struct vector<unsigned int, std::allocator<unsigned int>> {
    unsigned int __begin_;
    unsigned int __end_;
    __compressed_pair<unsigned int *, std::allocator<unsigned int>> __end_cap_;
} vector<unsigned int, std::allocator<unsigned int>>;

typedef struct vector<_NSRange, std::allocator<_NSRange>> {
} // Error Processing Struct Fields

typedef struct CVNLPLanguageModel {
} // Error Processing Struct Fields

typedef struct CRTextDetectorQuad {
    CGPoint field0;
    CGPoint field1;
    CGFloat field2;
    CGFloat field3;
    BOOL field4;
    BOOL field5;
} CRTextDetectorQuad;

typedef struct __compressed_pair<nms::RectForest<unsigned short, double> **, std::allocator<nms::RectForest<unsigned short, double> *>> {
    void __value_;
} __compressed_pair<nms::RectForest<unsigned short, double> **, std::allocator<nms::RectForest<unsigned short, double> *>>;

typedef struct __split_buffer<nms::RectForest<unsigned short, double> *, std::allocator<nms::RectForest<unsigned short, double> *>> {
    void __first_;
    void __begin_;
    void __end_;
    __compressed_pair<nms::RectForest<unsigned short, double> **, std::allocator<nms::RectForest<unsigned short, double> *>> __end_cap_;
} __split_buffer<nms::RectForest<unsigned short, double> *, std::allocator<nms::RectForest<unsigned short, double> *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<nms::RectForest<unsigned short, double>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<nms::RectForest<unsigned short, double>>>;

typedef struct deque<nms::RectForest<unsigned short, double>, std::allocator<nms::RectForest<unsigned short, double>>> {
    __split_buffer<nms::RectForest<unsigned short, double> *, std::allocator<nms::RectForest<unsigned short, double> *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<nms::RectForest<unsigned short, double>>> __size_;
} deque<nms::RectForest<unsigned short, double>, std::allocator<nms::RectForest<unsigned short, double>>>;

typedef struct __compressed_pair<bool **, std::allocator<bool *>> {
    BOOL __value_;
} __compressed_pair<bool **, std::allocator<bool *>>;

typedef struct __split_buffer<bool *, std::allocator<bool *>> {
    BOOL __first_;
    BOOL __begin_;
    BOOL __end_;
    __compressed_pair<bool **, std::allocator<bool *>> __end_cap_;
} __split_buffer<bool *, std::allocator<bool *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<bool>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<bool>>;

typedef struct deque<bool, std::allocator<bool>> {
    __split_buffer<bool *, std::allocator<bool *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<bool>> __size_;
} deque<bool, std::allocator<bool>>;

typedef struct __compressed_pair<std::valarray<bool> **, std::allocator<std::valarray<bool> *>> {
    void __value_;
} __compressed_pair<std::valarray<bool> **, std::allocator<std::valarray<bool> *>>;

typedef struct __split_buffer<std::valarray<bool> *, std::allocator<std::valarray<bool> *>> {
    void __first_;
    void __begin_;
    void __end_;
    __compressed_pair<std::valarray<bool> **, std::allocator<std::valarray<bool> *>> __end_cap_;
} __split_buffer<std::valarray<bool> *, std::allocator<std::valarray<bool> *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::valarray<bool>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::valarray<bool>>>;

typedef struct deque<std::valarray<bool>, std::allocator<std::valarray<bool>>> {
    __split_buffer<std::valarray<bool> *, std::allocator<std::valarray<bool> *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<std::valarray<bool>>> __size_;
} deque<std::valarray<bool>, std::allocator<std::valarray<bool>>>;

typedef struct __compressed_pair<std::valarray<unsigned char> **, std::allocator<std::valarray<unsigned char> *>> {
    void __value_;
} __compressed_pair<std::valarray<unsigned char> **, std::allocator<std::valarray<unsigned char> *>>;

typedef struct __split_buffer<std::valarray<unsigned char> *, std::allocator<std::valarray<unsigned char> *>> {
    void __first_;
    void __begin_;
    void __end_;
    __compressed_pair<std::valarray<unsigned char> **, std::allocator<std::valarray<unsigned char> *>> __end_cap_;
} __split_buffer<std::valarray<unsigned char> *, std::allocator<std::valarray<unsigned char> *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::valarray<unsigned char>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::valarray<unsigned char>>>;

typedef struct deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> {
    __split_buffer<std::valarray<unsigned char> *, std::allocator<std::valarray<unsigned char> *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<std::valarray<unsigned char>>> __size_;
} deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>>;

typedef struct __compressed_pair<std::deque<std::deque<std::deque<unsigned short>>> **, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> {
    void __value_;
} __compressed_pair<std::deque<std::deque<std::deque<unsigned short>>> **, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>>;

typedef struct __split_buffer<std::deque<std::deque<std::deque<unsigned short>>> *, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> {
    void __first_;
    void __begin_;
    void __end_;
    __compressed_pair<std::deque<std::deque<std::deque<unsigned short>>> **, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> __end_cap_;
} __split_buffer<std::deque<std::deque<std::deque<unsigned short>>> *, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>>;

typedef struct deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> {
    __split_buffer<std::deque<std::deque<std::deque<unsigned short>>> *, std::allocator<std::deque<std::deque<std::deque<unsigned short>>> *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> __size_;
} deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>>;

typedef struct PyramidNMSConfig {
    unk _vptr$PyramidNMSConfig;
    NSUInteger methodType;
    NSUInteger scoreType;
    CGFloat scoreMinThreshold;
    unsigned char scoreMapMinThreshold;
    BOOL scoreUseScaleIndex;
    BOOL scoreUseArea;
    CGFloat scoreAggregationScalingFactor;
    BOOL scoreUseNumSubDatums;
    NSUInteger scoreNumSubDatumsUpperClip;
    NSUInteger scoreNumSubDatumsLowerClip;
    BOOL ignoreOrphansInFullTile;
    CGFloat heightRatioMinThresholdForContainment;
    BOOL computeIntrascaleGeometricRelationships;
    NSUInteger intersectionNumSamples;
    CGFloat iouMinThresholdToAcceptContainedDatum;
    CGFloat normalizedAreaMinThresholdToAcceptContainedDatum;
    BOOL pendingInvalidRejectCompetingDatums;
    BOOL computeAndFilterByIndividualScores;
    BOOL processCoincidence;
    BOOL processContainment;
    BOOL processOverlap;
    BOOL processPendingInvalid;
    NSUInteger favorSubDatumUndersegmentationInProcessingCoincidence;
    BOOL favorLargerAreaInProcessingCoincidence;
    BOOL favorFineScaleInProcessingCoincidence;
    CGFloat datumMinHeightRatioToUseFullTile;
    BOOL useOverlappingWordsInProcessingContainment;
    CGFloat minValidCosAngleInDistributionCheckInProcessingContainment;
    NSUInteger favorSubDatumUndersegmentationInProcessingContainment;
    BOOL favorLargerAreaInProcessingContainment;
    BOOL favorFullTileInProcessingContainment;
    CGFloat heightRatioFineToFullMinThresholdFavorFullTileInProcessingContainment;
    CGFloat heightRatioFineToFullMaxThresholdFavorFullTileInProcessingContainment;
    CGFloat widthRatioFineToFullMinThresholdFavorFullTileInProcessingContainment;
    CGFloat widthRatioFineToFullMaxThresholdFavorFullTileInProcessingContainment;
    CGFloat heightRatioFineToFullMinThresholdFavorFullTileInProcessingSingleConstituentContainment;
    CGFloat heightRatioFineToFullMaxThresholdFavorFullTileInProcessingSingleConstituentContainment;
    CGFloat widthRatioFineToFullMinThresholdFavorFullTileInProcessingSingleConstituentContainment;
    CGFloat widthRatioFineToFullMaxThresholdFavorFullTileInProcessingSingleConstituentContainment;
    CGFloat favorFullTileInProcessingOverlap;
    CGFloat coincidenceIOUMinThreshold;
    CGFloat coincidenceIOMinMinThreshold;
    CGFloat containmentIOUMaxThreshold;
    CGFloat containmentIOMinMinThreshold;
    CGFloat constitutionIOUMaxThreshold;
    CGFloat constitutionIOMinMinThreshold;
    CGFloat overlapIOUMinThreshold;
    CGFloat overlapIOUMaxThreshold;
    CGFloat overlapIOMinMinThreshold;
    CGFloat overlapIOMinMaxThreshold;
} PyramidNMSConfig;

typedef struct PyramidNMS<unsigned short, double, unsigned char> {
    unk _vptr$PyramidNMS;
    deque<bool, std::allocator<bool>> fullySpecifiedForests;
    deque<std::valarray<bool>, std::allocator<std::valarray<bool>>> masksValid;
    deque<std::valarray<bool>, std::allocator<std::valarray<bool>>> masksInvalid;
    deque<std::valarray<bool>, std::allocator<std::valarray<bool>>> masksPendingInvalid;
    deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> histsWordCoincide;
    deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> idxsWordCoincide;
    deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> histsWordContain;
    deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> idxsWordContain;
    deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> histsWordConstitute;
    deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> idxsWordConstitute;
    deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> histsWordOverlap;
    deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> idxsWordOverlap;
    deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> histsLineCoincide;
    deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> idxsLineCoincide;
    deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> histsLineContain;
    deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> idxsLineContain;
    deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> histsLineConstitute;
    deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> idxsLineConstitute;
    deque<std::valarray<unsigned char>, std::allocator<std::valarray<unsigned char>>> histsLineOverlap;
    deque<std::deque<std::deque<std::deque<unsigned short>>>, std::allocator<std::deque<std::deque<std::deque<unsigned short>>>>> idxsLineOverlap;
    void pForests;
    PyramidNMSConfig config;
} PyramidNMS<unsigned short, double, unsigned char>;

typedef struct pc_session {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct SmartPtr {
    unk field0;
    void field1;
    int field2;
} SmartPtr;

typedef struct Mat {
    unk field0;
    char * field1;
    int field2;
    int field3;
    int field4;
    int field5;
    int field6;
    SmartPtr field7;
    int field8;
    int field9;
    int field10;
    int field11;
    NSUInteger field12;
} Mat;

