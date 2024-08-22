// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOSUTILITIES_H
#define SOSUTILITIES_H


#import <Foundation/Foundation.h>


@interface SOSUtilities : NSObject



+(*void)_copySOSPrefsValueForKey:(struct __CFString *)arg0 ;
+(BOOL)_hasAccessibilityConflict;
+(BOOL)_potentialForAccessibilityConflict;
+(BOOL)_synchronizeSOSPrefs;
+(BOOL)activeDeviceSupportsNewton;
+(BOOL)activeDeviceSupportsNewtonWorkoutsOnly;
+(BOOL)autoCallRequiresSIM;
+(BOOL)canTriggerSOSWithSideButton;
+(BOOL)canTriggerSOSWithVolumeLockHold;
+(BOOL)defaultToWorkoutsOnlyForEligibility:(NSUInteger)arg0 ;
+(BOOL)deviceHasHomeButton;
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
+(BOOL)isIndiaSKU;
+(BOOL)isSmallScreen;
+(BOOL)longPressTriggersEmergencySOS;
+(BOOL)mustAllowThreeClickTrigger;
+(BOOL)newtonAlwaysOnRequiresConfirmationForEligibility:(NSUInteger)arg0 ;
+(BOOL)newtonTriggersEmergencySOS;
+(BOOL)newtonTriggersEmergencySOSWorkouts;
+(BOOL)shouldForceDisableAutoCallForClient:(id)arg0 ;
+(BOOL)shouldPlayAudioDuringCountdown;
+(BOOL)supportsSOSWithSideButtonSelectableNumberOfClicks;
+(CGFloat)getShortSOSNotificationDisplayTimestamp;
+(NSInteger)SOSSelectableTriggerMechanismCapability;
+(NSInteger)SOSTriggerClickCount;
+(NSInteger)SOSTriggerMechanismForClickCount:(NSInteger)arg0 ;
+(NSInteger)currentSOSTriggerMechanism;
+(NSInteger)defaultSOSTriggerMechanism;
+(NSInteger)getSettingsResetFollowUpState;
+(NSInteger)mostRecentlyUsedSOSTriggerMechanism;
+(id)_SOSDomainAccessor;
+(id)_userFriendsDomainAccessor;
+(id)_userSOSDefaults;
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
+(id)emergencyContactsEditDescription;
+(id)emergencyContactsFooterDescription;
+(id)emergencyContactsFooterLinkTitle;
+(id)emergencyContactsSectionDescription;
+(id)fallDetectionAlwaysOnTitleDescription;
+(id)fallDetectionFooterDescription;
+(id)fallDetectionOnlyDuringWorkoutsTitleDescription;
+(id)fallDetectionTitleDescription;
+(id)fivePressesSelectionTitleDescription;
+(id)getAssetViewForWatchWithCrownOrientationOnRightSide:(BOOL)arg0 layoutLeftToRight:(BOOL)arg1 tintColor:(id)arg2 ;
+(id)holdSideButtonFooterDescription;
+(id)holdSideButtonTitleDescription;
+(id)newtonTriggersEmergencySOSNumber;
+(id)phoneAssetName;
+(id)phoneTriggerAnimationFooterDescription;
+(id)pressSelectionGroupTitleDescription;
+(id)settingsResetFollowUpBody;
+(id)settingsResetFollowUpClearActionTitle;
+(id)settingsResetFollowUpRedirectActionTitle;
+(id)settingsResetFollowUpTitle;
+(id)threePressesSelectionTitleDescription;
+(id)watchAssetNameWithCrownOrientationOnRightSide:(BOOL)arg0 layoutLeftToRight:(BOOL)arg1 ;
+(id)watchTriggerAnimationFooterDescription;
+(void)_setSOSPrefsValue:(*void)arg0 forKey:(struct __CFString *)arg1 ;
+(void)getAssetViewForPhoneWithCompletion:(id)arg0 ;
+(void)openEmergencyContactsFooterLinkOnViewController:(id)arg0 ;
// +(void)presentConfirmationOnViewController:(id)arg0 title:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 cancelHandler:(id)arg4 confirmTitle:(unk)arg5 confirmHandler:(id)arg6  ;
+(void)setAllowedToMessageSOSContacts:(BOOL)arg0 ;
+(void)setAutomaticCallCountdownEnabled:(BOOL)arg0 ;
+(void)setCallWithSideButtonPresses:(BOOL)arg0 presentErrorAlertOnViewController:(id)arg1 completion:(id)arg2 ;
+(void)setCallWithSideButtonPressesEnabled:(BOOL)arg0 ;
+(void)setCallWithVolumeLockHoldEnabled:(BOOL)arg0 ;
+(void)setCanTriggerSOSWithSideButton:(BOOL)arg0 presentErrorAlertOnViewController:(id)arg1 completion:(id)arg2 ;
+(void)setCurrentSOSTriggerMechanism:(NSInteger)arg0 ;
+(void)setHasMultiPressResetLogicRun:(BOOL)arg0 ;
+(void)setLongPressTriggersEmergencySOS:(BOOL)arg0 ;
+(void)setMostRecentlyUsedSOSTriggerMechanism:(NSInteger)arg0 ;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg0 ;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg0 isWristDetectionEnabled:(BOOL)arg1 doesNewtonRequireConfirmation:(BOOL)arg2 presentConfirmationOnViewController:(id)arg3 completion:(id)arg4 ;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg0 isWristDetectionEnabled:(BOOL)arg1 newtonEligibility:(NSUInteger)arg2 confirmationDelegate:(id)arg3 completion:(id)arg4 ;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg0 newtonTriggersEmergencySOSWorkoutsOnly:(BOOL)arg1 ;
+(void)setNewtonTriggersEmergencySOSNumber:(id)arg0 ;
+(void)setNewtonTriggersEmergencySOSWorkouts:(BOOL)arg0 ;
+(void)setNewtonTriggersEmergencySOSWorkoutsOnly:(BOOL)arg0 isWristDetectionEnabled:(BOOL)arg1 newtonEligibility:(NSUInteger)arg2 confirmationDelegate:(id)arg3 completion:(id)arg4 ;
+(void)setNumberOfSideButtonPresses:(NSInteger)arg0 ;
+(void)setPlayAudioDuringCountdown:(BOOL)arg0 ;
+(void)setSettingsResetFollowUpState:(NSInteger)arg0 ;
+(void)setShortSOSNotificationDisplayTimestamp;


@end


#endif