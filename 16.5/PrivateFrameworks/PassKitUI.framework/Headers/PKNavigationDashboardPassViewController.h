// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKNAVIGATIONDASHBOARDPASSVIEWCONTROLLER_H
#define PKNAVIGATIONDASHBOARDPASSVIEWCONTROLLER_H

@class PKGroup, PKSecureElement, PKGroupsController, UIView, PKPass, UIPanGestureRecognizer, _UIDynamicValueAnimation, UIButton, PKPayLaterPaymentIntentController, NSString;
@protocol PKPassGroupViewDelegate, PKPassFooterViewDelegate, PKSecureElementObserver, UIViewControllerTransitioningDelegate, PKPassDeleteAnimationControllerDelegate, UIGestureRecognizerDelegate, CNAvatarViewDelegate, PKSpendingSummaryViewControllerDelegate, PKDashboardPassViewControllerDelegate, PKDashboardDelegate, PKForegroundActiveArbiterObserver, PKAccountAutomaticPaymentsControllerDelegate, PKPassGroupViewReceiver, PKDiscoveryArticleViewControllerPresenter, PKInvalidatable, PKPassDeleteHandler, PKPaymentSetupDelegate, PKPeerPaymentActionViewControllerDelegate;


#import "PKNavigationController.h"
#import "PKNavigationDashboardAnimatedTransitioningHandler.h"
#import "PKAnimatedNavigationBarTitleView.h"
#import "PKPGSVTransitionInterstitialView.h"
#import "PKPassDeleteAnimationController.h"
#import "PKPassthroughView.h"
#import "PKPassFooterView.h"
#import "PKPassPresentationContext.h"
#import "PKAccountCardNumbersPresenter.h"
#import "PKPaymentPassActionGroupDataController.h"
#import "PKPaymentPassActionDataController.h"
#import "PKDashboardPassViewController.h"
#import "PKPassGroupView.h"

@interface PKNavigationDashboardPassViewController : PKNavigationController <PKPassGroupViewDelegate, PKPassFooterViewDelegate, PKSecureElementObserver, UIViewControllerTransitioningDelegate, PKPassDeleteAnimationControllerDelegate, UIGestureRecognizerDelegate, CNAvatarViewDelegate, PKSpendingSummaryViewControllerDelegate, PKDashboardPassViewControllerDelegate, PKDashboardDelegate, PKForegroundActiveArbiterObserver, PKAccountAutomaticPaymentsControllerDelegate, PKPassGroupViewReceiver, PKDiscoveryArticleViewControllerPresenter, PKInvalidatable, PKPassDeleteHandler, PKPaymentSetupDelegate, PKPeerPaymentActionViewControllerDelegate>

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
    BOOL _dismissedByDragging;
    CGPoint _lastPreferredOffset;
    BOOL _groupViewNeedsToBeMovedWithContentOffset;
    BOOL _updatingOffsets;
    _UIDynamicValueAnimation *_offsetAnimation;
    _UIUpdateRequest _updateRequest;
    unsigned int _updateReason;
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
    PKPaymentPassActionGroupDataController *_actionGroupController;
    PKPaymentPassActionDataController *_actionController;
    PKPayLaterPaymentIntentController *_paymentIntentController;
}


@property (retain, nonatomic) PKDashboardPassViewController *dashboardVC; // ivar: _dashboardVC
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL footerSuppressed; // ivar: _footerSuppressed
@property (readonly, nonatomic, getter=isFrontmostPassAuthorized) BOOL frontmostPassAuthorized;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic) UIView *leadingItemView;
@property (weak, nonatomic) NSObject<PKDashboardPassViewControllerDelegate> *passDashboardDelegate; // ivar: _passDashboardDelegate
@property (readonly, nonatomic) PKPassGroupView *passGroupView; // ivar: _passGroupView
@property (nonatomic) BOOL passGroupViewIsInCollectionView; // ivar: _passGroupViewIsInCollectionView
@property (weak, nonatomic) NSObject<PKPassGroupViewReceiver> *receiver; // ivar: _receiver
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topMargin; // ivar: _topMargin
@property (readonly, nonatomic) UIView *trailingItemView;


-(BOOL)canRequestPaymentForPass:(id)arg0 ;
-(BOOL)groupViewShouldAllowPanning:(id)arg0 ;
-(BOOL)handleDeletePassRequestWithPass:(id)arg0 forViewController:(id)arg1 ;
-(BOOL)isPassFooterViewInGroup:(id)arg0 ;
-(BOOL)shouldOverrideContentOffset;
-(CGFloat)_alphaForPassthroughView;
-(NSInteger)groupViewContentModeForFrontmostPassWhenPiled:(id)arg0 withDefaultContentMode:(NSInteger)arg1 ;
-(NSInteger)groupViewContentModeForFrontmostPassWhenStacked:(id)arg0 ;
-(NSInteger)modalPresentationStyle;
-(NSUInteger)groupViewPassesSuppressedContent:(id)arg0 ;
-(NSUInteger)suppressedContentForPassFooter:(id)arg0 ;
-(id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg0 ;
-(id)_cardIndexPath;
-(id)_createAnimationForUpperBoundaryWithStart:(CGFloat)arg0 upperBoundary:(CGFloat)arg1 lowerBoundary:(CGFloat)arg2 initialVelocity:(CGFloat)arg3 ;
-(id)_createPassFooterConfigurationForPassView:(id)arg0 ;
-(id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg0 ;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(id)initWithPassGroupView:(id)arg0 groupsController:(id)arg1 groupViewReceiver:(id)arg2 context:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(struct CGPoint )preferredContentOffset;
-(void)_canPresentCreditDetailsViewControllerWithCompletion:(id)arg0 ;
-(void)_dismissIfPossibleWithVelocity:(CGFloat)arg0 byDragging:(BOOL)arg1 ;
-(void)_endReportingSessionForPassIfNecessary;
-(void)_ensureCardPresence;
-(void)_handlePanGroupGesture:(id)arg0 ;
-(void)_handleProvisioningError:(id)arg0 ;
-(void)_handleScrollViewPanGroupGesture:(id)arg0 ;
-(void)_loadAMSUIWebViewForKey:(id)arg0 ;
-(void)_openPaymentSetupWithNetworkWhitelist:(id)arg0 paymentSetupMode:(NSInteger)arg1 ;
-(void)_presentDailyCashOnAccountForDateComponents:(id)arg0 redemptionType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_presentDailyCashOnPassForDateComponents:(id)arg0 completion:(id)arg1 ;
-(void)_presentInstallmentPlans:(id)arg0 ;
-(void)_presentRewardsHubWithCompletion:(id)arg0 ;
-(void)_setOffsetAnimation:(id)arg0 ;
-(void)_setupDashboardVC;
-(void)_startReportingSessionForPassIfNecessary;
-(void)_updateNavigationBarWithPassAppeared:(BOOL)arg0 ;
-(void)_updatePassFooterView;
-(void)_updatePassFooterViewIfNecessary;
-(void)_updatePassFooterViewWithReload:(BOOL)arg0 ;
-(void)_updatePausedState;
-(void)_updateSnapshotView;
-(void)_updateTopViewController:(id)arg0 ;
-(void)_updateUpdatingOffsets;
-(void)accountAutomaticPaymentsController:(id)arg0 didSchedulePayment:(id)arg1 ;
-(void)accountAutomaticPaymentsControllerDidSelectSetupCompletionDone:(id)arg0 viewController:(id)arg1 ;
-(void)acquireGroupView:(id)arg0 ;
-(void)contentDidScroll;
-(void)dashboardPassViewController:(id)arg0 didRequestPaymentForPass:(id)arg1 fromButton:(BOOL)arg2 ;
-(void)dealloc;
-(void)deleteAnimationController:(id)arg0 didComplete:(BOOL)arg1 ;
-(void)deleteAnimationControllerWillBeginDeleteAnimation:(id)arg0 ;
-(void)dismissDiscoveryArticleViewController:(id)arg0 afterActionCompleted:(BOOL)arg1 withRelevantPassUniqueIdenitifer:(id)arg2 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)groupView:(id)arg0 deleteButtonPressedForPass:(id)arg1 ;
-(void)groupView:(id)arg0 didUpdatePassView:(id)arg1 ;
-(void)groupView:(id)arg0 faceViewFrameDidChangeForFrontmostPassView:(id)arg1 ;
-(void)groupView:(id)arg0 frontmostPassViewDidChange:(id)arg1 withContext:(id)arg2 ;
-(void)groupViewIsAvailable:(id)arg0 ;
-(void)groupViewTapped:(id)arg0 ;
-(void)insertGroupView;
-(void)invalidate;
-(void)leadingHeaderViewInterstitialIsAvailable:(id)arg0 ;
-(void)loadView;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)noteTransitionCompleted;
-(void)passFooterViewDidChangeCoachingState:(id)arg0 ;
-(void)passFooterViewDidChangePhysicalButtonRequirement:(id)arg0 ;
-(void)paymentSetupDidFinish:(id)arg0 ;
-(void)peerPaymentActionViewControllerDidCancel:(id)arg0 ;
-(void)peerPaymentActionViewControllerDidPerformAction:(id)arg0 ;
-(void)presentAccountPromotionWithProgramIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)presentAccountWithConfiguration:(id)arg0 presentationContext:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)presentActionGroupsWithPaymentDataProvider:(id)arg0 webService:(id)arg1 ;
-(void)presentActionsWithPaymentDataProvider:(id)arg0 webService:(id)arg1 actionType:(NSUInteger)arg2 transitBalanceModel:(id)arg3 ;
-(void)presentAddMoneyAppleBalance;
-(void)presentBalanceDetailsWithCompletion:(id)arg0 ;
-(void)presentCardNumbers;
-(void)presentDailyCashForDateComponents:(id)arg0 redemptionType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)presentInstallmentPlan:(id)arg0 ;
-(void)presentInstallmentPlans;
-(void)presentInvitationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)presentManageBarcodePassNotifications;
-(void)presentManagePaymentPassNotificationsControllerWithDataProvider:(id)arg0 peerPaymentAccount:(id)arg1 account:(id)arg2 ;
-(void)presentPassDetailsAnimated:(BOOL)arg0 action:(NSUInteger)arg1 ;
-(void)presentPassDetailsAnimated:(BOOL)arg0 handler:(id)arg1 ;
-(void)presentPayLaterFinancingPlan:(id)arg0 ;
-(void)presentPeerPaymentActionViewControllerForAction:(NSUInteger)arg0 pass:(id)arg1 passLibraryDataProvider:(id)arg2 ;
-(void)presentRedeemGiftcard;
-(void)presentRewardsHubMerchantsWithPrivateIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)presentRewardsHubWithCompletion:(id)arg0 ;
-(void)presentScheduledPayments;
-(void)presentSearch;
-(void)presentSearchWithCompletion:(id)arg0 ;
-(void)presentShareFlow;
-(void)presentSharesList;
-(void)presentSpendingSummaryWithType:(NSUInteger)arg0 categorization:(NSUInteger)arg1 unit:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)presentTransaction:(id)arg0 forAccount:(id)arg1 ;
-(void)presentTransaction:(id)arg0 forPaymentPass:(id)arg1 ;
-(void)presentTransitCardNumber;
-(void)relinquishGroupView;
-(void)reportEventForPassIfNecessary:(id)arg0 ;
-(void)scrollToTop;
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