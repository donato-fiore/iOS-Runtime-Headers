// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASNAPSHOTIDSRELAYRECEIVER_H
#define HMDCAMERASNAPSHOTIDSRELAYRECEIVER_H

@class HMFActivity, NSString, NSMutableData, IDSSession, NSUUID;
@protocol IDSServiceDelegate, IDSSessionDelegate, HMFLogging, HMDCameraSnapshotIDSRelayReceiverDelegate, OS_dispatch_source;


#import "HMDCameraSnapshotIDSRelay.h"
#import "HMDCameraIDSSessionInviterDeviceVerifier.h"

@interface HMDCameraSnapshotIDSRelayReceiver : HMDCameraSnapshotIDSRelay <IDSServiceDelegate, IDSSessionDelegate, HMFLogging>

 {
    HMFActivity *_activity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDCameraSnapshotIDSRelayReceiverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property NSUInteger expectedByteCount; // ivar: _expectedByteCount
@property (readonly) NSMutableData *expectedByteCountData; // ivar: _expectedByteCountData
@property (readonly) NSUInteger hash;
@property (retain) IDSSession *idsSession; // ivar: _idsSession
@property (readonly) NSUUID *machOUUID; // ivar: _machOUUID
@property NSUInteger receivedByteCount; // ivar: _receivedByteCount
@property (readonly) NSMutableData *relayData; // ivar: _relayData
@property (readonly) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier; // ivar: _sessionInviterDeviceVerifier
@property (retain) NSObject<OS_dispatch_source> *socketSource; // ivar: _socketSource
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 logIdentifier:(id)arg1 machOUUID:(id)arg2 workQueue:(id)arg3 sessionInviterDeviceVerifier:(id)arg4 delegate:(id)arg5 ;
-(id)logIdentifier;
-(void)_didReceiveData:(id)arg0 error:(id)arg1 ;
-(void)_handleDataFromSocket:(id)arg0 ;
-(void)_startDataReceive;
-(void)dealloc;
-(void)service:(id)arg0 account:(id)arg1 inviteReceivedForSession:(id)arg2 fromID:(id)arg3 withContext:(id)arg4 ;
-(void)sessionEnded:(id)arg0 withReason:(unsigned int)arg1 error:(id)arg2 ;
-(void)sessionStarted:(id)arg0 ;


@end


#endif