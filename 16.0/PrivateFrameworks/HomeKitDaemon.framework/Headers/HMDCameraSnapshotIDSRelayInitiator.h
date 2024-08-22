// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERASNAPSHOTIDSRELAYINITIATOR_H
#define HMDCAMERASNAPSHOTIDSRELAYINITIATOR_H

@class HMFActivity, NSMutableData, NSString, IDSSession;
@protocol IDSSessionDelegate, HMDCameraSnapshotIDSRelayInitiatorDelegate, OS_dispatch_source;


#import "HMDCameraSnapshotIDSRelay.h"
#import "HMDDevice.h"

@interface HMDCameraSnapshotIDSRelayInitiator : HMDCameraSnapshotIDSRelay <IDSSessionDelegate>

 {
    HMFActivity *_activity;
}


@property (retain) NSMutableData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDCameraSnapshotIDSRelayInitiatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (retain) IDSSession *idsSession; // ivar: _idsSession
@property BOOL idsSessionStarted; // ivar: _idsSessionStarted
@property (retain) NSObject<OS_dispatch_source> *socketSource; // ivar: _socketSource
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 logIdentifier:(id)arg1 workQueue:(id)arg2 device:(id)arg3 delegate:(id)arg4 ;
-(void)_callFileTransferFailed:(id)arg0 ;
-(void)_sendData;
-(void)_startDataTransfer;
-(void)dealloc;
-(void)sendData:(id)arg0 ;
-(void)sendIDSInvitation;
-(void)session:(id)arg0 receivedInvitationAcceptFromID:(id)arg1 ;
-(void)session:(id)arg0 receivedInvitationCancelFromID:(id)arg1 ;
-(void)session:(id)arg0 receivedInvitationDeclineFromID:(id)arg1 ;
-(void)sessionEnded:(id)arg0 withReason:(unsigned int)arg1 error:(id)arg2 ;
-(void)sessionStarted:(id)arg0 ;


@end


#endif