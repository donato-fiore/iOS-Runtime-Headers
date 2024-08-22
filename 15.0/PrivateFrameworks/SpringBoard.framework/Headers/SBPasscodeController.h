// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPASSCODECONTROLLER_H
#define SBPASSCODECONTROLLER_H

@class NSString, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBPasscodeAlertItem.h"
#import "SBPasscodeComplianceAlertItem.h"

@interface SBPasscodeController : NSObject {
    SBPasscodeAlertItem *_passcodeAlertItem;
    int _mode;
    NSString *_previousPasscode;
    NSString *_newPasscode;
    int _unlockScreenType;
    int _simplePasscodeType;
    SBPasscodeComplianceAlertItem *_complianceAlertItem;
    NSDate *_forcedComplianceDate;
    id *_manageConfigurationEffectiveSettingsObserver;
    id *_telephonyNotificationObserver;
    int _restoreCompletedAlertStateChangedToken;
    BOOL _delayedComplianceAlertUntilAfterRestoreCompletedAlert;
    NSObject<OS_dispatch_queue> *_passcodeComplianceQueue;
}




+(id)sharedInstance;
-(BOOL)_isRestoreCompletedAlertActive;
-(id)init;
-(void)_abort;
-(void)_activateComplianceAlert;
-(void)_didEndCall;
-(void)_fetchAndSetUnlockScreenTypeForNewPasscode:(BOOL)arg0 ;
-(void)_passwordEntered:(id)arg0 ;
-(void)_presentPasscodeAlertItemWithMode:(int)arg0 alertItemErrorString:(id)arg1 unlockScreenType:(int)arg2 ;
-(void)_startListeningToManagedConfigurationNotification;
-(void)_startListeningToRestoreCompletedAlertStateChangedNotifications;
-(void)_startListeningToTelephonyNotifications;
-(void)_stopListeningToManagedConfigurationNotification;
-(void)_stopListeningToRestoreCompletedAlertStateChangedNotifications;
-(void)_stopListeningToTelephonyNotifications;
-(void)_userWantsToComplyNow:(BOOL)arg0 ;
-(void)checkPasscodeCompliance;
-(void)dealloc;
-(void)forceUserToChangePasscode;


@end


#endif