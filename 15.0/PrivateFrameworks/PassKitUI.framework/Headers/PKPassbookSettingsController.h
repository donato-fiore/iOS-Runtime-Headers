// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSBOOKSETTINGSCONTROLLER_H
#define PKPASSBOOKSETTINGSCONTROLLER_H

@class PKPaymentPreference, PKPaymentPreferenceCard, PKPaymentWebService, NSString, NSArray, PSSpecifier, PKPeerPaymentWebService, PKPeerPaymentAccount, PKExpressPassController, PKAccountService, NSMutableDictionary, LAContext, PKContactFormatValidator;
@protocol PKPaymentServiceDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPaymentDataProviderDelegate, PKSwitchSpinnerTableCellDelegate, PKSubcredentialProvisioningFlowControllerDelegate, PKInboxDataSourceDelegate, CIDVUIProofingFlowManagerDelegate, PKPaymentPassTableCellDelegate, PKPassbookSettingsDataSource, PKPassLibraryDataProvider, PKPaymentDataProvider, PKPaymentOptionsProtocol, PKPassbookPeerPaymentSettingsDelegate, PKPassbookSettingsDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentPreferencesListViewController.h"
#import "PKContactAvatarManager.h"
#import "PKPeerPaymentAssociatedAccountsController.h"
#import "PKInboxDataSource.h"
#import "PKPeerPaymentAccountResolutionController.h"
#import "PKExpressPassesViewController.h"

@interface PKPassbookSettingsController : NSObject <PKPaymentServiceDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPaymentDataProviderDelegate, PKSwitchSpinnerTableCellDelegate, PKSubcredentialProvisioningFlowControllerDelegate, PKInboxDataSourceDelegate, CIDVUIProofingFlowManagerDelegate, PKPaymentPassTableCellDelegate>

 {
    id<PKPassbookSettingsDataSource> *_dataSource;
    id<PKPassLibraryDataProvider> *_passLibraryDataProvider;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    id<PKPaymentOptionsProtocol> *_optionsDelegate;
    NSInteger _context;
    PKPaymentPreferencesListViewController *_defaultCardsController;
    PKPaymentPreference *_availableCards;
    PKPaymentPreferenceCard *_unavailableCards;
    PKPaymentWebService *_webService;
    PKContactAvatarManager *_avatarManager;
    PKPeerPaymentAssociatedAccountsController *_associatedAccountController;
    PKInboxDataSource *_inboxDataSource;
    NSString *_defaultCardIdentifier;
    NSString *_provisioningPassIdentifier;
    NSArray *_paymentPasses;
    NSArray *_otherPasses;
    NSArray *_paymentPassSpecifiers;
    NSArray *_otherPassSpecifiers;
    NSArray *_companionPasses;
    NSArray *_hiddenCompanionPasses;
    NSArray *_companionPassSpecifiers;
    NSArray *_lockscreenSwitchSpecifiers;
    NSArray *_handoffSwitchSpecifiers;
    NSArray *_expiredPassesSwitchSpecifiers;
    PSSpecifier *_addCardButtonSpecifier;
    PSSpecifier *_paymentCardsGroupSpecifier;
    PSSpecifier *_otherCardsGroupSpecifier;
    PSSpecifier *_companionCardsGroupSpecifier;
    PSSpecifier *_defaultPaymentSpecifier;
    PSSpecifier *_defaultShippingAddressSpecifier;
    PSSpecifier *_defaultContactEmailSpecifier;
    PSSpecifier *_defaultContactPhoneSpecifier;
    id<PKPassbookPeerPaymentSettingsDelegate> *_peerPaymentDelegate;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PSSpecifier *_peerPaymentSwitchSpecifier;
    PSSpecifier *_peerPaymentTinkerSetupButton;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    PKPeerPaymentAccount *_peerPaymentAccount;
    BOOL _registeringForPeerPayment;
    PKExpressPassController *_expressPassController;
    PKAccountService *_accountService;
    NSMutableDictionary *_pairedDeviceSupportsFeatureByAccountID;
    LAContext *_LAContext;
    BOOL _hasExpressCapablePass;
    NSString *_expressTransitSubtitleText;
    NSString *_expressTransitSectionFooterText;
    PSSpecifier *_defaultExpressTransitSpecifier;
    PKExpressPassesViewController *_expressPassesViewController;
    NSMutableDictionary *_latestTransitBalanceModel;
    id<PKPaymentDataProvider> *_companionPaymentDataProvider;
    int _notifyToken;
    PKContactFormatValidator *_contactFormatValidator;
    BOOL _ownerCredentialSharingAllowed;
    BOOL _canAcceptCredentialInvitations;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassbookSettingsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isPeerPaymentRegistered;
-(BOOL)_supportsApplePay;
-(BOOL)canShareCompanionPass:(id)arg0 ;
-(NSInteger)_paymentPreferencesStyle;
-(NSInteger)_paymentSetupContextForSettingsContext:(NSInteger)arg0 ;
-(id)_bridgeSpecifiers;
-(id)_companionPassSpecifiers;
-(id)_currentDefaultPaymentPass;
-(id)_defaultContactEmailSpecifier;
-(id)_defaultContactPhoneSpecifier;
-(id)_defaultExpressTransitPassDescription;
-(id)_defaultExpressTransitSpecifier;
-(id)_defaultPaymentSpecifier;
-(id)_defaultShippingAddressSpecifier;
-(id)_defaultsGroupSpecifiers;
-(id)_doubleClickSwitchSettingForSpecifier:(id)arg0 ;
-(id)_expiredPassesSwitchGroupSpecifiers;
-(id)_expiredPassesSwitchSettingForSpecifier:(id)arg0 ;
-(id)_fallbackExpressTransitFooterText;
-(id)_getDefaultContactEmail;
-(id)_getDefaultContactPhone;
-(id)_getDefaultPaymentCard;
-(id)_getDefaultShippingAddress;
-(id)_handoffSwitchGroupSpecifiers;
-(id)_handoffSwitchSettingForSpecifier:(id)arg0 ;
-(id)_invitationFromCredential:(id)arg0 ;
-(id)_lockscreenSwitchGroupSpecifiers;
-(id)_matchingInvitationForPass:(id)arg0 withInvitations:(id)arg1 ;
-(id)_otherPassSpecifiers;
-(id)_passSpecifiersForPasses:(id)arg0 ;
-(id)_passSpecifiersForPasses:(id)arg0 peerPaymentPassUniqueID:(id)arg1 showPeerPaymentSetup:(BOOL)arg2 ;
-(id)_paymentPassSpecifiers;
-(id)_peerPaymentGroupSpecifiers;
-(id)_peerPaymentSwitchSpecifier;
-(id)_peerPaymentTinkerGroupSpecifiers;
-(id)_pendingInvitationsGroupSpecifiers;
-(id)_restrictedModeSpecifier;
-(id)_settingsSpecifiers;
-(id)_specifierForPassUniqueID:(id)arg0 ;
-(id)_transitDefaultsGroupSpecifiers;
-(id)initWithDelegate:(id)arg0 dataSource:(id)arg1 context:(NSInteger)arg2 ;
-(id)passWithUniqueIdentifier:(id)arg0 ;
-(id)rendererStateForPaymentPass:(id)arg0 ;
-(id)specifiers;
-(id)watchPassReaderIdentifiers;
-(void)_accountServiceAccountDidChangeNotification:(id)arg0 ;
-(void)_checkPairedDeviceSupportOfHiddenPassesAndRefreshUIIfNecessary;
-(void)_credentialPairingContextForPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)_expressPassDidChange;
-(void)_fetchBalancesAndTransitPassPropertiesForPass:(id)arg0 withDataProvider:(id)arg1 completion:(id)arg2 ;
-(void)_handleDefaultPaymentPassChangedTo:(id)arg0 withSender:(id)arg1 optionsController:(id)arg2 canPrompt:(BOOL)arg3 ;
-(void)_handleProvisioningError:(id)arg0 viewController:(id)arg1 ;
-(void)_openExpressTransitSettings:(id)arg0 ;
-(void)_openPrivacyLink;
-(void)_peerPaymentAccountDidChangeNotification:(id)arg0 ;
-(void)_peerPaymentWebServiceDidChangeNotification:(id)arg0 ;
-(void)_performPhoneToWatchProvisioningForPaymentPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)_presentCredentialSetupViewControllerForPaymentPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)_presentFeatureNotEnabledForDemoForSpecifier:(id)arg0 ;
-(void)_presentInboxMessage:(id)arg0 ;
-(void)_presentPaymentSetupViewController:(id)arg0 paymentPass:(id)arg1 ;
-(void)_presentPeerPaymentReOpenCardFlowForSpecifier:(id)arg0 ;
-(void)_presentPeerPaymentSetupFlowForSpecifier:(id)arg0 ;
-(void)_presentPeerPaymentSetupFlowForSpecifier:(id)arg0 completion:(id)arg1 ;
-(void)_presentPeerPaymentSetupFlowWithAmount:(id)arg0 flowState:(NSUInteger)arg1 senderAddress:(id)arg2 completion:(id)arg3 ;
-(void)_refreshCompanionGroupSpecififiers;
-(void)_refreshPasses;
-(void)_regionConfigurationDidChangeNotification;
-(void)_registerForPeerPaymentWithSpecifier:(id)arg0 ;
-(void)_reloadPassData;
-(void)_reloadPendingInvitationSpecifiers;
-(void)_requestDelegatePresentViewController:(id)arg0 ;
-(void)_setCardAddProvisioningButtonEnabled:(BOOL)arg0 forPaymentPass:(id)arg1 ;
-(void)_setDoubleClickSwitchSetting:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_setExpiredPassesSwitchSetting:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_setHandoffSwitchSetting:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_showCardDetails:(id)arg0 ;
-(void)_showDefaultContactEmailOptions:(id)arg0 ;
-(void)_showDefaultContactPhoneOptions:(id)arg0 ;
-(void)_showDefaultPaymentOptions:(id)arg0 ;
-(void)_showDefaultShippingAddressOptions:(id)arg0 ;
-(void)_transitPropertiesForPaymentPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)_unregisterForPeerPaymentWithSpecifier:(id)arg0 ;
-(void)_updateAddButtonSpecifier;
-(void)_updateBalancesWithServerBalances:(id)arg0 transitPassProperties:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 ;
-(void)_updateCardSpecifier:(id)arg0 withAccountStateForPaymentPass:(id)arg1 ;
-(void)_updateCardsGroupSpecifier;
-(void)_updateCompanionGroupSpecifier;
-(void)_updateCompanionPassesAddButton;
-(void)_updateDefaultCardsPreferences;
-(void)_updateTransitExpressPassIdentifiersWithReload:(BOOL)arg0 ;
-(void)addButtonPressedForPaymentPass:(id)arg0 ;
-(void)addCardTapped;
-(void)addCardTappedForPaymentPassWithUniqueID:(id)arg0 ;
-(void)addCardTappedForPaymentPassWithUniqueID:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg0 ;
-(void)inboxDataSourceDidUpdateInboxMessages:(id)arg0 ;
-(void)openExpressTransitSettings:(id)arg0 withPassUniqueIdentifier:(id)arg1 ;
-(void)openPaymentSetupWithMode:(NSInteger)arg0 referrerIdentifier:(id)arg1 allowedFeatureIdentifiers:(id)arg2 ;
-(void)openPeerPaymentSetupWithCurrenyAmount:(id)arg0 state:(NSUInteger)arg1 senderAddress:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsDismissCurrentViewControllerAnimated:(BOOL)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)proofingFlowManager:(id)arg0 completedProofingWithError:(id)arg1 ;
-(void)refreshDefaultCard;
-(void)refreshExpressTransitCard;
-(void)refreshPasses;
-(void)refreshPeerPaymentStatus;
-(void)removeFooterForSpecifier:(id)arg0 ;
-(void)requestPresentationOfViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setupPeerPaymentTinkerButtonTapped;
-(void)subcredentialProvisioningFlowController:(id)arg0 didFinishWithPass:(id)arg1 error:(id)arg2 ;
-(void)switchSpinnerCell:(id)arg0 hasToggledSwitch:(BOOL)arg1 ;
-(void)userCanceledPairingWithSubcredentialProvisioningFlowController:(id)arg0 ;


@end


#endif