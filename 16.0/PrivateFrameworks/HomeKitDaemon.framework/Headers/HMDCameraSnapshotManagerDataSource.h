// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERASNAPSHOTMANAGERDATASOURCE_H
#define HMDCAMERASNAPSHOTMANAGERDATASOURCE_H

@class HMFObject, NSString;
@protocol HMDCameraSnapshotManagerDataSource;



@interface HMDCameraSnapshotManagerDataSource : HMFObject <HMDCameraSnapshotManagerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsCameraSnapshotRequestViaRelay;
@property (readonly, getter=isWatchDevice) BOOL watchDevice;


-(id)createLocalSnapshotSessionWithID:(id)arg0 accessory:(id)arg1 snapshotGetter:(id)arg2 message:(id)arg3 waitPeriod:(CGFloat)arg4 reachabilityPath:(NSUInteger)arg5 cameraLocallyReachable:(BOOL)arg6 snapshotForNotification:(BOOL)arg7 ;
-(id)createSnapshotLocalWithSessionID:(id)arg0 workQueue:(id)arg1 accessory:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 snapshotRequestHandler:(id)arg5 ;
-(id)createSnapshotRemoteRelayReceiverWithSessionID:(id)arg0 workQueue:(id)arg1 accessory:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 uniqueIdentifier:(id)arg5 snapshotRequestHandler:(id)arg6 residentMessageHandler:(id)arg7 ;


@end


#endif