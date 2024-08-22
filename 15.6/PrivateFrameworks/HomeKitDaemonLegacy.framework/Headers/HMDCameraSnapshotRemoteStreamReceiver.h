// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 options:(id)arg2 accessory:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 snapshotRequestHandler:(id)arg7 residentMessageHandler:(id)arg8 ;
-(id)logIdentifier;
-(void)_callDidSaveImageDelegateWithError:(id)arg0 ;
-(void)_callGettingImageDelegate:(id)arg0 ;
-(void)_getSnapshot:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getSnapshot:(NSUInteger)arg0 ;
-(void)relayReceiver:(id)arg0 didReceiveFile:(id)arg1 ;
-(void)snapShotSendFailed:(id)arg0 ;


@end


#endif