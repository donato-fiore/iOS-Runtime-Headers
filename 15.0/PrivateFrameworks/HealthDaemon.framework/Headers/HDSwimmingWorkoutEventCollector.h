// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSWIMMINGWORKOUTEVENTCOLLECTOR_H
#define HDSWIMMINGWORKOUTEVENTCOLLECTOR_H

@class CMSwimTracker, CMSwimData, NSDate;
@protocol OS_dispatch_queue;


#import "HDWorkoutEventCollector.h"

@interface HDSwimmingWorkoutEventCollector : HDWorkoutEventCollector {
    CMSwimTracker *_swimTracker;
    CMSwimData *_referenceSwimData;
    CMSwimData *_lastSwimData;
    NSDate *_currentSegmentStartDate;
    NSObject<OS_dispatch_queue> *_workoutEventQueue;
}




+(BOOL)isAvailableInCurrentHardware;
-(BOOL)supportsWorkoutActivityType:(NSUInteger)arg0 ;
-(id)initWithProfile:(id)arg0 delegate:(id)arg1 ;
-(void)requestPendingEventsThroughDate:(id)arg0 completion:(id)arg1 ;
-(void)startWithSessionId:(id)arg0 ;
-(void)stop;
-(void)unitTest_setCMWorkoutManager:(id)arg0 ;


@end


#endif