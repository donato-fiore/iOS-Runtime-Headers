// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDVIDEOSTREAMRECONFIGURE_H
#define HMDVIDEOSTREAMRECONFIGURE_H

@class HMFObject, NSDictionary, NSMutableArray, HMFTimer, NSString;
@protocol HMFTimerDelegate, HMFLogging, OS_dispatch_queue, HMDVideoStreamReconfigureDelegate;


#import "HMDCameraStreamSessionID.h"

@interface HMDVideoStreamReconfigure : HMFObject <HMFTimerDelegate, HMFLogging>

 {
    BOOL _reconfigurationMode;
    NSDictionary *_downlinkQualityInfo;
    NSMutableArray *_reconfigureEvents;
    HMFTimer *_upgradeDebouceTimer;
    HMFTimer *_downgradeDebouceTimer;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDCameraStreamSessionID *_sessionID;
    id<HMDVideoStreamReconfigureDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)logIdentifier;
-(void)downlinkQualityChanged:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateReconfigurationMode:(BOOL)arg0 ;


@end


#endif