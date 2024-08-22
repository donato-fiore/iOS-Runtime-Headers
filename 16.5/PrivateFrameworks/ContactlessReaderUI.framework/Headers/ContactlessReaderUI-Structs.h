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
    BOOL subclassShouldReceiveTouchForEventRecognizerView;
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
    BOOL isWebKitMouseGestureRecognizer;
    BOOL canBeCancelledByAffectedViews;
    BOOL enqueuedForReset;
} ?;

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

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

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

typedef struct _UITraitCollectionTraitChanges {
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
} _UITraitCollectionTraitChanges;

typedef struct _UITraitCollectionChangeDescription {
    id field0;
    id field1;
    BOOL field2;
    _UITraitCollectionTraitChanges field3;
} _UITraitCollectionChangeDescription;

typedef struct CGContext {
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

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

