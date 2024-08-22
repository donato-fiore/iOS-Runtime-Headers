// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKNAVIGATIONDASHBOARDPASSVIEWCONTROLLER_H
#define PKNAVIGATIONDASHBOARDPASSVIEWCONTROLLER_H

@class PKGroup, PKSecureElement, PKGroupsController, UIView, PKPass, UIPanGestureRecognizer, UIButton, NSString, _UIDynamicValueAnimation;
@protocol PKPassGroupViewDelegate, PKPassFooterViewDelegate, PKSecureElementObserver, UIViewControllerTransitioningDelegate, PKPassDeleteHandler, PKPassDeleteAnimationControllerDelegate, UIGestureRecognizerDelegate, CNAvatarViewDelegate, PKSpendingSummaryViewControllerDelegate, PKDashboardPassViewControllerDelegate, PKDashboardDelegate, PKForegroundActiveArbiterObserver, PKPassGroupViewReceiver, PKDiscoveryArticleViewControllerPresenter;


#import "PKNavigationController.h"
#import "PKNavigationDashboardAnimatedTransitioningHandler.h"
#import "PKAnimatedNavigationBarTitleView.h"
#import "PKPGSVTransitionInterstitialView.h"
#import "PKPassDeleteAnimationController.h"
#import "PKPassthroughView.h"
#import "PKPassFooterView.h"
#import "PKPassPresentationContext.h"
#import "PKAccountCardNumbersPresenter.h"
#import "PKDashboardPassViewController.h"
#import "PKPassGroupView.h"

@interface PKNavigationDashboardPassViewController : PKNavigationController <PKPassGroupViewDelegate, PKPassFooterViewDelegate, PKSecureElementObserver, UIViewControllerTransitioningDelegate, PKPassDeleteHandler, PKPassDeleteAnimationControllerDelegate, UIGestureRecognizerDelegate, CNAvatarViewDelegate, PKSpendingSummaryViewControllerDelegate, PKDashboardPassViewControllerDelegate, PKDashboardDelegate, PKForegroundActiveArbiterObserver, PKPassGroupViewReceiver, PKDiscoveryArticleViewControllerPresenter>

 {
    PKNavigationDashboardAnimatedTransitioningHandler *_transitioningHandler;
    PKGroup *_group;
    PKSecureElement *_secureElement;
    PKGroupsController *_groupsController;
    id<PKPassGroupViewDelegate> *_formerGroupViewDelegate;
    UIView *_snapshotView;
    PKAnimatedNavigationBarTitleView *_titleView;
    PKPGSVTransitionInterstitialView *_leadingInterstitialItemView;
    PKPGSVTransitionInterstitialView *_trailingInterstitialItemView;
    PKPassDeleteAnimationController *_deleteAnimationController;
    PKPass *_passBeingDeleted;
    BOOL _passDeletionInitiated;
    CGFloat _presentationDuration;
    BOOL _isPresentedWithAnimationTransitioner;
    BOOL _isDismissedWithAnimationTransitioner;
    CGFloat _offsetBeforeDrag;
    CGPoint _positionBeforeDrag;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CGFloat _dismissVelocity;
    BOOL _dismissedByDragging;
    CGPoint _lastPreferredOffset;
    BOOL _groupViewNeedsToBeMovedWithContentOffset;
    PKPassthroughView *_passthroughView;
    PKPassthroughView *_portalledPassthroughView;
    PKPassFooterView *_passFooterView;
    BOOL _passGroupViewAcquired;
    BOOL _passFooterViewVisible;
    unsigned int _passFooterViewOutstandingAnimations;
    unsigned int _passFooterViewVisibilityToken;
    BOOL _shouldPauseDynamicCard;
    BOOL _dashboardIsVisible;
    BOOL _shouldUpdateSnapshotView;
    BOOL _snapshotViewIsHidden;
    unsigned char _visibilityState;
    ? _activeState;
    PKPassPresentationContext *_context;
    BOOL _isPendingVCPresentation;
    UIButton *_cardNumbersButton;
    PKAccountCardNumbersPresenter *_accountCardNumbersPresenter;
}


@property (retain, nonatomic) PKDashboardPassViewController *dashboardVC; // ivar: _dashboardVC
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL footerSuppressed; // ivar: _footerSuppressed
@property (readonly, nonatomic, getter=isFrontmostPassAuthorized) BOOL frontmostPassAuthorized;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic) UIView *leadingItemView; // ivar: _leadingItemView
@property (readonly, nonatomic) _UIDynamicValueAnimation *offsetAnimation; // ivar: _offsetAnimation
@property (weak, nonatomic) NSObject<PKDashboardPassViewControllerDelegate> *passDashboardDelegate; // ivar: _passDashboardDelegate
@property (readonly, nonatomic) PKPassGroupView *passGroupView; // ivar: _passGroupView
@property (nonatomic) BOOL passGroupViewIsInCollectionView; // ivar: _passGroupViewIsInCollectionView
@property (weak, nonatomic) NSObject<PKPassGroupViewReceiver> *receiver; // ivar: _receiver
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topMargin; // ivar: _topMargin
@property (readonly, nonatomic) UIView *trailingItemView; // ivar: _trailingItemView


-(BOOL)canRequestPaymentForPass:(id)arg0 ;
-(BOOL)groupViewShouldAllowPanning:(id)arg0 ;
-(BOOL)handleDeletePassRequestWithPass:(id)arg0 forViewController:(id)arg1 ;
-(BOOL)isPassFooterViewInGroup:(id)arg0 ;
-(BOOL)shouldOverrideContentOffset;
-(CGFloat)_alphaForPassthroughView;
-(CGFloat)_navBarButtonSpaceWidth;
-(NSInteger)groupViewContentModeForFrontmostPassWhenPiled:(id)arg0 withDefaultContentMode:(NSInteger)arg1 ;
-(NSInteger)groupViewContentModeForFrontmostPassWhenStacked:(id)arg0 ;
-(NSInteger)modalPresentationStyle;
-(NSUInteger)groupViewPassesSuppressedContent:(id)arg0 ;
-(NSUInteger)suppressedContentForPassFooter:(id)arg0 ;
-(id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg0 ;
-(id)_cardIndexPath;
-(id)_createPassFooterConfigurationForPassView:(id)arg0 ;
-(id)_dynamicAnimationForUpperBoundaryWithStart:(CGFloat)arg0 upperBoundary:(CGFloat)arg1 lowerBoundary:(CGFloat)arg2 initialVelocity:(CGFloat)arg3 ;
-(id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)doneButton;
-(id)infoButton;
-(id)init;
-(id)initWithPassGroupView:(id)arg0 groupsController:(id)arg1 groupViewReceiver:(id)arg2 context:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg0 ;
-(id)presentCardNumbersButtonForAccount:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(id)searchButton;
-(struct CGPoint )preferredContentOffset;
-(void)_canPresentCreditDetailsViewControllerWithCompletion:(id)arg0 ;
-(void)_dismissIfPossible;
-(void)_endReportingSessionForPassIfNecessary;
-(void)_ensureCardPresence;
-(void)_handlePanGroupGesture:(id)arg0 ;
-(void)_handleScrollViewPanGroupGesture:(id)arg0 ;
-(void)_reportEventForPassIfNecessary:(id)arg0 ;
-(void)_startReportingSessionForPassIfNecessary;
-(void)_updateNavigationBarWithPassAppeared:(BOOL)arg0 ;
-(void)_updatePassFooterView;
-(void)_updatePassFooterViewIfNecessary;
-(void)_updatePassFooterViewWithReload:(BOOL)arg0 ;
-(void)_updatePausedState;
-(void)_updateSnapshotView;
-(void)_updateTopViewController:(id)arg0 ;
-(void)acquireGroupView:(id)arg0 ;
-(void)contentDidScroll;
-(void)dashboardPassViewController:(id)arg0 didRequestPaymentForPass:(id)arg1 fromButton:(BOOL)arg2 ;
-(void)dealloc;
-(void)deleteAnimationController:(id)arg0 didComplete:(BOOL)arg1 ;
-(void)deleteAnimationControllerWillBeginDeleteAnimation:(id)arg0 ;
-(void)dismissDiscoveryArticleViewController:(id)arg0 afterActionCompleted:(BOOL)arg1 withRelevantPassUniqueIdenitifer:(id)arg2 ;
-(void)doneTapped:(id)arg0 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)groupView:(id)arg0 deleteButtonPressedForPass:(id)arg1 ;
-(void)groupView:(id)arg0 didUpdatePassView:(id)arg1 ;
-(void)groupView:(id)arg0 faceViewFrameDidChangeForFrontmostPassView:(id)arg1 ;
-(void)groupView:(id)arg0 frontmostPassViewDidChange:(id)arg1 withContext:(id)arg2 ;
-(void)groupViewIsAvailable:(id)arg0 ;
-(void)groupViewTapped:(id)arg0 ;
-(void)hideTitleView;
-(void)infoTapped:(id)arg0 ;
-(void)insertGroupView;
-(void)invalidate;
-(void)leadingHeaderViewInterstitialIsAvailable:(id)arg0 ;
-(void)loadView;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)noteTransitionCompleted;
-(void)passFooterViewDidChangeCoachingState:(id)arg0 ;
-(void)passFooterViewDidChangePhysicalButtonRequirement:(id)arg0 ;
-(void)presentBalanceDetailsWithCompletion:(id)arg0 ;
-(void)presentCardNumbers;
-(void)presentDailyCashForComponents:(id)arg0 completion:(id)arg1 ;
-(void)presentInstallmentPlan:(id)arg0 ;
-(void)presentInvitationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)presentPassDetailsAnimated:(BOOL)arg0 action:(NSUInteger)arg1 ;
-(void)presentPassDetailsAnimated:(BOOL)arg0 handler:(id)arg1 ;
-(void)presentSearch;
-(void)presentSearchWithCompletion:(id)arg0 ;
-(void)presentSpendingSummaryWithType:(NSUInteger)arg0 categorization:(NSUInteger)arg1 unit:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)presentTransaction:(id)arg0 forPaymentPass:(id)arg1 ;
-(void)relinquishGroupView;
-(void)secureElementDidEnterRestrictedMode:(id)arg0 ;
-(void)secureElementDidLeaveRestrictedMode:(id)arg0 ;
-(void)setTransitionDuration:(CGFloat)arg0 ;
-(void)showStatement:(id)arg0 completion:(id)arg1 ;
-(void)summaryTypeDidChange;
-(void)trailingHeaderViewInterstitialIsAvailable:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif