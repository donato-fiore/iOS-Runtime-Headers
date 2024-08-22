// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASNAPSHOTREMOTERELAYSENDER_H
#define HMDCAMERASNAPSHOTREMOTERELAYSENDER_H

@class NSString;
@protocol HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSRelayInitiatorDelegate, HMFLogging, HMDCameraSnapshotRemoteRelaySenderDelegate;


#import "HMDCameraSnapshotSender.h"
#import "HMDCameraSnapshotIDSRelayInitiator.h"
#import "HMDCameraSnapshotLocal.h"

@interface HMDCameraSnapshotRemoteRelaySender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSRelayInitiatorDelegate, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HMDCameraSnapshotRemoteRelaySenderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCameraSnapshotIDSRelayInitiator *relayInitiator; // ivar: _relayInitiator
@property (readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal; // ivar: _snapshotLocal
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 options:(id)arg2 device:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8 ;
-(id)logIdentifier;
-(void)_callDidCompleteSendImageDelegate:(id)arg0 ;
-(void)_callDidSaveSnapshotFileDelegate:(id)arg0 ;
-(void)_callDidStartCaptureImageDelegate:(id)arg0 ;
-(void)dealloc;
-(void)getSnapshot:(NSUInteger)arg0 ;
-(void)relayInitiator:(id)arg0 didEndIDSSessionWithError:(id)arg1 ;
-(void)relayInitiator:(id)arg0 didSendData:(id)arg1 ;
-(void)relayInitiatorDidSendDataSuccessfully:(id)arg0 ;
-(void)relayInitiatorDidSendIDSInvitation:(id)arg0 ;
-(void)relayInitiatorDidStartDataSend:(id)arg0 ;
-(void)relayInitiatorIDSSessionDidStart:(id)arg0 ;
-(void)snapShotTransferComplete;
-(void)snapshotLocal:(id)arg0 didSaveSnapshotFile:(id)arg1 error:(id)arg2 sessionID:(id)arg3 ;


@end


#endif