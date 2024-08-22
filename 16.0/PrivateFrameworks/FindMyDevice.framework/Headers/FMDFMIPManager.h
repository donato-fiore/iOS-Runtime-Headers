// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMDFMIPMANAGER_H
#define FMDFMIPMANAGER_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FMDFMIPManager : NSObject

@property (retain, nonatomic) NSURL *managedLostModeFileURL; // ivar: _managedLostModeFileURL
@property (retain, nonatomic) NSURL *needsLocateAckLostModeFileURL; // ivar: _needsLocateAckLostModeFileURL
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


+(id)sharedInstance;
-(BOOL)_checkLostModeInSharedContainer;
-(BOOL)_isRunningAsMobileUser;
-(BOOL)_quickFetchFMIPEnabledstate;
-(BOOL)isLostModeActive;
-(BOOL)isManagedLostModeActive;
-(BOOL)lockdownShouldDisableDevicePairing;
-(BOOL)lockdownShouldDisableDeviceRestore;
-(BOOL)lostModeIsActive;
-(BOOL)needsLostModeExitAuth;
-(NSUInteger)_managedLostModeType;
-(NSUInteger)_needsAckLostModeType;
-(id)_postWipePrefPath;
-(id)disableFMIPUsingToken:(id)arg0 inContext:(NSUInteger)arg1 ;
-(id)enableFMIPInContext:(NSUInteger)arg0 ;
-(id)enableLostModeWithInfo:(id)arg0 ;
-(id)fmipAccount;
-(id)getManagedLostModeFileURL;
-(id)getNeedsLocateAckLostModeFileURL;
-(id)init;
-(id)lostModeInfo;
-(id)newErrorForCode:(int)arg0 message:(id)arg1 ;
-(id)pathsToPreserveAcrossWipe;
-(void)_disableFMIPUsingToken:(id)arg0 inContext:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_forceFMWUpgradeAlertWithCompletion:(id)arg0 ;
// -(void)_getAccessoriesWithFilter:(id)arg0 completion:(unk)arg1  ;
-(void)_initiateLostModeExitAuthForIDSDeviceID:(id)arg0 withCompletion:(id)arg1 ;
-(void)_stopAlarm;
-(void)_updateManagedLostModeWithInfo:(id)arg0 completion:(id)arg1 ;
-(void)_updateNeedsLocateAckLostModeWithInfo:(id)arg0 completion:(id)arg1 ;
-(void)activationLockAuthInfoWithCompletion:(id)arg0 ;
-(void)activationLockInfoFromDeviceWithCompletion:(id)arg0 ;
-(void)activationLockInfoWithCompletion:(id)arg0 ;
-(void)activationLockVersionWithCompletion:(id)arg0 ;
-(void)addNotificationRequest:(id)arg0 completion:(id)arg1 ;
-(void)audioAccessorySerialNumbersWithCompletion:(id)arg0 ;
-(void)clearData:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)clearMaskedAppleIDWithCompletion:(id)arg0 ;
-(void)clearOfflineFindingInfoWithCompletion:(id)arg0 ;
-(void)deviceActivationDidSucceed;
-(void)didChangeFMIPAccountInfo:(id)arg0 ;
-(void)didReceiveLostModeExitAuthToken:(id)arg0 ;
-(void)disableBiometricIDForLostModeWithCompletion:(id)arg0 ;
-(void)disableFMIPForAccount:(id)arg0 pairedDeviceWithUDID:(id)arg1 withCompletion:(id)arg2 ;
-(void)disableFMIPUsingToken:(id)arg0 forPairedDeviceWithUDID:(id)arg1 withCompletion:(id)arg2 ;
-(void)disableFMIPUsingToken:(id)arg0 inContext:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)disableLostMode;
-(void)disableManagedLostModeWithLocatedMessage:(id)arg0 completion:(id)arg1 ;
-(void)enableActivationLockWithCompletion:(id)arg0 ;
-(void)enableManagedLostModeWithInfo:(id)arg0 completion:(id)arg1 ;
-(void)fetchAPNSTokenWithCompletion:(id)arg0 ;
-(void)fetchAccessoryConfigurations:(id)arg0 ;
-(void)fetchOfflineFindingInfoWithCompletion:(id)arg0 ;
-(void)fmipAccountWithCompletion:(id)arg0 ;
-(void)fmipStateWithCompletion:(id)arg0 ;
-(void)getAccessoriesWithCompletion:(id)arg0 ;
-(void)getConnectedAccessoriesDiscoveryIds:(id)arg0 ;
-(void)initiateLostModeExitAuthForIDSDeviceID:(id)arg0 withCompletion:(id)arg1 ;
-(void)initiateLostModeExitAuthWithCompletion:(id)arg0 ;
-(void)isActivationLockAllowedWithCompletion:(id)arg0 ;
-(void)isActivationLockEnabledWithCompletion:(id)arg0 ;
-(void)isActivationLockedWithCompletion:(id)arg0 ;
-(void)lowBatteryLocateEnabledWithCompletion:(id)arg0 ;
-(void)markAsMissingSupportedForPairedDeviceWithUDID:(id)arg0 withCompletion:(id)arg1 ;
-(void)markPairedDeviceWithUDID:(id)arg0 asMissingUsingToken:(id)arg1 withCompletion:(id)arg2 ;
-(void)pairingCheckWith:(id)arg0 completion:(id)arg1 ;
-(void)playSoundWithMessage:(id)arg0 completion:(id)arg1 ;
-(void)playSoundWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)registerDeviceForPairingLock:(id)arg0 completion:(id)arg1 ;
-(void)removeAccessoryWithDiscoveryId:(id)arg0 completion:(id)arg1 ;
-(void)removeNotificationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)setDailyLocateReportEnabled:(BOOL)arg0 ;
-(void)setLowBatteryLocateEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)setPhoneNumber:(id)arg0 toAccessoryWithDiscoveryId:(id)arg1 completion:(id)arg2 ;
-(void)showDailyLocateReport;
-(void)signatureHeadersWithData:(id)arg0 completion:(id)arg1 ;
-(void)soundStoppedForAccessoryIdentifier:(id)arg0 ;
-(void)startLocationMonitoring:(id)arg0 ;
-(void)startLocationMonitoringWithContext:(id)arg0 completion:(id)arg1 ;
-(void)startLocationMonitoringWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)startPlayingSoundForAccessory:(id)arg0 duration:(CGFloat)arg1 rampUpDuration:(CGFloat)arg2 channels:(id)arg3 completion:(id)arg4 ;
-(void)stopLocationMonitoring:(id)arg0 ;
-(void)stopLocationMonitoringWithContext:(id)arg0 completion:(id)arg1 ;
-(void)stopLocationMonitoringWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)stopPlayingSoundForAccessory:(id)arg0 rampDownDuration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)stopSoundMessageWithCompletion:(id)arg0 ;
-(void)storeOfflineFindingInfo:(id)arg0 completion:(id)arg1 ;
-(void)updateMaskedAppleIDWith:(id)arg0 completion:(id)arg1 ;
-(void)updatePairingLockInfo:(id)arg0 completion:(id)arg1 ;
-(void)updatedConfigReceived:(id)arg0 completion:(id)arg1 ;
-(void)userDidAckManagedLostModeLocateWithCompletion:(id)arg0 ;
-(void)userNotifiedOfActivationLockForAllPairedDevices;
-(void)userNotifiedOfActivationLockForPairedDevices:(id)arg0 ;
-(void)waitForRoutableAccessory:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif