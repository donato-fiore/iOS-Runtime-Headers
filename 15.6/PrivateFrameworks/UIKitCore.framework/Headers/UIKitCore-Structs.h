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

typedef struct __IOHIDEvent {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct _UIPressTrigger {
    NSInteger field0;
    NSInteger field1;
    CGFloat field2;
    BOOL field3;
} _UIPressTrigger;

typedef struct CGVector {
    CGFloat dx;
    CGFloat dy;
} CGVector;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct CAFrameRateRange {
    float minimum;
    float maximum;
    float preferred;
} CAFrameRateRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct UIRectCornerRadii {
    CGFloat topLeft;
    CGFloat bottomLeft;
    CGFloat bottomRight;
    CGFloat topRight;
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

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CATransform3D {
    CGFloat m11;
    CGFloat m12;
    CGFloat m13;
    CGFloat m14;
    CGFloat m21;
    CGFloat m22;
    CGFloat m23;
    CGFloat m24;
    CGFloat m31;
    CGFloat m32;
    CGFloat m33;
    CGFloat m34;
    CGFloat m41;
    CGFloat m42;
    CGFloat m43;
    CGFloat m44;
} CATransform3D;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequest {
    unsigned int flags;
    unsigned int minRate;
    unsigned int preferredRate;
    unsigned int maxRate;
    NSUInteger phase;
    NSUInteger load;
} _UIUpdateRequest;

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest request;
    unsigned int reason;
} _UIUpdateRequestRecord;

typedef struct _UIRegionSolveResult {
} // Error Processing Struct Fields

typedef struct vector<_UIRegionSolveResult, std::allocator<_UIRegionSolveResult>> {
} // Error Processing Struct Fields

typedef struct _UIItemSolveResult {
} // Error Processing Struct Fields

typedef struct __compressed_pair<_UIItemSolveResult *, std::default_delete<_UIItemSolveResult>> {
    _UIItemSolveResult __value_;
} __compressed_pair<_UIItemSolveResult *, std::default_delete<_UIItemSolveResult>>;

typedef struct unique_ptr<_UIItemSolveResult, std::default_delete<_UIItemSolveResult>> {
    __compressed_pair<_UIItemSolveResult *, std::default_delete<_UIItemSolveResult>> __ptr_;
} unique_ptr<_UIItemSolveResult, std::default_delete<_UIItemSolveResult>>;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct CGPattern {
} // Error Processing Struct Fields

typedef struct _UIUpdateSequenceItemInternal {
} // Error Processing Struct Fields

typedef struct __CFRunLoopObserver {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
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

typedef struct CAColorMatrix {
    float m11;
    float m12;
    float m13;
    float m14;
    float m15;
    float m21;
    float m22;
    float m23;
    float m24;
    float m25;
    float m31;
    float m32;
    float m33;
    float m34;
    float m35;
    float m41;
    float m42;
    float m43;
    float m44;
    float m45;
} CAColorMatrix;

typedef struct _UIUpdateTiming {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
} _UIUpdateTiming;

typedef struct _UISEGestureFeatureSample {
    NSUInteger field0;
    NSUInteger field1;
    BOOL field2;
    NSInteger field3;
    NSUInteger field4;
    CGPoint field5;
    CGFloat field6;
} _UISEGestureFeatureSample;

typedef struct __UISignedRange {
    NSInteger field0;
    NSUInteger field1;
} __UISignedRange;

typedef struct _UIOrderedRangeIndexerImpl {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<_UIOrderedRangeIndexerImpl> {
    _UIOrderedRangeIndexerImpl __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<_UIOrderedRangeIndexerImpl>;

typedef struct _UIRTreeContainerNode {
} // Error Processing Struct Fields

typedef struct shared_ptr<_UIRTreeContainerNode> {
} // Error Processing Struct Fields

typedef struct vector<_NSRange, std::allocator<_NSRange>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<long *, std::allocator<long>> {
    NSInteger __value_;
} __compressed_pair<long *, std::allocator<long>>;

typedef struct vector<long, std::allocator<long>> {
    NSInteger __begin_;
    NSInteger __end_;
    __compressed_pair<long *, std::allocator<long>> __end_cap_;
} vector<long, std::allocator<long>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::hash<long>, std::equal_to<long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::hash<long>, std::equal_to<long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::equal_to<long>, std::hash<long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::equal_to<long>, std::hash<long>, true>>;

typedef struct __hash_table<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::__unordered_map_hasher<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::hash<long>, std::equal_to<long>, true>, std::__unordered_map_equal<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::equal_to<long>, std::hash<long>, true>, std::allocator<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::hash<long>, std::equal_to<long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::equal_to<long>, std::hash<long>, true>> __p3_;
} __hash_table<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::__unordered_map_hasher<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::hash<long>, std::equal_to<long>, true>, std::__unordered_map_equal<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::equal_to<long>, std::hash<long>, true>, std::allocator<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>>>;

typedef struct unordered_map<long, UICollectionViewLayoutAttributes *, std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, UICollectionViewLayoutAttributes *>>> {
    __hash_table<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::__unordered_map_hasher<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::hash<long>, std::equal_to<long>, true>, std::__unordered_map_equal<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::equal_to<long>, std::hash<long>, true>, std::allocator<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>>> __table_;
} unordered_map<long, UICollectionViewLayoutAttributes *, std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, UICollectionViewLayoutAttributes *>>>;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __IOHIDManager {
} // Error Processing Struct Fields

typedef struct _UITableViewVisibleCellsUpdateRanges {
    _NSRange field0;
    _NSRange field1;
    _NSRange field2;
    _NSRange field3;
    _NSRange field4;
    BOOL field5;
} _UITableViewVisibleCellsUpdateRanges;

typedef struct __DCSDictionary {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct _UIDragInteractionDriverStateMachine {
    NSUInteger state;
    NSUInteger eventsQueueEnd;
} _UIDragInteractionDriverStateMachine;

typedef struct CGPDFPage {
} // Error Processing Struct Fields

typedef struct CGSVGDocument {
} // Error Processing Struct Fields

typedef struct ui_archive_entry {
} // Error Processing Struct Fields

typedef struct ui_archive {
} // Error Processing Struct Fields

typedef struct __docFlags {
    BOOL inClose;
    BOOL isOpen;
    BOOL inOpen;
    BOOL inRevert;
    BOOL isAutosavingBecauseOfTimer;
    BOOL versionWithoutRecentChangesIsNotLastOpened;
    BOOL ignoreUndoAndRedoNotifications;
    BOOL editingTemporarilyDisabled;
    BOOL editingDisabledDueToPermissions;
    BOOL isRegisteredAsFilePresenter;
    BOOL movingFile;
    BOOL savingError;
    BOOL inConflict;
    BOOL needToStopAccessingSecurityScopedResource;
} __docFlags;

typedef struct __mdocFlags {
    BOOL shouldWriteAdditionalContent;
    BOOL _reserved;
} __mdocFlags;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct atomic_flag {
    uint8_t _Value;
    BOOL field1;
} atomic_flag;

typedef struct b2Vec2 {
    float x;
    float y;
} b2Vec2;

typedef struct PKContactListener {
    unk _vptr$b2ContactListener;
    id _contacts;
    id NSMutableDictionary;
} PKContactListener;

typedef struct vector<PKPoint, std::allocator<PKPoint>> {
} // Error Processing Struct Fields

typedef struct vector<PKDebugDrawPacket::color4, std::allocator<PKDebugDrawPacket::color4>> {
} // Error Processing Struct Fields

typedef struct PKDebugDrawPacket {
    vector<PKPoint, std::allocator<PKPoint>> _linePoints;
    vector<PKDebugDrawPacket::color4, std::allocator<PKDebugDrawPacket::color4>> _colors;
} PKDebugDrawPacket;

typedef struct b2BodyDef {
    BOOL _sk_affectedByGravity;
    unsigned int _sk_fieldCategoryBitMask;
    unsigned int _sk_categoryBitMask;
    unsigned int _sk_collisionBitMask;
    unsigned int _sk_intersectionCallbackBitMask;
    int type;
    b2Vec2 position;
    float angle;
    b2Vec2 linearVelocity;
    float angularVelocity;
    float charge;
    float linearDamping;
    float angularDamping;
    BOOL allowSleep;
    BOOL awake;
    BOOL fixedRotation;
    BOOL bullet;
    BOOL active;
    void userData;
} b2BodyDef;

typedef struct b2Rot {
    float field0;
    float field1;
} b2Rot;

typedef struct b2Transform {
    b2Vec2 field0;
    b2Rot field1;
} b2Transform;

typedef struct b2Sweep {
    b2Vec2 field0;
    BOOL field1;
    short field2;
    int field3;
    int field4;
    ? field5;
    BOOL field6;
    short field7;
    int field8;
    int field9;
    ? field10;
    float field11;
} b2Sweep;

typedef struct b2World {
} // Error Processing Struct Fields

typedef struct b2Body {
} // Error Processing Struct Fields

typedef struct PKPath {
} // Error Processing Struct Fields

typedef struct shared_ptr<PKPath> {
} // Error Processing Struct Fields

typedef struct QuadTree {
} // Error Processing Struct Fields

typedef struct shared_ptr<QuadTree> {
} // Error Processing Struct Fields

typedef struct PKCField {
} // Error Processing Struct Fields

typedef struct PKPhysicsShape {
} // Error Processing Struct Fields

typedef struct vector<PKPhysicsShape *, std::allocator<PKPhysicsShape *>> {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct _UITableConstantsBackgroundProperties {
    BOOL field0;
    id field1;
    id field2;
    BOOL field3;
    NSInteger field4;
    NSInteger field5;
    CGFloat field6;
    CGFloat field7;
    BOOL field8;
    id field9;
    CGFloat field10;
    NSDirectionalEdgeInsets field11;
} _UITableConstantsBackgroundProperties;

typedef struct CGShading {
} // Error Processing Struct Fields

typedef struct _UIIntegralCornerRadii {
    NSInteger field0;
    NSInteger field1;
    NSInteger field2;
    NSInteger field3;
} _UIIntegralCornerRadii;

typedef struct _UIIntegralPoint {
    NSInteger field0;
    NSInteger field1;
} _UIIntegralPoint;

typedef struct _UIIntegralSize {
    NSInteger field0;
    NSInteger field1;
} _UIIntegralSize;

typedef struct _UIIntegralRect {
    _UIIntegralPoint field0;
    _UIIntegralSize field1;
} _UIIntegralRect;

typedef struct _UIBoundingPathBitmapDataSkipRegion {
    NSUInteger y;
    NSUInteger height;
} _UIBoundingPathBitmapDataSkipRegion;

typedef struct _UIBoundingPathBitmapData {
    NSUInteger width;
    NSUInteger height;
    _UIBoundingPathBitmapDataSkipRegion skipRegion;
    NSUInteger nodeCount;
    NSUInteger maximumNodesPerRow;
    unsigned short rows;
} _UIBoundingPathBitmapData;

typedef struct _UIBoundingPathBitmapDataCorner {
    NSUInteger location;
    NSUInteger radius;
    NSUInteger size;
    BOOL edgePositionsUseLargeValues;
    void referenceEdgePositionsByRow;
    void referenceEdgePositionsByCol;
} _UIBoundingPathBitmapDataCorner;

typedef struct CMPhotoDecompressionSession {
} // Error Processing Struct Fields

typedef struct CMPhotoDecompressionContainer {
} // Error Processing Struct Fields

typedef struct CGPathElement {
} // Error Processing Struct Fields

typedef struct __CFUserNotification {
} // Error Processing Struct Fields

typedef struct __CFRunLoopSource {
} // Error Processing Struct Fields

typedef struct __GSKeyboard {
} // Error Processing Struct Fields

typedef struct CGGradient {
} // Error Processing Struct Fields

typedef struct __CFBoolean {
} // Error Processing Struct Fields

typedef struct _UICollectionUpdateIndexPair {
    NSInteger section;
    NSInteger item;
} _UICollectionUpdateIndexPair;

typedef struct UIPeripheralAnimationGeometry {
    CGPoint outPosition;
    CGPoint inPosition;
    CGRect bounds;
    CGAffineTransform transform;
    CGFloat targetFrameHeightDelta;
} UIPeripheralAnimationGeometry;

typedef struct __CTLine {
} // Error Processing Struct Fields

typedef struct _UIVelocityIntegratorDataSample {
} // Error Processing Struct Fields

typedef struct __split_buffer<_UIVelocityIntegratorDataSample *, std::allocator<_UIVelocityIntegratorDataSample *>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<_UIVelocityIntegratorDataSample>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<_UIVelocityIntegratorDataSample>>;

typedef struct deque<_UIVelocityIntegratorDataSample, std::allocator<_UIVelocityIntegratorDataSample>> {
    __split_buffer<_UIVelocityIntegratorDataSample *, std::allocator<_UIVelocityIntegratorDataSample *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<_UIVelocityIntegratorDataSample>> __size_;
} deque<_UIVelocityIntegratorDataSample, std::allocator<_UIVelocityIntegratorDataSample>>;

typedef struct InteractionContext {
    id field0;
} InteractionContext;

typedef struct InteractionEndingContext {
    InteractionContext field0;
    BOOL field1;
    NSUInteger field2;
    id field3;
    id field4;
    unk field5;
    id field6;
    unk field7;
} InteractionEndingContext;

typedef struct CGPDFDocument {
} // Error Processing Struct Fields

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct __CFMessagePort {
} // Error Processing Struct Fields

typedef struct _UIRenderingSurface {
    CGRect field0;
    CGFloat field1;
} _UIRenderingSurface;

typedef struct _UIStateMachineMeta {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
} _UIStateMachineMeta;

typedef struct _UIStateMachineDebugging {
} // Error Processing Struct Fields

typedef struct _UIStateTransition {
    id field0;
    unk field1;
    id field2;
    unk field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
} _UIStateTransition;

typedef struct __CFRunLoopTimer {
} // Error Processing Struct Fields

typedef struct __CFReadStream {
} // Error Processing Struct Fields

typedef struct _UIUpdateInputState {
    int mode;
    NSUInteger earliestModelTime;
    NSUInteger latestModelTime;
} _UIUpdateInputState;

typedef struct _UIUpdateInputInternal {
    _UIUpdateInputState _state;
    unsigned int _flags;
    ? _groupEntry;
    unk _readyForModelTimeCallback;
    void _context;
    char * _name;
} _UIUpdateInputInternal;

typedef struct __CFMachPort {
} // Error Processing Struct Fields

typedef struct _UIScrollViewVFDLookupState {
} // Error Processing Struct Fields

typedef struct __CFStringTokenizer {
} // Error Processing Struct Fields

typedef struct __CTFontDescriptor {
} // Error Processing Struct Fields

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

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct __tccClientFlags {
    BOOL respondsToAutocorrectionType;
    BOOL respondsToSpellCheckingType;
    BOOL respondsToSmartQuotesType;
    BOOL respondsToSmartDashesType;
    BOOL respondsToSmartInsertDeleteType;
    BOOL respondsToContinuousSpellCheckingEnabled;
} __tccClientFlags;

typedef struct objc_ivar {
} // Error Processing Struct Fields

typedef struct ui_size_cache {
} // Error Processing Struct Fields

typedef struct _UIDatePickerOverlayPlatterLayout {
    CGRect field0;
    CGPoint field1;
    CGPoint field2;
    CGAffineTransform field3;
} _UIDatePickerOverlayPlatterLayout;

typedef struct __CTFrame {
} // Error Processing Struct Fields

typedef struct __CTRun {
} // Error Processing Struct Fields

typedef struct _UIWebViewportConfiguration {
    CGSize size;
    float initialScale;
    float minimumScale;
    float maximumScale;
    BOOL allowsUserScaling;
    BOOL allowsShrinkToFit;
    BOOL avoidsUnsafeArea;
} _UIWebViewportConfiguration;

typedef struct __CFNumberFormatter {
} // Error Processing Struct Fields

typedef struct _PDFHistoryItem {
    BOOL restorePending;
    BOOL isInitialScale;
    CGFloat zoomScale;
    CGPoint contentOffset;
} _PDFHistoryItem;

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct CGPDFFont {
} // Error Processing Struct Fields

typedef struct _WKClassInfo {
} // Error Processing Struct Fields

typedef struct _WAKObject {
    unsigned int field0;
    _WKClassInfo field1;
} _WAKObject;

typedef struct _WKViewContext {
    unk notificationCallback;
    void notificationUserInfo;
    unk responderCallback;
    void responderUserInfo;
    unk willRemoveSubviewCallback;
    unk invalidateGStateCallback;
} _WKViewContext;

typedef struct _WKView {
} // Error Processing Struct Fields

typedef struct _UIWebTouchPoint {
} // Error Processing Struct Fields

typedef struct _UIWebTouchEvent {
} // Error Processing Struct Fields

typedef struct _UIOutlineNode {
    _NSRange field0;
    NSInteger field1;
} _UIOutlineNode;

typedef struct vector<_UIOutlineNode, std::allocator<_UIOutlineNode>> {
} // Error Processing Struct Fields

