// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERAREMOTESTREAMTRACKER_H
#define HMDCAMERAREMOTESTREAMTRACKER_H

@class HMFObject, NSMutableSet, NSString;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMDCameraRemoteStreamTracker : HMFObject <HMFLogging>



@property (readonly) NSMutableSet *currentStreamIdentifiers; // ivar: _currentStreamIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)sharedTracker;
-(BOOL)startTrackingStreamSession:(id)arg0 ;
-(id)init;
-(void)stopTrackingStreamWithSessionID:(id)arg0 ;


@end


#endif