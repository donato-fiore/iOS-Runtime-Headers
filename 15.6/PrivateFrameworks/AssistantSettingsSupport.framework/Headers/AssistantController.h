// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSISTANTCONTROLLER_H
#define ASSISTANTCONTROLLER_H

@class PSListController, NSArray, NSString, PSSpecifier, CNContactStore, CNContactPickerViewController, NSMutableSet, VTUIEnrollTrainingViewController, VTUISiriDataSharingOptInPresenter, UIViewController, NSSet, AFSettingsConnection, AFEnablementFlowConfigurationProvider, AFEnablementConfiguration, PSRootController, NSLock, SUICAssistantVoiceSettingsConnection;
@protocol CNContactPickerDelegate, VTUIEnrollTrainingViewControllerDelegate, VTUISiriDataSharingOptInPresentationDelegate, VTUIVoiceSelectionViewControllerDelegate, AssistantVoiceSettingsConnectionProvider, DevicePINControllerDelegate, AssistantHistoryDelegate;


#import "ASTLockScreenSuggestionsGlobalController.h"
#import "AssistantAssetsUtilities.h"

@interface AssistantController : PSListController <CNContactPickerDelegate, VTUIEnrollTrainingViewControllerDelegate, VTUISiriDataSharingOptInPresentationDelegate, VTUIVoiceSelectionViewControllerDelegate, AssistantVoiceSettingsConnectionProvider, DevicePINControllerDelegate, AssistantHistoryDelegate>

 {
    NSArray *_assistantSettings;
    NSString *_pendingLanguage;
    PSSpecifier *_voiceSpecifier;
    PSSpecifier *_announceMessagesSpecifier;
    PSSpecifier *_voiceActivationSpecifier;
    PSSpecifier *_hardwareButtonActivationSpecifier;
    PSSpecifier *_currentSiriActivationSpecifier;
    PSSpecifier *_lockScreenSpecifier;
    CNContactStore *_contactStore;
    CNContactPickerViewController *_peoplePicker;
    NSMutableSet *_disabledSpotlightBundles;
    NSMutableSet *_disabledSpotlightDomains;
    BOOL _needsReloadSpecifiersOnViewWillAppear;
    VTUIEnrollTrainingViewController *_enrollmentController;
    VTUISiriDataSharingOptInPresenter *_siriDataSharingPresenter;
    UIViewController *_siriDataSharingOptInViewController;
    NSSet *_installedBundleIDs;
    NSArray *_allAppsSpecifiers;
    AFSettingsConnection *_AFSettingsConnection;
    ASTLockScreenSuggestionsGlobalController *_suggestionsFromAppleAllowNotificationsController;
    AFEnablementFlowConfigurationProvider *_enablementConfigurationProvider;
    AFEnablementConfiguration *_enablementConfiguration;
    PSRootController *_enablementFlowNavigationController;
    id *_voiceSelectionCompletion;
    id *_voiceSelectionFlowDismissalHandler;
    NSLock *_assetDownloadStatusLock;
    NSUInteger _assetDownloadState;
    NSString *_assetSpaceRequiredText;
    AssistantAssetsUtilities *_assetUtils;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SUICAssistantVoiceSettingsConnection *settingsConnection; // ivar: _settingsConnection
@property (readonly) Class superclass;


+(BOOL)_heySiriSupportedForLanguage:(id)arg0 ;
+(id)bundle;
+(id)shortTitlesForLanguageIdentifiers:(id)arg0 ;
+(void)presentAssistantEnableAlertForState:(BOOL)arg0 presentingViewController:(id)arg1 actionHandler:(id)arg2 ;
-(BOOL)_isAssistantLockScreenAccessRestricted;
-(BOOL)_isHeySiriAlwaysOn;
-(BOOL)_isIncompatibleWithWatchLanguage:(id)arg0 ;
-(BOOL)_isVoiceTriggerEnabled;
-(BOOL)_languageWillDisableHeySiri:(id)arg0 ;
-(BOOL)_pairedWithSiriSpeaksEnabledNanoHardware;
-(BOOL)watchSupportsSiriLanguageCode:(id)arg0 ;
-(id)_confirmationPromptDisableHeySiri:(BOOL)arg0 disableMultiUser:(BOOL)arg1 disableSpokenFeedback:(BOOL)arg2 ;
-(id)_createEnablementFlowControllerForConfiguration:(id)arg0 recognitionLanguageCode:(id)arg1 ;
-(id)_createVoiceSelectionCompletionForSpecifier:(SEL)arg0 recognitionLanguageCode:(id)arg1 ;
-(id)_createVoiceSelectionDismissalHandlerWithSpecifier:(SEL)arg0 actionHandler:(id)arg1 ;
-(id)_localizeTriggerString:(id)arg0 ;
-(id)_localizedStringWithFormattedIDTemplate:(id)arg0 ;
-(id)accessibleFromLockScreen:(id)arg0 ;
-(id)assistantEnabled:(id)arg0 ;
-(id)assistantLanguage:(id)arg0 ;
-(id)assistantVoice:(id)arg0 ;
-(id)assistantVoiceLanguage:(id)arg0 ;
-(id)bundle;
-(id)confirmationSpecifierWillDisableHeySiri:(BOOL)arg0 disableMultiUser:(BOOL)arg1 disableSpokenFeedbackOnWatch:(BOOL)arg2 ;
-(id)hardwareButtonTrigger:(id)arg0 ;
-(id)init;
-(id)isShowInAppLibraryEnabled:(id)arg0 ;
-(id)isShowInLookUpEnabled;
-(id)isShowInSpotlightEnabled;
-(id)isShowWhenListeningEnabled:(id)arg0 ;
-(id)isShowWhenSharingEnabled:(id)arg0 ;
-(id)meCard:(id)arg0 ;
-(id)specifiers;
-(id)voiceTrigger:(id)arg0 ;
-(void)_addHyperlinkStyleToText:(id)arg0 inString:(id)arg1 action:(SEL)arg2 forGroup:(id)arg3 ;
-(void)_askSiriUseDefaultFooterTextWithGroupSpecifier:(id)arg0 ;
-(void)_askSiriUseDownloadFinishedFooterTextWithGroupSpecifier:(id)arg0 ;
-(void)_askSiriUseDownloadReadyFooterTextWithGroupSpecifier:(id)arg0 ;
-(void)_askSiriUseDownloadingFooterTextWithGroupSpecifier:(id)arg0 ;
-(void)_askSiriUseOutOfSpaceFooterTextWithGroupSpecifier:(id)arg0 ;
-(void)_handleEnablementConfirmationForSpecifier:(id)arg0 actionHandler:(id)arg1 ;
-(void)_handleNetworkPathUpdate;
-(void)_handleThemisEnablementConfirmationForSpecifier:(id)arg0 presentingViewController:(id)arg1 actionHandler:(id)arg2 ;
-(void)_presentSiriDataSharingOptInViewController;
-(void)_processAssetState:(NSUInteger)arg0 context:(id)arg1 ;
-(void)_refreshAssetDownloadStatus;
-(void)_runEnablementFlowDismissalHandlersIfApplicable;
-(void)_setAccessibleFromLockScreen:(BOOL)arg0 ;
-(void)_setAssistantEnabled:(id)arg0 forSpecifier:(id)arg1 presentingViewController:(id)arg2 actionHandler:(id)arg3 ;
-(void)_setAssistantLanguageCancelled:(id)arg0 ;
-(void)_setAssistantLanguageConfirmed:(id)arg0 ;
-(void)_setAssistantLanguageHeySiriDisableConfirmed:(id)arg0 ;
-(void)_setAssistantLanguageWatchMismatchConfirmed:(id)arg0 ;
-(void)_showIncompatibleWatchLanguageAlert;
-(void)_showWillDisableAlertWillDisableHeySiri:(BOOL)arg0 disableMultiUser:(BOOL)arg1 disableSpokenFeedbackOnWatch:(BOOL)arg2 ;
-(void)_updateSpecifiersForLanguage:(id)arg0 ;
-(void)_voiceSelectionCancelled;
-(void)assistantAboutDonePressed:(id)arg0 ;
-(void)assistantDisabledCancelled:(id)arg0 ;
-(void)assistantDisabledConfirmed:(id)arg0 ;
-(void)assistantEnabledCancelled:(id)arg0 ;
-(void)assistantEnabledConfirmed:(id)arg0 ;
-(void)cancelSetup:(id)arg0 ;
-(void)configureApplicationListSpecifiersFor:(id)arg0 ;
-(void)configureAskSiriSpecifiersFor:(id)arg0 ;
-(void)configureContentFromAppleSpecifiersFor:(id)arg0 ;
-(void)configureSuggestionsFromAppleSpecifiersFor:(id)arg0 ;
-(void)confirmDisableForMultiUserVoiceIdentificationWithSpecifier:(id)arg0 pairedWatch:(BOOL)arg1 presentingViewController:(id)arg2 actionHandler:(id)arg3 ;
-(void)confirmDisableWithSpecifier:(id)arg0 pairedWatch:(BOOL)arg1 presentingViewController:(id)arg2 actionHandler:(id)arg3 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contactsDidChange;
-(void)continueSetup;
-(void)dealloc;
-(void)deleteHistorySuccessfulFromViewController:(id)arg0 ;
-(void)didAcceptEnteredPIN;
-(void)didBecomeActive;
-(void)didCancelEnteringPIN;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)languageCodeDidChange;
-(void)loadAppStorePageForBundleId:(id)arg0 ;
-(void)lowPowerModeChangedNotification:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)openStorageManagement:(id)arg0 ;
-(void)outputVoiceDidChange;
-(void)preferencesDidChange;
-(void)prepareForSnapshot;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)reloadSpecifiers;
-(void)saveSpotlightSettings;
-(void)setAccessibleFromLockScreen:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAssistantEnabled:(BOOL)arg0 ;
-(void)setAssistantLanguage:(id)arg0 ;
-(void)setAssistantLanguage:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setDisabledFromLockScreen:(BOOL)arg0 ;
-(void)setHardwareButtonTrigger:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setShowInAppLibraryEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setShowInLookUpEnabled:(id)arg0 ;
-(void)setShowInSpotlightEnabled:(id)arg0 ;
-(void)setShowWhenListeningEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setShowWhenSharingEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setVoiceTrigger:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setVoiceTrigger:(id)arg0 forSpecifier:(id)arg1 transitionWithNavControllerIfNecessary:(id)arg2 ;
-(void)showAboutAssistantSheet:(id)arg0 ;
-(void)showAboutImproveDictationSheet:(id)arg0 ;
-(void)showAboutSearchSuggestionsSheet:(id)arg0 ;
-(void)showAssistantConfirmationViewForSpecifier:(id)arg0 presentingViewController:(id)arg1 actionHandler:(id)arg2 ;
-(void)showAssistantHistoryViewController:(id)arg0 ;
-(void)showLearnMore;
-(void)showMeCardPicker:(id)arg0 ;
-(void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg0 ;
-(void)skipSetup;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)voiceSelectionController:(id)arg0 didSelectVoice:(id)arg1 ;


@end


#endif