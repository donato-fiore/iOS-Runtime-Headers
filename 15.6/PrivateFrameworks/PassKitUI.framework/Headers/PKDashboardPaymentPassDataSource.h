// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDPAYMENTPASSDATASOURCE_H
#define PKDASHBOARDPAYMENTPASSDATASOURCE_H

@class PKGroup, NSArray, NSDate, PKContactResolver, PKPeerPaymentWebService, PKTransitBalanceModel, PKPaymentDefaultDataProvider, PKSecureElement, NSOrderedSet, NSDateFormatter, NSMutableArray, PKCreditAccountStatement, PKSpendingSummary, NSError, NSMutableSet, NSMutableDictionary, NSString, UIImage, PKAMPEnrollmentManager, PKAccount, PKAccountUserCollection, PKFamilyMemberCollection, PKCurrencyAmount, PKPaymentPass, PKPeerPaymentAccount, NSSet, PKSpendingSummaryFetcher, PKDashboardTransactionFetcher, PKTransactionSourceCollection;
@protocol PKSecureElementObserver, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKForegroundActiveArbiterObserver, PKSpendingSummaryFetcherObserver, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryObserver, PKPaymentSetupViewControllerDelegate, PKAccountServiceObserver, PKLinkedApplicationObserver, PKInboxDataSourceDelegate, PKSecureElementPassContactIssuerHelperDelegate, PKDashboardPassDataSource, PKDashboardTransactionFetcherDelegate, OS_dispatch_source, PKDashboardDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentAssociatedAccountsController.h"
#import "PKPeerPaymentAccountResolutionController.h"
#import "PKPaymentVerificationController.h"
#import "PKPassPresentationContext.h"
#import "PKPhysicalCardController.h"
#import "PKInboxDataSource.h"
#import "PKAccountServiceAccountResolutionController.h"
#import "PKLinkedApplication.h"
#import "PKSecureElementPassContactIssuerHelper.h"
#import "PKContactAvatarManager.h"
#import "PKPassGroupView.h"

@interface PKDashboardPaymentPassDataSource : NSObject <PKSecureElementObserver, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKForegroundActiveArbiterObserver, PKSpendingSummaryFetcherObserver, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryObserver, PKPaymentSetupViewControllerDelegate, PKAccountServiceObserver, PKLinkedApplicationObserver, PKInboxDataSourceDelegate, PKSecureElementPassContactIssuerHelperDelegate, PKDashboardPassDataSource, PKDashboardTransactionFetcherDelegate>

 {
    PKGroup *_group;
    BOOL _isTransitPass;
    BOOL _isAccessPass;
    NSArray *_transactions;
    PKPeerPaymentAssociatedAccountsController *_associatedAccountsController;
    os_unfair_lock_s _lockTransactions;
    NSArray *_previousTransactions;
    BOOL _transactionsPerPeriodLoaded;
    NSArray *_transactionGroups;
    BOOL _forceTransactionsReload;
    BOOL _forceTransactionsUpdate;
    NSObject<OS_dispatch_source> *_timerTransactions;
    NSDate *_lastTransactionReload;
    BOOL _yearlyGrouping;
    PKContactResolver *_contactResolver;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    BOOL _performingPeerPaymentResolution;
    BOOL _performingAMPEnrollment;
    PKTransitBalanceModel *_transitBalanceModel;
    BOOL _canDisplayProducts;
    BOOL _productsLoaded;
    BOOL _canDisplayBalance;
    BOOL _balanceLoaded;
    BOOL _balanceSectionNeedsUpdate;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    PKPaymentVerificationController *_paymentVerificationController;
    BOOL _performingVerification;
    PKSecureElement *_secureElement;
    BOOL _isInRestrictedMode;
    int _sessionActiveToken;
    BOOL _sessionActive;
    NSArray *_tiles;
    BOOL _tilesLoaded;
    NSOrderedSet *_messages;
    BOOL _messagesLoaded;
    NSDateFormatter *_formatterYear;
    ? _activeState;
    NSMutableArray *_executionBlocksContentIsLoaded;
    PKPassPresentationContext *_context;
    NSUInteger _passFeature;
    PKPhysicalCardController *_physicalCardController;
    PKCreditAccountStatement *_currentStatement;
    NSArray *_upcomingScheduledPayments;
    BOOL _familyCollectionLoaded;
    BOOL _accountUsersLoaded;
    BOOL _accountUserInvitationsLoaded;
    BOOL _physicalCardsLoaded;
    NSArray *_accountPendingFamilyMembers;
    BOOL _accountPendingFamilyMembersLoaded;
    PKInboxDataSource *_inboxDataSource;
    BOOL _scheduledPaymentsLoaded;
    NSDate *_startCurrentPeriod;
    PKSpendingSummary *_currentSummary;
    BOOL _pendingSummaryUpdate;
    BOOL _hasMoreSummaryUpdates;
    NSError *_accountUpdateError;
    BOOL _performingAccountUpdate;
    PKAccountServiceAccountResolutionController *_accountResolutionController;
    os_unfair_lock_s _lockIcons;
    NSMutableSet *_iconDownloads;
    NSMutableSet *_iconFailedDownloads;
    NSMutableDictionary *_icons;
    BOOL _hasSuccessfulIconDownloads;
    NSString *_scaleKey;
    BOOL _showAMPEnrollmentMessage;
    UIImage *_AMPEnrollmentIcon;
    PKAMPEnrollmentManager *_AMPEnrollmentManager;
    NSMutableDictionary *_messageImagesCache;
    os_unfair_lock_s _lockImages;
    NSMutableDictionary *_sourcesPerFundingSourceIdentifier;
    PKLinkedApplication *_linkedApplication;
    NSString *_lastReportedDiscoveryIdentifier;
    BOOL _shouldDisplayDeviceAssessmentEducation;
    PKSecureElementPassContactIssuerHelper *_contactIssuerHelper;
}


@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, nonatomic) PKAccountUserCollection *accountUserCollection; // ivar: _accountUserCollection
@property (readonly, nonatomic) NSArray *accountUserInvitations; // ivar: _accountUserInvitations
@property (nonatomic) BOOL allContentIsLoaded; // ivar: _allContentIsLoaded
@property (readonly, nonatomic) PKContactAvatarManager *avatarManager; // ivar: _avatarManager
@property (readonly, nonatomic) NSArray *currentMonthTransactions;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDashboardDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKFamilyMemberCollection *familyCollection; // ivar: _familyCollection
@property (retain, nonatomic) PKPassGroupView *groupView; // ivar: _groupView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKCurrencyAmount *lastUpdatedBalance; // ivar: _lastUpdatedBalance
@property (retain, nonatomic) NSArray *months; // ivar: _months
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount
@property (readonly, nonatomic) NSSet *physicalCards; // ivar: _physicalCards
@property (readonly, nonatomic) PKSpendingSummaryFetcher *summaryFetcher; // ivar: _summaryFetcher
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKDashboardTransactionFetcher *transactionFetcher; // ivar: _transactionFetcher
@property (readonly, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection
@property (readonly, nonatomic) NSArray *upcomingScheduledPayments;
@property (retain, nonatomic) NSArray *weeks; // ivar: _weeks
@property (readonly, nonatomic) NSArray *years; // ivar: _years


-(BOOL)_canDisplayBalance;
-(BOOL)_canShowTransactions;
-(BOOL)_creditAccountItemTypeEnabled:(NSUInteger)arg0 ;
-(BOOL)_isAppleBalancePass;
-(BOOL)_isCreditPass;
-(BOOL)_isPeerPaymentPass;
-(BOOL)_shouldPaymentMessageAppear:(id)arg0 ;
-(BOOL)canDisplayAppleBalanceBalance;
-(BOOL)transitItemIsEnabled:(NSUInteger)arg0 ;
-(NSInteger)_numberOfBalanceDashboardItems;
-(NSInteger)numberOfAppleBalanceBalanceDashboardItems;
-(NSInteger)numberOfPeerPaymentItemsEnabled;
-(NSInteger)numberOfTransitItemsEnabled;
-(NSUInteger)_creditAccountItemTypeForIndexPath:(id)arg0 ;
-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(NSUInteger)transitItemForItemIndex:(NSInteger)arg0 ;
-(id)_appleBalanceEducationMessages;
-(id)_cardSharingEducationMessages;
-(id)_contactResolver;
-(id)_deviceAssessmentEducationImage;
-(id)_downloadMessageIconURLAndReloadIfNecessary:(id)arg0 ;
-(id)_educationMessages;
-(id)_lastPhysicalCardMessageDateKeyForPhysicalCardIdentifier:(id)arg0 ;
-(id)_messageForAMPEnrollment;
-(id)_messageForAccountPendingFamilyMembers;
-(id)_messageForDeviceAssessmentEducation;
-(id)_messageForFirstMonthCoOwners;
-(id)_messageForPaymentApplicationStatus;
-(id)_messageForPaymentInformationEventExtensionInstallation;
-(id)_messageForPeerPaymentAssociatedAccountLockedAccount;
-(id)_messageForPeerPaymentAssociatedAccountPending;
-(id)_messageForPeerPaymentAssociatedAccountStateChangedForSecurityReasons;
-(id)_messageForPeerPaymentFamilySharing;
-(id)_messageForPeerPaymentLockedAccountByAssociatedAccount;
-(id)_messageForRangingSuspendedPass;
-(id)_messageForSessionActive;
-(id)_messageFromEngagementMessage:(id)arg0 ;
-(id)_messageImageWithName:(id)arg0 extension:(id)arg1 ;
-(id)_messagesForAccountUserInvitations;
-(id)_messagesForAccountUserSetupCashForFamily;
-(id)_messagesForInstallmentPlans;
-(id)_messagesForLockedCardParticipants;
-(id)_messagesForPhysicalCard;
-(id)_messagesToOrderPhysicalCardForUnderageParticipants;
-(id)_physicalCardMessageIdentifierFromIdentifier:(id)arg0 physicalCard:(id)arg1 ;
-(id)actionCallingSelectorWeakly:(SEL)arg0 ;
-(id)appleBalanceAccountItem;
-(id)footerTextItemForSection:(NSUInteger)arg0 ;
-(id)initWithGroupView:(id)arg0 context:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)peerPaymentActionItemForIndexPath:(id)arg0 ;
-(id)revokingAccessMessage;
-(id)titleForSection:(NSUInteger)arg0 ;
-(struct ? )_peerPaymentDashboardCondition;
-(void)_addToAMPButtonTappedForPass:(id)arg0 ;
-(void)_deleteButtonTapped;
-(void)_fetchAMPEnrollmentEligibility;
-(void)_fetchAMPEnrollmentIconIfNeeded:(id)arg0 ;
-(void)_localeDidChangeNotification:(id)arg0 ;
-(void)_lostModeButtonTapped;
-(void)_messageForEnableNotificationsWithCompletion:(id)arg0 ;
-(void)_messageForPaymentFailedWithCompletion:(id)arg0 ;
-(void)_messageForPeerPaymentIdentityVerificationForRewardsWithCompletion:(id)arg0 ;
-(void)_messageForRewardsRedemptionWithCompletion:(id)arg0 ;
-(void)_messageForUnusableIdentityPassWithCompletion:(id)arg0 ;
-(void)_messageFromPaymentServiceSuppressingPassStateChanges:(BOOL)arg0 completion:(id)arg1 ;
-(void)_messagesForAccountStatusWithCompletion:(id)arg0 ;
-(void)_peerPaymentAccountChanged:(id)arg0 ;
-(void)_peerPaymentResolutionTappedWithResolution:(NSUInteger)arg0 ;
-(void)_presentAboutClosedAccounts;
-(void)_presentAccountResolution:(NSUInteger)arg0 forBusinessChatContext:(id)arg1 ;
-(void)_presentAccountUserDetails:(id)arg0 ;
-(void)_presentAccountUserInvitation:(id)arg0 ;
-(void)_presentApplCashFamilySetupForFamilyMember:(id)arg0 ;
-(void)_presentBalanceDetails;
-(void)_presentCardNumbers;
-(void)_presentCreateAccountUserInvitation;
-(void)_presentInboxMessage:(id)arg0 ;
-(void)_presentPassContactSupportWithOption:(NSUInteger)arg0 ;
-(void)_presentPassDetailsWithAction:(NSUInteger)arg0 ;
-(void)_presentPassDetailsWithHandler:(id)arg0 ;
-(void)_presentPassWithPassUniqueIdentifier:(id)arg0 ;
-(void)_presentPhysicalCardActivation;
-(void)_updateBalance;
-(void)_updateDiscoveryEngagementMessageIfNeeded:(id)arg0 ;
-(void)_updateTransactionSourceCollection;
-(void)_updateTransactionsTimer;
-(void)_updateTransitBalanceProperties:(id)arg0 dynamicBalances:(id)arg1 dynamicPlans:(id)arg2 ;
-(void)_updateWithFamilyCollection:(id)arg0 ;
-(void)_updateWithTiles:(id)arg0 ;
-(void)_updateWithTransactionGroups:(id)arg0 ;
-(void)_verificationButtonTapped;
-(void)accountServiceAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)accountUsersChanged:(id)arg0 forAccountIdentifier:(id)arg1 ;
-(void)contactIssuerHelper:(id)arg0 didRequestDismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2 ;
-(void)contactIssuerHelper:(id)arg0 didRequestPresentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)credential:(id)arg0 forPaymentApplication:(id)arg1 didUpdateRangingSuspensionReasons:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)didChangeVerificationPresentation;
-(void)didUpdateFamilyMembers:(id)arg0 ;
-(void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(id)arg0 ;
-(void)dismissOnDeviceAssessmentEducation;
-(void)executeAfterContentIsLoaded:(id)arg0 ;
-(void)featureApplicationAdded:(id)arg0 ;
-(void)featureApplicationChanged:(id)arg0 ;
-(void)featureApplicationRemoved:(id)arg0 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)groupViewDidChangeFrontmostPassView:(id)arg0 withContext:(id)arg1 ;
-(void)groupViewDidUpdatePassView:(id)arg0 ;
-(void)inboxDataSourceDidUpdateInboxMessages:(id)arg0 ;
-(void)invalidatedSpendingSummariesOfType:(NSUInteger)arg0 ;
-(void)invalidatedSpendingSummaryOfType:(NSUInteger)arg0 startingWithDate:(id)arg1 ;
-(void)invalidatedSummariesAvailable;
-(void)linkedApplicationDidChangeState:(id)arg0 ;
-(void)loadSummariesWithForceReload:(BOOL)arg0 ;
-(void)openDeviceAssessmentEducationLearnMore;
-(void)passWithUniqueIdentifier:(id)arg0 didUpdateTiles:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didEnableMessageService:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceivePlanUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsDismissCurrentViewControllerAnimated:(BOOL)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)physicalCardsChanged:(id)arg0 forAccountIdentifier:(id)arg1 ;
-(void)presentVerificationViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)reloadAccount;
-(void)reloadAccountPendingMembersWithNewMembers:(id)arg0 ;
-(void)reloadAccountUserInvitationsWithNewAccountUserInvitations:(id)arg0 ;
-(void)reloadAccountUsersWithNewAccountUserCollection:(id)arg0 ;
-(void)reloadAllContent;
-(void)reloadAppleBalance;
-(void)reloadFamilyCollection;
-(void)reloadFrontmostPass;
-(void)reloadMessages;
-(void)reloadPeerPaymentActions;
-(void)reloadPhysicalCardsWithNewPhysicalCards:(id)arg0 ;
-(void)reloadScheduledPayments;
-(void)reloadTiles;
-(void)reloadTransactionGroups;
-(void)reloadTransactions;
-(void)reloadTransitSection;
-(void)reportDisplayedEngagementMessageIfNeeded:(id)arg0 ;
-(void)scheduledPaymentsChangedForAccountIdentifier:(id)arg0 ;
-(void)secureElementDidEnterRestrictedMode:(id)arg0 ;
-(void)secureElementDidLeaveRestrictedMode:(id)arg0 ;
-(void)setDataSourceDelegate:(id)arg0 ;
-(void)summaryTypeDidChange;
-(void)transactionsChanged:(id)arg0 ;
-(void)updateContentIsLoaded;
-(void)updateWithTransactions:(id)arg0 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;


@end


#endif