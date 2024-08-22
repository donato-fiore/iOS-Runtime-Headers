// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCNOTIFIER_H
#define MCNOTIFIER_H


#import <Foundation/Foundation.h>


@interface MCNotifier : NSObject



-(void)sendActivationLockBypassCodeWasStoredNotification;
-(void)sendActivationRecordStoredNotification;
-(void)sendAirPlayPreferencesChangedNotification;
-(void)sendAllowPasscodeModificationChangedNotification;
-(void)sendAppWhitelistChangedNotification;
-(void)sendClientTruthChangedNotification;
-(void)sendCloudConfigurationDetailsChangedNotification;
-(void)sendDependencyChangedNotification;
-(void)sendDiagnosticsCollectedNotification;
-(void)sendEffectiveSettingsChangedNotificationWithPID:(int)arg0 ;
-(void)sendHomeScreenLayoutChangedNotification;
-(void)sendKeyboardSettingsChangedNotification;
-(void)sendManagedAppsChangedNotification;
-(void)sendManagedBooksChangedNotification;
-(void)sendNewsSettingsChangedNotification;
-(void)sendPasscodeChangedNotification;
-(void)sendPasscodePolicyChangedNotification;
-(void)sendProfileListChangedNotification;
-(void)sendRemovedSystemAppsChangedNotification;
-(void)sendRestrictionChangedNotification;
-(void)sendSafariCookiePolicyChangedNotification;
-(void)sendSettingsChangedNotification;
-(void)sendTriggerRollKeybagsNotification;
-(void)sendUnlockScreenTypeDidChangeNotification;
-(void)sendUserNotificationsSettingsChangedNotification;
-(void)sendWebContentFilterChangedNotification;
-(void)sendWebContentFilterTypeChangedNotification;
-(void)sendWebContentFilterUIActiveChangedNotification;


@end


#endif