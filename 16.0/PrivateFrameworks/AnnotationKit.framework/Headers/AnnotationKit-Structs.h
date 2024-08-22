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

typedef struct AKQuadrilateral {
    CGPoint field0;
    CGPoint field1;
    CGPoint field2;
    CGPoint field3;
} AKQuadrilateral;

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct _NSZone {
} // Error Processing Struct Fields

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
    BOOL enqueuedForReset;
} ?;

typedef struct potrace_dpoint_s {
} // Error Processing Struct Fields

typedef struct potrace_curve_s {
    int field0;
    int field1;
    potrace_dpoint_s field2;
} potrace_curve_s;

typedef struct potrace_path_s {
} // Error Processing Struct Fields

typedef struct potrace_bitmap_s {
    int field0;
    int field1;
    int field2;
    NSUInteger field3;
} potrace_bitmap_s;

typedef struct potrace_progress_s {
    unk field0;
    void field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
} potrace_progress_s;

typedef struct potrace_param_s {
    int field0;
    int field1;
    CGFloat field2;
    int field3;
    CGFloat field4;
    potrace_progress_s field5;
} potrace_param_s;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

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

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct CACornerRadii {
    CGSize field0;
    CGSize field1;
    CGSize field2;
    CGSize field3;
} CACornerRadii;

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

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct CGPDFDocument {
} // Error Processing Struct Fields

typedef struct PATHSEGMENT {
    BOOL field0;
    BOOL field1;
    CGPoint field2;
} PATHSEGMENT;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct __IOHIDManager {
} // Error Processing Struct Fields

typedef struct _xmlNode {
} // Error Processing Struct Fields

typedef struct _xmlDoc {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct vImage_Buffer {
    void field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
} vImage_Buffer;

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

