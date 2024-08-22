// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERASNAPSHOTREMOTERELAYSTREAM_H
#define HMDCAMERASNAPSHOTREMOTERELAYSTREAM_H

@class HMFObject, NSString;
@protocol HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMFLogging, HMDCameraSnapshotRemoteRelayStreamDelegate, OS_dispatch_queue;


#import "HMDCameraSnapshotRemoteRelayReceiver.h"
#import "HMDCameraSnapshotRemoteStreamSender.h"

@interface HMDCameraSnapshotRemoteRelayStream : HMFObject <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HMDCameraSnapshotRemoteRelayStreamDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCameraSnapshotRemoteRelayReceiver *relayReceiver; // ivar: _relayReceiver
@property (readonly, nonatomic) HMDCameraSnapshotRemoteStreamSender *streamSender; // ivar: _streamSender
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 device:(id)arg2 accessory:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 snapshotRequestHandler:(id)arg7 residentMessageHandler:(id)arg8 ;
-(id)logIdentifier;
-(void)_callDidCompleteSendImageDelegate:(id)arg0 ;
-(void)_callDidStartCaptureImageDelegate:(id)arg0 ;
-(void)_sendImageSendFailure:(id)arg0 ;
-(void)dealloc;
-(void)getSnapshot:(NSUInteger)arg0 ;
-(void)snapShotSendFailed:(id)arg0 ;
-(void)snapShotTransferComplete;
-(void)snapshotRelayReceiver:(id)arg0 didSaveSnapshotFile:(id)arg1 error:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotRelayReceiver:(id)arg0 didStartGettingImage:(id)arg1 sessionID:(id)arg2 ;
-(void)snapshotStreamSender:(id)arg0 didCompleteSendImage:(id)arg1 sessionID:(id)arg2 ;
-(void)snapshotStreamSender:(id)arg0 didStartCaptureImage:(id)arg1 sessionID:(id)arg2 ;


@end


#endif