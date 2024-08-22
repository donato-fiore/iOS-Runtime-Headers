typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct ? {
    BOOL delegateShouldBegin;
    BOOL delegateCanPrevent;
    BOOL delegateCanBePrevented;
    BOOL delegateShouldRecognizeSimultaneously;
    BOOL delegateShouldReceiveEvent;
    BOOL delegateShouldReceiveTouch;
    BOOL delegateShouldReceivePress;
    BOOL delegateShouldRequireFailure;
    BOOL delegateShouldBeRequiredToFail;
    BOOL delegateFailed;
    BOOL privateDelegateShouldBegin;
    BOOL privateDelegateCanPrevent;
    BOOL privateDelegateCanBePrevented;
    BOOL privateDelegateShouldRecognizeSimultaneously;
    BOOL privateDelegateShouldReceiveEvent;
    BOOL privateDelegateShouldReceiveTouch;
    BOOL privateDelegateShouldReceivePress;
    BOOL privateDelegateShouldRequireFailure;
    BOOL privateDelegateShouldBeRequiredToFail;
    BOOL subclassShouldRequireFailure;
    BOOL subclassShouldBeRequiredToFail;
    BOOL hasSubclassDynamicFailureRequirements;
    BOOL hasDelegateDynamicFailureRequirements;
    BOOL subclassTouchesEstimatedPropertiesUpdated;
    BOOL queriedFailureRequirements;
    BOOL cancelsTouchesInView;
    BOOL delaysTouchesBegan;
    BOOL delaysTouchesEnded;
    BOOL disabled;
    BOOL dirty;
    BOOL delivered;
    BOOL deliveredEndedOrCancelled;
    BOOL continuous;
    BOOL requiresDelayedBegan;
    BOOL willBeginAfterSatisfyingFailureRequirements;
    BOOL requiresSystemGesturesToFail;
    BOOL acceptsFailureRequirements;
    BOOL requiresExclusiveTouchType;
    BOOL initialTouchTypeIsValid;
    BOOL forceRequirementSatisfied;
    BOOL wantsDragEvents;
    BOOL conformsToDragEventRespondable;
    BOOL isDynamicGesture;
    BOOL canExcludeWithActiveRequirements;
    BOOL isObservingGesture;
    BOOL didCheckForcePressShouldBegin;
    BOOL canSendForcePressAction;
    BOOL queriedShouldReceiveTouchesEvent;
    BOOL shouldReceiveTouchesEvent;
    BOOL queriedDelegateShouldReceiveTouchesEvent;
    BOOL delegateShouldReceiveTouchesEvent;
    BOOL queriedShouldReceivePressesEvent;
    BOOL shouldReceivePressesEvent;
    BOOL queriedDelegateShouldReceivePressesEvent;
    BOOL delegateShouldReceivePressesEvent;
    BOOL conformsToHoverEventRespondable;
    BOOL conformsToScrollEventRespondable;
    BOOL conformsToTransformEventRespondable;
    BOOL canBeCancelledByAffectedViews;
} ?;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

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

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct NSDirectionalEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSDirectionalEdgeInsets;

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

typedef struct array<unsigned char, 16> {
    unsigned char field0;
} array<unsigned char, 16>;

typedef struct array<float __attribute__((ext_vector_type(3))), 4> {
} // Error Processing Struct Fields

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void field0;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::array<unsigned char, 16>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::array<unsigned char, 16>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<std::array<unsigned char, 16>>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::less<std::array<unsigned char, 16>>>;

typedef struct __tree<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::array<unsigned char, 16>, void *>>> field1;
    __compressed_pair<unsigned long, std::less<std::array<unsigned char, 16>>> field2;
} __tree<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>>;

typedef struct set<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> {
    __tree<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> field0;
} set<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>>;

typedef struct ARTexturedPlane {
    array<unsigned char, 16> field0;
    NSUInteger field1;
    ? field2;
    array<float __attribute__((ext_vector_type(3))), 4> field3;
    set<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> field4;
    id field5;
} ARTexturedPlane;

