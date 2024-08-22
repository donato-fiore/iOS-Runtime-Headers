// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYSETUPMETRICDISPATCHER_H
#define HMDACCESSORYSETUPMETRICDISPATCHER_H

@class HMFObject, HMFTimer, NSString;
@protocol HMFTimerDelegate, HMFLogging, HMMLogEventSubmitting, HMDDeviceSetupTrackingInfo;


#import "HMDHomeManager.h"
#import "HMDHome.h"

@interface HMDAccessorySetupMetricDispatcher : HMFObject <HMFTimerDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
    HMFTimer *_timer;
    id<HMMLogEventSubmitting> *_dispatcher;
    HMDHomeManager *_homeManager;
    HMDHome *_home;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSObject<HMDDeviceSetupTrackingInfo> *trackingInfo; // ivar: _trackingInfo


+(id)logCategory;
-(id)initWithTrackingInfo:(id)arg0 homeManager:(id)arg1 ;
-(id)initWithTrackingInfo:(id)arg0 homeManager:(id)arg1 logEventDispatcher:(id)arg2 timerFactory:(id)arg3 ;
-(id)logIdentifier;
-(void)addHome:(id)arg0 ;
-(void)submit;
-(void)timerDidFire:(id)arg0 ;


@end


#endif