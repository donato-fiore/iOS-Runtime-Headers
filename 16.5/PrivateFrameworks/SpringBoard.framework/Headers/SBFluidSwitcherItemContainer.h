// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLUIDSWITCHERITEMCONTAINER_H
#define SBFLUIDSWITCHERITEMCONTAINER_H

@class SBFTouchPassThroughClippingView, UILongPressGestureRecognizer, UITapGestureRecognizer, SBFFluidBehaviorSettings, UIHoverGestureRecognizer, UIDragInteraction, UIView, UIView<SBAppSwitcherPageContentView>, NSString;
@protocol UIScrollViewDelegate, UIGestureRecognizerDelegate, SBFailureNotifyingTapGestureRecognizerDelegate, UIDragInteractionDelegate, SBAppSwitcherPageViewDelegate, SBAffordancePresenceControllerDelegate, SBAppPlatterDragSourceViewProviding, SBFluidSwitcherItemContainerDelegate;


#import "SBFluidSwitcherTouchPassThroughScrollView.h"
#import "SBAppSwitcherPageView.h"
#import "SBFluidSwitcherIconOverlayView.h"
#import "SBFailureNotifyingTapGestureRecognizer.h"
#import "SBAppSwitcherSettings.h"
#import "SBMedusaSettings.h"
#import "SBApplicationBlurContentView.h"
#import "SBAffordancePresenceController.h"
#import "SBAppLayout.h"

@interface SBFluidSwitcherItemContainer : SBFTouchPassThroughClippingView <UIScrollViewDelegate, UIGestureRecognizerDelegate, SBFailureNotifyingTapGestureRecognizerDelegate, UIDragInteractionDelegate, SBAppSwitcherPageViewDelegate, SBAffordancePresenceControllerDelegate, SBAppPlatterDragSourceViewProviding>

 {
    SBFluidSwitcherTouchPassThroughScrollView *_killScrollView;
    CGFloat _killScrollViewInitialVelocityScaleFactor;
    SBAppSwitcherPageView *_pageView;
    SBFluidSwitcherIconOverlayView *_iconOverlayView;
    UILongPressGestureRecognizer *_pressDownGestureRecognizer;
    UILongPressGestureRecognizer *_selectionHighlightGestureRecognizer;
    SBFailureNotifyingTapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    SBFFluidBehaviorSettings *_squishSettings;
    SBAppSwitcherSettings *_settings;
    SBMedusaSettings *_medusaSettings;
    BOOL _sentKillRequest;
    CGPoint _highlightTapDownLocation;
    BOOL _animatingPageViewScale;
    SBApplicationBlurContentView *_blurView;
    BOOL _blurred;
    CGFloat _killProgressForCurrentDecelerationTarget;
    UIHoverGestureRecognizer *_hoverGestureRecognizer;
    UIDragInteraction *_dragInteraction;
    UITapGestureRecognizer *_returnKeyGestureRecognizer;
    BOOL _hasPageViewBeenCommitted;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) SBAffordancePresenceController *affordancePresenceController; // ivar: _affordancePresenceController
@property (nonatomic) NSUInteger allowedTouchResizeCorners;
@property (retain, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (nonatomic) CGFloat blurViewIconScale;
@property (nonatomic) BOOL clipsToUnobscuredMargin; // ivar: _clipsToUnobscuredMargin
@property (nonatomic) CGFloat contentAlpha; // ivar: _contentAlpha
@property (nonatomic) UIRectCornerRadii contentCornerRadii; // ivar: _contentCornerRadii
@property (retain, nonatomic) UIView *contentOverlay;
@property (nonatomic) CGFloat contentPageViewScale; // ivar: _contentPageViewScale
@property (retain, nonatomic) UIView<SBAppSwitcherPageContentView> *contentView;
@property (nonatomic) BOOL contentViewBlocksTouches;
@property (readonly, nonatomic) BOOL contentViewHasSceneOverlay;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFluidSwitcherItemContainerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat dimmingAlpha;
@property (nonatomic, getter=isDraggable) BOOL draggable; // ivar: _draggable
@property (nonatomic, getter=isDragging) BOOL dragging; // ivar: _dragging
@property (readonly, nonatomic) CGFloat effectivePageViewPresentationCornerRadius;
@property (readonly, nonatomic) CGRect effectivePageViewPresentationFrame;
@property (nonatomic, getter=isEligibleForContentDragSpringLoading) BOOL eligibleForContentDragSpringLoading; // ivar: _eligibleForContentDragSpringLoading
@property (nonatomic, getter=isFocusable) BOOL focusable; // ivar: _focusable
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlightedFromCursorHover) BOOL highlightedFromCursorHover; // ivar: _highlightedFromCursorHover
@property (nonatomic, getter=isHighlightedFromDirectTouch) BOOL highlightedFromDirectTouch; // ivar: _highlightedFromDirectTouch
@property (nonatomic, getter=pointerIsHoveringOverEdge) NSUInteger hoveringOverEdge; // ivar: _hoveringOverEdge
@property (readonly, nonatomic) BOOL isDeceleratingTowardsKillZone;
@property (nonatomic) NSUInteger killAxis; // ivar: _killAxis
@property (nonatomic, getter=isKillable) BOOL killable; // ivar: _killable
@property (readonly, nonatomic) CGFloat killingProgress;
@property (nonatomic, getter=isLifted) BOOL lifted; // ivar: _lifted
@property (nonatomic) CGFloat lighteningAlpha;
@property (nonatomic) NSUInteger maskedCorners; // ivar: _maskedCorners
@property (nonatomic) CGPoint meshWarpCollapsedTargetPosition; // ivar: _meshWarpCollapsedTargetPosition
@property (nonatomic) CGPoint meshWarpExpandedSourcePosition; // ivar: _meshWarpExpandedSourcePosition
@property (nonatomic) CGFloat minimumTranslationForKillingContainer; // ivar: _minimumTranslationForKillingContainer
@property (nonatomic, getter=isOccludedInContinuousExposeStage) BOOL occludedInContinuousExposeStage;
@property (nonatomic) CGPoint pageViewAnchorPoint; // ivar: _pageViewAnchorPoint
@property (nonatomic) CGPoint pageViewOffset; // ivar: _pageViewOffset
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled; // ivar: _pointerInteractionEnabled
@property (nonatomic) CGFloat pointerInteractionHitTestPadding; // ivar: _pointerInteractionHitTestPadding
@property (nonatomic) BOOL positionAnimationsBeginFromModelState;
@property (nonatomic, getter=isPreferredPointerLockStatusSuppressed) BOOL preferredPointerLockStatusSuppressed; // ivar: _preferredPointerLockStatusSuppressed
@property (nonatomic, getter=isResizingAllowed) BOOL resizingAllowed; // ivar: _resizingAllowed
@property (nonatomic, getter=isRubberbandable) BOOL rubberbandable; // ivar: _rubberbandable
@property (nonatomic, getter=isSelectable) BOOL selectable; // ivar: _selectable
@property (nonatomic) CGFloat shadowAlpha;
@property (nonatomic) CGFloat shadowOffset;
@property (nonatomic) NSInteger shadowStyle;
@property (nonatomic) BOOL shouldApplyMeshWarp; // ivar: _shouldApplyMeshWarp
@property (nonatomic) BOOL shouldScaleOverlayToFillBounds; // ivar: _shouldScaleOverlayToFillBounds
@property (nonatomic) BOOL shouldUseBackgroundWallpaperTreatment;
@property (nonatomic) BOOL shouldUseWallpaperGradientTreatment; // ivar: _shouldUseWallpaperGradientTreatment
@property (nonatomic) CGSize sizeForContainingSpace; // ivar: _sizeForContainingSpace
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSwitcherDragAndDrop; // ivar: _supportsSwitcherDragAndDrop
@property (nonatomic) BOOL suppressesHighlightEffect; // ivar: _suppressesHighlightEffect
@property (nonatomic) NSInteger tintStyle; // ivar: _tintStyle
@property (nonatomic) BOOL transformAnimationsAreLegacyCounterRotations;
@property (nonatomic) CGFloat unobscuredMargin; // ivar: _unobscuredMargin
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible
@property (nonatomic) SBSwitcherGradientWallpaperAttributes wallpaperGradientAttributes; // ivar: _wallpaperGradientAttributes
@property (nonatomic) CGFloat wallpaperOverlayAlpha;


+(CGFloat)preferredRestingVisibleMarginForBounds:(struct CGRect )arg0 ;
+(Class)layerClass;
-(BOOL)_dragInteraction:(id)arg0 shouldDelayCompetingGestureRecognizer:(id)arg1 ;
-(BOOL)_scrollViewShouldPanGestureTryToBegin:(id)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)appSwitcherPageView:(id)arg0 shouldBeginPointerInteractionAtLocation:(struct CGPoint )arg1 window:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_CGPointXOrYBasedOnKillAxis:(struct CGPoint )arg0 ;
-(CGFloat)_CGSizeWidthOrHeightBasedOnKillAxis:(struct CGSize )arg0 ;
-(CGFloat)_inverseScaleTransformFactor;
-(CGFloat)_killingProgressForContentOffset:(struct CGPoint )arg0 ;
-(CGFloat)_scaleForHighlightFromCursorHover;
-(CGFloat)_scaleForHighlightFromDirectTouch;
-(CGFloat)currentStatusBarHeight;
-(id)_createScrollView;
-(id)_pageView;
-(id)_springLoadingEffectTargetView;
-(id)containerViewForBlurContentView;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)focusEffect;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 appLayout:(id)arg1 delegate:(id)arg2 active:(BOOL)arg3 windowScene:(id)arg4 ;
-(id)initialCornerRadiusConfiguration;
-(id)initialDiffuseShadowFilters;
-(id)initialRimShadowFilters;
-(id)layer;
-(id)sourceView;
-(struct CGPoint )_CGPointFromScalarBasedOnKillAxis:(CGFloat)arg0 ;
-(struct CGPoint )_contentOffsetAtRest;
-(struct CGPoint )_contentOffsetForKillingProgress:(CGFloat)arg0 ;
-(struct CGRect )_frameForPageView;
-(struct CGRect )_frameForScrollView;
-(struct CGSize )_CGSizeFromLengthBasedOnKillAxis:(CGFloat)arg0 ;
-(struct CGSize )_contentSizeForScrollView;
-(struct CGSize )_overlayViewSize;
-(struct SBDragPreviewShadowParameters )initialDiffuseShadowParameters;
-(struct SBDragPreviewShadowParameters )initialRimShadowParameters;
-(void)_addPageView;
-(void)_ensureSubviewOrder;
-(void)_handleHoverGesture:(id)arg0 ;
-(void)_handlePageViewPressDown:(id)arg0 ;
-(void)_handlePageViewTap:(id)arg0 ;
-(void)_handleSelectionHighlightGesture:(id)arg0 ;
-(void)_notifyDelegateScrollViewDidChange;
-(void)_resetKillProgressScrollState;
-(void)_returnKeyPressed:(id)arg0 ;
-(void)_updateAccessibilityIdentifier;
-(void)_updateForPointerHoveringOverEdge:(NSUInteger)arg0 ;
-(void)_updateKillScrollViewEnabled;
-(void)_updatePageViewContentClippingFrame;
-(void)_updatePageViewContentViewClipping;
-(void)_updateShadowVisibility;
-(void)_updateTransformForCurrentHighlight;
-(void)affordancePresenceController:(id)arg0 didChangeToPresence:(NSInteger)arg1 ;
-(void)appSwitcherPageView:(id)arg0 pointerIsHoveringOverEdge:(NSUInteger)arg1 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)gestureRecognizerTransitionedToFailed:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
// -(void)setBlurred:(BOOL)arg0 duration:(CGFloat)arg1 blurDelay:(CGFloat)arg2 iconViewScale:(CGFloat)arg3 began:(id)arg4 completion:(unk)arg5  ;


@end


#endif