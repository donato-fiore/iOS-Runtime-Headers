// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERASTREAMSNAPSHOTHANDLER_H
#define HMDCAMERASTREAMSNAPSHOTHANDLER_H

@class HMFObject, NSMutableSet, NSMutableDictionary, NSMapTable, NSString;
@protocol HMFLogging, HMDCameraStreamSnapshotCaptureDelegate, HMDCameraGetSnapshotProtocol, OS_dispatch_queue;



@interface HMDCameraStreamSnapshotHandler : HMFObject <HMFLogging, HMDCameraStreamSnapshotCaptureDelegate, HMDCameraGetSnapshotProtocol>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_streamSnapshotCaptures;
    NSMutableSet *_retiredStreamSnapshotCaptures;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSMutableDictionary *_serviceInstanceStreamStatus;
    NSMapTable *_delegateTable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly, getter=isStreamAvailable) BOOL streamAvailable; // ivar: _streamAvailable
@property (readonly, getter=isStreamSetupInProgress) BOOL streamSetupInProgress; // ivar: _streamSetupInProgress
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithWorkQueue:(id)arg0 services:(id)arg1 logID:(id)arg2 ;
-(void)addDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)addVideoStreamInterface:(id)arg0 ;
-(void)getSnapshot:(NSUInteger)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)removeVideoStreamInterface:(id)arg0 ;
-(void)setStreamSetupStatusForService:(id)arg0 inProgress:(BOOL)arg1 ;
-(void)streamSnapshotCapture:(id)arg0 didGetLastSnapshot:(id)arg1 ;
-(void)streamSnapshotCapture:(id)arg0 didGetNewSnapshot:(id)arg1 ;


@end


#endif