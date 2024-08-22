// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSKIINGWORKOUTEVENTCOLLECTOR_H
#define HDSKIINGWORKOUTEVENTCOLLECTOR_H

@class CMSkiTracker, CMSkiData;
@protocol OS_dispatch_queue;


#import "HDWorkoutEventCollector.h"

@interface HDSkiingWorkoutEventCollector : HDWorkoutEventCollector {
    CMSkiTracker *_skiTracker;
    CMSkiData *_referenceSkiData;
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