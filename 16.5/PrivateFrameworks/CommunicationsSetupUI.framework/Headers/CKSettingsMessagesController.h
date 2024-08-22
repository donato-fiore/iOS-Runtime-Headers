// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSETTINGSMESSAGESCONTROLLER_H
#define CKSETTINGSMESSAGESCONTROLLER_H

@class UIViewController<PSController>, IMCTXPCServiceSubscriptionInfo, NSString, CKOnboardingController, PSSystemPolicyForApp;
@protocol CNFRegWizardControllerDelegate, AKAppleIDAuthenticationDelegate, IMCloudKitEventHandler, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, PSSystemPolicyForAppDelegate;


#import "CNFRegListController.h"
#import "CKNSExtension.h"
#import "CKFilteringListController.h"
#import "CKMultipleCTSubscriptionsController.h"

@interface CKSettingsMessagesController : CNFRegListController <CNFRegWizardControllerDelegate, AKAppleIDAuthenticationDelegate, IMCloudKitEventHandler, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, PSSystemPolicyForAppDelegate>

 {
    BOOL _showingChildViewController;
    int _profileToken;
}


@property (retain) id *beginMappingID; // ivar: _beginMappingID
@property (retain, nonatomic) UIViewController<PSController> *blackholeConversationListViewController; // ivar: _blackholeConversationListViewController
@property (retain, nonatomic) CKNSExtension *ckExtension; // ivar: _ckExtension
@property (retain, nonatomic) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo; // ivar: _ctSubscriptionInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKFilteringListController *filteringController; // ivar: _filteringController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKMultipleCTSubscriptionsController *mmsAllowsGroupMessagingController; // ivar: _mmsAllowsGroupMessagingController
@property (retain, nonatomic) CKMultipleCTSubscriptionsController *mmsMessagingController; // ivar: _mmsMessagingController
@property (retain, nonatomic) CKOnboardingController *onboardingController; // ivar: _onboardingController
@property (readonly) Class superclass;
@property (retain, nonatomic) PSSystemPolicyForApp *systemPolicy; // ivar: _systemPolicy


+(BOOL)currentMessageAutoKeepForType:(int)arg0 ;
+(BOOL)shouldShowFirstPartyExtension;
+(id)currentKeepMessages;
+(id)getDefaultExtension;
+(id)removeFirstPartyExtensionFromArrayIfNecessary:(id)arg0 ;
+(int)currentMessageAutoKeepOptionForType:(int)arg0 ;
-(BOOL)_allAccountsAreDeactivated;
-(BOOL)_imageForkedFromMeCard;
-(BOOL)_isMadridAccountOperational;
-(BOOL)_isMadridSwitchOn;
-(BOOL)_isRaiseGestureSupported;
-(BOOL)_isSMSDevice;
-(BOOL)_meCardSharingEnabled;
-(BOOL)_sharedWithYouEnabled;
-(BOOL)authenticationController:(id)arg0 shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContext:(id)arg3 ;
-(BOOL)hasPhoneNumber;
-(BOOL)isPersonalCompanionEnabled;
-(BOOL)shouldReloadSpecifiersOnResume;
-(BOOL)shouldShowAudioMessageSettings;
-(BOOL)shouldShowBlocklistSettings;
-(BOOL)shouldShowCharacterCount;
-(BOOL)shouldShowContactPhotoSettings;
-(BOOL)shouldShowDeliveryReceipts;
-(BOOL)shouldShowGenericSettings;
-(BOOL)shouldShowJunkConversationsRow;
-(BOOL)shouldShowJunkFilteringReceipts;
-(BOOL)shouldShowMadridAccounts;
-(BOOL)shouldShowMadridSignin;
-(BOOL)shouldShowMadridSwitch;
-(BOOL)shouldShowNicknames;
-(BOOL)shouldShowRaiseToListenSwitch;
-(BOOL)shouldShowReadReceipts;
-(BOOL)shouldShowSMSRelaySettings;
-(BOOL)shouldShowSendAsSMS;
-(BOOL)shouldShowSharedWithYouSettings;
-(BOOL)shouldShowSiriSettings;
-(BOOL)shouldShowiMessageFilteringSettings:(id)arg0 ;
-(BOOL)wantsWiFiChooser;
-(NSUInteger)_meCardSharingAudience;
-(id)_madridSettingsController;
-(id)_sharedWithYouViewController;
-(id)_smsRelayDevicesController;
-(id)_switchFooterText:(*BOOL)arg0 ;
-(id)_syncManager;
-(id)areJunkFilteringReceiptsEnabled:(id)arg0 ;
-(id)areReadReceiptsEnabled:(id)arg0 ;
-(id)audioMessageSettingsSpecifierIdentifiers;
-(id)blocklistSettingsSpecifierIdentifiers;
-(id)bundle;
-(id)characterCountSpecifierIdentifiers;
-(id)contactPhotoSettingsSpecifierIdentifiers;
-(id)controllerForSpecifier:(id)arg0 ;
-(id)deliveryReceiptSpecifierIdentifiers;
-(id)genericSettingsSpecifierIdentifiers;
-(id)getAccountSummaryForSpecifier:(id)arg0 ;
-(id)getAudioMessageAutoKeep:(id)arg0 ;
-(id)getKeepMessages:(id)arg0 ;
-(id)getMMSDictionary;
-(id)getNameAndPhotoSharingFooterText;
-(id)getNameAndPhotoSharingSpecifierSummary:(id)arg0 ;
-(id)getPreviewTranscodingEnabled:(id)arg0 ;
-(id)getRaiseToListenEnabled:(id)arg0 ;
-(id)getSMSRelayDevicesSummary:(id)arg0 ;
-(id)getSharedWithYouForSpecifier:(id)arg0 ;
-(id)iMessageFilteringSpecifierIdentifiers;
-(id)init;
-(id)isConversationListFilteringEnabled:(id)arg0 ;
-(id)isDeliveryReportsEnabled:(id)arg0 ;
-(id)isMMSEnabled:(id)arg0 ;
-(id)isMadridEnabled:(id)arg0 ;
-(id)isSiriToneNotificationEnabled:(id)arg0 ;
-(id)junkConversationsRowIdentifier;
-(id)junkFilterReceiptsRowIdentifier;
-(id)logName;
-(id)madridAccountsSpecifierIdentifiers;
-(id)madridSigninButtonTextForSpecifier:(id)arg0 ;
-(id)madridSigninSpecifiers;
-(id)madridSwitchSpecifierIdentifiers;
-(id)nameAndPhotoSharingSpecifiers;
-(id)newDNDGlobalConfigurationService;
-(id)presentingViewControllerForOnboardingController:(id)arg0 ;
-(id)raiseToListenSpecifierIdentifiers;
-(id)readReceiptSpecifierIdentifiers;
-(id)sendAsSMSIdentifiers;
-(id)sharedWithYouSettingsSpecifierIdentifiers;
-(id)siriSettingsIdentifiers;
-(id)smsRelaySettingsSpecifierIdentifiers;
-(id)spamFilteringSpecifierIdentifiers;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)willSendGroupMMS:(id)arg0 ;
-(void)_clearMessagesAppExtensionSalt;
-(void)_setUpBusinessChatGroupSpecifiers:(id)arg0 ;
-(void)_setupAccountHandlers;
-(void)_setupAccountHandlersForDisabling;
-(void)_setupMMSGroupSpecifiers:(id)arg0 wantsMMSBasicGroup:(BOOL)arg1 ;
-(void)_setupMultipleSubscriptionsMMSGroupSpecifiers:(id)arg0 wantsMMSBasicGroup:(BOOL)arg1 ;
-(void)_showAuthKitSignInIfNecessary;
-(void)_showMadridSetupIfNecessary;
-(void)_showMadridSetupIfNecessary:(BOOL)arg0 ;
-(void)_showPrivacySheetForBusinessChat:(id)arg0 ;
-(void)_showPrivacySheetForiMessageFaceTime:(id)arg0 ;
-(void)_showSetupMeCardAlert;
-(void)_showSignInController;
-(void)_startListeningForProfileChanges;
-(void)_stopListeningForProfileChanges;
-(void)_updateSwitch;
-(void)_updateSwitchDelayed;
-(void)_updateUIWithError:(id)arg0 ;
-(void)applicationDidResume;
-(void)applicationWillSuspend;
-(void)dealloc;
-(void)endMatchingExtensions;
-(void)findSpamExtensions;
-(void)firstRunControllerDidFinish:(id)arg0 finished:(BOOL)arg1 ;
-(void)madridSigninTappedWithSpecifier:(id)arg0 ;
-(void)messageFilteringTapped:(id)arg0 ;
-(void)nameAndPhotoSharingForSpecifier:(id)arg0 ;
-(void)newCarrierNotification;
-(void)notifyDNDFocusStatusAuthorizationChanged;
-(void)notifyThatConversationFilteringChanged;
-(void)onboardingControllerDidFinish:(id)arg0 ;
-(void)setAudioMessageAutoKeep:(id)arg0 specifier:(id)arg1 ;
-(void)setConversationListFilteringEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setDeliveryReportsEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setJunkFilteringReceiptsEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setKeepMessages:(id)arg0 specifier:(id)arg1 ;
-(void)setMMSEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setMadridEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setPreviewTranscodingEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setRaiseToListenEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setReadReceiptsEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setSiriToneNotificationEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setSpecifierLoading:(id)arg0 loading:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setWillSendGroupMMS:(id)arg0 specifier:(id)arg1 ;
-(void)sharingSettingsViewController:(id)arg0 didSelectSharingAudience:(NSUInteger)arg1 ;
-(void)sharingSettingsViewController:(id)arg0 didUpdateSharingState:(BOOL)arg1 ;
-(void)sharingSettingsViewController:(id)arg0 didUpdateWithSharingResult:(id)arg1 ;
-(void)sharingSettingsViewControllerDidUpdateContact:(id)arg0 ;
-(void)showAccountsMismatchedAlertForNicknames;
-(void)showMeCardViewControllerWithNickname:(id)arg0 ;
-(void)showMultiplePhoneNumbersAlerForNicknames;
-(void)showNicknameOnboardingController;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)systemPolicyForApp:(id)arg0 didUpdateForSystemPolicyOptions:(NSUInteger)arg1 withValue:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif