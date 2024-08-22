// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRPAIRINGPROXY_H
#define NRPAIRINGPROXY_H

@protocol NRPairedDeviceRegistryXPCDaemonDelegate;


#import "NRRegistryProxy.h"

@interface NRPairingProxy : NRRegistryProxy <NRPairedDeviceRegistryXPCDaemonDelegate>





+(id)clientExportedInterface;
+(id)clientRemoteObjectInterface;
+(id)machServiceName;
+(id)serverExportedInterface;
+(id)serverRemoteObjectInterface;
-(void)xpcAbortPairingReason:(id)arg0 withBlock:(id)arg1 ;
-(void)xpcActiveDeviceAssertions:(id)arg0 ;
-(void)xpcBeginDiscoveryWithBlock:(id)arg0 ;
-(void)xpcBeginMigrationWithCompletion:(id)arg0 ;
-(void)xpcBeginMigrationWithDeviceID:(id)arg0 completion:(id)arg1 ;
-(void)xpcBeginMigrationWithDeviceID:(id)arg0 passcode:(id)arg1 withBlock:(id)arg2 ;
-(void)xpcCheckIfFlaggedForRecoveryWithCompletion:(id)arg0 ;
-(void)xpcClearRecoveryFlagWithCompletion:(id)arg0 ;
-(void)xpcClearWatchNeedsGraduation:(id)arg0 ;
-(void)xpcCompanionOOBDiscoverAndPairWithName:(id)arg0 withOutOfBandPairingKey:(id)arg1 withOptions:(id)arg2 operationHasBegun:(id)arg3 ;
-(void)xpcCompanionPasscodePairWithDeviceID:(id)arg0 withOptions:(id)arg1 operationHasBegun:(id)arg2 ;
-(void)xpcEndDiscoveryWithBlock:(id)arg0 ;
-(void)xpcEnterCompatibilityState:(unsigned short)arg0 withDeviceID:(id)arg1 ;
-(void)xpcFakePairedSyncIsCompleteWithCompletion:(id)arg0 ;
-(void)xpcGetInitialSyncCompletedForPairingID:(id)arg0 completion:(id)arg1 ;
-(void)xpcGetLastMigrationRequestPhoneNameWithCompletion:(id)arg0 ;
-(void)xpcGetLastSwitchIndex:(id)arg0 ;
-(void)xpcGetMigrationCountForPairingID:(id)arg0 completion:(id)arg1 ;
-(void)xpcGetMigrationPairingCharacteristicReadDataWithCompletion:(id)arg0 ;
-(void)xpcGizmoOOBAdvertiseAndPairWithName:(id)arg0 operationHasBegun:(id)arg1 ;
-(void)xpcGizmoPasscodeAdvertiseAndPairWithName:(id)arg0 operationHasBegun:(id)arg1 ;
-(void)xpcInvalidateSwitchAssertionWithIdentifier:(id)arg0 block:(id)arg1 ;
-(void)xpcIsAssertionActive:(id)arg0 withCompletion:(id)arg1 ;
-(void)xpcIsPhoneReadyToMigrateDevice:(id)arg0 withCompletion:(id)arg1 ;
-(void)xpcKeepPhoneUnlockedInternalTestSPI:(id)arg0 ;
-(void)xpcNotifyActivationCompleted:(id)arg0 withSuccess:(BOOL)arg1 ;
-(void)xpcNotifyPasscode:(id)arg0 withDeviceID:(id)arg1 ;
-(void)xpcPairWithSimulator:(id)arg0 withCompletion:(id)arg1 ;
-(void)xpcPairingClientDidEnterPhase:(id)arg0 withBlock:(id)arg1 ;
-(void)xpcPairingClientSetAltAccountName:(id)arg0 altDSID:(id)arg1 forPairingID:(id)arg2 completion:(id)arg3 ;
-(void)xpcPairingClientSetPairingParentName:(id)arg0 pairingParentAltDSID:(id)arg1 forPairingID:(id)arg2 completion:(id)arg3 ;
-(void)xpcPairingShouldContinue;
-(void)xpcPingActiveGizmoWithPriority:(int)arg0 withMessageSize:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)xpcPutMigrationChallengeCharacteristicWriteData:(id)arg0 completion:(id)arg1 ;
-(void)xpcResumePairingClientCrashMonitoring:(id)arg0 ;
-(void)xpcRetriggerUnpairInfoDialogWithBlock:(id)arg0 ;
-(void)xpcScanForMigratableWatchesWithBlock:(id)arg0 ;
-(void)xpcSetWatchNeedsGraduation:(id)arg0 ;
-(void)xpcStartWatchSetupPushWithBlock:(id)arg0 ;
-(void)xpcStopWatchSetupPushWithBlock:(id)arg0 ;
-(void)xpcSubmitAlbertPairingReport:(id)arg0 ;
-(void)xpcSubmitRTCPairingMetricForMetricID:(id)arg0 withSuccess:(id)arg1 ;
-(void)xpcSubmitServerRequestReportWithRequestType:(id)arg0 duration:(CGFloat)arg1 errorCode:(unsigned int)arg2 block:(id)arg3 ;
-(void)xpcSuspendPairingClientCrashMonitoring:(id)arg0 ;
-(void)xpcSwitchActiveDeviceWithDeviceID:(id)arg0 isMagicSwitch:(BOOL)arg1 operationHasCompleted:(id)arg2 ;
-(void)xpcSwitchActiveDeviceWithDeviceID:(id)arg0 withAssertionHandler:(id)arg1 ;
-(void)xpcSwitchToSimulator:(id)arg0 withCompletion:(id)arg1 ;
-(void)xpcTriggerVersion4Workaround;
-(void)xpcUnpairWithDeviceID:(id)arg0 withOptions:(id)arg1 operationHasBegun:(id)arg2 ;
-(void)xpcUnpairWithSimulator:(id)arg0 withCompletion:(id)arg1 ;
-(void)xpcWaitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg0 completion:(id)arg1 ;
-(void)xpcWatchNeedsGraduation:(id)arg0 ;


@end


#endif