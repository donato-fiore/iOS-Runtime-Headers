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

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

