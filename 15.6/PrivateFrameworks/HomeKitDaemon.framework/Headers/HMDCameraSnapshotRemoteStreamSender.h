// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASNAPSHOTREMOTESTREAMSENDER_H
#define HMDCAMERASNAPSHOTREMOTESTREAMSENDER_H

@class NSString;
@protocol HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSStreamInitiatorDelegate, HMFLogging, HMDCameraSnapshotRemoteStreamSenderDelegate;


#import "HMDCameraSnapshotSender.h"
#import "HMDCameraSnapshotLocal.h"
#import "HMDCameraSnapshotIDSStreamInitiator.h"

@interface HMDCameraSnapshotRemoteStreamSender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSStreamInitiatorDelegate, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HMDCameraSnapshotRemoteStreamSenderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal; // ivar: _snapshotLocal
@property (readonly, nonatomic) HMDCameraSnapshotIDSStreamInitiator *streamInitiator; // ivar: _streamInitiator
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 options:(id)arg2 device:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8 ;
-(id)logIdentifier;
-(void)_callDidCompleteSendImageDelegate:(id)arg0 ;
-(void)_callDidStartCaptureImageDelegate:(id)arg0 ;
-(void)dealloc;
-(void)getSnapshot:(NSUInteger)arg0 ;
-(void)sendSnapshotAtPath:(id)arg0 ;
-(void)snapShotTransferComplete;
-(void)snapshotLocal:(id)arg0 didSaveSnapshotFile:(id)arg1 error:(id)arg2 sessionID:(id)arg3 ;
-(void)streamInitiator:(id)arg0 didFailToSendFile:(id)arg1 ;


@end


#endif