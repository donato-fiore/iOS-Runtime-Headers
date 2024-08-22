typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
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

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct CGPDFPage {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct UIOffset {
    CGFloat field0;
    CGFloat field1;
} UIOffset;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::less<UIView *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::less<UIView *>, true>>;

typedef struct __tree<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__map_value_compare<UIView *, std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::less<UIView *>, true>, std::allocator<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::less<UIView *>, true>> __pair3_;
} __tree<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__map_value_compare<UIView *, std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::less<UIView *>, true>, std::allocator<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>>>;

typedef struct map<UIView *, _NUIContainerViewArrangedSubview, std::less<UIView *>, std::allocator<std::pair<UIView *const, _NUIContainerViewArrangedSubview>>> {
    __tree<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__map_value_compare<UIView *, std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::less<UIView *>, true>, std::allocator<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>>> __tree_;
} map<UIView *, _NUIContainerViewArrangedSubview, std::less<UIView *>, std::allocator<std::pair<UIView *const, _NUIContainerViewArrangedSubview>>>;

typedef struct __compressed_pair<CALayer **, std::allocator<CALayer *>> {
    id __value_;
} __compressed_pair<CALayer **, std::allocator<CALayer *>>;

typedef struct vector<CALayer *, std::allocator<CALayer *>> {
    id __begin_;
    id __end_;
    __compressed_pair<CALayer **, std::allocator<CALayer *>> __end_cap_;
} vector<CALayer *, std::allocator<CALayer *>>;

typedef struct _NUIGridArrangementCell {
} // Error Processing Struct Fields

typedef struct vector<_NUIGridArrangementCell, std::allocator<_NUIGridArrangementCell>> {
} // Error Processing Struct Fields

typedef struct _NUIGridArrangementDimension {
} // Error Processing Struct Fields

typedef struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> {
} // Error Processing Struct Fields

typedef struct _NUIGridArrangement {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::less<UIView *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::less<UIView *>, true>>;

typedef struct __tree<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::__map_value_compare<UIView *, std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::less<UIView *>, true>, std::allocator<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::less<UIView *>, true>> __pair3_;
} __tree<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::__map_value_compare<UIView *, std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::less<UIView *>, true>, std::allocator<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>>>;

typedef struct map<UIView *, const std::pair<_NSRange, _NSRange>, std::less<UIView *>, std::allocator<std::pair<UIView *const, const std::pair<_NSRange, _NSRange>>>> {
    __tree<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::__map_value_compare<UIView *, std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>, std::less<UIView *>, true>, std::allocator<std::__value_type<UIView *, const std::pair<_NSRange, _NSRange>>>> __tree_;
} map<UIView *, const std::pair<_NSRange, _NSRange>, std::less<UIView *>, std::allocator<std::pair<UIView *const, const std::pair<_NSRange, _NSRange>>>>;

