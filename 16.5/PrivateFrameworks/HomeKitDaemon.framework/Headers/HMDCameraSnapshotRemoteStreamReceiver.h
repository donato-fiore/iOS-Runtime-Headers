// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASNAPSHOTREMOTESTREAMRECEIVER_H
#define HMDCAMERASNAPSHOTREMOTESTREAMRECEIVER_H

@class NSString;
@protocol HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSStreamReceiverDelegate, HMFLogging, HMDCameraSnapshotRemoteStreamReceiverDelegate;


#import "HMDCameraSnapshotReceiver.h"
#import "HMDCameraSnapshotIDSStreamReceiver.h"

@interface HMDCameraSnapshotRemoteStreamReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSStreamReceiverDelegate, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HMDCameraSnapshotRemoteStreamReceiverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDCameraSnapshotIDSStreamReceiver *relayReceiver; // ivar: _relayReceiver
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 accessory:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 uniqueIdentifier:(id)arg5 snapshotRequestHandler:(id)arg6 residentMessageHandler:(id)arg7 remoteDevice:(id)arg8 ;
-(id)logIdentifier;
-(void)_callDidSaveImageDelegateWithError:(id)arg0 ;
-(void)_callGettingImageDelegate:(id)arg0 ;
-(void)_getSnapshot:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getSnapshot:(NSUInteger)arg0 ;
-(void)snapShotSendFailed:(id)arg0 ;
-(void)streamReceiver:(id)arg0 didReceiveFileWithError:(id)arg1 ;


@end


#endif