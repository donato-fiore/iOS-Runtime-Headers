// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRPAIREDDEVICEREGISTRY_H
#define NRPAIREDDEVICEREGISTRY_H

@class NSMutableDictionary, NSMutableArray;
@protocol NRPairedDeviceRegistryXPCFrameworkDelegate, OS_dispatch_queue;


#import "NRRegistryClient.h"

@interface NRPairedDeviceRegistry : NRRegistryClient <NRPairedDeviceRegistryXPCFrameworkDelegate>

 {
    BOOL _disconnected;
    unsigned short _lastCompatibilityState;
    NSMutableDictionary *_legacyDevices;
    NSObject<OS_dispatch_queue> *_pairedDeviceRegistryDeviceListQueue;
    NSObject<OS_dispatch_queue> *_pairedRegistryGetDevicesQueue;
    NSUInteger _lastStatus;
    NSMutableArray *_waitingForRegistryUpdateBlocks;
    NSUInteger _callCount;
}


@property (readonly, nonatomic) NSUInteger status;


+(BOOL)shouldBoostProcess;
+(Class)proxyClass;
+(id)activeDeviceSelectorBlock:(SEL)arg0 ;
+(id)activePairedDeviceSelectorBlock:(SEL)arg0 ;
+(id)pairedDevicesSelectorBlock:(SEL)arg0 ;
+(id)sharedInstance;
-(BOOL)hasCompletedInitialSyncForPairingID:(id)arg0 ;
-(BOOL)isAssertionActive:(id)arg0 ;
-(BOOL)isKeychainEnabled;
-(BOOL)isPaired;
-(BOOL)isWatchSetupPushActive;
-(BOOL)pairedDeviceCountIsLessThanMaxPairedDevices;
-(BOOL)pairedDeviceCountIsLessThanMaxTinkerPairedDevices;
-(BOOL)pairedDeviceSupportQuickSwitch;
-(BOOL)supportsPairedDevice;
-(BOOL)supportsWatch;
-(BOOL)watchNeedsGraduation;
-(NSInteger)maxPairedDeviceCount;
-(NSInteger)maxPairingCompatibilityVersion;
-(NSInteger)maxTinkerPairedDeviceCount;
-(NSInteger)minPairingCompatibilityVersion;
-(NSInteger)minQuickSwitchCompatibilityVersion;
-(NSInteger)pairingCompatibilityVersion;
-(NSUInteger)_getStatusWithCollection:(id)arg0 ;
-(NSUInteger)lastSyncSwitchIndex;
-(NSUInteger)migrationCountForPairingID:(id)arg0 ;
-(id)_;
-(id)_deviceIDAtSwitchIndex:(unsigned int)arg0 date:(*id)arg1 ;
-(id)_getChangeHistory;
-(id)_getClientInfo;
-(id)_getLocalDeviceCollection;
-(id)_getSecureProperties:(id)arg0 ;
-(id)applyDiff:(id)arg0 ;
-(id)blockAndQueryVersions;
-(id)deviceForBTDeviceID:(id)arg0 ;
-(id)deviceForBluetoothID:(id)arg0 ;
-(id)deviceForIDSDevice:(id)arg0 ;
-(id)deviceForNRDevice:(id)arg0 fromIDSDevices:(id)arg1 ;
-(id)deviceForPairingID:(id)arg0 ;
-(id)deviceIDForIDSDevice:(id)arg0 ;
-(id)deviceIDForNRDevice:(id)arg0 ;
-(id)devicesFromMigrationConsentRequestData:(id)arg0 ;
-(id)getActivePairedDevice;
-(id)getAllDevices;
-(id)getAllDevicesWithArchivedAltAccountDevicesMatching:(id)arg0 ;
-(id)getAllDevicesWithArchivedDevices;
-(id)getAllDevicesWithArchivedDevicesMatching:(id)arg0 ;
-(id)getDevices;
-(id)getDevicesMatching:(id)arg0 ;
-(id)getPairedDevices;
-(id)init;
-(id)initWithBoost:(BOOL)arg0 ;
-(id)initWithBoost:(BOOL)arg0 disconnected:(BOOL)arg1 ;
-(id)lastMigrationRequestPhoneName;
-(id)migrationConsentRequestData;
-(id)nonActiveDeviceForBTDeviceID:(id)arg0 ;
-(id)nonActiveDeviceForBluetoothID:(id)arg0 ;
-(id)nonActiveDeviceForIDSDevice:(id)arg0 ;
-(id)pairingID;
-(id)pairingStorePath;
-(id)serverRequestReporterWithType:(id)arg0 ;
-(id)waitForActiveDevice;
-(id)waitForActiveOrAltAccountDevice;
-(id)waitForActivePairedDevice;
-(id)waitForActivePairedOrAltAccountDevice;
-(unsigned int)switchIndex;
-(unsigned short)compatibilityState;
-(void)_getActiveDeviceAssertionsWithInlineBlock:(id)arg0 ;
-(void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg0 ;
-(void)_pingActiveGizmoWithPriority:(NSInteger)arg0 withMessageSize:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)_submitAlbertPairingReport;
-(void)_submitServerRequestReportWithRequestType:(id)arg0 duration:(CGFloat)arg1 errorCode:(unsigned int)arg2 ;
-(void)abortPairing;
-(void)abortPairingWithReason:(id)arg0 ;
-(void)altAccountPairingStorePathPairingID:(id)arg0 ;
-(void)beginDiscovery;
-(void)beginMigrationWithDevice:(id)arg0 passcode:(id)arg1 withBlock:(id)arg2 ;
-(void)beginMigrationWithDevice:(id)arg0 withCompletion:(id)arg1 ;
-(void)checkIfFlaggedForRecoveryWithCompletion:(id)arg0 ;
-(void)clearRecoveryFlagWithCompletion:(id)arg0 ;
-(void)clearWatchNeedsGraduation:(id)arg0 ;
-(void)companionOOBDiscoverAndPairWithName:(id)arg0 withOutOfBandPairingKey:(id)arg1 withOptions:(id)arg2 operationHasBegun:(id)arg3 ;
-(void)companionPasscodePairWithDevice:(id)arg0 withOptions:(id)arg1 operationHasBegun:(id)arg2 ;
-(void)completeRTCPairingMetricForMetricID:(id)arg0 withSuccess:(id)arg1 ;
-(void)endDiscovery;
-(void)enterCompatibilityState:(unsigned short)arg0 forDevice:(id)arg1 ;
-(void)fakePairedSyncIsCompleteWithCompletion:(id)arg0 ;
-(void)getDevicesWithBlock:(id)arg0 ;
-(void)getMigrationPairingCharacteristicReadDataWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)getSwitchEventsFromIndex:(unsigned int)arg0 inlineCallback:(id)arg1 ;
-(void)gizmoOOBAdvertiseAndPairWithName:(id)arg0 operationHasBegun:(id)arg1 ;
-(void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg0 operationHasBegun:(id)arg1 ;
-(void)isPhoneReadyToMigrateDevice:(id)arg0 withCompletion:(id)arg1 ;
-(void)keepPhoneUnlockedInternalTestSPI:(id)arg0 ;
-(void)logCallFrequency;
-(void)notifyActivationCompleted:(id)arg0 withSuccess:(BOOL)arg1 ;
-(void)notifyPairingShouldContinue;
-(void)notifyPasscode:(id)arg0 forDevice:(id)arg1 ;
-(void)overrideSignalStrengthLimit:(NSInteger)arg0 ;
-(void)pairWithSimulator:(id)arg0 withQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)pairingClientDidEnterPhase:(id)arg0 ;
-(void)pairingClientSetAltAccountName:(id)arg0 altDSID:(id)arg1 forDevice:(id)arg2 completion:(id)arg3 ;
-(void)pairingClientSetAltAccountName:(id)arg0 forDevice:(id)arg1 completion:(id)arg2 ;
-(void)pairingClientSetPairingParentName:(id)arg0 pairingParentAltDSID:(id)arg1 forDevice:(id)arg2 completion:(id)arg3 ;
-(void)pairingStorePathPairingID:(id)arg0 ;
-(void)putMigrationChallengeCharacteristicWriteData:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)resumePairingClientCrashMonitoring;
-(void)retriggerUnpairInfoDialog;
-(void)sendDevicesUpdatedNotification;
-(void)setActivePairedDevice:(id)arg0 isMagicSwitch:(BOOL)arg1 operationHasCompleted:(id)arg2 ;
-(void)setActivePairedDevice:(id)arg0 operationHasCompleted:(id)arg1 ;
-(void)setActivePairedDevice:(id)arg0 withActiveDeviceAssertionHandler:(id)arg1 ;
-(void)setMigrationConsented:(BOOL)arg0 forDevice:(id)arg1 withBlock:(id)arg2 ;
-(void)setMigrationConsented:(BOOL)arg0 forDeviceID:(id)arg1 withBlock:(id)arg2 ;
-(void)setWatchNeedsGraduation:(id)arg0 ;
-(void)startWatchSetupPush;
-(void)stopWatchSetupPush;
-(void)suspendPairingClientCrashMonitoring;
-(void)switchToSimulator:(id)arg0 withQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)threadIsBlockedWaitingOn_nanoregistryd_syncGrabLegacyRegistryWithBlock:(id)arg0 ;
-(void)unpairWithDevice:(id)arg0 shouldObliterate:(BOOL)arg1 operationHasBegun:(id)arg2 ;
-(void)unpairWithDevice:(id)arg0 withOptions:(id)arg1 operationHasBegun:(id)arg2 ;
-(void)unpairWithSimulator:(id)arg0 withQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)userIsCheckingForUpdate;
-(void)waitForAltAccountPairingStorePathPairingID:(id)arg0 ;
-(void)waitForPairingStorePathPairingID:(id)arg0 ;
-(void)waitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg0 completion:(id)arg1 ;
-(void)xpcDeviceID:(id)arg0 needsPasscode:(id)arg1 ;
-(void)xpcHasNewOOBKey:(id)arg0 ;


@end


#endif