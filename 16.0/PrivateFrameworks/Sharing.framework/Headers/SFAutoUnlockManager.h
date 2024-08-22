// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFAUTOUNLOCKMANAGER_H
#define SFAUTOUNLOCKMANAGER_H

@class NSString;
@protocol SFUnlockClientProtocol, SFAutoUnlockManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAutoUnlockManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat spinnerDelay;
@property (readonly) Class superclass;


+(BOOL)autoUnlockEnabled;
+(BOOL)autoUnlockEnabled:(unsigned int)arg0 ;
+(BOOL)autoUnlockSupported;
+(BOOL)bluetoothAndWiFiEnabled;
+(BOOL)mockedAutoUnlockEnabled;
+(BOOL)mockedBluetoothAndWiFiEnabled;
+(BOOL)mockedPhoneAutoUnlockAWDLUnavailable;
+(BOOL)mockedPhoneAutoUnlockEnabled;
+(BOOL)mockedPhoneAutoUnlockFaceIDDisabled;
+(BOOL)mockedPhoneAutoUnlockInBioLockout;
+(BOOL)mockedPhoneAutoUnlockMaskUnlikely;
+(BOOL)mockedPhoneAutoUnlockNeverUnlocked;
+(BOOL)mockedPhoneAutoUnlockNoMask;
+(BOOL)mockedPhoneAutoUnlockNoPairedWatch;
+(BOOL)mockedPhoneAutoUnlockNoWatch;
+(BOOL)mockedPhoneAutoUnlockSimulateDevicesOutOfRange;
+(BOOL)mockedPhoneAutoUnlockSimulateMagnetBreak;
+(BOOL)mockedPhoneAutoUnlockSimulatePhoneMissedFinalConfirmationToUnlock;
+(BOOL)mockedPhoneAutoUnlockWatchAWDLUnavailable;
+(BOOL)mockedPhoneAutoUnlockWatchHasWeakPasscode;
+(BOOL)mockedPhoneAutoUnlockWatchLocked;
+(BOOL)mockedPhoneAutoUnlockWatchNoMotion;
+(BOOL)mockedPhoneAutoUnlockWatchOffWrist;
+(BOOL)mockedPhoneAutoUnlockWatchSleepModeOn;
+(BOOL)mockedPhoneAutoUnlockWatchWiFiOff;
+(BOOL)mockedPhoneAutoUnlockWatchWristDetectionDisabled;
+(BOOL)mockedPhoneAutoUnlockWiFiOff;
+(NSInteger)mockedPhoneAutoUnlockSimulateErrorCode;
+(float)mockedPhoneAutoUnlockSimulateLatency;
+(float)mockedPhoneAutoUnlockSimulateManualReLock;
+(id)userDefaults;
+(void)enableBluetoothAndWiFi;
+(void)mockedEnableBluetoothAndWiFi;
-(id)init;
-(void)attemptAutoUnlock;
-(void)attemptAutoUnlockForSiri;
-(void)attemptAutoUnlockWithoutNotifyingWatch;
-(void)authPromptInfoWithCompletionHandler:(id)arg0 ;
-(void)autoUnlockStateWithCompletionHandler:(id)arg0 ;
-(void)beganAttemptWithDevice:(id)arg0 ;
-(void)cancelAutoUnlock;
-(void)cancelEnablingAutoUnlockForDevice:(id)arg0 ;
-(void)clearPhoneAutoUnlockBehaviorChangeNotification;
-(void)completeAutoUnlockWithNotification:(BOOL)arg0 ;
-(void)completedUnlockWithDevice:(id)arg0 ;
-(void)declinedToEnablePhoneAutoUnlock;
-(void)deviceRequestedRelock:(id)arg0 ;
-(void)disableAutoUnlockForDevice:(id)arg0 completionHandler:(id)arg1 ;
-(void)donateDeviceUnlockedWithMask:(BOOL)arg0 ;
-(void)eligibleAutoUnlockDevicesWithCompletionHandler:(id)arg0 ;
-(void)enableAutoUnlockWithDevice:(id)arg0 passcode:(id)arg1 ;
-(void)enabledDevice:(id)arg0 ;
-(void)failedToEnableDevice:(id)arg0 error:(id)arg1 ;
-(void)failedUnlockWithError:(id)arg0 ;
-(void)keyDeviceLocked:(id)arg0 ;
-(void)mockedAttemptAutoUnlock;
-(void)mockedCancelUnlock;
-(void)mockedDisableAutoUnlockForDevice:(id)arg0 ;
-(void)mockedEligibleAutoUnlockDevicesWithCompletionHandler:(id)arg0 ;
-(void)mockedEnableAutoUnlockWithDevice:(id)arg0 ;
-(void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg0 ;
-(void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg0 device:(id)arg1 ;
-(void)prewarmAutoUnlock;
-(void)repairCloudPairing;
-(void)requestRelock;


@end


#endif