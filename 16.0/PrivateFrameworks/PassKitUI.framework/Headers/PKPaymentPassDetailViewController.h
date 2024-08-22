// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPASSDETAILVIEWCONTROLLER_H
#define PKPAYMENTPASSDETAILVIEWCONTROLLER_H

@class PKGroup, PKPaymentApplication, UIRefreshControl, UITableViewCell, NSArray, NSDateFormatter, NSNumberFormatter, PKDashboardTransactionFetcher, LAContext, PKExpressPassController, PKTransitPassProperties, PKPaymentBalanceReminder, NSDictionary, NSMutableDictionary, UITableViewHeaderFooterView, UIImageView, UISegmentedControl, UIView, PKPassFaceViewRendererState, PKPeerPaymentAccount, PKPeerPaymentPreferences, NSIndexPath, PKTransitBalanceModel, CNContact, CLInUseAssertion, NSMutableArray, PKContactFormatValidator, PKFamilyMember, PKRetrieveMerchantTokensResponse, PKAccount, PKAccountService, PKAccountUserCollection, PKContactResolver, NSString, UIColor, PKFamilyMemberCollection, PKPayLaterFinancingPlansFetcher, PKGroupsController, PKPaymentPass, PKPayLaterPaymentIntentController, PKPeerPaymentWebService, NSSet, PKTransactionSourceCollection, PKPaymentWebService;
@protocol MFMailComposeViewControllerDelegate, PKContactResolverDelegate, PKPeerPaymentActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPhysicalCardActionControllerDelegate, PKCreditAccountPaymentDetailsViewControllerDelegate, PKAccountAutomaticPaymentsControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKMerchantTokensViewControllerDelegate, PKAccountBillPaymentObserver, PKAccountServiceObserver, CNAvatarViewDelegate, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPassHeaderViewDelegate, PKBalanceDetailsViewControllerDelegate, PKPaymentPassActionWidgetViewDelegate, PKAMPEnrollmentManagerObserver, PKGroupDelegate, PKAMPEnrollmentManagerObserver, PKLinkedApplicationObserver, PKPaymentPassDetailSectionControllerDelegate, PKPaymentPassDetailContactSupportSectionControllerDelegate, PKPassDetailSharesSectionControllerDelegate, PKSecureElementPassContactIssuerHelperDelegate, PKConfigurablePassDetailSectionsControllerDelegate, UITableViewDataSource, UITableViewDelegate, PSStateRestoration, PKPaymentSetupDelegate, OS_dispatch_source, OS_dispatch_group, PKPassDeleteHandler, PKPassLibraryDataProvider, PKPaymentDataProvider;


#import "PKDynamicTableViewController.h"
#import "PKLinkedApplication.h"
#import "PKPaymentVerificationController.h"
#import "PKPaymentPassDetailActivationFooterView.h"
#import "PKFooterHyperlinkView.h"
#import "PKSettingTableCell.h"
#import "PKPaymentTransactionCellController.h"
#import "PKPassDetailButtonsCell.h"
#import "PKPassHeaderView.h"
#import "PKAnimatedNavigationBarTitleView.h"
#import "PKSpinnerHeaderView.h"
#import "PKPeerPaymentActionViewController.h"
#import "PKPaymentTransactionDetailsFactory.h"
#import "PKAccountServiceAccountResolutionController.h"
#import "PKPhysicalCardController.h"
#import "PKPhysicalCardActionController.h"
#import "PKAccountCardNumbersPresenter.h"
#import "PKPeerPaymentAccountResolutionController.h"
#import "PKPassPresentationContext.h"
#import "PKPeerPaymentAssociatedAccountsController.h"
#import "PKPaymentPassDetailBalanceSectionController.h"
#import "PKPaymentPassDetailSectionController.h"
#import "PKConfigurablePassDetailSectionsController.h"
#import "PKPassDetailSharesSectionController.h"
#import "PKSecureElementPassContactIssuerHelper.h"
#import "PKPaymentPassActionGroupDataController.h"
#import "PKPaymentPassActionDataController.h"
#import "PKApplyController.h"
#import "PKBusinessChatController.h"
#import "PKContactAvatarManager.h"
#import "PKIdentityReplaceFingerprintHelper.h"
#import "PKPayLaterSetupFlowController.h"

@interface PKPaymentPassDetailViewController : PKDynamicTableViewController <MFMailComposeViewControllerDelegate, PKContactResolverDelegate, PKPeerPaymentActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPhysicalCardActionControllerDelegate, PKCreditAccountPaymentDetailsViewControllerDelegate, PKAccountAutomaticPaymentsControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKMerchantTokensViewControllerDelegate, PKAccountBillPaymentObserver, PKAccountServiceObserver, CNAvatarViewDelegate, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPassHeaderViewDelegate, PKBalanceDetailsViewControllerDelegate, PKPaymentPassActionWidgetViewDelegate, PKAMPEnrollmentManagerObserver, PKGroupDelegate, PKAMPEnrollmentManagerObserver, PKLinkedApplicationObserver, PKPaymentPassDetailSectionControllerDelegate, PKPaymentPassDetailContactSupportSectionControllerDelegate, PKPassDetailSharesSectionControllerDelegate, PKSecureElementPassContactIssuerHelperDelegate, PKConfigurablePassDetailSectionsControllerDelegate, UITableViewDataSource, UITableViewDelegate, PSStateRestoration, PKPaymentSetupDelegate>

 {
    NSObject<OS_dispatch_source> *_transactionTimer;
    BOOL _deepLinkingEnabled;
    PKGroup *_group;
    id<PKGroupDelegate> *_savedDelegate;
    PKLinkedApplication *_linkedApplication;
    PKPaymentApplication *_defaultPaymentApplication;
    PKPaymentVerificationController *_verificationController;
    PKPaymentPassDetailActivationFooterView *_activationFooter;
    PKFooterHyperlinkView *_associatedAccountPendingFooterView;
    UIRefreshControl *_refreshControl;
    NSObject<OS_dispatch_source> *_refreshTimeout;
    PKSettingTableCell *_messagesSwitch;
    PKSettingTableCell *_transactionsSwitch;
    PKSettingTableCell *_dailyCashSwitch;
    PKSettingTableCell *_notificationsSwitch;
    PKSettingTableCell *_automaticPresentationSwitch;
    PKSettingTableCell *_expressAccessSwitch;
    PKPaymentTransactionCellController *_transactionCellController;
    PKPassDetailButtonsCell *_widgetCell;
    UITableViewCell *_allowNotificationCell;
    NSArray *_transactions;
    NSArray *_transactionCountAndYear;
    NSDateFormatter *_transactionYearFormatter;
    NSNumberFormatter *_transactionCountFormatter;
    PKDashboardTransactionFetcher *_transactionFetcher;
    NSArray *_devicePaymentApplications;
    NSArray *_contactlessPaymentApplications;
    LAContext *_authenticationContext;
    BOOL _expressModeEnabled;
    BOOL _expressModeSupported;
    PKExpressPassController *_expressPassController;
    BOOL _performingCardTransfer;
    PKTransitPassProperties *_transitProperties;
    PKPaymentBalanceReminder *_transitPropertiesBalanceReminder;
    NSArray *_commuterFields;
    NSArray *_commutePlanFields;
    NSArray *_commutePlans;
    NSArray *_balanceFields;
    NSDictionary *_balances;
    NSDictionary *_actionForBalanceIdentifier;
    NSMutableDictionary *_reminderForBalanceIdentifier;
    NSArray *_displayableBalanceFields;
    NSArray *_tabBarSegments;
    CGFloat _headerHeight;
    CGFloat _tabBarHeight;
    UIEdgeInsets _headerContentInset;
    BOOL _changingDefaultPaymentApplication;
    CGFloat _previousLayoutTableViewWidth;
    CGSize _previousLayoutContentSize;
    NSMutableDictionary *_contextualActionHandlers;
    UITableViewHeaderFooterView *_headerView;
    UITableViewHeaderFooterView *_footerView;
    UIImageView *_logoView;
    PKPassHeaderView *_passHeaderView;
    UISegmentedControl *_tabBar;
    UIView *_passSnapshotView;
    PKAnimatedNavigationBarTitleView *_titleIconView;
    BOOL _showingTitleIconView;
    BOOL _hasTabBar;
    PKPassFaceViewRendererState *_rendererState;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentPreferences *_peerPaymentPreferences;
    BOOL _loadingPeerPaymentPreferences;
    PKSpinnerHeaderView *_peerPaymentPreferencesHeaderView;
    PKPeerPaymentActionViewController *_peerPaymentActionViewController;
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;
    BOOL _loadingAMPEligibility;
    BOOL _isAmpEligible;
    PKAccountServiceAccountResolutionController *_resolutionController;
    BOOL _loadingPayments;
    PKSpinnerHeaderView *_scheduledPaymentsHeaderView;
    PKPhysicalCardController *_physicalCardController;
    PKPhysicalCardActionController *_physicalCardActionController;
    PKAccountCardNumbersPresenter *_accountCardNumbersPresenter;
    BOOL _loadingBankAccounts;
    BOOL _loadingAutomaticPayments;
    BOOL _loadingOrderPhysicalCard;
    BOOL _loadingEnableDisablePhysicalCard;
    BOOL _loadingReplacePhysicalCard;
    BOOL _loadingAccountTermsAndConditions;
    BOOL _allowStatementCreditRedemption;
    NSUInteger _cashbackResolution;
    NSUInteger _redemptionStatus;
    NSArray *_recurringPayments;
    NSArray *_scheduledPayments;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionControllerForAccountService;
    NSIndexPath *_loadingPeerPaymentAccountActionIndexPath;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    NSUInteger _peerPaymentAccountResolution;
    BOOL _requestingStatement;
    BOOL _redeemingRewards;
    NSDateFormatter *_dueDateFormatter;
    NSDateFormatter *_dueTimeFormatter;
    BOOL _isAppleAccess;
    BOOL _isCredentialedPass;
    BOOL _canShareCredentials;
    NSObject<OS_dispatch_group> *_initialLoadGroup;
    BOOL _initialLoadTimedout;
    PKTransitBalanceModel *_transitBalanceModel;
    PKSpinnerHeaderView *_billingAddressHeaderView;
    CNContact *_billingContact;
    BOOL _loadingBillingContact;
    int _expressPassesInformationToken;
    CLInUseAssertion *_inUseAssertion;
    BOOL _allContentIsLoaded;
    NSMutableArray *_executionBlocksContentIsLoaded;
    PKPassPresentationContext *_context;
    PKContactFormatValidator *_contactFormatValidator;
    BOOL _peerPaymentGraduationInProgress;
    PKPeerPaymentAssociatedAccountsController *_peerPaymentAssociatedAccountsController;
    PKFamilyMember *_currentUser;
    NSUInteger _radioTechnologyType;
    NSInteger _notificationAuthorizationStatus;
    NSArray *_sectionControllers;
    NSArray *_validTableSectionControllers;
    NSArray *_orderOfSectionIdentifiers;
    PKPaymentPassDetailBalanceSectionController *_balanceSectionController;
    PKPaymentPassDetailSectionController *_paymentPassDetailSectionController;
    PKConfigurablePassDetailSectionsController *_configurableSectionController;
    PKPassDetailSharesSectionController *_sharesSectionController;
    PKSecureElementPassContactIssuerHelper *_contactIssuerHelper;
    PKPaymentPassActionGroupDataController *_actionGroupController;
    PKPaymentPassActionDataController *_actionController;
    PKRetrieveMerchantTokensResponse *_merchantTokensResponse;
}


@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (retain, nonatomic) PKAccountService *accountService; // ivar: _accountService
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection; // ivar: _accountUserCollection
@property (copy, nonatomic) NSArray *accountUserInvitations; // ivar: _accountUserInvitations
@property (retain, nonatomic) NSArray *activeFinancingPlans; // ivar: _activeFinancingPlans
@property (retain, nonatomic) PKApplyController *applyController; // ivar: _applyController
@property (retain, nonatomic) PKBusinessChatController *businessChatController; // ivar: _businessChatController
@property (retain, nonatomic) NSArray *completedFinancingPlans; // ivar: _completedFinancingPlans
@property (retain, nonatomic) PKContactAvatarManager *contactAvatarManager; // ivar: _contactAvatarManager
@property (retain, nonatomic) PKContactResolver *contactResolver; // ivar: _contactResolver
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassDeleteHandler> *deleteOverrider; // ivar: _deleteOverrider
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *detailTextColor; // ivar: _detailTextColor
@property (nonatomic) NSInteger detailViewStyle; // ivar: _detailViewStyle
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection; // ivar: _familyCollection
@property (retain, nonatomic) PKPayLaterFinancingPlansFetcher *financingPlansFetcher; // ivar: _financingPlansFetcher
@property (retain, nonatomic) PKIdentityReplaceFingerprintHelper *fingeprintHelper; // ivar: _fingeprintHelper
@property (retain, nonatomic) PKGroupsController *groupsController; // ivar: _groupsController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) UIColor *linkTextColor; // ivar: _linkTextColor
@property (nonatomic) BOOL loadingIdentityDetails; // ivar: _loadingIdentityDetails
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) NSObject<PKPassLibraryDataProvider> *passLibraryDataProvider; // ivar: _passLibraryDataProvider
@property (retain, nonatomic) PKPayLaterSetupFlowController *payLaterSetupFlowController; // ivar: _payLaterSetupFlowController
@property (retain, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController; // ivar: _paymentIntentController
@property (retain, nonatomic) NSObject<PKPaymentDataProvider> *paymentServiceDataProvider; // ivar: _paymentServiceDataProvider
@property (retain, nonatomic) PKPeerPaymentWebService *peerPaymentWebService; // ivar: _peerPaymentWebService
@property (retain, nonatomic) NSSet *physicalCards; // ivar: _physicalCards
@property (retain, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (nonatomic, getter=isRemovingAccountUser) BOOL removingAccountUser; // ivar: _removingAccountUser
@property (copy, nonatomic) NSArray *sortedFamilyMemberRowModels; // ivar: _sortedFamilyMemberRowModels
@property (readonly) Class superclass;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection
@property (retain, nonatomic) UIColor *warningTextColor; // ivar: _warningTextColor
@property (retain, nonatomic) PKPaymentWebService *webService; // ivar: _webService


-(BOOL)_accountServiceCreditDetailsRowIsEnabled:(NSUInteger)arg0 ;
-(BOOL)_accountServicePhysicalCardRowIsEnabled:(NSUInteger)arg0 ;
-(BOOL)_accountServiceRewardsRowIsEnabled:(NSUInteger)arg0 ;
-(BOOL)_canDoManualIdentityVerification;
-(BOOL)_canFetchFinancingPlans;
-(BOOL)_canSelectBalanceOrCommutePlanCellAtRowIndex:(NSInteger)arg0 ;
-(BOOL)_commutePlanIsSelectable:(id)arg0 action:(id)arg1 ;
-(BOOL)_hasActionOfType:(NSUInteger)arg0 ;
-(BOOL)_hasEligibleSpend;
-(BOOL)_isDeletingPass;
-(BOOL)_isJapaneseRegion;
-(BOOL)_peerPaymentBalanceAndMoneyActionEnabled:(NSUInteger)arg0 ;
-(BOOL)_shouldDisplayPayLaterItems;
-(BOOL)_shouldShowAccessPersonInformation;
-(BOOL)_shouldShowAccountActions;
-(BOOL)_shouldShowActionWidgets;
-(BOOL)_shouldShowAutomaticPresentation;
-(BOOL)_shouldShowBillingAddressCell;
-(BOOL)_shouldShowCardNumbersSection;
-(BOOL)_shouldShowContactCell;
-(BOOL)_shouldShowDeleteCell;
-(BOOL)_shouldShowNetworkBenefitsCell;
-(BOOL)_shouldShowPrivacyPolicyCell;
-(BOOL)_shouldShowProductBenefitsCell;
-(BOOL)_shouldShowServiceMode;
-(BOOL)_shouldShowServicingSection;
-(BOOL)_shouldShowTermsCell;
-(BOOL)_shouldShowTransactions;
-(BOOL)_shouldShowTransferCell;
-(BOOL)_showExpressDetails;
-(BOOL)_showsAddAccountUserButton;
-(BOOL)_showsTransactionHistorySwitch;
-(BOOL)_transactionCellEditActionsGenerateWithOutput:(*id)arg0 forRowIndex:(NSInteger)arg1 tableView:(id)arg2 ;
-(BOOL)_transactionDeepLinkingEnabled;
-(BOOL)_transactionSectionsDataIsChangedForNewTransactions:(id)arg0 oldTransactions:(id)arg1 newtransactionCountByPeriod:(id)arg2 oldtransactionCountByPeriod:(id)arg3 ;
-(BOOL)_updateHeaderHeightDeterminingLayout:(BOOL)arg0 ;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)canSelectAccountUserRowAtIndexPath:(id)arg0 ;
-(BOOL)isTotalBalanceCellSelectable;
-(BOOL)paymentApplicationShouldShowFullDPAN:(id)arg0 ;
-(BOOL)shouldAllowRefresh;
-(BOOL)shouldDrawBottomSeparator:(NSUInteger)arg0 ;
-(BOOL)shouldDrawTopSeparator:(NSUInteger)arg0 ;
-(BOOL)shouldHighlightRowAtIndexPath:(id)arg0 section:(NSUInteger)arg1 ;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)shouldShowAccountUserStopSharingSection;
-(BOOL)shouldShowAccountUsersSection;
-(BOOL)shouldShowEligibleSpendSection;
-(BOOL)shouldShowFinancingPlanListSection;
-(BOOL)shouldShowIdentityDocumentSection;
-(BOOL)shouldShowPersonalInformationSection;
-(BOOL)shouldShowReplaceBiometricSection;
-(BOOL)shouldShowVerifySSNSection;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 section:(NSUInteger)arg2 ;
-(CGFloat)_footerViewHeightForPassStateSectionWithTableView:(id)arg0 ;
-(CGFloat)_heightForPassStateSectionWithTableView:(id)arg0 ;
-(CGFloat)_offscreenHeaderHeight;
-(CGFloat)estimatedHeightForRowAtIndexPath:(id)arg0 section:(NSUInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSectionCase:(NSUInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSectionCase:(NSUInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 section:(NSUInteger)arg2 ;
-(NSInteger)_numberOfAccountServiceCreditDetailsRowsEnabled;
-(NSInteger)_numberOfAccountServicePhysicalCardRowsEnabled;
-(NSInteger)_numberOfAccountServiceRewardsRowsEnabled;
-(NSInteger)_rowIndexForExpressTransitSettingsCell;
-(NSInteger)_transitCellGenerateCellWithOutput:(*id)arg0 forRowIndex:(NSInteger)arg1 tableView:(id)arg2 ;
-(NSInteger)editingStyleForRowAtIndexPath:(id)arg0 section:(NSUInteger)arg1 ;
-(NSInteger)rowAnimationForDeletingSection:(NSUInteger)arg0 ;
-(NSInteger)rowAnimationForInsertingSection:(NSUInteger)arg0 ;
-(NSInteger)rowAnimationForReloadingSection:(NSUInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionCase:(NSUInteger)arg1 ;
-(NSUInteger)_accessPersonInfoSectionGenerateCellWithOutput:(*id)arg0 forRowIndex:(NSInteger)arg1 tableView:(id)arg2 ;
-(NSUInteger)_accountServiceCreditDetailsRowForRowIndex:(NSInteger)arg0 ;
-(NSUInteger)_accountServicePhysicalCardRowForRowIndex:(NSInteger)arg0 ;
-(NSUInteger)_accountServiceRewardsRowForRowIndex:(NSInteger)arg0 ;
-(NSUInteger)_accountServiceScheduledPaymentsRowTypeForRowIndex:(NSInteger)arg0 ;
-(NSUInteger)_cardInfoSectionGenerateCellWithOutput:(*id)arg0 forRowIndex:(NSInteger)arg1 tableView:(id)arg2 ;
-(NSUInteger)_contactBankCellWithOutput:(*id)arg0 forRowIndex:(NSInteger)arg1 tableView:(id)arg2 ;
-(NSUInteger)_numberOfPeerPaymentBalanceAndMoneyActionsEnabled;
-(NSUInteger)_numberOfPrivacyTermsInfoRows;
-(NSUInteger)_passOperationsCellWithOutput:(*id)arg0 forRowIndex:(NSInteger)arg1 tableView:(id)arg2 ;
-(NSUInteger)_passStateSectionGenerateCellWithOutput:(*id)arg0 forRowIndex:(NSInteger)arg1 tableView:(id)arg2 ;
-(NSUInteger)_peerPaymentBalanceAndMoneyActionForRowIndex:(NSUInteger)arg0 ;
-(NSUInteger)_privacyTermsInfoRowTypeForRowIndex:(NSInteger)arg0 ;
-(NSUInteger)_rowIndexForAccountServicePhysicalCardRow:(NSUInteger)arg0 ;
-(NSUInteger)_rowIndexForPeerPaymentBalanceActionRow:(NSUInteger)arg0 ;
-(NSUInteger)_rowIndexForPrivacyTermsInfoRowType:(NSUInteger)arg0 ;
-(NSUInteger)numberOfAccountUserRowsInTableView:(id)arg0 ;
-(NSUInteger)numberOfIdentityDocumentRowsInTableView:(id)arg0 ;
-(NSUInteger)numberOfReplaceBiometricRowsInTableView:(id)arg0 ;
-(id)_accountServiceBankAccountsCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_accountServiceCardNumbersCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_accountServiceCreditDetailsCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_accountServiceMakeDefaultCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_accountServiceNotificationsSwitchCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_accountServicePhysicalCardCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_accountServiceRewardsDetailsCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_accountServiceScheduledPaymentsCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_accountUserTableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_actionForCommutePlan:(id)arg0 ;
-(id)_activationFooterView;
-(id)_addAccounUserTableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_automaticPresentationCellForTableView:(id)arg0 ;
-(id)_availableActions;
-(id)_availableCommutePlanActions;
-(id)_balanceCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_balanceForRow:(NSUInteger)arg0 ;
-(id)_balanceOrCommutePlanCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_balanceReminderCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_barcodeCell;
-(id)_billingAddressCellWithLabel:(BOOL)arg0 forTableView:(id)arg1 ;
-(id)_cardHolderPictureCellForTableView:(id)arg0 ;
-(id)_cellForField:(id)arg0 tableView:(id)arg1 ;
-(id)_checkmarkCellWithText:(id)arg0 forTableView:(id)arg1 ;
-(id)_commuterRouteCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_contactInfoAttributedText:(id)arg0 phoneNumber:(id)arg1 ;
-(id)_contactKeysToFetch;
-(id)_createTabBarWithSelectedIndex:(NSInteger)arg0 ;
-(id)_defaultCellWithTextColor:(id)arg0 forTableView:(id)arg1 ;
-(id)_deleteCardCellForTableView:(id)arg0 ;
-(id)_deviceAccountNumberCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_disabledCellWithText:(id)arg0 forTableView:(id)arg1 ;
-(id)_disclosureCellWithTitle:(id)arg0 forTableView:(id)arg1 ;
-(id)_dueDateFormatter;
-(id)_dueTimeFormatter;
-(id)_expressAccessCellForTableView:(id)arg0 ;
-(id)_familyMemberCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_familyMemberCellWithRowModel:(id)arg0 forTableView:(id)arg1 ;
-(id)_footerTextForPassStateSection;
-(id)_footerViewForApplePayProductPrivacySection;
-(id)_footerViewForMerchantTokensSection;
-(id)_footerViewForPassStateSection;
-(id)_footerViewForPendingPeerPaymentAssociatedAccount;
-(id)_headerTitleForPassStateSection;
-(id)_imageViewCellForImage:(id)arg0 contentMode:(NSInteger)arg1 forTableView:(id)arg2 ;
-(id)_indexPathForAccountServiceScheduledPaymentsSetUpRecurringPaymentsRow;
-(id)_infoCellWithDescription:(id)arg0 forTableView:(id)arg1 ;
-(id)_infoCellWithPrimaryText:(id)arg0 detailText:(id)arg1 cellStyle:(NSInteger)arg2 forTableView:(id)arg3 ;
-(id)_infoCellWithPrimaryText:(id)arg0 detailText:(id)arg1 cellStyle:(NSInteger)arg2 reuseIdentifier:(id)arg3 forTableView:(id)arg4 ;
-(id)_insertSections:(id)arg0 sectionIdentifiers:(id)arg1 ;
-(id)_installmentsPlanCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_linkCellWithText:(id)arg0 forTableView:(id)arg1 ;
-(id)_linkedAppCellForTableView:(id)arg0 ;
-(id)_linkedApplicationCellForTableView:(id)arg0 ;
-(id)_manufacturerInfoCellForTableView:(id)arg0 ;
-(id)_merchantTokensCellForTableView:(id)arg0 ;
-(id)_messagesSwitchCellForTableView:(id)arg0 ;
-(id)_moreTransactionsCellForTableView:(id)arg0 ;
-(id)_passesInGroupCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_paymentApplicationsCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg0 ;
-(id)_peerPaymentAccountActionCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_peerPaymentAutomaticallyAcceptPaymentsCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_peerPaymentBalanceAndMoneyActionCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_peerPaymentBankAccountsCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_peerPaymentCardInfoCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_peerPaymentManualIdentityVerificationCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_peerPaymentNotificationsSwitchCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_peerPaymentParticipantGraduationCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_peerPaymentStatementCellForTableView:(id)arg0 ;
-(id)_privacyTermsSectionCellForRowIndex:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)_recomputeMappedSections;
-(id)_removeCardTextColor;
-(id)_renewActionForRow:(NSUInteger)arg0 commutePlanIdentifier:(id)arg1 ;
-(id)_scheduledPaymentCellForPayment:(id)arg0 tableView:(id)arg1 ;
-(id)_settingsExpressTransitURL;
-(id)_settingsTableCellWithTitle:(id)arg0 action:(SEL)arg1 setOn:(BOOL)arg2 enabled:(BOOL)arg3 ;
-(id)_spinnerCellForTableView:(id)arg0 ;
-(id)_stackedInfoCellWithPrimaryText:(id)arg0 detailText:(id)arg1 cellStyle:(NSInteger)arg2 forTableView:(id)arg3 ;
-(id)_subtitleCellForTableView:(id)arg0 ;
-(id)_switchCellWithText:(id)arg0 forTableView:(id)arg1 ;
-(id)_titleForScheduledPaymentsSection;
-(id)_topUpActionForRow:(NSUInteger)arg0 ;
-(id)_transactionCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_transactionCountByPeriodCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_transactionCountFormatter;
-(id)_transactionDetailViewControllerForTransaction:(id)arg0 ;
-(id)_transactionYearFormatter;
-(id)_transactionsSwitchCellForIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_transferCardCellForTableView:(id)arg0 ;
-(id)_value1CellWithTextColor:(id)arg0 forTableView:(id)arg1 ;
-(id)_widgetCellForTableView:(id)arg0 ;
-(id)accountUserStopSharingTableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)accountUserTableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)contactIssuerHelper;
-(id)contextMenuConfigurationForCopyingText:(id)arg0 ;
-(id)contextMenuConfigurationForTransaction:(id)arg0 ;
-(id)createFooterHyperlinkViewWithText:(id)arg0 action:(id)arg1 ;
-(id)createPrivacyFooterViewWithText:(id)arg0 ;
-(id)createPrivacyFooterViewWithText:(id)arg0 showingPrivacyOnboardingForContext:(NSUInteger)arg1 ;
-(id)financingPlanListTableVewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)footerForReplaceBiometricIdentityInTableView:(id)arg0 ;
-(id)footerTextForPersonalInformationSection;
-(id)identityDocumentSectionFooter;
-(id)identityDocumentTableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initWithPass:(id)arg0 group:(id)arg1 groupsController:(id)arg2 webService:(id)arg3 peerPaymentWebService:(id)arg4 accountService:(id)arg5 style:(NSInteger)arg6 passLibraryDataProvider:(id)arg7 paymentServiceDataProvider:(id)arg8 ;
-(id)initWithPass:(id)arg0 group:(id)arg1 groupsController:(id)arg2 webService:(id)arg3 peerPaymentWebService:(id)arg4 accountService:(id)arg5 style:(NSInteger)arg6 passLibraryDataProvider:(id)arg7 paymentServiceDataProvider:(id)arg8 rendererState:(id)arg9 context:(id)arg10 familyCollection:(id)arg11 contactAvatarManager:(id)arg12 account:(id)arg13 ;
-(id)initWithPass:(id)arg0 group:(id)arg1 groupsController:(id)arg2 webService:(id)arg3 peerPaymentWebService:(id)arg4 style:(NSInteger)arg5 passLibraryDataProvider:(id)arg6 paymentServiceDataProvider:(id)arg7 ;
-(id)initWithPass:(id)arg0 group:(id)arg1 groupsController:(id)arg2 webService:(id)arg3 peerPaymentWebService:(id)arg4 style:(NSInteger)arg5 passLibraryDataProvider:(id)arg6 paymentServiceDataProvider:(id)arg7 rendererState:(id)arg8 context:(id)arg9 ;
-(id)initWithPass:(id)arg0 group:(id)arg1 groupsController:(id)arg2 webService:(id)arg3 style:(NSInteger)arg4 dataProvider:(id)arg5 ;
-(id)payLaterEligibleSpendTableVewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)personalInformationTableVewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)presentationSceneIdentifierForPhysicalCardActionController:(id)arg0 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(id)replaceBiometricTableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 section:(NSUInteger)arg2 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForCardInfoAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 section:(NSUInteger)arg3 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForTransactionAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 section:(NSUInteger)arg2 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 section:(NSUInteger)arg2 ;
-(id)tableView:(id)arg0 viewForHeaderInSectionCase:(NSUInteger)arg1 ;
-(id)titleForFooterInSection:(NSUInteger)arg0 ;
-(id)titleForHeaderInSection:(NSUInteger)arg0 ;
-(id)verifySSNTableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)viewForFooterInSection:(NSUInteger)arg0 ;
-(struct CGPoint )_normalizedContentOffsetForTargetOffset:(struct CGPoint )arg0 ;
-(void)_accountUsersForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_activationFooterPressed:(id)arg0 ;
-(void)_ampEligbilityUpdated:(BOOL)arg0 ;
-(void)_applyDefaultDynamicStylingToCell:(id)arg0 ;
-(void)_applyDefaultStaticStylingToCell:(id)arg0 ;
-(void)_automaticPresentationSwitchChanged:(id)arg0 ;
-(void)_cancelPendingTransactionTimer;
-(void)_dailyCashSwitchChanged:(id)arg0 ;
-(void)_didSelectAccountServiceBankAccountsAtIndexPath:(id)arg0 ;
-(void)_didSelectAccountServiceCardNumbersAtIndexPath:(id)arg0 ;
-(void)_didSelectAccountServiceMakeDefaultAtIndexPath:(id)arg0 ;
-(void)_didSelectAccountServicePhysicalCardAtIndexPath:(id)arg0 ;
-(void)_didSelectAccountServiceRewardsDetailsAtIndexPath:(id)arg0 ;
-(void)_didSelectAccountServiceScheduledPaymentsAtIndexPath:(id)arg0 ;
-(void)_didSelectAutomaticallyAcceptPaymentsPreferenceAtIndexPath:(id)arg0 ;
-(void)_didSelectBalanceAtRowIndex:(NSInteger)arg0 ;
-(void)_didSelectBalanceOrCommutePlanCellAtIndexPath:(id)arg0 ;
-(void)_didSelectBillingAddress;
-(void)_didSelectCardInfoCellAtIndexPath:(id)arg0 ;
-(void)_didSelectCommutePlanAtRowIndex:(NSInteger)arg0 ;
-(void)_didSelectContactBankSectionAtIndexPath:(NSInteger)arg0 ;
-(void)_didSelectCreditDetailsCell:(id)arg0 ;
-(void)_didSelectDeleteCard;
-(void)_didSelectFamilySharingAtIndexPath:(id)arg0 ;
-(void)_didSelectFixPeerPaymentAtIndexPath:(id)arg0 ;
-(void)_didSelectInstallmentPlansAtIndexPath:(id)arg0 ;
-(void)_didSelectMakePayment;
-(void)_didSelectMerchantTokensCell;
-(void)_didSelectNetworkBenefitsCell;
-(void)_didSelectPassInGroupAtIndexPath:(id)arg0 ;
-(void)_didSelectPassOperationsSectionAtIndexPath:(id)arg0 ;
-(void)_didSelectPassStateSection;
-(void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg0 ;
-(void)_didSelectPeerPaymentAccountActionAtIndexPath:(id)arg0 ;
-(void)_didSelectPeerPaymentBalanceAndMoneyActionAtRow:(NSInteger)arg0 ;
-(void)_didSelectPeerPaymentBankAccountsAtIndexPath:(id)arg0 ;
-(void)_didSelectPeerPaymentManualIdentityVerificationAtIndexPath:(id)arg0 ;
-(void)_didSelectPeerPaymentParticipantGradutionAtIndexPath:(id)arg0 ;
-(void)_didSelectPeerPaymentStatementAtIndexPath:(id)arg0 ;
-(void)_didSelectPrivacySectionAtRow:(NSInteger)arg0 ;
-(void)_didSelectProductBenefitsCell;
-(void)_didSelectRedeemAtIndexPath:(id)arg0 ;
-(void)_didSelectServicingWalletLink;
-(void)_didSelectTransactionAtRow:(NSInteger)arg0 ;
-(void)_didSelectTransactionCountByPeriodAtIndexPath:(id)arg0 ;
-(void)_didSelectTransactionTransactionsSwitchInTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_didSelectTransferCardAtIndexPath:(id)arg0 ;
-(void)_didSelectTransferToBank;
-(void)_didSelectTransitTicketAtRow:(NSInteger)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_doneLoadingPeerPaymentAccountAction;
-(void)_expressAccessSwitchChanged:(id)arg0 ;
-(void)_expressPassDidChange;
-(void)_fetchBalanceRemindersWithActionForBalanceIdentifier:(id)arg0 transitProperties:(id)arg1 pass:(id)arg2 withCompletion:(id)arg3 ;
-(void)_fetchMerchantTokens;
-(void)_fetchScheduledPaymentsWithAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_handleAccountServiceAccountDidChangeNotification:(id)arg0 ;
-(void)_handlePeerPaymentAccountDidChangeNotification:(id)arg0 ;
-(void)_handlePeerPaymentPreferencestDidChangeNotification:(id)arg0 ;
-(void)_handleProvisioningError:(id)arg0 ;
-(void)_handleUpdatedBalanceReminder:(id)arg0 forBalanceWithIdentifier:(id)arg1 ;
-(void)_ingestPassFields;
-(void)_initializeValidSectionControllers;
-(void)_loadAdditionalAccountDataWithCompletion:(id)arg0 ;
-(void)_loadFamilyCollectionIfNecessaryWithCompletion:(id)arg0 ;
-(void)_messagesSwitchChanged:(id)arg0 ;
-(void)_normalizeContentOffset;
-(void)_notificationSwitchChanged:(id)arg0 ;
-(void)_openPaymentSetupWithNetworkWhitelist:(id)arg0 paymentSetupMode:(NSInteger)arg1 ;
-(void)_passSettingsChanged:(id)arg0 ;
-(void)_pendingInvitationsForAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_preflightWatchForTransferWithCompletion:(id)arg0 ;
-(void)_presentInvitation:(id)arg0 completion:(id)arg1 ;
-(void)_presentMerchantDetailsViewWithTransaction:(id)arg0 forCell:(id)arg1 ;
-(void)_presentPhysicalCardPasswordAuthorization:(id)arg0 ;
-(void)_presentStopSharingAlertForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)_presentTermsAndConditionsWithRow:(NSUInteger)arg0 ;
-(void)_refreshFinished:(BOOL)arg0 ;
-(void)_refreshPaymentApplicationsSelection;
-(void)_reloadMerchantTokenRows;
-(void)_reloadPassAndView;
-(void)_reloadTitle;
-(void)_reloadTransactionSectionsAnimated:(BOOL)arg0 forceReload:(BOOL)arg1 ;
-(void)_reloadTransactionSourceCollectionIfNecessary;
-(void)_reloadTransactionsWithCompletion:(id)arg0 ;
-(void)_reloadView;
-(void)_reportAddAccountUser;
-(void)_reportPassDetailsAnalyticsForTappedButtonTag:(id)arg0 additionalAnalytics:(id)arg1 ;
-(void)_reportPassDetailsAnalyticsForTappedRowTag:(id)arg0 additionalAnalytics:(id)arg1 ;
-(void)_reportPassDetailsAnalyticsForToggleTag:(id)arg0 toggleResult:(BOOL)arg1 additionalAnalytics:(id)arg2 ;
-(void)_setExpressAccessEnabled:(BOOL)arg0 paymentSetupContext:(NSInteger)arg1 authenticationCredential:(id)arg2 ;
-(void)_setTransitProperties:(id)arg0 ;
-(void)_showPeerPaymentActionViewControllerForAction:(NSUInteger)arg0 ;
-(void)_showSpinner:(BOOL)arg0 inCell:(id)arg1 detailText:(id)arg2 ;
-(void)_showSpinner:(BOOL)arg0 inCell:(id)arg1 overrideTextColor:(id)arg2 ;
-(void)_startPendingTransactionTimer;
-(void)_tabBarSegmentChanged:(id)arg0 ;
-(void)_transactionsSwitchChanged:(id)arg0 ;
-(void)_updateAmpEligibility;
-(void)_updateBalanceIfNecessary;
-(void)_updateCashbackPeerPaymentResolutionSection;
-(void)_updateDisplayableBalances;
-(void)_updateDisplayableBalancesPlansAndTransitPropertiesWithBalances:(id)arg0 plans:(id)arg1 transitProperties:(id)arg2 withCompletion:(id)arg3 ;
-(void)_updateDisplayableBalancesWithBalances:(id)arg0 withCompletion:(id)arg1 ;
-(void)_updateDisplayablePlansWithNewPlans:(id)arg0 withCompletion:(id)arg1 ;
-(void)_updateExpressPassInformation;
-(void)_updateFamilyRows;
-(void)_updateHeaderActionView;
-(void)_updatePassProperties:(BOOL)arg0 ;
-(void)_updatePassSnapshot;
-(void)_updatePassesInGroupSectionWithUpdatedGroup:(id)arg0 ;
-(void)_updatePeerPaymentAccount;
-(void)_updatePeerPaymentFamilyMemberRows;
-(void)_updatePeerPaymentPreferences;
-(void)_updatePeerPaymentPreferencesSectionVisibilityAndReloadIfNecessary;
-(void)_updatePeerPaymentPreferencesWithNewPreferences:(id)arg0 ;
-(void)_updateSectionVisibilityAndReloadIfNecessaryForSection:(NSUInteger)arg0 ;
-(void)_updateTabBar;
-(void)_updateTabBarWithSegments:(id)arg0 ;
-(void)_updateTransitPassPropertiesSections;
-(void)_updateTransitPropertiesWithCompletion:(id)arg0 ;
-(void)accountAutomaticPaymentsController:(id)arg0 didSchedulePayment:(id)arg1 ;
-(void)accountBillPaymentViewController:(id)arg0 didSchedulePayments:(id)arg1 ;
-(void)accountFinancingPlanAdded:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)accountFinancingPlanRemoved:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)accountFinancingPlanUpdated:(id)arg0 oldFinancingPlan:(id)arg1 accountIdentifier:(id)arg2 ;
-(void)accountServiceAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)accountUsersChanged:(id)arg0 forAccountIdentifier:(id)arg1 ;
-(void)addMoney;
-(void)ampEnrollmentManager:(id)arg0 didEnrollPaymentPass:(id)arg1 success:(BOOL)arg2 ;
-(void)balanceDetailsViewController:(id)arg0 didUpdateBalanceReminder:(id)arg1 forBalance:(id)arg2 ;
-(void)callIssuer;
-(void)contactIssuerHelper:(id)arg0 didRequestDismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2 ;
-(void)contactIssuerHelper:(id)arg0 didRequestPresentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)contactSupportSectionControllerDidSelect:(id)arg0 ;
-(void)contactsDidChangeForContactResolver:(id)arg0 ;
-(void)contentIsLoaded;
-(void)dealloc;
-(void)didChangeVerificationPresentation;
-(void)didSelectAccountUserCellInTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)didSelectAccountUserStopSharingCellInTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)didSelectFinancingPlanListCellInTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)didSelectIdentityDocumentCellInTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)didSelectPayLaterEligibleSpendCellInTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)didSelectPersonalInformationCellInTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)didSelectReplaceBiometricCellInTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)didSelectVerifySSNCellInTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)didUpdateFamilyMembers:(id)arg0 ;
-(void)emailIssuer;
-(void)executeAfterContentIsLoaded:(id)arg0 ;
-(void)featureApplicationAdded:(id)arg0 ;
-(void)featureApplicationChanged:(id)arg0 ;
-(void)featureApplicationRemoved:(id)arg0 ;
-(void)fetchFinancingPlansIfNecessary;
-(void)group:(id)arg0 didInsertPass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didMovePassFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didRemovePass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)group:(id)arg0 didUpdatePass:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)handleOpenBusinessChatForPayLater;
-(void)linkedApplicationDidChangeState:(id)arg0 ;
-(void)loadAccountUsersWithCompletion:(id)arg0 ;
-(void)loadPendingAccountUserInvitationsWithCompletion:(id)arg0 ;
-(void)loadView;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)merchantTokensViewController:(id)arg0 didDeleteMerchantToken:(id)arg1 ;
-(void)openBusinessChat;
-(void)openIssuerWebsite;
-(void)passHeaderViewDidChangePass:(id)arg0 ;
-(void)passHeaderViewPassWasDeleted:(id)arg0 ;
-(void)paymentDetailsViewController:(id)arg0 didCancelPayment:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didEnableMessageService:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didEnableTransactionService:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceivePlanUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateBalanceReminder:(id)arg1 forBalanceWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)paymentSetupDidFinish:(id)arg0 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsDismissCurrentViewControllerAnimated:(BOOL)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)peerPaymentActionViewControllerDidCancel:(id)arg0 ;
-(void)peerPaymentActionViewControllerDidPerformAction:(id)arg0 ;
-(void)performPaymentPassAction:(id)arg0 ;
-(void)performPaymentPassActionGroup:(id)arg0 ;
-(void)physicalCardActionController:(id)arg0 didChangeToState:(NSInteger)arg1 withError:(id)arg2 ;
-(void)physicalCardsChanged:(id)arg0 forAccountIdentifier:(id)arg1 ;
-(void)postServiceModeNotification;
-(void)presentAccountUserDetailsForAccountUserAltDSID:(id)arg0 ;
-(void)presentAccountUserDetailsForRowModel:(id)arg0 ;
-(void)presentAccountUserInvitationForRowModel:(id)arg0 ;
-(void)presentAccountUserInvitationWithIdentifier:(id)arg0 ;
-(void)presentActivatePhysicalCard;
-(void)presentAddAccountUser;
-(void)presentAuthRequestForPolicy:(NSInteger)arg0 completion:(id)arg1 ;
-(void)presentBalanceDetails;
-(void)presentBankAccounts;
-(void)presentBillPayment;
-(void)presentCardNumbers;
-(void)presentContactIssuerSheet;
-(void)presentDailyCashForDateComponents:(id)arg0 ;
-(void)presentISO18013Details;
-(void)presentIdentityVerification;
-(void)presentInstallmentPlanWithIdentifier:(id)arg0 ;
-(void)presentInstallmentPlansForFeature:(NSUInteger)arg0 ;
-(void)presentMakeDefaultAtApple;
-(void)presentOrderPhysicalCard;
-(void)presentPassDetailDrillInForField:(id)arg0 ;
-(void)presentSchedulePayments;
-(void)presentShareAccount;
-(void)presentTermsAcceptance;
-(void)presentTermsAndConditions;
-(void)presentTopUp;
-(void)presentTrackPhysicalCard;
-(void)presentTransactionDetailsForTransaction:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentVerificationViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)recomputeMappedSectionsAndReloadSections:(id)arg0 ;
-(void)redeemGiftCard;
-(void)refreshControlValueChanged:(id)arg0 ;
-(void)reloadData:(BOOL)arg0 ;
-(void)reloadSection:(NSUInteger)arg0 ;
-(void)reloadSections:(id)arg0 ;
-(void)scheduledPaymentsChangedForAccountIdentifier:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setShowDoneButton:(BOOL)arg0 ;
-(void)sharesSectionControllerDidSelectViewEntitlements:(id)arg0 ;
-(void)showStatementDetailsWithIdentifier:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 section:(NSUInteger)arg2 ;
-(void)tableView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didRemoveTransactionWithIdentifier:(id)arg1 ;
-(void)transferToBank;
-(void)updateActivationFooterViewContents;
-(void)updateSectionVisibilityAndReloadIfNecessaryForSections:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillMoveToWindow:(id)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif