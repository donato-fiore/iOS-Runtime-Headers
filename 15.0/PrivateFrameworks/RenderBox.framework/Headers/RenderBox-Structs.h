typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGFont {
} // Error Processing Struct Fields

typedef struct ? {
    float red;
    float green;
    float blue;
    float alpha;
} ?;

typedef struct objc_ptr<NSData *> {
    id _p;
} objc_ptr<NSData *>;

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

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct RBShapeData {
    int type;
    unsigned char data;
} RBShapeData;

typedef struct Page {
} // Error Processing Struct Fields

typedef struct ObjectTable {
} // Error Processing Struct Fields

typedef struct InlineHeap<256> {
    NSUInteger _page_size;
    Page _pages;
    char * _sbrk;
    char * _sbrk_end;
    ObjectTable _objects;
    unsigned char _buffer;
} InlineHeap<256>;

typedef struct Device {
} // Error Processing Struct Fields

typedef struct refcounted_ptr<RB::Device> {
    Device _p;
} refcounted_ptr<RB::Device>;

typedef struct objc_ptr<NSObject<OS_dispatch_queue> *> {
    id _p;
} objc_ptr<NSObject<OS_dispatch_queue> *>;

typedef struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> {
    uint8_t __a_value;
    unsigned int field1;
} __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>>;

typedef struct atomic<unsigned int> {
    __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> __a_;
} atomic<unsigned int>;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct vector<RBStrokeElement, 0, unsigned long> {
    unsigned char _p;
    NSUInteger _size;
    NSUInteger _capacity;
} vector<RBStrokeElement, 0, unsigned long>;

typedef struct vector<float, 0, unsigned long> {
    float _p;
    NSUInteger _size;
    NSUInteger _capacity;
} vector<float, 0, unsigned long>;

typedef struct cf_ptr<CGImage *> {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct _RBDrawingState {
} // Error Processing Struct Fields

typedef struct Contents {
} // Error Processing Struct Fields

typedef struct __compressed_pair<RB::DisplayList::Contents *, RB::Destroy<RB::DisplayList::Contents>> {
    Contents __value_;
} __compressed_pair<RB::DisplayList::Contents *, RB::Destroy<RB::DisplayList::Contents>>;

typedef struct unique_ptr<RB::DisplayList::Contents, RB::Destroy<RB::DisplayList::Contents>> {
    __compressed_pair<RB::DisplayList::Contents *, RB::Destroy<RB::DisplayList::Contents>> __ptr_;
} unique_ptr<RB::DisplayList::Contents, RB::Destroy<RB::DisplayList::Contents>>;

typedef struct Item {
} // Error Processing Struct Fields

typedef struct Pool<RB::DisplayList::State, const RB::Malloc> {
    Item _freelist;
} Pool<RB::DisplayList::State, const RB::Malloc>;

typedef struct Pool<RB::DisplayList::Layer, RB::Heap> {
    Item _freelist;
} Pool<RB::DisplayList::Layer, RB::Heap>;

typedef struct Layer {
} // Error Processing Struct Fields

typedef struct State {
} // Error Processing Struct Fields

typedef struct AffineTransform {
} // Error Processing Struct Fields

typedef struct ClipNode {
} // Error Processing Struct Fields

typedef struct Style {
} // Error Processing Struct Fields

typedef struct DisplayList {
} // Error Processing Struct Fields

typedef struct Document {
} // Error Processing Struct Fields

typedef struct __compressed_pair<RB::XML::Document *, std::default_delete<RB::XML::Document>> {
    Document __value_;
} __compressed_pair<RB::XML::Document *, std::default_delete<RB::XML::Document>>;

typedef struct unique_ptr<RB::XML::Document, std::default_delete<RB::XML::Document>> {
    __compressed_pair<RB::XML::Document *, std::default_delete<RB::XML::Document>> __ptr_;
} unique_ptr<RB::XML::Document, std::default_delete<RB::XML::Document>>;

typedef struct vector<std::pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *>, 1, unsigned long> {
    unsigned char _p;
    void _p;
    NSUInteger _size;
    NSUInteger _capacity;
} vector<std::pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *>, 1, unsigned long>;

typedef struct Term {
} // Error Processing Struct Fields

typedef struct vector<RB::DisplayListPredicate::Term, 1, unsigned int> {
    unsigned char _p;
    Term _p;
    unsigned int _size;
    unsigned int _capacity;
} vector<RB::DisplayListPredicate::Term, 1, unsigned int>;

typedef struct DisplayListPredicate {
    vector<RB::DisplayListPredicate::Term, 1, unsigned int> _terms;
} DisplayListPredicate;

typedef struct Invertible {
    DisplayListPredicate predicate;
    BOOL inverts_result;
} Invertible;

typedef struct vector<RB::DisplayListTransform::Term, 1, unsigned int> {
    unsigned char _p;
    Term _p;
    unsigned int _size;
    unsigned int _capacity;
} vector<RB::DisplayListTransform::Term, 1, unsigned int>;

typedef struct DisplayListTransform {
    vector<RB::DisplayListTransform::Term, 1, unsigned int> _terms;
} DisplayListTransform;

typedef struct objc_ptr<id<RBDisplayListContents>> {
    id _p;
} objc_ptr<id<RBDisplayListContents>>;

typedef struct Drawable {
} // Error Processing Struct Fields

typedef struct refcounted_ptr<RB::Drawable> {
    Drawable _p;
} refcounted_ptr<RB::Drawable>;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct spin_lock {
    os_unfair_lock_s _lock;
} spin_lock;

typedef struct objc_ptr<void (^)(id<RBDrawableStatistics>)> {
    id _p;
    unk field1;
} objc_ptr<void (^)(id<RBDrawableStatistics>)>;

typedef struct objc_ptr<RBDevice *> {
    id _p;
} objc_ptr<RBDevice *>;

typedef struct objc_ptr<id<MTLTexture>> {
    id _p;
} objc_ptr<id<MTLTexture>>;

typedef struct RBFillData {
    int type;
    unsigned char data;
} RBFillData;

typedef struct InlineHeap<64> {
} // Error Processing Struct Fields

typedef struct CGColor {
} // Error Processing Struct Fields

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

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct _CARenderRendererInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
} _CARenderRendererInfo;

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

typedef struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void layer;
    void _objc_observation_info;
} _CALayerIvars;

typedef struct objc_ptr<RBImageQueueLayer *> {
    id _p;
} objc_ptr<RBImageQueueLayer *>;

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct _CAImageQueue {
} // Error Processing Struct Fields

typedef struct cf_ptr<_CAImageQueue *> {
    _CAImageQueue _p;
} cf_ptr<_CAImageQueue *>;

typedef struct objc_ptr<RBDisplayList *> {
    id _p;
} objc_ptr<RBDisplayList *>;

typedef struct objc_ptr<id<MTLDevice>> {
    id _p;
} objc_ptr<id<MTLDevice>>;

typedef struct Texture {
} // Error Processing Struct Fields

typedef struct refcounted_ptr<RB::Texture> {
    Texture _p;
} refcounted_ptr<RB::Texture>;

typedef struct Bounds {
} // Error Processing Struct Fields

