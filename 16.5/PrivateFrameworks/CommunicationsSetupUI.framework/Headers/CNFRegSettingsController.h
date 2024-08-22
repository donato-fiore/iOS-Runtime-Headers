// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNFREGSETTINGSCONTROLLER_H
#define CNFREGSETTINGSCONTROLLER_H

@class PSSpecifier, NSArray, NSMutableArray, NSNumber, NSString, PSSystemPolicyForApp;
@protocol CNFRegWizardControllerDelegate, CNFRegViewAccountControllerDelegate, CNFRegFirstRunDelegate, AKAppleIDAuthenticationDelegate, PSSystemPolicyForAppDelegate;


#import "CNFRegListController.h"

@interface CNFRegSettingsController : CNFRegListController <CNFRegWizardControllerDelegate, CNFRegViewAccountControllerDelegate, CNFRegFirstRunDelegate, AKAppleIDAuthenticationDelegate, PSSystemPolicyForAppDelegate>

 {
    PSSpecifier *_faceTimeEnabledGroupSpecifier;
    PSSpecifier *_faceTimeEnabledSpecifier;
    NSArray *_accountGroupSpecifiers;
    NSArray *_aliasGroupSpecifiers;
    NSArray *_callerIdGroupSpecifiers;
    NSArray *_replyWithMessageGroupSpecifiers;
    NSArray *_blocklistGroupSpecifiers;
    NSArray *_receiveRelayCallsGroupSpecifiers;
    NSArray *_GFTProminenceGroupSpecifiers;
    NSArray *_faceTimeCaptionsGroupSpecifiers;
    NSArray *_faceTimePhotosGroupSpecifiers;
    NSArray *_faceTimeVPCGroupSpecifiers;
    NSArray *_sharePlaySpecifiers;
    NSArray *_temporaryPhoneGroupSpecifiers;
    NSArray *_temporaryPhoneDescriptionGroupSpecifiers;
    NSArray *_temporaryPhoneRemoveGroupSpecifiers;
    NSMutableArray *_addresses;
    NSNumber *_delayedRefreshAnimatedFlag;
    ? _settingsFlags;
}


@property (nonatomic) int captionsSubscriptionToken; // ivar: _captionsSubscriptionToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideAppleIDLogin; // ivar: _hideAppleIDLogin
@property (nonatomic) BOOL showDeviceAliases; // ivar: _showDeviceAliases
@property (nonatomic) BOOL showEnableSwitch;
@property (readonly, nonatomic) BOOL showReceiveRelayCalls; // ivar: _showReceiveRelayCalls
@property (readonly) Class superclass;
@property (retain, nonatomic) PSSystemPolicyForApp *systemPolicy; // ivar: _systemPolicy


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)_allAccountsAreDeactivated;
-(BOOL)_canDeselectAlias:(id)arg0 ;
-(BOOL)_hasActiveFaceTimeCall;
-(BOOL)_popFromSettingsAnimated:(BOOL)arg0 ;
-(BOOL)_shouldDisableAccountConfigurationUI;
-(BOOL)_shouldShowAliasInfo;
-(BOOL)_shouldUseDisabledHandlers;
-(BOOL)additionalAliasesAvailable;
-(BOOL)authenticationController:(id)arg0 shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContext:(id)arg3 ;
-(BOOL)captioningSupported;
-(BOOL)oppositeServiceTypeEnabled;
-(BOOL)popToFirstRunControllerAnimated:(BOOL)arg0 ;
-(BOOL)refreshiMessageAccountFooterText:(BOOL)arg0 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(BOOL)shouldShowBlocklistSettings;
-(BOOL)shouldShowCallDirectorySettingsBundleSpecifiers;
-(BOOL)shouldShowFaceTimeCaptionsSpecifiers;
-(BOOL)shouldShowFaceTimePhotosSpecifiers;
-(BOOL)shouldShowFaceTimeVPCSpecifiers;
-(BOOL)shouldShowGFTProminenceSpecifiers;
-(BOOL)shouldShowIncomingCallSettingsBundleSpecifiers;
-(BOOL)shouldShowReceiveRelayCalls;
-(BOOL)shouldShowReceiveThumperCalls;
-(BOOL)shouldShowReplyWithMessage;
-(BOOL)shouldShowSharePlaySpecifiers;
-(BOOL)shouldShowSiriSpecifiers;
-(BOOL)showAccounts:(BOOL)arg0 animated:(BOOL)arg1 ;
-(BOOL)showAliases:(BOOL)arg0 animated:(BOOL)arg1 ;
-(BOOL)showCallerId:(BOOL)arg0 animated:(BOOL)arg1 ;
-(NSInteger)groupIdForSpecifier:(id)arg0 ;
-(NSInteger)groupIdForSpecifierId:(id)arg0 ;
-(NSInteger)indexOfLastSpecifierInGroup:(id)arg0 ;
-(id)_appleIDAccounts;
-(id)_localeChooserForAccount:(id)arg0 ;
-(id)_operationalAccounts;
-(id)_operationalAccountsForService:(NSInteger)arg0 ;
-(id)_specifierIdentifierForAccount:(id)arg0 ;
-(id)_switchFooterText;
-(id)_useableAccounts;
-(id)accountSpecifiers;
-(id)accountToShowInCallerIDFooter;
-(id)aliasForSpecifier:(id)arg0 ;
-(id)aliasSpecifiers;
-(id)aliasWithIdentifier:(id)arg0 ;
-(id)bundle;
-(id)callerIdAliasSpecifiers;
-(id)createSpecifierForAccount:(id)arg0 ;
-(id)createSpecifierForAlias:(id)arg0 ;
-(id)createSpecifierForCallerIdAlias:(id)arg0 ;
-(id)customTitle;
-(id)faceTimeCaptionsEnabledGroupSpecifierId;
-(id)faceTimeCaptionsEnabledSwitchSpecifierId;
-(id)ftImServiceString;
-(id)getAccountNameForSpecifier:(id)arg0 ;
-(id)getFaceTimeCaptionsEnabledForSpecifier:(id)arg0 ;
-(id)getFaceTimeEnabledForSpecifier:(id)arg0 ;
-(id)getFaceTimePhotosEnabledForSpecifier:(id)arg0 ;
-(id)getFaceTimeVPCEnabledForSpecifier:(id)arg0 ;
-(id)getGFTAudioProminenceEnabledForSpecifier:(id)arg0 ;
-(id)getReceiveRelayedCallsEnabledForSpecifier:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg0 target:(id)arg1 bundle:(id)arg2 ;
-(id)logName;
-(id)possibleCallerIdAliases;
-(id)specifierList;
-(id)statusForAlias:(id)arg0 ;
-(id)statusForSpecifier:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_buildSpecifierCache:(id)arg0 ;
-(void)_cacheSpecifierGroup:(id)arg0 withSpecifiers:(id)arg1 ;
-(void)_handleAccountRegistrarChanged;
-(void)_handleDeactivation:(id)arg0 ;
-(void)_handleFaceTimeCTRegistrationStatusChanged;
-(void)_handleFaceTimeEntitlementStatusChanged;
-(void)_handleFailedAccountReactivation:(id)arg0 error:(id)arg1 ;
-(void)_handleOutgoingRelayCallerIDChanged;
-(void)_handleRelayCapabilitiesChanged;
-(void)_handleSuccessfulAccountReactivation:(id)arg0 ;
-(void)_handleThumperCapabilitiesChanged;
-(void)_hideLocaleChooser;
-(void)_refreshFaceTimeSettingsDelayed:(id)arg0 ;
-(void)_reloadSpecifier:(id)arg0 withBlock:(id)arg1 ;
-(void)_setupAccountHandlers;
-(void)_setupAccountHandlersForDisabledOperation;
-(void)_setupAccountHandlersForDisabling;
-(void)_setupAccountHandlersForNormalOperation;
-(void)_setupAllListeners;
-(void)_showAccountAlertForAccount:(id)arg0 ;
-(void)_showAliasValidationError:(id)arg0 ;
-(void)_showAuthKitSignInIfNecessary;
-(void)_showLocaleChooserWithAccount:(id)arg0 ;
-(void)_showPrivacySheet:(id)arg0 ;
-(void)_showRemoveAlertForAlias:(id)arg0 specifier:(id)arg1 ;
-(void)_showRemoveTemporaryPhoneAlertForAlias:(id)arg0 ;
-(void)_showSignInController;
-(void)_showViewAccountControllerForAccount:(id)arg0 ;
-(void)_tearDownAllListeners;
-(void)_updateControllerStateAnimated:(BOOL)arg0 ;
-(void)_updateSwitch;
-(void)_updateSwitchDelayed;
-(void)accountTappedWithSpecifier:(id)arg0 ;
-(void)clearAccountCache;
-(void)clearFooterFromSpecifier:(id)arg0 ;
-(void)configureAccountFooterForGroupSpecifier:(id)arg0 ;
-(void)dealloc;
-(void)deleteTemporaryPhoneAliasSelected:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)firstRunController:(id)arg0 finishedWithState:(NSUInteger)arg1 ;
-(void)firstRunControllerDidFinish:(id)arg0 finished:(BOOL)arg1 ;
-(void)formSheetViewDidDisappear;
-(void)formSheetViewWillDisappear;
-(void)handleCallStatusChanged;
-(void)refreshAccountsAnimated:(BOOL)arg0 ;
-(void)refreshAliasSpecifier:(id)arg0 ;
-(void)refreshAliasesAnimated:(BOOL)arg0 ;
-(void)refreshAllAliasSpecifiers;
-(void)refreshAllCallerIdAliasSpecifiers;
-(void)refreshBlocklistSettingsAnimated:(BOOL)arg0 ;
-(void)refreshCallerIdAliasesAnimated:(BOOL)arg0 ;
-(void)refreshCallerIdSpecifier:(id)arg0 ;
-(void)refreshEnabledStateAnimated:(BOOL)arg0 ;
-(void)refreshFaceTimeCaptionsSettingsAnimated:(BOOL)arg0 ;
-(void)refreshFaceTimePhotosSettingsAnimated:(BOOL)arg0 ;
-(void)refreshFaceTimeSettingsAnimated:(BOOL)arg0 ;
-(void)refreshFaceTimeSettingsWithDelayAnimated:(BOOL)arg0 ;
-(void)refreshFaceTimeVPCSettingsAnimated:(BOOL)arg0 ;
-(void)refreshGFTProminenceSettingsAnimated:(BOOL)arg0 ;
-(void)refreshReceiveRelayCallsSettingsAnimated:(BOOL)arg0 ;
-(void)refreshSharePlaySettingsAnimated:(BOOL)arg0 ;
-(void)refreshTemporaryPhoneAnimated:(BOOL)arg0 ;
-(void)setAliasSelected:(id)arg0 ;
-(void)setCallerId:(id)arg0 ;
-(void)setFaceTimeCaptionsEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setFaceTimeEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setFaceTimeEnabled:(id)arg0 specifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFaceTimePhotosEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setFaceTimeVPCEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setGFTAudioProminenceEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setReceiveRelayedCallsEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)showAllSettings:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showBlocklistSettings:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showFaceTimeCaptionsSettings:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showFaceTimePhotosSettings:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showFaceTimeSpecifiers:(id)arg0 afterGroupId:(id)arg1 animated:(BOOL)arg2 ;
-(void)showFaceTimeVPCSpecifiers:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showGFTProminenceSettings:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showReceiveRelayCallsSettings:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showReplyWithMessage:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showSharePlaySettings:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showSpecifiers:(id)arg0 afterGroupId:(id)arg1 animated:(BOOL)arg2 ;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationWillEnterForeground;
-(void)updateSpecifier:(id)arg0 withAlias:(id)arg1 ;
-(void)updateSpecifier:(id)arg0 withCallerIdAlias:(id)arg1 ;
-(void)viewAccountControllerDidFinish:(id)arg0 withAppleId:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif