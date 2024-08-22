// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOSUTILITIES_H
#define SOSUTILITIES_H


#import <Foundation/Foundation.h>


@interface SOSUtilities : NSObject



+(BOOL)_hasAccessibilityConflict;
+(BOOL)autoCallRequiresSIM;
+(BOOL)canTriggerSOSWithSideButton;
+(BOOL)canTriggerSOSWithVolumeLockHold;
+(BOOL)deviceHasHomeButton;
+(BOOL)hasActiveSIMForClient:(id)arg0 ;
+(BOOL)hasEmergencyContacts;
+(BOOL)isActivePairedDeviceTinker;
+(BOOL)isAllowedToMessageSOSContacts;
+(BOOL)isAutomaticCallCountdownEnabled;
+(BOOL)isDeviceD2xOrNewer;
+(BOOL)isIndiaSKU;
+(BOOL)isSmallScreen;
+(BOOL)longPressTriggersEmergencySOS;
+(BOOL)mustAllowThreeClickTrigger;
+(BOOL)newtonTriggersEmergencySOS;
+(BOOL)newtonTriggersEmergencySOSWorkouts;
+(BOOL)shouldForceDisableAutoCallForClient:(id)arg0 ;
+(BOOL)shouldPlayAudioDuringCountdown;
+(BOOL)supportsSOSWithSideButtonSelectableNumberOfClicks;
+(NSInteger)SOSSelectableTriggerMechanismCapability;
+(NSInteger)SOSTriggerClickCount;
+(NSInteger)SOSTriggerMechanismForClickCount:(NSInteger)arg0 ;
+(NSInteger)currentSOSTriggerMechanism;
+(NSInteger)defaultSOSTriggerMechanism;
+(NSInteger)mostRecentlyUsedSOSTriggerMechanism;
+(id)_SOSDomainAccessor;
+(id)_userFriendsDomainAccessor;
+(id)_userSOSDefaults;
+(id)autoCallFooterDescription;
+(id)autoCallTitleDescription;
+(id)automaticDialingSectionDescription;
+(id)callWithSideButtonFooterDescription;
+(id)callWithSideButtonTitleDescription;
+(id)countdownSoundFooterDescription;
+(id)countdownSoundTitleDescription;
+(id)emergencyContactsEditDescription;
+(id)emergencyContactsFooterDescription;
+(id)emergencyContactsFooterLinkTitle;
+(id)emergencyContactsSectionDescription;
+(id)fallDetectionFooterDescription;
+(id)fallDetectionTitleDescription;
+(id)getAssetViewForWatchWithCrownOrientationOnRightSide:(BOOL)arg0 layoutLeftToRight:(BOOL)arg1 tintColor:(id)arg2 ;
+(id)holdSideButtonFooterDescription;
+(id)holdSideButtonTitleDescription;
+(id)newtonTriggersEmergencySOSNumber;
+(id)phoneAssetName;
+(id)phoneTriggerAnimationFooterDescription;
+(id)watchAssetNameWithCrownOrientationOnRightSide:(BOOL)arg0 layoutLeftToRight:(BOOL)arg1 ;
+(id)watchTriggerAnimationFooterDescription;
+(void)getAssetViewForPhoneWithCompletion:(id)arg0 ;
+(void)openEmergencyContactsFooterLinkOnViewController:(id)arg0 ;
+(void)setAllowedToMessageSOSContacts:(BOOL)arg0 ;
+(void)setAutomaticCallCountdownEnabled:(BOOL)arg0 ;
+(void)setCanTriggerSOSWithSideButton:(BOOL)arg0 presentErrorAlertOnViewController:(id)arg1 completion:(id)arg2 ;
+(void)setCurrentSOSTriggerMechanism:(NSInteger)arg0 ;
+(void)setLongPressTriggersEmergencySOS:(BOOL)arg0 ;
+(void)setMostRecentlyUsedSOSTriggerMechanism:(NSInteger)arg0 ;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg0 ;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg0 isWristDetectionEnabled:(BOOL)arg1 doesNewtonRequireConfirmation:(BOOL)arg2 presentConfirmationOnViewController:(id)arg3 completion:(id)arg4 ;
+(void)setNewtonTriggersEmergencySOSNumber:(id)arg0 ;
+(void)setNewtonTriggersEmergencySOSWorkouts:(BOOL)arg0 ;
+(void)setPlayAudioDuringCountdown:(BOOL)arg0 ;


@end


#endif