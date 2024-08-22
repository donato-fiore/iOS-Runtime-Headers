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

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct CKTypedComponentAction<UIGestureRecognizer *> {
    NSUInteger _variant;
    id _target;
    id _scopeHandle;
    SEL CKComponentScopeHandle;
} CKTypedComponentAction<UIGestureRecognizer *>;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct RefCountBitsT<swift::RefCountIsInline> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> {
    uint8_t __a_value;
    RefCountBitsT<swift::RefCountIsInline> field1;
} __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>>;

typedef struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> {
    __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> __a_;
} atomic<swift::RefCountBitsT<swift::RefCountIsInline>>;

typedef struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> {
    atomic<swift::RefCountBitsT<swift::RefCountIsInline>> refCounts;
} RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>>;

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

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct CKRelativeDimension {
    int _type;
    CGFloat _value;
} CKRelativeDimension;

typedef struct CKComponentSize {
    CKRelativeDimension width;
    CKRelativeDimension height;
    CKRelativeDimension minWidth;
    CKRelativeDimension minHeight;
    CKRelativeDimension maxWidth;
    CKRelativeDimension maxHeight;
} CKComponentSize;

typedef struct CKComponentViewContext {
    id field0;
    CGRect field1;
} CKComponentViewContext;

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<const std::vector<CKComponentLayoutChild>> {
    void __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<const std::vector<CKComponentLayoutChild>>;

typedef struct CKComponentLayout {
    id component;
    CGSize CKComponent;
    shared_ptr<const std::vector<CKComponentLayoutChild>> size;
    id children;
} CKComponentLayout;

typedef struct CKSizeRange {
    CGSize min;
    CGSize max;
} CKSizeRange;

typedef struct ViewManager {
} // Error Processing Struct Fields

typedef struct shared_ptr<CK::Component::ViewManager> {
} // Error Processing Struct Fields

typedef struct MountContext {
    shared_ptr<CK::Component::ViewManager> field0;
    CGPoint field1;
    UIEdgeInsets field2;
    BOOL field3;
} MountContext;

typedef struct MountResult {
    BOOL field0;
    MountContext field1;
} MountResult;

typedef struct CKComponentAnimation {
} // Error Processing Struct Fields

typedef struct vector<CKComponentAnimation, std::allocator<CKComponentAnimation>> {
} // Error Processing Struct Fields

typedef struct CKComponentBoundsAnimation {
    CGFloat duration;
    CGFloat delay;
    NSUInteger mode;
    NSUInteger options;
    CGFloat springDampingRatio;
    CGFloat springInitialVelocity;
} CKComponentBoundsAnimation;

typedef struct Repr {
} // Error Processing Struct Fields

typedef struct shared_ptr<const CKComponentViewConfiguration::Repr> {
} // Error Processing Struct Fields

typedef struct CKComponentViewConfiguration {
    shared_ptr<const CKComponentViewConfiguration::Repr> rep;
} CKComponentViewConfiguration;

typedef struct CKComponentMountInfo {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CKComponentMountInfo *, std::default_delete<CKComponentMountInfo>> {
    CKComponentMountInfo __value_;
} __compressed_pair<CKComponentMountInfo *, std::default_delete<CKComponentMountInfo>>;

typedef struct unique_ptr<CKComponentMountInfo, std::default_delete<CKComponentMountInfo>> {
    __compressed_pair<CKComponentMountInfo *, std::default_delete<CKComponentMountInfo>> __ptr_;
} unique_ptr<CKComponentMountInfo, std::default_delete<CKComponentMountInfo>>;

typedef struct WFParameterComponentOptions {
    BOOL editable;
    BOOL processing;
    BOOL becomeFirstResponder;
    id actionName;
    id NSString;
    BOOL appearance;
    NSInteger WFModuleAppearance;
    id lastParameter;
} WFParameterComponentOptions;

typedef struct WFCompressionResistance {
    int _type;
    CGFloat _value;
} WFCompressionResistance;

typedef struct CKTypedComponentAction<> {
    NSUInteger _variant;
    id _target;
    id _scopeHandle;
    SEL CKComponentScopeHandle;
} CKTypedComponentAction<>;

typedef struct WFParameterLayoutComponentStyle {
    id backgroundColor;
    id UIColor;
    id highlightedBackgroundColor;
    id UIColor;
} WFParameterLayoutComponentStyle;

typedef struct WFParameterLayoutComponentAccessibility {
    BOOL field0;
    id field1;
    id field2;
    id field3;
    NSUInteger field4;
} WFParameterLayoutComponentAccessibility;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct CKTypedComponentAction<unsigned long> {
    NSUInteger _variant;
    id _target;
    id _scopeHandle;
    SEL CKComponentScopeHandle;
} CKTypedComponentAction<unsigned long>;

typedef struct WFRowTemplateParameterComponentOptions {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    id field5;
    id field6;
} WFRowTemplateParameterComponentOptions;

typedef struct WFWrappingStackLayoutComponentStyle {
    NSUInteger direction;
    CGFloat spacing;
    NSUInteger alignItems;
    CGFloat rowHeight;
} WFWrappingStackLayoutComponentStyle;

typedef struct CKStatefulViewComponentAccessibility {
    id field0;
    id field1;
} CKStatefulViewComponentAccessibility;

typedef struct CKComponentControllerAnimationData {
} // Error Processing Struct Fields

typedef struct __compressed_pair<CKComponentControllerAnimationData *, std::default_delete<CKComponentControllerAnimationData>> {
    CKComponentControllerAnimationData __value_;
} __compressed_pair<CKComponentControllerAnimationData *, std::default_delete<CKComponentControllerAnimationData>>;

typedef struct unique_ptr<CKComponentControllerAnimationData, std::default_delete<CKComponentControllerAnimationData>> {
    __compressed_pair<CKComponentControllerAnimationData *, std::default_delete<CKComponentControllerAnimationData>> __ptr_;
} unique_ptr<CKComponentControllerAnimationData, std::default_delete<CKComponentControllerAnimationData>>;

typedef struct CKComponentControllerAnimationWrapper {
    unique_ptr<CKComponentControllerAnimationData, std::default_delete<CKComponentControllerAnimationData>> _animationData;
} CKComponentControllerAnimationWrapper;

typedef struct WFTextInputAttributes {
    BOOL editable;
    BOOL multiline;
    BOOL secureTextEntry;
    id placeholder;
    NSInteger NSString;
    NSInteger keyboardType;
    id textAlignment;
    NSInteger textContentType;
    NSInteger NSString;
    BOOL autocorrectionType;
    BOOL autocapitalizationType;
    BOOL smartQuotesDisabled;
    id smartDashesDisabled;
    id becomeFirstResponder;
    id variableString;
    id WFVariableString;
    id selectedRange;
    BOOL NSValue;
    id variableProvider;
    BOOL <WFVariableProvider>;
    UIEdgeInsets variableUIDelegate;
    id <WFVariableUIDelegate>;
    id allowedVariableTypes;
    NSUInteger NSSet;
    NSInteger variablesDisabled;
} WFTextInputAttributes;

typedef struct WFTagFieldAttributes {
    BOOL editable;
    BOOL allowsTextEntry;
    id placeholder;
    NSInteger NSString;
    NSInteger keyboardType;
    NSInteger textAlignment;
    NSInteger autocorrectionType;
    id autocapitalizationType;
    id tags;
    id NSString;
    id fieldTitle;
    id NSString;
    id suggestedTags;
    BOOL NSArray;
} WFTagFieldAttributes;

typedef struct CKTypedComponentAction<WFListEditorDeletionConfirmation *> {
    NSUInteger _variant;
    id _target;
    id _scopeHandle;
    SEL CKComponentScopeHandle;
} CKTypedComponentAction<WFListEditorDeletionConfirmation *>;

typedef struct WFRowTemplateItemTextFieldOptions {
    BOOL field0;
    id field1;
    id field2;
    NSInteger field3;
    id field4;
    id field5;
    id field6;
    BOOL field7;
    BOOL field8;
    id field9;
    id field10;
    id field11;
} WFRowTemplateItemTextFieldOptions;

typedef struct __compressed_pair<CKComponent *__strong *, std::allocator<CKComponent *>> {
    id __value_;
} __compressed_pair<CKComponent *__strong *, std::allocator<CKComponent *>>;

typedef struct vector<CKComponent *, std::allocator<CKComponent *>> {
    id __begin_;
    id __end_;
    __compressed_pair<CKComponent *__strong *, std::allocator<CKComponent *>> __end_cap_;
} vector<CKComponent *, std::allocator<CKComponent *>>;

typedef struct CKTypedComponentAction<UIEvent *> {
    NSUInteger _variant;
    id _target;
    id _scopeHandle;
    SEL CKComponentScopeHandle;
} CKTypedComponentAction<UIEvent *>;

typedef struct CKButtonComponentAccessibilityConfiguration {
    id field0;
} CKButtonComponentAccessibilityConfiguration;

typedef struct CKStateConfiguration {
    id title;
    id NSString;
    id attributedTitle;
    id NSAttributedString;
    id titleColor;
} CKStateConfiguration;

typedef struct array<CKStateConfiguration, 8UL> {
    CKStateConfiguration __elems_;
} array<CKStateConfiguration, 8UL>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<CKComponentViewAttribute, std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::hash<CKComponentViewAttribute>, std::equal_to<CKComponentViewAttribute>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<CKComponentViewAttribute, std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::hash<CKComponentViewAttribute>, std::equal_to<CKComponentViewAttribute>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<CKComponentViewAttribute, std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::equal_to<CKComponentViewAttribute>, std::hash<CKComponentViewAttribute>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<CKComponentViewAttribute, std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::equal_to<CKComponentViewAttribute>, std::hash<CKComponentViewAttribute>, true>>;

typedef struct __hash_table<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__unordered_map_hasher<CKComponentViewAttribute, std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::hash<CKComponentViewAttribute>, std::equal_to<CKComponentViewAttribute>, true>, std::__unordered_map_equal<CKComponentViewAttribute, std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::equal_to<CKComponentViewAttribute>, std::hash<CKComponentViewAttribute>, true>, std::allocator<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<CKComponentViewAttribute, std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::hash<CKComponentViewAttribute>, std::equal_to<CKComponentViewAttribute>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<CKComponentViewAttribute, std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::equal_to<CKComponentViewAttribute>, std::hash<CKComponentViewAttribute>, true>> __p3_;
} __hash_table<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__unordered_map_hasher<CKComponentViewAttribute, std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::hash<CKComponentViewAttribute>, std::equal_to<CKComponentViewAttribute>, true>, std::__unordered_map_equal<CKComponentViewAttribute, std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::equal_to<CKComponentViewAttribute>, std::hash<CKComponentViewAttribute>, true>, std::allocator<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>>>;

typedef struct unordered_map<CKComponentViewAttribute, CKBoxedValue, std::hash<CKComponentViewAttribute>, std::equal_to<CKComponentViewAttribute>, std::allocator<std::pair<const CKComponentViewAttribute, CKBoxedValue>>> {
    __hash_table<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__unordered_map_hasher<CKComponentViewAttribute, std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::hash<CKComponentViewAttribute>, std::equal_to<CKComponentViewAttribute>, true>, std::__unordered_map_equal<CKComponentViewAttribute, std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::equal_to<CKComponentViewAttribute>, std::hash<CKComponentViewAttribute>, true>, std::allocator<std::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>>> __table_;
} unordered_map<CKComponentViewAttribute, CKBoxedValue, std::hash<CKComponentViewAttribute>, std::equal_to<CKComponentViewAttribute>, std::allocator<std::pair<const CKComponentViewAttribute, CKBoxedValue>>>;

typedef struct WFDatePickerTitleAttachment {
    id field0;
    id field1;
} WFDatePickerTitleAttachment;

typedef struct WFDatePickerAttributes {
    BOOL field0;
    id field1;
    WFDatePickerTitleAttachment field2;
    id field3;
    id field4;
    NSInteger field5;
    id field6;
    id field7;
    id field8;
    BOOL field9;
    id field10;
    id field11;
    id field12;
} WFDatePickerAttributes;

typedef struct WFRowTemplateItemDateFieldOptions {
    BOOL field0;
    id field1;
    id field2;
    NSInteger field3;
    id field4;
    id field5;
    id field6;
    BOOL field7;
    id field8;
    id field9;
    id field10;
} WFRowTemplateItemDateFieldOptions;

typedef struct WFRowTemplateItemLabelComponentOptions {
    BOOL field0;
    id field1;
    id field2;
} WFRowTemplateItemLabelComponentOptions;

typedef struct WFRowTemplateItemEnumerationComponentOptions {
    BOOL field0;
    BOOL field1;
    id field2;
    id field3;
    id field4;
    BOOL field5;
} WFRowTemplateItemEnumerationComponentOptions;

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

typedef struct WFRowTemplateItemNumberFieldOptions {
    BOOL field0;
    id field1;
    id field2;
    BOOL field3;
    id field4;
    id field5;
    BOOL field6;
    id field7;
    id field8;
    id field9;
} WFRowTemplateItemNumberFieldOptions;

typedef struct WFMaskedShadowComponentOptions {
    CGFloat field0;
    id field1;
    id field2;
    CGSize field3;
    CGFloat field4;
    CGFloat field5;
    id field6;
    CGFloat field7;
    id field8;
    id field9;
} WFMaskedShadowComponentOptions;

typedef struct WFNumberFieldAttributes {
    BOOL editable;
    id placeholder;
    NSInteger NSString;
    BOOL textAlignment;
    id becomeFirstResponder;
    BOOL text;
    BOOL NSString;
    id allowsDecimalNumbers;
    id allowsNegatingNumbers;
    id variableProvider;
    BOOL <WFVariableProvider>;
    NSInteger variableUIDelegate;
} WFNumberFieldAttributes;

typedef struct CKTypedComponentAction<bool> {
    NSUInteger _variant;
    id _target;
    id _scopeHandle;
    SEL CKComponentScopeHandle;
} CKTypedComponentAction<bool>;

typedef struct CLLocationCoordinate2D {
    CGFloat field0;
    CGFloat field1;
} CLLocationCoordinate2D;

typedef struct WFContactFieldAttributes {
    BOOL editable;
    BOOL allowsTextEntry;
    id placeholder;
    NSInteger NSString;
    NSInteger keyboardType;
    NSInteger keyboardAppearance;
    id textAlignment;
    NSInteger textContentType;
    NSInteger NSString;
    id autocorrectionType;
    id autocapitalizationType;
    id entries;
    id NSArray;
    id supportedPersonProperties;
    BOOL NSSet;
} WFContactFieldAttributes;

typedef struct CKNetworkImageComponentOptions {
    id field0;
    CGRect field1;
} CKNetworkImageComponentOptions;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct shared_ptr<const void> {
    void field0;
    __shared_weak_count field1;
} shared_ptr<const void>;

typedef struct CKMemoizationKey {
    NSUInteger field0;
    shared_ptr<const void> field1;
    unk field2;
} CKMemoizationKey;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<CKMemoizationKey, std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::hash<CKMemoizationKey>, std::equal_to<CKMemoizationKey>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<CKMemoizationKey, std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::hash<CKMemoizationKey>, std::equal_to<CKMemoizationKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<CKMemoizationKey, std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::equal_to<CKMemoizationKey>, std::hash<CKMemoizationKey>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<CKMemoizationKey, std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::equal_to<CKMemoizationKey>, std::hash<CKMemoizationKey>, true>>;

typedef struct __hash_table<std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::__unordered_map_hasher<CKMemoizationKey, std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::hash<CKMemoizationKey>, std::equal_to<CKMemoizationKey>, true>, std::__unordered_map_equal<CKMemoizationKey, std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::equal_to<CKMemoizationKey>, std::hash<CKMemoizationKey>, true>, std::allocator<std::__hash_value_type<CKMemoizationKey, CKComponent *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CKMemoizationKey, CKComponent *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<CKMemoizationKey, std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::hash<CKMemoizationKey>, std::equal_to<CKMemoizationKey>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<CKMemoizationKey, std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::equal_to<CKMemoizationKey>, std::hash<CKMemoizationKey>, true>> __p3_;
} __hash_table<std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::__unordered_map_hasher<CKMemoizationKey, std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::hash<CKMemoizationKey>, std::equal_to<CKMemoizationKey>, true>, std::__unordered_map_equal<CKMemoizationKey, std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::equal_to<CKMemoizationKey>, std::hash<CKMemoizationKey>, true>, std::allocator<std::__hash_value_type<CKMemoizationKey, CKComponent *>>>;

typedef struct unordered_multimap<CKMemoizationKey, CKComponent *, std::hash<CKMemoizationKey>, std::equal_to<CKMemoizationKey>, std::allocator<std::pair<const CKMemoizationKey, CKComponent *>>> {
    __hash_table<std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::__unordered_map_hasher<CKMemoizationKey, std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::hash<CKMemoizationKey>, std::equal_to<CKMemoizationKey>, true>, std::__unordered_map_equal<CKMemoizationKey, std::__hash_value_type<CKMemoizationKey, CKComponent *>, std::equal_to<CKMemoizationKey>, std::hash<CKMemoizationKey>, true>, std::allocator<std::__hash_value_type<CKMemoizationKey, CKComponent *>>> __table_;
} unordered_multimap<CKMemoizationKey, CKComponent *, std::hash<CKMemoizationKey>, std::equal_to<CKMemoizationKey>, std::allocator<std::pair<const CKMemoizationKey, CKComponent *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<CKLayoutMemoizationKey, std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, CKLayoutMemoizationKey::Hash, CKLayoutMemoizationKey::Equals, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<CKLayoutMemoizationKey, std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, CKLayoutMemoizationKey::Hash, CKLayoutMemoizationKey::Equals, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<CKLayoutMemoizationKey, std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, CKLayoutMemoizationKey::Equals, CKLayoutMemoizationKey::Hash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<CKLayoutMemoizationKey, std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, CKLayoutMemoizationKey::Equals, CKLayoutMemoizationKey::Hash, true>>;

typedef struct __hash_table<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, std::__unordered_map_hasher<CKLayoutMemoizationKey, std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, CKLayoutMemoizationKey::Hash, CKLayoutMemoizationKey::Equals, true>, std::__unordered_map_equal<CKLayoutMemoizationKey, std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, CKLayoutMemoizationKey::Equals, CKLayoutMemoizationKey::Hash, true>, std::allocator<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<CKLayoutMemoizationKey, std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, CKLayoutMemoizationKey::Hash, CKLayoutMemoizationKey::Equals, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<CKLayoutMemoizationKey, std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, CKLayoutMemoizationKey::Equals, CKLayoutMemoizationKey::Hash, true>> __p3_;
} __hash_table<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, std::__unordered_map_hasher<CKLayoutMemoizationKey, std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, CKLayoutMemoizationKey::Hash, CKLayoutMemoizationKey::Equals, true>, std::__unordered_map_equal<CKLayoutMemoizationKey, std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, CKLayoutMemoizationKey::Equals, CKLayoutMemoizationKey::Hash, true>, std::allocator<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>>>;

typedef struct unordered_map<CKLayoutMemoizationKey, CKComponentLayout, CKLayoutMemoizationKey::Hash, CKLayoutMemoizationKey::Equals, std::allocator<std::pair<const CKLayoutMemoizationKey, CKComponentLayout>>> {
    __hash_table<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, std::__unordered_map_hasher<CKLayoutMemoizationKey, std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, CKLayoutMemoizationKey::Hash, CKLayoutMemoizationKey::Equals, true>, std::__unordered_map_equal<CKLayoutMemoizationKey, std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>, CKLayoutMemoizationKey::Equals, CKLayoutMemoizationKey::Hash, true>, std::allocator<std::__hash_value_type<CKLayoutMemoizationKey, CKComponentLayout>>> __table_;
} unordered_map<CKLayoutMemoizationKey, CKComponentLayout, CKLayoutMemoizationKey::Hash, CKLayoutMemoizationKey::Equals, std::allocator<std::pair<const CKLayoutMemoizationKey, CKComponentLayout>>>;

typedef struct shared_ptr<const std::unordered_map<CKComponentViewAttribute, CKBoxedValue>> {
    void __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<const std::unordered_map<CKComponentViewAttribute, CKBoxedValue>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<CK::Component::ViewKey, std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::hash<CK::Component::ViewKey>, std::equal_to<CK::Component::ViewKey>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<CK::Component::ViewKey, std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::hash<CK::Component::ViewKey>, std::equal_to<CK::Component::ViewKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<CK::Component::ViewKey, std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::equal_to<CK::Component::ViewKey>, std::hash<CK::Component::ViewKey>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<CK::Component::ViewKey, std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::equal_to<CK::Component::ViewKey>, std::hash<CK::Component::ViewKey>, true>>;

typedef struct __hash_table<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::__unordered_map_hasher<CK::Component::ViewKey, std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::hash<CK::Component::ViewKey>, std::equal_to<CK::Component::ViewKey>, true>, std::__unordered_map_equal<CK::Component::ViewKey, std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::equal_to<CK::Component::ViewKey>, std::hash<CK::Component::ViewKey>, true>, std::allocator<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<CK::Component::ViewKey, std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::hash<CK::Component::ViewKey>, std::equal_to<CK::Component::ViewKey>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<CK::Component::ViewKey, std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::equal_to<CK::Component::ViewKey>, std::hash<CK::Component::ViewKey>, true>> __p3_;
} __hash_table<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::__unordered_map_hasher<CK::Component::ViewKey, std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::hash<CK::Component::ViewKey>, std::equal_to<CK::Component::ViewKey>, true>, std::__unordered_map_equal<CK::Component::ViewKey, std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::equal_to<CK::Component::ViewKey>, std::hash<CK::Component::ViewKey>, true>, std::allocator<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>>>;

typedef struct unordered_map<CK::Component::ViewKey, CK::Component::ViewReusePool, std::hash<CK::Component::ViewKey>, std::equal_to<CK::Component::ViewKey>, std::allocator<std::pair<const CK::Component::ViewKey, CK::Component::ViewReusePool>>> {
    __hash_table<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::__unordered_map_hasher<CK::Component::ViewKey, std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::hash<CK::Component::ViewKey>, std::equal_to<CK::Component::ViewKey>, true>, std::__unordered_map_equal<CK::Component::ViewKey, std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>, std::equal_to<CK::Component::ViewKey>, std::hash<CK::Component::ViewKey>, true>, std::allocator<std::__hash_value_type<CK::Component::ViewKey, CK::Component::ViewReusePool>>> __table_;
} unordered_map<CK::Component::ViewKey, CK::Component::ViewReusePool, std::hash<CK::Component::ViewKey>, std::equal_to<CK::Component::ViewKey>, std::allocator<std::pair<const CK::Component::ViewKey, CK::Component::ViewReusePool>>>;

typedef struct __compressed_pair<UIView *__strong *, std::allocator<UIView *>> {
    id __value_;
} __compressed_pair<UIView *__strong *, std::allocator<UIView *>>;

typedef struct vector<UIView *, std::allocator<UIView *>> {
    id __begin_;
    id __end_;
    __compressed_pair<UIView *__strong *, std::allocator<UIView *>> __end_cap_;
} vector<UIView *, std::allocator<UIView *>>;

typedef struct ViewReusePoolMap {
    unordered_map<CK::Component::ViewKey, CK::Component::ViewReusePool, std::hash<CK::Component::ViewKey>, std::equal_to<CK::Component::ViewKey>, std::allocator<std::pair<const CK::Component::ViewKey, CK::Component::ViewReusePool>>> map;
    vector<UIView *, std::allocator<UIView *>> vendedViews;
} ViewReusePoolMap;

typedef struct CKComponentScopeFramePair {
    id field0;
    id field1;
} CKComponentScopeFramePair;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<_CKStateScopeKey, std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::hash<_CKStateScopeKey>, std::equal_to<_CKStateScopeKey>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<_CKStateScopeKey, std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::hash<_CKStateScopeKey>, std::equal_to<_CKStateScopeKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<_CKStateScopeKey, std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::equal_to<_CKStateScopeKey>, std::hash<_CKStateScopeKey>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<_CKStateScopeKey, std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::equal_to<_CKStateScopeKey>, std::hash<_CKStateScopeKey>, true>>;

typedef struct __hash_table<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::__unordered_map_hasher<_CKStateScopeKey, std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::hash<_CKStateScopeKey>, std::equal_to<_CKStateScopeKey>, true>, std::__unordered_map_equal<_CKStateScopeKey, std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::equal_to<_CKStateScopeKey>, std::hash<_CKStateScopeKey>, true>, std::allocator<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<_CKStateScopeKey, std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::hash<_CKStateScopeKey>, std::equal_to<_CKStateScopeKey>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<_CKStateScopeKey, std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::equal_to<_CKStateScopeKey>, std::hash<_CKStateScopeKey>, true>> __p3_;
} __hash_table<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::__unordered_map_hasher<_CKStateScopeKey, std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::hash<_CKStateScopeKey>, std::equal_to<_CKStateScopeKey>, true>, std::__unordered_map_equal<_CKStateScopeKey, std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::equal_to<_CKStateScopeKey>, std::hash<_CKStateScopeKey>, true>, std::allocator<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>>>;

typedef struct unordered_map<_CKStateScopeKey, CKComponentScopeFrame *, std::hash<_CKStateScopeKey>, std::equal_to<_CKStateScopeKey>, std::allocator<std::pair<const _CKStateScopeKey, CKComponentScopeFrame *>>> {
    __hash_table<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::__unordered_map_hasher<_CKStateScopeKey, std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::hash<_CKStateScopeKey>, std::equal_to<_CKStateScopeKey>, true>, std::__unordered_map_equal<_CKStateScopeKey, std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>, std::equal_to<_CKStateScopeKey>, std::hash<_CKStateScopeKey>, true>, std::allocator<std::__hash_value_type<_CKStateScopeKey, CKComponentScopeFrame *>>> __table_;
} unordered_map<_CKStateScopeKey, CKComponentScopeFrame *, std::hash<_CKStateScopeKey>, std::equal_to<_CKStateScopeKey>, std::allocator<std::pair<const _CKStateScopeKey, CKComponentScopeFrame *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<CKComponentAnnouncedEvent, std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<CKComponentAnnouncedEvent, std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<CKComponentAnnouncedEvent, std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<CKComponentAnnouncedEvent, std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>>;

typedef struct __hash_table<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::__unordered_map_hasher<CKComponentAnnouncedEvent, std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<CKComponentAnnouncedEvent, std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<CKComponentAnnouncedEvent, std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<CKComponentAnnouncedEvent, std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>> __p3_;
} __hash_table<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::__unordered_map_hasher<CKComponentAnnouncedEvent, std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<CKComponentAnnouncedEvent, std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>>>;

typedef struct unordered_multimap<CKComponentAnnouncedEvent, CKComponentController *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const CKComponentAnnouncedEvent, CKComponentController *>>> {
    __hash_table<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::__unordered_map_hasher<CKComponentAnnouncedEvent, std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::hash<unsigned long>, std::equal_to<unsigned long>, true>, std::__unordered_map_equal<CKComponentAnnouncedEvent, std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::equal_to<unsigned long>, std::hash<unsigned long>, true>, std::allocator<std::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>>> __table_;
} unordered_multimap<CKComponentAnnouncedEvent, CKComponentController *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const CKComponentAnnouncedEvent, CKComponentController *>>>;

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct shared_ptr<const std::vector<__weak id>> {
    void __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<const std::vector<__weak id>>;

typedef struct CKBuildComponentResult {
    id field0;
    id field1;
    CKComponentBoundsAnimation field2;
} CKBuildComponentResult;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, id (^)(id)>, std::equal_to<int>, std::hash<int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, id (^)(id)>, std::equal_to<int>, std::hash<int>, true>>;

typedef struct __hash_table<std::__hash_value_type<int, id (^)(id)>, std::__unordered_map_hasher<int, std::__hash_value_type<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, id (^)(id)>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, id (^)(id)>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, id (^)(id)>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, id (^)(id)>, std::equal_to<int>, std::hash<int>, true>> __p3_;
} __hash_table<std::__hash_value_type<int, id (^)(id)>, std::__unordered_map_hasher<int, std::__hash_value_type<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, id (^)(id)>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, id (^)(id)>>>;

typedef struct unordered_multimap<int, id (^)(id), std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, id (^)(id)>>> {
    __hash_table<std::__hash_value_type<int, id (^)(id)>, std::__unordered_map_hasher<int, std::__hash_value_type<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, id (^)(id)>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, id (^)(id)>>> __table_;
} unordered_multimap<int, id (^)(id), std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, id (^)(id)>>>;

typedef struct CKComponentHostingViewInputs {
    id scopeRoot;
    id CKComponentScopeRoot;
    id model;
    unordered_multimap<int, id (^)(id), std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, id (^)(id)>>> <NSObject>;
} CKComponentHostingViewInputs;

typedef struct CKStackLayoutComponentStyle {
    NSUInteger direction;
    CGFloat spacing;
    NSUInteger justifyContent;
    NSUInteger alignItems;
} CKStackLayoutComponentStyle;

typedef struct CKStackLayoutComponentChild {
} // Error Processing Struct Fields

typedef struct vector<CKStackLayoutComponentChild, std::allocator<CKStackLayoutComponentChild>> {
} // Error Processing Struct Fields

typedef struct CKStaticLayoutComponentChild {
} // Error Processing Struct Fields

typedef struct vector<CKStaticLayoutComponentChild, std::allocator<CKStaticLayoutComponentChild>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::pair<__unsafe_unretained Class, id>, std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, PoolKeyHasher, std::equal_to<std::pair<__unsafe_unretained Class, id>>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::pair<__unsafe_unretained Class, id>, std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, PoolKeyHasher, std::equal_to<std::pair<__unsafe_unretained Class, id>>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::pair<__unsafe_unretained Class, id>, std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::equal_to<std::pair<__unsafe_unretained Class, id>>, PoolKeyHasher, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::pair<__unsafe_unretained Class, id>, std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::equal_to<std::pair<__unsafe_unretained Class, id>>, PoolKeyHasher, true>>;

typedef struct __hash_table<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::__unordered_map_hasher<std::pair<__unsafe_unretained Class, id>, std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, PoolKeyHasher, std::equal_to<std::pair<__unsafe_unretained Class, id>>, true>, std::__unordered_map_equal<std::pair<__unsafe_unretained Class, id>, std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::equal_to<std::pair<__unsafe_unretained Class, id>>, PoolKeyHasher, true>, std::allocator<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::pair<__unsafe_unretained Class, id>, std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, PoolKeyHasher, std::equal_to<std::pair<__unsafe_unretained Class, id>>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::pair<__unsafe_unretained Class, id>, std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::equal_to<std::pair<__unsafe_unretained Class, id>>, PoolKeyHasher, true>> __p3_;
} __hash_table<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::__unordered_map_hasher<std::pair<__unsafe_unretained Class, id>, std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, PoolKeyHasher, std::equal_to<std::pair<__unsafe_unretained Class, id>>, true>, std::__unordered_map_equal<std::pair<__unsafe_unretained Class, id>, std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::equal_to<std::pair<__unsafe_unretained Class, id>>, PoolKeyHasher, true>, std::allocator<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>>;

typedef struct unordered_map<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::equal_to<std::pair<__unsafe_unretained Class, id>>, std::allocator<std::pair<const std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> {
    __hash_table<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::__unordered_map_hasher<std::pair<__unsafe_unretained Class, id>, std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, PoolKeyHasher, std::equal_to<std::pair<__unsafe_unretained Class, id>>, true>, std::__unordered_map_equal<std::pair<__unsafe_unretained Class, id>, std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>, std::equal_to<std::pair<__unsafe_unretained Class, id>>, PoolKeyHasher, true>, std::allocator<std::__hash_value_type<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> __table_;
} unordered_map<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::equal_to<std::pair<__unsafe_unretained Class, id>>, std::allocator<std::pair<const std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::hash<int>, std::equal_to<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::hash<int>, std::equal_to<int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::equal_to<int>, std::hash<int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::equal_to<int>, std::hash<int>, true>>;

typedef struct __hash_table<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::__unordered_map_hasher<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::hash<int>, std::equal_to<int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::equal_to<int>, std::hash<int>, true>> __p3_;
} __hash_table<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::__unordered_map_hasher<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>>>;

typedef struct unordered_map<int, std::unordered_multimap<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, std::unordered_multimap<int, id (^)(id)>>>> {
    __hash_table<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::__unordered_map_hasher<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, std::unordered_multimap<int, id (^)(id)>>>> __table_;
} unordered_map<int, std::unordered_multimap<int, id (^)(id)>, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, std::unordered_multimap<int, id (^)(id)>>>>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct __compressed_pair<SEL **, std::allocator<SEL *>> {
    SEL __value_;
} __compressed_pair<SEL **, std::allocator<SEL *>>;

typedef struct vector<SEL *, std::allocator<SEL *>> {
    SEL __begin_;
    SEL __end_;
    __compressed_pair<SEL **, std::allocator<SEL *>> __end_cap_;
} vector<SEL *, std::allocator<SEL *>>;

typedef struct CKLabelAttributes {
    id field0;
    id field1;
    id field2;
    id field3;
    NSInteger field4;
    NSUInteger field5;
    CGSize field6;
    id field7;
    CGFloat field8;
    CGFloat field9;
    NSInteger field10;
    CGFloat field11;
    CGFloat field12;
    CGFloat field13;
    CGFloat field14;
    CGFloat field15;
    CGFloat field16;
    CGFloat field17;
    CGFloat field18;
    CGFloat field19;
} CKLabelAttributes;

typedef struct CKTextKitAttributes {
    id attributedString;
    id NSAttributedString;
    id truncationAttributedString;
    NSInteger NSAttributedString;
    NSUInteger avoidTailTruncationSet;
    CGSize NSCharacterSet;
    id lineBreakMode;
    CGFloat maximumNumberOfLines;
    CGFloat shadowOffset;
    unk shadowColor;
} CKTextKitAttributes;

typedef struct CKComponentAccessibilityTextAttribute {
    id accessibilityLazyTextBlock;
    unk field1;
} CKComponentAccessibilityTextAttribute;

typedef struct CKTextComponentAccessibilityContext {
    id isAccessibilityElement;
    id NSNumber;
    CKComponentAccessibilityTextAttribute providesAccessibleElements;
} CKTextComponentAccessibilityContext;

typedef struct CKTextComponentOptions {
    NSUInteger field0;
    CKTextComponentAccessibilityContext field1;
} CKTextComponentOptions;

typedef struct CGPath {
} // Error Processing Struct Fields

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

typedef struct vector<_NSRange, std::allocator<_NSRange>> {
} // Error Processing Struct Fields

