// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSGROUPSVIEWCONTROLLER_H
#define PKPASSGROUPSVIEWCONTROLLER_H

@class UIViewController, UINavigationController, PKPaymentService, NSTimer, NSMutableArray, NSArray, PKPeerPaymentService, PKPayLaterPaymentIntentController, PKDiscoveryDataSource, PKApplicationMessageNodeMultipleGroupBranch, NSString, PKGroupsController;
@protocol PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, PKExpiredPassesViewControllerDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPaymentServiceDelegate, PKPaymentSetupDelegate, PKPerformActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryDataSourceDelegate, PKSubcredentialProvisioningFlowControllerDelegate, _PKUIKVisibilityBackdropViewDelegate, PKPGSVFooterViewDelegate, PKPGSVSectionSubheaderDelegate, PKPGSVSectionHeaderViewDelegate, PKApplicationMessageViewDelegate, PKInboxDataSourceDelegate, PKVirtualCardEnrollmentViewControllerDelegate, PKPassPersonalizationViewControllerDelegate, PKDiscoveryArticleViewControllerPresenter, PKPassLibraryDataProvider;


#import "PKPassGroupStackView.h"
#import "_PKUIKVisibilityBackdropView.h"
#import "PKPGSVSectionHeaderView.h"
#import "PKDiscoveryGalleryView.h"
#import "PKApplicationMessageView.h"
#import "PKPeerPaymentAccountResolutionController.h"
#import "PKPeerPaymentAssociatedAccountsController.h"
#import "PKInboxDataSource.h"
#import "PKPayLaterSetupFlowController.h"
#import "PKAccountServiceAccountResolutionController.h"
#import "PKContactAvatarManager.h"

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, PKExpiredPassesViewControllerDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPaymentServiceDelegate, PKPaymentSetupDelegate, PKPerformActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryDataSourceDelegate, PKSubcredentialProvisioningFlowControllerDelegate, _PKUIKVisibilityBackdropViewDelegate, PKPGSVFooterViewDelegate, PKPGSVSectionSubheaderDelegate, PKPGSVSectionHeaderViewDelegate, PKApplicationMessageViewDelegate, PKInboxDataSourceDelegate, PKVirtualCardEnrollmentViewControllerDelegate, PKPassPersonalizationViewControllerDelegate, PKDiscoveryArticleViewControllerPresenter>

 {
    NSInteger _invalidationStatus;
    UINavigationController *_metricController;
    PKPassGroupStackView *_groupStackView;
    _PKUIKVisibilityBackdropView *_headerBackground;
    _PKUIKVisibilityBackdropView *_footerBackground;
    CGFloat _headerBackgroundVisibility;
    CGFloat _footerBackgroundVisibility;
    PKPGSVSectionHeaderView *_paymentHeaderView;
    PKPGSVSectionHeaderView *_barcodeHeaderView;
    PKDiscoveryGalleryView *_discoveryGalleryView;
    PKApplicationMessageView *_applicationMessageView;
    PKPaymentService *_paymentService;
    NSUInteger _modalCardIndex;
    NSInteger _presentationState;
    NSTimer *_allowDimmingTimer;
    NSTimer *_passViewedNotificationTimer;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    NSArray *_passUniqueIDsToExcludeFromFiltering;
    BOOL _persistentCardEmulationQueued;
    BOOL _viewAppeared;
    BOOL _viewAppearedBefore;
    BOOL _reloadingPasses;
    BOOL _backgroundMode;
    BOOL _inFailForward;
    BOOL _hasSecureElement;
    BOOL _canAddSecureElementCards;
    NSUInteger _instanceFooterSuppressionCounter;
    int _expressTransactionNotificationObserver;
    id<PKPassLibraryDataProvider> *_passLibraryDataProvider;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    PKPeerPaymentAssociatedAccountsController *_associatedAccountsController;
    PKInboxDataSource *_inboxDataSource;
    PKPayLaterSetupFlowController *_payLaterSetupFlowController;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKAccountServiceAccountResolutionController *_accountServiceAccountResolutionController;
    PKDiscoveryDataSource *_discoveryDataSource;
    PKContactAvatarManager *_avatarManager;
    PKApplicationMessageNodeMultipleGroupBranch *_messages;
    BOOL _inField;
}


@property (nonatomic) BOOL assertExpressAvailable; // ivar: _assertExpressAvailable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExternalModalPresentationAllowed) BOOL externalModalPresentationAllowed; // ivar: _externalModalPresentationAllowed
@property (readonly, retain, nonatomic) PKPassGroupStackView *groupStackView;
@property (readonly, nonatomic) PKGroupsController *groupsController; // ivar: _groupsController
@property BOOL handleFieldDetection; // ivar: _handleFieldDetection
@property (readonly) NSUInteger hash;
@property BOOL passesAreOutdated; // ivar: _passesAreOutdated
@property (readonly, nonatomic) BOOL presentingPass;
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger suppressedContent; // ivar: _suppressedContent
@property (nonatomic, getter=isWelcomeStateEnabled) BOOL welcomeStateEnabled; // ivar: _welcomeStateEnabled


+(BOOL)isPerformingAction;
+(void)beginSuppressingFooter;
+(void)beginTrackingAction;
+(void)endSuppressingFooter;
+(void)endTrackingAction;
-(BOOL)_canPerformExternalModalPresentation;
-(BOOL)_canShowWhileLocked;
-(BOOL)areGroupsSeparated;
-(BOOL)groupStackView:(id)arg0 requiresHeaderForPassType:(NSUInteger)arg1 withState:(struct ? )arg2 ;
-(BOOL)groupStackView:(id)arg0 willHaveHeaderViewForPassType:(NSUInteger)arg1 withState:(struct ? )arg2 ;
-(BOOL)groupStackView:(id)arg0 willHaveSubheaderViewsWithState:(struct ? )arg1 ;
-(BOOL)groupStackViewShouldAllowReordering:(id)arg0 ;
-(BOOL)groupStackViewShouldShowHeaderViews:(id)arg0 ;
-(BOOL)hasDiscoveryCardWithItemIdentifier:(id)arg0 ;
-(BOOL)hasDiscoveryContent;
-(BOOL)inboxVisibleForSectionheaderView:(id)arg0 ;
-(BOOL)isInField;
-(BOOL)prefersStatusBarHidden;
-(BOOL)presentSubcredentialPairingFlowIfPossibleWithConfig:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)supportsExternalPresentation;
-(CGFloat)externalPresentationNavigationHeight;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)visibilityBackdropView:(id)arg0 preferredStyleForTraitCollection:(id)arg1 ;
-(NSUInteger)inboxBadgeCountForSectionHeaderView:(id)arg0 ;
-(NSUInteger)indexOfGroup:(id)arg0 ;
-(NSUInteger)indexOfSeparationGroup;
-(NSUInteger)numberOfGroups;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_appleCardUpsellAlertWithAccount:(id)arg0 ;
-(id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg0 ;
-(id)_cardTemplateInformationForArticleLayouts:(id)arg0 ;
-(id)_makeDiscoveryGalleryViewWithState:(struct ? )arg0 ;
-(id)_passFromGroupsControllerWithUniqueIdentifier:(id)arg0 ;
-(id)_passPendingActivationToPresent;
-(id)_passToPresent;
-(id)_passWithDeviceAssessmentEducationToPresent;
-(id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg0 ;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg0 ;
-(id)_peerPaymentAccountResolutionController;
-(id)featuredGroup;
-(id)footerForGroupStackView:(id)arg0 ;
-(id)groupAtIndex:(NSUInteger)arg0 ;
-(id)groupStackView:(id)arg0 headerForPassType:(NSUInteger)arg1 withState:(struct ? )arg2 ;
-(id)groupStackView:(id)arg0 subheadersWithState:(struct ? )arg1 ;
-(id)groupsControllerShouldExcludePassesWithUniqueIDsFromFiltering:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupsController:(id)arg0 ;
-(id)initWithGroupsController:(id)arg0 style:(NSInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)itemIdentifierForFrontmostDiscoveryCard;
-(id)passForSectionHeaderView:(id)arg0 ;
-(id)presentationContextForFieldProperties:(id)arg0 fieldPassUniqueIdentifiers:(id)arg1 passUniqueIdentifierToPresent:(*id)arg2 ;
-(id)presentedPass;
-(void)_applyPresentationState;
-(void)_beginSuppressingInstanceFooter;
-(void)_clearPassViewedNotificationTimer;
-(void)_endSuppressingInstanceFooterWithContext:(id)arg0 ;
-(void)_handleChildViewControllerRequestingServiceMode:(id)arg0 ;
-(void)_handleExpressNotification;
-(void)_handleFooterSupressionChange:(id)arg0 ;
-(void)_handlePeerPaymentAccountDidChangeNotification:(id)arg0 ;
-(void)_handleProvisioningError:(id)arg0 ;
-(void)_handleStatusBarChange:(id)arg0 ;
-(void)_invalidateForType:(NSInteger)arg0 ;
-(void)_localeDidChangeNotification:(id)arg0 ;
-(void)_passViewedNotificationTimerFired;
-(void)_presentAddPassesControllerWithPasses:(id)arg0 ;
-(void)_presentGroupWithIndex:(NSUInteger)arg0 context:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_presentSubcredentialInvitation:(id)arg0 remoteInvite:(id)arg1 isShareActivation:(BOOL)arg2 referralSource:(id)arg3 animated:(BOOL)arg4 ;
-(void)_presentSubcredentialInvitationFlowForPhoneInvitationMessage:(id)arg0 isShareActivation:(BOOL)arg1 referralSource:(id)arg2 animated:(BOOL)arg3 ;
-(void)_presentSubcredentialPairingFlowWithConfig:(id)arg0 flowType:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_presentTransactionDetailsForTransaction:(id)arg0 forPaymentPass:(id)arg1 ;
-(void)_presentTransactionDetailsForTransaction:(id)arg0 transactionSourceType:(NSUInteger)arg1 ;
-(void)_presentWithUpdatedPasses:(id)arg0 ;
-(void)_regionConfigurationDidChangeNotification;
-(void)_registerForExpressTransactionNotifications:(BOOL)arg0 ;
-(void)_resetToRootAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_setupItemForExpressUpgradeWithAsset:(id)arg0 hideDisableAction:(NSUInteger)arg1 pass:(id)arg2 completionHandler:(id)arg3 ;
-(void)_startPassViewedNotificationTimer;
-(void)_updateFooterSuppressionAnimated:(BOOL)arg0 ;
-(void)_updateFooterSuppressionWithContext:(id)arg0 ;
-(void)_updatePeerPaymentAccount;
-(void)_warnFailForward;
-(void)accountServiceAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)addVASPassWithIdentifier:(id)arg0 ;
-(void)allowIdleTimer;
-(void)applicationMessageView:(id)arg0 requestsLocalMessageDismissal:(id)arg1 ;
-(void)applicationMessageViewNeedsRemoval:(id)arg0 ;
-(void)applicationMessageViewNeedsSizeUpdate:(id)arg0 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)didUpdateApplicationMessages:(id)arg0 ;
-(void)discoveryDataSource:(id)arg0 didUpdateArticleLayouts:(id)arg1 ;
-(void)dismissDiscoveryArticleViewController:(id)arg0 afterActionCompleted:(BOOL)arg1 withRelevantPassUniqueIdenitifer:(id)arg2 ;
-(void)dismissPresentedVCsWithRequirements:(NSUInteger)arg0 animated:(BOOL)arg1 performAction:(id)arg2 ;
-(void)dismissVerificationPageForPassWithDeviceAccountID:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)finishedEditingExpiredPass;
-(void)forcePaymentPresentationFromButton:(BOOL)arg0 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)groupStackView:(id)arg0 deleteConfirmedForPass:(id)arg1 ;
-(void)groupStackView:(id)arg0 didTransitionToState:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)groupStackView:(id)arg0 groupDidMoveFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(void)groupStackView:(id)arg0 wantsBottomContentSeparatorWithVisibility:(CGFloat)arg1 animated:(BOOL)arg2 ;
-(void)groupStackView:(id)arg0 wantsTopContentSeparatorWithVisibility:(CGFloat)arg1 animated:(BOOL)arg2 ;
-(void)groupStackViewDidBeginReordering:(id)arg0 ;
-(void)groupStackViewDidChangeCoachingState:(id)arg0 ;
-(void)groupStackViewDidEndReordering:(id)arg0 ;
-(void)groupStackViewSectionSubheaderView:(id)arg0 transitionToViewController:(id)arg1 ;
-(void)groupStackViewWantsPaymentPresentation:(id)arg0 fromButton:(BOOL)arg1 ;
-(void)groupsController:(id)arg0 didInsertGroup:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)groupsController:(id)arg0 didMoveGroup:(id)arg1 fromIndex:(NSUInteger)arg2 toIndex:(NSUInteger)arg3 ;
-(void)groupsController:(id)arg0 didRemoveGroup:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)inboxDataSourceDidUpdateInboxMessages:(id)arg0 ;
-(void)invalidate;
-(void)invitationViewController:(id)arg0 didFinishWithPass:(id)arg1 ;
-(void)loadView;
-(void)partiallyInvalidate;
-(void)passPersonalizationViewController:(id)arg0 didFinishPersonalizingPass:(id)arg1 ;
-(void)paymentDeviceDidEnterFieldWithProperties:(id)arg0 ;
-(void)paymentDeviceDidExitField;
-(void)paymentSetupDidFinish:(id)arg0 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsDismissCurrentViewControllerAnimated:(BOOL)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)performActionViewControllerDidCancel:(id)arg0 ;
-(void)performActionViewControllerDidPerformAction:(id)arg0 ;
-(void)presentAccountPromotionForPassUniqueIdentifier:(id)arg0 programIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)presentAccountServicePaymentWithReferenceIdentifier:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)presentAccountServiceSchedulePayment:(id)arg0 ;
-(void)presentActionViewControllerWithUniqueID:(id)arg0 actionType:(NSUInteger)arg1 ;
-(void)presentAppStorePageForItemWithIdentifier:(id)arg0 ;
-(void)presentBalanceDetailsForPassUniqueIdentifier:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentCreateAccountUserInvitationWithCompletion:(id)arg0 ;
-(void)presentCreditPassAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentDailyCashForPassUniqueIdentifier:(id)arg0 dateComponents:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)presentDefaultPaymentPassInPaymentPresentationFromButton:(BOOL)arg0 withAnimated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)presentDiscoveryArticleForItemWithIdentifier:(id)arg0 referrerIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)presentEntitlementDetailsForPassUniqueIdentifier:(id)arg0 ;
-(void)presentExpressUpgradeDetailForPassUniqueID:(id)arg0 assetIdentifier:(id)arg1 hideDisableAction:(NSUInteger)arg2 animated:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)presentFeatureSetupOrFeaturePass:(NSUInteger)arg0 referrerIdentifier:(id)arg1 presentationContext:(id)arg2 completion:(id)arg3 ;
-(void)presentGroupTable;
-(void)presentGroupTableAnimated:(BOOL)arg0 ;
-(void)presentISO18013DetailsForPassUniqueIdentifier:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentImportSafariCardConsentAnimated:(BOOL)arg0 referralSource:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)presentInitialState:(*BOOL)arg0 ;
-(void)presentInstallmentPlanWithIdentifier:(id)arg0 forAccountIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)presentInstallmentPlansForFeature:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)presentInvitationWithIdentifier:(id)arg0 forAccountWithIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)presentInvitationsForHeaderView:(id)arg0 ;
-(void)presentInvitationsInboxAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentOffscreenAnimated:(BOOL)arg0 split:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)presentOffscreenAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)presentOnscreen:(BOOL)arg0 context:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)presentOrderManagementAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentOrderManagementForHeaderView:(id)arg0 ;
-(void)presentPassDetailsAssociatedWithVirtualCardID:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentPassDetailsForHeaderView:(id)arg0 ;
-(void)presentPassDetailsWithUniqueID:(id)arg0 animated:(BOOL)arg1 action:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)presentPassDetailsWithUniqueID:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)presentPassWithAssociatedAccountIdentifier:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentPassWithFieldProperties:(id)arg0 fieldMetadata:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)presentPassWithFieldProperties:(id)arg0 fieldPassUniqueIdentifiers:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)presentPassWithUniqueID:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)presentPassWithUniqueID:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)presentPassWithUpdateUserNotificationIdentifier:(id)arg0 ;
-(void)presentPayLaterFinancingPlanWithIdentifier:(id)arg0 ;
-(void)presentPayLaterPassAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentPaymentSetupController;
-(void)presentPaymentSetupInMode:(NSInteger)arg0 referrerIdentifier:(id)arg1 paymentNetwork:(id)arg2 transitNetworkIdentifier:(id)arg3 allowedFeatureIdentifiers:(id)arg4 productIdentifiers:(id)arg5 ;
-(void)presentPeerPaymentPassAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentPeerPaymentSetupWithCurrencyAmount:(id)arg0 flowState:(NSUInteger)arg1 senderAddress:(id)arg2 ;
-(void)presentPeerPaymentTermsAcceptance;
-(void)presentPeerPaymentTopUp;
-(void)presentPeerPaymentVerifyIdentity;
-(void)presentPileOffscreen;
-(void)presentRewardsHubForPassUniqueIdentifier:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentSearchWithCompletion:(id)arg0 ;
-(void)presentSetupVirtualCardNumberForPassUniqueIdentifier:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentShareActivationWithShareIdentifier:(id)arg0 ;
-(void)presentShareDetailsForPassUniqueIdentifier:(id)arg0 shareIdentifier:(id)arg1 ;
-(void)presentShareInvitationWithMailboxAddress:(id)arg0 referralSource:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentShareableCredentialWithEncryptedProvisioningTargetsHexEncodedString:(id)arg0 passThumbnailImageData:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentSpendingSummaryForPassUniqueIdentifier:(id)arg0 type:(NSUInteger)arg1 categorization:(NSUInteger)arg2 unit:(NSUInteger)arg3 animated:(BOOL)arg4 completion:(id)arg5 ;
-(void)presentSubcredentialInvitationWithIdentifier:(id)arg0 remoteDeviceInvitationIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentTransactionDetailsForTransactionWithIdentifier:(id)arg0 ;
-(void)presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg0 transactionSourceIdentifier:(id)arg1 ;
-(void)queuePersistentCardEmulation;
-(void)reloadGroupsForGroupStackView:(id)arg0 ;
-(void)reloadPasses;
-(void)reloadPassesWithCompletion:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)setNeedsUpdateForGroupStackViewSectionSubheaderView:(id)arg0 ;
-(void)setTableModalPresentationEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showStatementForIdentifier:(id)arg0 passUniqueIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)startPaymentPreflight:(id)arg0 withPaymentSetupMode:(NSInteger)arg1 referrerIdentifier:(id)arg2 paymentNetworks:(id)arg3 transitNetworkIdentifiers:(id)arg4 allowedFeatureIdentifiers:(id)arg5 productIdentifiers:(id)arg6 ;
-(void)subcredentialProvisioningFlowController:(id)arg0 didFinishWithPass:(id)arg1 error:(id)arg2 ;
-(void)updateLockscreenIdleTimer;
-(void)updatePassesIfNecessaryWithCompletion:(id)arg0 ;
-(void)updateRegionSupportIfNecessary;
-(void)userCanceledPairingWithSubcredentialProvisioningFlowController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewTapped:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)virtualCardEnrollmentViewController:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 ;


@end


#endif