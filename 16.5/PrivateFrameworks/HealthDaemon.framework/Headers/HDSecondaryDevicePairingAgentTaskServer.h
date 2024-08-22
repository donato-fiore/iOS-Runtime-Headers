// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSECONDARYDEVICEPAIRINGAGENTTASKSERVER_H
#define HDSECONDARYDEVICEPAIRINGAGENTTASKSERVER_H

@protocol HKSecondaryDevicePairingAgentServerInterface, OS_dispatch_source;


#import "HDStandardTaskServer.h"
#import "HDSecondaryDevicePairingRequest.h"

@interface HDSecondaryDevicePairingAgentTaskServer : HDStandardTaskServer <HKSecondaryDevicePairingAgentServerInterface>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_source> *_timeoutSource;
    BOOL _taskDidTimeout;
    HDSecondaryDevicePairingRequest *_currentRequest;
}


@property (nonatomic) CGFloat tinkerSharingSetupTimeout; // ivar: _tinkerSharingSetupTimeout
@property (copy) id *unitTest_timeoutTriggered; // ivar: _unitTest_timeoutTriggered


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)remote_fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchSharingStatusWithPairedGuardianWithCompletion:(id)arg0 ;
-(void)remote_performEndToEndCloudSyncWithNRDeviceUUID:(id)arg0 syncParticipantFirst:(BOOL)arg1 completion:(id)arg2 ;
-(void)remote_requestTinkerSharingOptInWithGuardianDisplayName:(id)arg0 NRDeviceUUID:(id)arg1 completion:(id)arg2 ;
-(void)remote_setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)remote_tearDownHealthSharingWithPairedGuardianWithCompletion:(id)arg0 ;
-(void)remote_tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)arg0 completion:(id)arg1 ;


@end


#endif