// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSGROUPSTACKVIEW_H
#define PKPASSGROUPSTACKVIEW_H

@class UIScrollView, NSMutableArray, NSMutableDictionary, UIView, UIImageView, NSTimer, PKPaymentService, PKSecureElement, NSNumber, PKPass, _UIDynamicValueAnimation, UIColor, NSString, PKDiscoveryDataSource, PKGroupsController;
@protocol PKPassGroupViewDelegate, PKPassDeleteAnimationControllerDelegate, PKPaymentServiceDelegate, PKPassFooterViewDelegate, PKDashboardPassViewControllerDelegate, PKPassDeleteHandler, PKPassGroupViewReceiver, OS_dispatch_source, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate><UIScrollViewDelegate;


#import "PKPassGroupView.h"
#import "PKPGSVSectionHeaderContext.h"
#import "PKPGSVTransitionInterstitialView.h"
#import "PKPassDeleteAnimationController.h"
#import "PKReusablePassViewQueue.h"
#import "PKPassFooterView.h"
#import "PKPassthroughView.h"
#import "PKNavigationDashboardPassViewController.h"
#import "PKBackdropView.h"

@interface PKPassGroupStackView : UIScrollView <PKPassGroupViewDelegate, PKPassDeleteAnimationControllerDelegate, PKPaymentServiceDelegate, PKPassFooterViewDelegate, PKDashboardPassViewControllerDelegate, PKPassDeleteHandler, PKPassGroupViewReceiver>

 {
    PKPassGroupView *_modallyPresentedGroupView;
    NSMutableArray *_passPileViews;
    NSInteger _scrollingTestState;
    int _currentTestReps;
    NSMutableDictionary *_groupViewsByGroupID;
    PKPGSVSectionHeaderContext *_paymentHeaderContext;
    PKPGSVSectionHeaderContext *_passHeaderContext;
    PKPGSVTransitionInterstitialView *_leadingInterstitialItemView;
    PKPGSVTransitionInterstitialView *_trailingInterstitialItemView;
    CGFloat _footerAnimationDelay;
    UIView *_footerView;
    CGFloat _footerViewMinimumHeight;
    UIImageView *_footerPocketBackgroundShadow;
    UIImageView *_footerPocketForegroundShadow;
    CGFloat _bottomContentSeparatorVisibility;
    NSObject<OS_dispatch_source> *_bottomContentSeparatorVisibilityTimer;
    ? _layoutState;
    CGSize _lastBoundsSize;
    UIEdgeInsets _lastBoundsInsets;
    CGFloat _lastTopContentSeparatorHeight;
    PKPassDeleteAnimationController *_deleteAnimationController;
    id *_transitionCanceller;
    NSInteger _nextState;
    NSInteger _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    unsigned int _externalPresentationTag;
    unsigned int _interstitialTag;
    BOOL _hasSuspendedTransition;
    NSInteger _suspendedNextState;
    NSMutableArray *_suspendedTransitionCompletionHandlers;
    PKReusablePassViewQueue *_reusableCardViewQueue;
    PKPassGroupView *_reorderedGroupView;
    NSUInteger _initialIndexOfReorderedGroup;
    NSUInteger _previousIndexOfReorderedGroup;
    CGPoint _reorderedGroupViewPositionInFrame;
    CGPoint _panningVelocity;
    NSTimer *_autoscrollTimer;
    ? _reorderingFlags;
    NSMutableArray *_reorderActions;
    NSUInteger _reorderActionTag;
    NSMutableDictionary *_groupViewsInFlightByGroupID;
    unsigned int _userInteractionCounter;
    NSMutableDictionary *_animatorsByGroupID;
    PKPaymentService *_paymentService;
    PKPassFooterView *_passFooterView;
    BOOL _passFooterViewVisible;
    CGFloat _passFooterViewAlpha;
    unsigned int _passFooterViewOutstandingAnimations;
    unsigned int _passFooterViewVisibilityToken;
    BOOL _invalidated;
    PKPassthroughView *_headerContainerView;
    PKPassthroughView *_subheaderContainerView;
    PKPassthroughView *_passContainerView;
    PKSecureElement *_secureElement;
    BOOL _delegateWantsTopContentSeparation;
    BOOL _delegateWantsBottomContentSeparation;
    BOOL _wantsBacklightRamping;
    NSNumber *_featuredGroupID;
    PKNavigationDashboardPassViewController *_externalVC;
    PKPassGroupView *_loanedGroupView;
    NSInteger _pressedGroupViewIndex;
    CGFloat _modalGroupViewVelocity;
    BOOL _modalGroupViewDragging;
    PKPass *_passToBeDeletedExternally;
    CGFloat _timeBackdropViewLastPresented;
    PKBackdropView *_backdropView;
    BOOL _isHidingBackdropView;
    BOOL _isPresentingBackdropView;
    _UIDynamicValueAnimation *_panningAnimation;
    BOOL _effectivePaused;
}


@property (readonly, nonatomic) NSInteger coachingState; // ivar: _coachingState
@property (copy, nonatomic) UIColor *currentPageIndicatorTintColor; // ivar: _currentPageIndicatorTintColor
@property (weak, nonatomic) NSObject<PKPassGroupStackViewDatasource> *datasource; // ivar: _datasource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassGroupStackViewDelegate><UIScrollViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKDiscoveryDataSource *discoveryDatasource; // ivar: _discoveryDatasource
@property (nonatomic) BOOL externalFooterSuppressed; // ivar: _externalFooterSuppressed
@property (nonatomic) BOOL footerSuppressed; // ivar: _footerSuppressed
@property (retain, nonatomic) PKGroupsController *groupsController; // ivar: _groupsController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isModallyPresentedPassAuthorized;
@property (readonly, nonatomic) BOOL isModallyPresentedPassInPaymentSession;
@property (readonly, nonatomic) BOOL isPresentingPassViewFront;
@property (readonly, nonatomic) BOOL isReordering;
@property (readonly, nonatomic) PKPass *modalGroupFrontmostPass;
@property (nonatomic) NSUInteger modalGroupIndex; // ivar: _modalGroupIndex
@property (copy, nonatomic) UIColor *pageIndicatorTintColor; // ivar: _pageIndicatorTintColor
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly, nonatomic) CGFloat pileHeight;
@property (nonatomic) NSInteger pilingMode;
@property (nonatomic) NSInteger presentationState; // ivar: _presentationState
@property (nonatomic) BOOL staggerPileAnimations; // ivar: _staggerPileAnimations
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topContentSeparatorHeight; // ivar: _topContentSeparatorHeight


+(id)backdropEndBackgroundColor;
+(id)backdropStartBackgroundColor;
+(id)backgroundColor;
-(BOOL)_acquireGroupView:(id)arg0 ;
-(BOOL)_isGroupAtIndexInModalPile:(NSUInteger)arg0 ;
-(BOOL)_isIngestingPass;
-(BOOL)_isModalPresentationAllowed;
-(BOOL)_isModalPresentationAllowedForSingleGroup;
-(BOOL)_pauseStateForGroupView:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)_recomputeLayoutState;
-(BOOL)_shouldRampForFrontmostPassView:(id)arg0 ;
-(BOOL)_shouldRampForPass:(id)arg0 ;
-(BOOL)_shouldSwitchToTableStateFromExternalDismissal;
-(BOOL)_shouldTablePresentationScroll;
-(BOOL)_updateHeaderContext:(*id)arg0 toContext:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)canPerformPaymentForGroupAtIndex:(NSUInteger)arg0 ;
-(BOOL)discoveryGalleryHasWelcomeCards;
-(BOOL)groupView:(id)arg0 deleteButtonEnabledForPass:(id)arg1 ;
-(BOOL)groupViewShouldAllowPanning:(id)arg0 ;
-(BOOL)handleDeletePassRequestWithPass:(id)arg0 forViewController:(id)arg1 ;
-(BOOL)isPassFooterViewInGroup:(id)arg0 ;
-(BOOL)isTableModalPresentation;
-(BOOL)isViewCurrentlyPresentedFooterView:(id)arg0 ;
-(BOOL)presentedPassCanPerformPayment;
-(CGFloat)_groupCellHeight;
-(CGFloat)_lastBarcodePassGroupCellHeight;
-(CGFloat)_layoutContentFromOffset:(struct CGPoint )arg0 toOffset:(struct CGPoint )arg1 animated:(BOOL)arg2 ;
-(CGFloat)_maxYOfPassFrontFaceAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_nativeYForGroupInTableAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_opacityForGroupAtIndex:(NSUInteger)arg0 forState:(NSInteger)arg1 ;
-(CGFloat)_pileAscenderHeight;
-(CGFloat)_pileAscenderHeightForGroupViewInPile:(id)arg0 ;
-(CGFloat)_pileBaseHeight;
-(CGFloat)_pileSeparationHeight;
-(CGFloat)_scaleForGroupView:(id)arg0 atIndex:(NSUInteger)arg1 forState:(NSInteger)arg2 ;
-(CGFloat)_scaleForModalPileGroupInExternalPresentation;
-(CGFloat)_scaleForStackGroupInExternalPresentation;
-(CGFloat)_setupSpringFactory:(id)arg0 forPileAnimationFromPresentationState:(NSInteger)arg1 toPresentationState:(NSInteger)arg2 reverse:(BOOL)arg3 ;
-(CGFloat)_setupSpringFactory:(id)arg0 forPileAnimationToPresentationState:(NSInteger)arg1 reverse:(BOOL)arg2 ;
-(CGFloat)_setupSpringFactoryForExternalToTableAnimations:(id)arg0 ;
-(CGFloat)_setupSpringFactoryForPileAnimations:(id)arg0 withMaximumAcceleration:(CGFloat)arg1 reverse:(BOOL)arg2 ;
-(CGFloat)_transformedYForNativeYInTable:(CGFloat)arg0 withBounds:(struct CGRect )arg1 index:(NSUInteger)arg2 ;
-(CGFloat)_xPositionForGroupView:(id)arg0 forState:(NSInteger)arg1 ;
-(CGFloat)_yForExternalModallyPresentedGroup;
-(CGFloat)_yForGroupInExternalModalPileWithModalGroupY:(CGFloat)arg0 ;
-(CGFloat)_yForGroupInModalPileAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_yForGroupInModalPileWithModalGroupY:(CGFloat)arg0 ;
-(CGFloat)_yForGroupInOffscreenPileAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_yForGroupInPileAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_yForGroupInTableAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_yForModallyPresentedGroup;
-(CGFloat)_yForModallyPresentedGroupForExternalPresentation:(BOOL)arg0 ignoringCompactState:(BOOL)arg1 ;
-(CGFloat)_yForSingleGroupView:(id)arg0 ;
-(CGFloat)_yPositionForGroupAtIndex:(NSUInteger)arg0 forState:(NSInteger)arg1 ;
-(NSInteger)groupViewContentModeForFrontmostPassWhenPiled:(id)arg0 withDefaultContentMode:(NSInteger)arg1 ;
-(NSInteger)groupViewContentModeForFrontmostPassWhenStacked:(id)arg0 ;
-(NSUInteger)_edgeStylesObscuredByTopCornersOfPassStyle:(NSInteger)arg0 ;
-(NSUInteger)_edgeStylesObscuredByTopMiddleOfPassStyle:(NSInteger)arg0 ;
-(NSUInteger)_indexForNativePositionInTable:(struct CGPoint )arg0 ;
-(NSUInteger)_indexForNativePositionInTable:(struct CGPoint )arg0 roundToClosestIndex:(BOOL)arg1 ;
-(NSUInteger)_indexOfGroupView:(id)arg0 ;
-(NSUInteger)_indexOfReorderedGroupView;
-(NSUInteger)_lastIndex;
-(NSUInteger)_maximumNumberOfVisiblePilePasses;
-(NSUInteger)_startVisibleIndex;
-(NSUInteger)_tablePresentationNumberOfCellsBeforeHeaderHidden;
-(NSUInteger)_tablePresentationNumberOfCellsBeforeStacking;
-(NSUInteger)groupViewPassesSuppressedContent:(id)arg0 ;
-(NSUInteger)suppressedContentForPassFooter:(id)arg0 ;
-(id)_animatorForGestureRecognizer:(id)arg0 ;
-(id)_createFactoryForExternalPresentation;
-(id)_createPassFooterConfigurationForPassView:(id)arg0 withContext:(id)arg1 ;
-(id)_createSortedGroupViewIndexes;
-(id)_createStackedIndices;
-(id)_dismissModalGroupViewFromExternalToState:(NSInteger)arg0 ;
-(id)_firstHeaderContext;
-(id)_frontmostPastViewForGroupIndex:(NSUInteger)arg0 ;
-(id)_groupViewAtIndex:(NSUInteger)arg0 ;
-(id)_groupViewAtIndexWhileEnsuringVisible:(NSUInteger)arg0 withContentMode:(NSInteger)arg1 ;
-(id)_groupViewWithGroup:(id)arg0 ;
-(id)_headerContextForPassType:(NSUInteger)arg0 ;
-(id)_loadGroupViewAtIndex:(NSUInteger)arg0 forState:(NSInteger)arg1 presentationState:(NSInteger)arg2 cached:(*BOOL)arg3 ;
-(id)_separatorGroup;
-(id)groupViewReusablePassViewQueue:(id)arg0 ;
-(id)headerForPassType:(NSUInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)subheaderForPassType:(NSUInteger)arg0 ;
-(struct ? )_layoutStateForHeaderContextInTable:(id)arg0 withBounds:(struct CGRect )arg1 ;
-(struct ? )discoveryGalleryLayoutStateForCurrentLayoutState;
-(struct CATransform3D )_transformForGroupView:(id)arg0 atIndex:(NSUInteger)arg1 forState:(NSInteger)arg2 ;
-(struct CGPoint )_nativePositionForPositionInTable:(struct CGPoint )arg0 ;
-(struct CGPoint )_positionForGroupView:(id)arg0 atIndex:(NSUInteger)arg1 forState:(NSInteger)arg2 ;
-(struct CGRect )_frameForFooterViewForPassView:(id)arg0 ;
-(struct CGRect )_xFrameForGroupViewInState:(NSInteger)arg0 ;
-(struct CGSize )_contentSize;
-(struct _NSRange )_rangeOfEagerLoadedIndexes;
-(struct _NSRange )_rangeOfVisibleIndexes;
-(struct _NSRange )_rangeOfVisibleIndexesIgnoringBottomInset:(BOOL)arg0 ;
-(void)_addGroupViewAsSubview:(id)arg0 forIndex:(NSUInteger)arg1 ;
-(void)_addPanGestureRecognizerToGroupView:(id)arg0 ;
-(void)_adjustGroupViewsForReordering;
-(void)_adjustPassFooterViewOpacityForYOffset:(CGFloat)arg0 ;
-(void)_animateGroupViewAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 withAnchorView:(id)arg2 insertAbove:(BOOL)arg3 ;
-(void)_animateGroupViewForUndo:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)_arrangeGroups;
-(void)_autoscrollForReordering:(id)arg0 ;
-(void)_autoscrollIfNecessary;
-(void)_beginGroupPanWithGestureRecognizer:(id)arg0 ;
-(void)_cancelSuspendedTransition;
-(void)_cancelTransition;
-(void)_cleanUpAnimatorForGroupView:(id)arg0 ;
-(void)_disableScrollingAndNormalizeContentOffset;
-(void)_endGroupPanWithGestureRecognizer:(id)arg0 ;
-(void)_enumerateLoadedGroupViews:(id)arg0 ;
-(void)_executeCompletionHandlers:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)_generateModalGroupPileWithVisibleIndexes:(struct _NSRange )arg0 reservePlaceForModalGroup:(BOOL)arg1 ;
-(void)_handleModalGroupGesture:(id)arg0 ;
-(void)_handleScrollViewPanGesture:(id)arg0 ;
-(void)_hideBackdropViewAnimated:(BOOL)arg0 delay:(CGFloat)arg1 ;
-(void)_layoutFooterAnimated:(BOOL)arg0 withAnimationDelay:(CGFloat)arg1 ;
-(void)_loadModalGroupViewAndPresentOffscreenIfNotCached:(BOOL)arg0 ;
-(void)_moveBackdropViewToFront;
-(void)_notifyDelegateOfStateChange:(BOOL)arg0 ;
-(void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg0 ;
-(void)_presentBackdropViewAnimated:(BOOL)arg0 delay:(CGFloat)arg1 ;
-(void)_presentGroupStackViewWithAnimation:(BOOL)arg0 priorBounds:(struct CGRect )arg1 completionHandler:(id)arg2 ;
-(void)_presentModalGroupView:(id)arg0 withState:(NSInteger)arg1 animated:(BOOL)arg2 context:(id)arg3 completion:(id)arg4 ;
-(void)_presentModalGroupViewPostAnimationActions;
-(void)_presentOffscreenAnimated:(BOOL)arg0 split:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)_presentPassIngestionWithAnimation:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)_rampBacklightIfNecessary:(BOOL)arg0 ;
-(void)_refreshBacklightForFrontmostPassGroup;
-(void)_removeGroupViewAsSubviewWithGroupID:(id)arg0 ;
-(void)_reorderPositionChangedForReorderedGroupViewWithVelocity:(struct CGPoint )arg0 ;
-(void)_resetBackdropViewToStart:(BOOL)arg0 ;
-(void)_resetBrightness;
-(void)_resumeSuspendedTransition;
-(void)_reverseEnumerateLoadedGroupViews:(id)arg0 ;
-(void)_setDefaultPaymentPassFromGroupView:(id)arg0 reorderedGroupView:(id)arg1 ;
-(void)_setModalGroupView:(id)arg0 ;
-(void)_setScrollEnabled:(BOOL)arg0 ;
-(void)_setupSpringFactoryForTableToExternalAnimations:(id)arg0 ;
-(void)_stopAutoscrollTimer;
-(void)_suspendTransition;
-(void)_tileGroupsForState:(NSInteger)arg0 eager:(BOOL)arg1 withContext:(id)arg2 ;
-(void)_transitionSuccessful:(BOOL)arg0 ;
-(void)_undoUserReorderWithReorderedGroupView:(id)arg0 ;
-(void)_unpressGroupView;
-(void)_updateBackdropViewFilters;
-(void)_updateBottomContentSeparatorVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateCoachingState;
-(void)_updateContentSize;
-(void)_updateContentSizeAndLayout:(BOOL)arg0 ;
-(void)_updateContentSizeAndLayout:(BOOL)arg0 forceUpdate:(BOOL)arg1 ;
-(void)_updateGroupStateForGroupViewInModalPresentation:(id)arg0 withState:(NSInteger)arg1 animated:(BOOL)arg2 withContext:(id)arg3 ;
-(void)_updateGroupStateForGroupViewInStackPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateGroupView:(id)arg0 toPresentationState:(NSInteger)arg1 withSpringFactory:(id)arg2 ;
-(void)_updateGroupView:(id)arg0 toPresentationState:(NSInteger)arg1 withSpringFactory:(id)arg2 atIndex:(NSUInteger)arg3 ;
-(void)_updateHeaderFooterState:(BOOL)arg0 layout:(BOOL)arg1 ;
-(void)_updateModalGroupViewFromTableToExternalPresentationWithFactory:(id)arg0 ;
-(void)_updatePassFooterViewIfNecessaryWithContext:(id)arg0 becomeVisibleDelay:(CGFloat)arg1 ;
-(void)_updatePassFooterViewWithConfiguration:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 reload:(BOOL)arg3 delay:(CGFloat)arg4 ;
-(void)_updatePassFooterViewWithContext:(id)arg0 ;
-(void)_updatePausedState;
-(void)_updatePositionForGroupView:(id)arg0 toPosition:(struct CGPoint )arg1 withSpringFactory:(id)arg2 ;
-(void)_updatePositionForGroupView:(id)arg0 toPresentationState:(NSInteger)arg1 withSpringFactory:(id)arg2 ;
-(void)_updatePositionForGroupView:(id)arg0 toPresentationState:(NSInteger)arg1 withSpringFactory:(id)arg2 atIndex:(NSUInteger)arg3 ;
-(void)_updateTopContentSeparatorVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateTransformForGroupView:(id)arg0 toPresentationState:(NSInteger)arg1 withSpringFactory:(id)arg2 ;
-(void)beginScrollCardListTest;
-(void)beginSelectCardTest;
-(void)dashboardPassViewController:(id)arg0 didRequestPaymentForPass:(id)arg1 fromButton:(BOOL)arg2 ;
-(void)dealloc;
-(void)deleteAnimationController:(id)arg0 didComplete:(BOOL)arg1 ;
-(void)deleteAnimationControllerWillBeginDeleteAnimation:(id)arg0 ;
-(void)deleteGroup:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)didDeletePass:(id)arg0 ;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg0 ;
-(void)evaluateBrightness;
-(void)gotoBaseTestState;
-(void)groupView:(id)arg0 deleteButtonPressedForPass:(id)arg1 ;
-(void)groupView:(id)arg0 didUpdatePassView:(id)arg1 ;
-(void)groupView:(id)arg0 frontmostPassViewDidChange:(id)arg1 withContext:(id)arg2 ;
-(void)groupView:(id)arg0 panned:(struct CGPoint )arg1 withVelocity:(struct CGPoint )arg2 ;
-(void)groupViewDidMoveToReceiver:(id)arg0 ;
-(void)groupViewDidUpdatePageControlVisibility:(id)arg0 ;
-(void)groupViewExpandButtonTapped:(id)arg0 ;
-(void)groupViewIsAvailable:(id)arg0 ;
-(void)groupViewNeedsAnimating:(id)arg0 withVelocity:(CGFloat)arg1 dragging:(BOOL)arg2 ;
-(void)groupViewPanDidBegin:(id)arg0 ;
-(void)groupViewPanDidEnd:(id)arg0 ;
-(void)groupViewPressed:(id)arg0 ;
-(void)groupViewPressedDidEnd:(id)arg0 ;
-(void)groupViewTapped:(id)arg0 ;
-(void)groupViewWillBeAvailable:(id)arg0 ;
-(void)invalidate;
-(void)layoutContentForCurrentPresentationState:(BOOL)arg0 ;
-(void)layoutHeaderFootersAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)leadingHeaderViewInterstitialIsAvailable:(id)arg0 ;
-(void)modalPresentationIsPending;
-(void)moveGroup:(id)arg0 fromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(void)noteDidEndScrollingForTesting;
-(void)passFooterViewDidChangeCoachingState:(id)arg0 ;
-(void)passFooterViewDidChangePhysicalButtonRequirement:(id)arg0 ;
-(void)passFooterViewDidChangePhysicalButtonRequirement:(id)arg0 withContext:(id)arg1 ;
-(void)passFooterViewDidChangePileSuppressionRequirement:(id)arg0 ;
-(void)passFooterViewDidEndAuthorization:(id)arg0 ;
-(void)passFooterViewDidSucceedAtAuthorization:(id)arg0 ;
-(void)paymentDeviceDidBecomeAvailable;
-(void)paymentDeviceDidBecomeUnavailable;
-(void)presentDiff:(id)arg0 completion:(id)arg1 ;
-(void)presentPassWithUniqueID:(id)arg0 ;
-(void)presentPassWithUniqueID:(id)arg0 withContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)reloadData;
-(void)resetBrightness;
-(void)safeAreaInsetsDidChange;
-(void)scrollDownTest;
-(void)scrollNext;
-(void)scrollUpTest;
-(void)setTableModalPresentationEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)stageGroupInPresentationState:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)testGoModal;
-(void)testGroupSelection;
-(void)tilePassesEagerly:(BOOL)arg0 ;
-(void)trailingHeaderViewInterstitialIsAvailable:(id)arg0 ;
-(void)updateFooterViewIfNecessary;
-(void)updateHeaderAndSubheaderViewsIfNecessary;
-(void)updatePeerPaymentFooterViewIfNecessary;
-(void)willDeletePass:(id)arg0 ;


@end


#endif