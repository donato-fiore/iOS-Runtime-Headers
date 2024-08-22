// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSNAPSHOTREQUESTHANDLER_H
#define HMDSNAPSHOTREQUESTHANDLER_H

@class HMFObject, NSMutableArray, HMFTimer, NSString, NSSet;
@protocol HMFLogging, HMFTimerDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDSnapshotRequestHandlerProtocol, OS_dispatch_queue;


#import "HMDAccessory.h"
#import "HMDCameraStreamSnapshotHandler.h"
#import "HMDSnapshotFile.h"

@interface HMDSnapshotRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDSnapshotRequestHandlerProtocol>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDAccessory *_accessory;
    NSMutableArray *_pendingRequests;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    HMFTimer *_mostRecentSnapshotInvalidationTimer;
    HMDSnapshotFile *_mostRecentSnapshot;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *imageCacheDirectory; // ivar: _imageCacheDirectory
@property (readonly, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *supportedResolutions; // ivar: _supportedResolutions


+(id)logCategory;
-(id)initWithAccessory:(id)arg0 workQueue:(id)arg1 streamSnapshotHandler:(id)arg2 imageCacheDirectory:(id)arg3 logID:(id)arg4 ;
-(void)requestSnapshot:(id)arg0 streamingTierType:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)streamSnapshotHandler:(id)arg0 didGetLastSnapshot:(id)arg1 ;
-(void)streamSnapshotHandler:(id)arg0 didGetNewSnapshot:(id)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif