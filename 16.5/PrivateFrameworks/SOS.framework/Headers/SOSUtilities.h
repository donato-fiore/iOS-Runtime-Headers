// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSUTILITIES_H
#define SOSUTILITIES_H


#import <Foundation/Foundation.h>


@interface SOSUtilities : NSObject



+(*void)_copySOSPrefsValueForKey:(struct __CFString *)arg0 ;
+(BOOL)_hasAccessibilityConflict;
+(BOOL)_isCarryDevice;
+(BOOL)_isInternalDevice;
+(BOOL)_potentialForAccessibilityConflict;
+(BOOL)_synchronizeSOSPrefs;
+(BOOL)activeDeviceHasMandrake;
+(BOOL)activeDeviceSupportsMandrake;
+(BOOL)activeDeviceSupportsNewton;
+(BOOL)activeDeviceSupportsNewtonWorkoutsOnly;
+(BOOL)autoCallRequiresSIM;
+(BOOL)canTriggerSOSWithSideButton;
+(BOOL)canTriggerSOSWithVolumeLockHold;
+(BOOL)defaultToWorkoutsOnlyForEligibility:(NSUInteger)arg0 ;
+(BOOL)deviceHasHomeButton;
+(BOOL)deviceHasSlot;
+(BOOL)hasActiveSIMForClient:(id)arg0 ;
+(BOOL)hasEmergencyContacts;
+(BOOL)hasMultiPressResetLogicRun;
+(BOOL)hasNewtonTriggersEmergencySOSWorkoutsSetting;
+(BOOL)isActivePairedDeviceTinker;
+(BOOL)isAllowedToMessageSOSContacts;
+(BOOL)isAutomaticCallCountdownEnabled;
+(BOOL)isCallWithSideButtonPressesEnabled;
+(BOOL)isCallWithVolumeLockHoldEnabled;
+(BOOL)isDeviceD2xOrNewer;
+(BOOL)isDeviceWatchUsePairedDevice:(BOOL)arg0 ;
+(BOOL)isIndiaSKU;
+(BOOL)isKappaDetectionSupportedOnActiveWatch;
+(BOOL)isKappaDetectionSupportedOnCurrentDevice;
+(BOOL)isKappaDetectionSupportedOnPhone;
+(BOOL)isKappaUnmasked;
+(BOOL)isKappaVisible;
+(BOOL)isMountStateTrackingEnabled;
+(BOOL)isSmallScreen;
+(BOOL)isStewieVisible;
+(BOOL)kappaTriggersEmergencySOS;
+(BOOL)kappaTriggersEmergencySOSTinker;
+(BOOL)longPressTriggersEmergencySOS;
+(BOOL)longPressTriggersMandrake;
+(BOOL)mustAllowThreeClickTrigger;
+(BOOL)newtonAlwaysOnRequiresConfirmationForEligibility:(NSUInteger)arg0 ;
+(BOOL)newtonTriggersEmergencySOS;
+(BOOL)newtonTriggersEmergencySOSWorkouts;
+(BOOL)setShouldPlayAudioDuringCountdown:(BOOL)arg0 ;
+(BOOL)shouldAllowSOSStatusReset;
+(BOOL)shouldBlockNonEmergencyCalls;
+(BOOL)shouldForceDisableAutoCallForClient:(id)arg0 ;
+(BOOL)shouldPlayAudioDuringCountdown;
+(BOOL)shouldShowCrashDetectionThirdPartySettingsForPairedDevice:(BOOL)arg0 ;
+(BOOL)shouldSilenceSOSFlow;
+(BOOL)shouldSkipNewtonCall;
+(BOOL)supportsSOSWithSideButtonSelectableNumberOfClicks;
+(CGFloat)clawReleaseToCallSupport;
+(CGFloat)getShortSOSNotificationDisplayTimestamp;
+(CGFloat)mountProbabilityThreshold;
+(NSInteger)SOSFlowStateForString:(id)arg0 ;
+(NSInteger)SOSProgressionForString:(id)arg0 ;
+(NSInteger)SOSResolutionForString:(id)arg0 ;
+(NSInteger)SOSSelectableTriggerMechanismCapability;
+(NSInteger)SOSTriggerClickCount;
+(NSInteger)SOSTriggerMechanismForClickCount:(NSInteger)arg0 ;
+(NSInteger)SOSTriggerMechanismForString:(id)arg0 ;
+(NSInteger)currentSOSTriggerMechanism;
+(NSInteger)defaultSOSTriggerMechanism;
+(NSInteger)getSettingsResetFollowUpState;
+(NSInteger)mostRecentlyUsedSOSTriggerMechanism;
+(id)_SOSDomainAccessor;
+(id)_userFriendsDomainAccessor;
+(id)_userSOSDefaults;
+(id)accidentalCallFeedbackAssistantLegalText;
+(id)accidentalCallNotificationBody;
+(id)accidentalCallNotificationTitle;
+(id)activeDevice;
+(id)autoCallFooterDescription;
+(id)autoCallTitleDescription;
+(id)automaticDialingSectionDescription;
+(id)callWithHoldFooterDescription;
+(id)callWithHoldTitleDescription;
+(id)callWithPressesFooterDescription;
+(id)callWithPressesTitleDescription;
+(id)callWithSideButtonFooterDescription;
+(id)callWithSideButtonTitleDescription;
+(id)countdownSoundFooterDescription;
+(id)countdownSoundTitleDescription;
+(id)crashDetectionFooterLinkDescription;
+(id)crashDetectionFooterLinkURL;
+(id)crashDetectionPhoneFooterDesription;
+(id)crashDetectionPhoneWatchFooterDescription;
+(id)crashDetectionSwitchDescription;
+(id)crashDetectionThirdPartyAlertTitle;
+(id)crashDetectionThirdPartyAppWithAccessDescription;
+(id)crashDetectionThirdPartyBundleId;
+(id)crashDetectionThirdPartyCellTitle;
+(id)crashDetectionThirdPartyDescription;
+(id)crashDetectionThirdPartyFooterDescription;
+(id)crashDetectionThirdPartyFooterDescriptionPhone;
+(id)crashDetectionThirdPartyFooterDescriptionWatch;
+(id)crashDetectionThirdPartyNavigationTitle;
+(id)crashDetectionThirdPartyShareDisableDescription;
+(id)crashDetectionThirdPartyStopSharingDescriptionPhoneWithAppName:(id)arg0 ;
+(id)crashDetectionThirdPartyStopSharingDescriptionWatchWithAppName:(id)arg0 ;
+(id)crashDetectionTitleDescription;
+(id)crashDetectionWatchFooterDescription;
+(id)crashDetectionWristDetectionWarningDescription;
+(id)currentDeviceSOSStatus;
+(id)emergencyContactsEditDescription;
+(id)emergencyContactsFooterDescription;
+(id)emergencyContactsFooterLinkTitle;
+(id)emergencyContactsSectionDescription;
+(id)fallDetectionAlwaysOnTitleDescription;
+(id)fallDetectionFooterDescription;
+(id)fallDetectionOnlyDuringWorkoutsTitleDescription;
+(id)fallDetectionTitleDescription;
+(id)fetchSOSStatusWithKey:(id)arg0 ;
+(id)fivePressesSelectionTitleDescription;
+(id)getAssetViewForWatchWithCrownOrientationOnRightSide:(BOOL)arg0 layoutLeftToRight:(BOOL)arg1 tintColor:(id)arg2 ;
+(id)getKappaThirdPartyApp;
+(id)getKappaThirdPartyDisplayNameForApp;
+(id)holdSideButtonFooterDescription;
+(id)holdSideButtonTitleDescription;
+(id)mostRecentSOSStatus;
+(id)newtonTriggersEmergencySOSNumber;
+(id)pairedDeviceSOSStatus;
+(id)phoneAssetName;
+(id)phoneTriggerAnimationFooterDescription;
+(id)pressSelectionGroupTitleDescription;
+(id)settingsResetFollowUpBody;
+(id)settingsResetFollowUpClearActionTitle;
+(id)settingsResetFollowUpRedirectActionTitle;
+(id)settingsResetFollowUpTitle;
+(id)sosLocationBundle;
+(id)stewieDemoButtonTitle;
+(id)stewieDemoCellText;
+(id)stewieFooterDescription;
+(id)stewieFooterLinkTitle;
+(id)stewieGroupAsset;
+(id)stewieGroupTitle;
+(id)thirdPartySettingsSpecifiersWithTarget:(id)arg0 displayName:(id)arg1 forPairedDevice:(BOOL)arg2 disableAction:(SEL)arg3 ;
+(id)thirdPartySettingsSpecifiersWithTarget:(id)arg0 forApp:(id)arg1 disableAction:(SEL)arg2 ;
+(id)threePressesSelectionTitleDescription;
+(id)watchAssetNameWithCrownOrientationOnRightSide:(BOOL)arg0 layoutLeftToRight:(BOOL)arg1 ;
+(id)watchTriggerAnimationFooterDescription;
+(struct __CFBundle *)getKappaThirdPartyActiveAppBundle;
+(void)_setKappaTriggersEmergencySOS:(BOOL)arg0 ;
+(void)_setKappaTriggersEmergencySOSTinker:(BOOL)arg0 ;
+(void)_setSOSPrefsValue:(*void)arg0 forKey:(struct __CFString *)arg1 ;
+(void)getAssetViewForPhoneWithCompletion:(id)arg0 ;
+(void)openEmergencyContactsFooterLinkOnViewController:(id)arg0 ;
// +(void)presentConfirmationOnViewController:(id)arg0 title:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 cancelHandler:(id)arg4 confirmTitle:(unk)arg5 confirmHandler:(id)arg6  ;
+(void)presentStewieDemoUnavailableAlertOnViewController:(id)arg0 reason:(NSInteger)arg1 ;
+(void)presentStewieLearnMoreLinkOnViewController:(id)arg0 ;
+(void)setAllowedToMessageSOSContacts:(BOOL)arg0 ;
+(void)setAutomaticCallCountdownEnabled:(BOOL)arg0 ;
+(void)setCallWithSideButtonPresses:(BOOL)arg0 presentErrorAlertOnViewController:(id)arg1 completion:(id)arg2 ;
+(void)setCallWithSideButtonPressesEnabled:(BOOL)arg0 ;
+(void)setCallWithVolumeLockHoldEnabled:(BOOL)arg0 ;
+(void)setCanTriggerSOSWithSideButton:(BOOL)arg0 presentErrorAlertOnViewController:(id)arg1 completion:(id)arg2 ;
+(void)setCurrentDeviceSOSStatus:(id)arg0 ;
+(void)setCurrentSOSTriggerMechanism:(NSInteger)arg0 ;
+(void)setHasMultiPressResetLogicRun:(BOOL)arg0 ;
+(void)setKappaThirdPartyActive:(BOOL)arg0 forApp:(id)arg1 forPairedDevice:(BOOL)arg2 presentConfirmationOnViewController:(id)arg3 completion:(id)arg4 ;
+(void)setKappaThirdPartyActiveApp:(BOOL)arg0 presentConfirmationOnViewController:(id)arg1 completion:(id)arg2 ;
+(void)setKappaTriggersEmergencySOS:(BOOL)arg0 ;
+(void)setKappaTriggersEmergencySOS:(BOOL)arg0 confirmationDelegate:(id)arg1 completion:(id)arg2 ;
+(void)setKappaTriggersEmergencySOS:(BOOL)arg0 isWristDetectionEnabled:(BOOL)arg1 confirmationDelegate:(id)arg2 completion:(id)arg3 ;
+(void)setLongPressTriggersEmergencySOS:(BOOL)arg0 ;
+(void)setLongPressTriggersMandrake:(BOOL)arg0 ;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg0 ;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg0 isWristDetectionEnabled:(BOOL)arg1 doesNewtonRequireConfirmation:(BOOL)arg2 presentConfirmationOnViewController:(id)arg3 completion:(id)arg4 ;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg0 isWristDetectionEnabled:(BOOL)arg1 newtonEligibility:(NSUInteger)arg2 confirmationDelegate:(id)arg3 completion:(id)arg4 ;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg0 newtonTriggersEmergencySOSWorkoutsOnly:(BOOL)arg1 ;
+(void)setNewtonTriggersEmergencySOSNumber:(id)arg0 ;
+(void)setNewtonTriggersEmergencySOSWorkouts:(BOOL)arg0 ;
+(void)setNewtonTriggersEmergencySOSWorkoutsOnly:(BOOL)arg0 isWristDetectionEnabled:(BOOL)arg1 newtonEligibility:(NSUInteger)arg2 confirmationDelegate:(id)arg3 completion:(id)arg4 ;
+(void)setNumberOfSideButtonPresses:(NSInteger)arg0 ;
+(void)setPairedDeviceSOSStatus:(id)arg0 ;
+(void)setPlayAudioDuringCountdown:(BOOL)arg0 ;
+(void)setSOSStatus:(id)arg0 withKey:(id)arg1 ;
+(void)setSettingsResetFollowUpState:(NSInteger)arg0 ;
+(void)setShortSOSNotificationDisplayTimestamp;
+(void)thirdPartySettingsSpecifiersForRemoteDeviceWithTarget:(id)arg0 forApp:(id)arg1 disableAction:(SEL)arg2 withCompletion:(id)arg3 ;


@end


#endif