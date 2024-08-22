// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDAUTOPAUSEWORKOUTEVENTCOLLECTOR_H
#define HDAUTOPAUSEWORKOUTEVENTCOLLECTOR_H

@class CMWorkoutManager, NSString;
@protocol CMWorkoutManagerDelegate;


#import "HDWorkoutEventCollector.h"

@interface HDAutoPauseWorkoutEventCollector : HDWorkoutEventCollector <CMWorkoutManagerDelegate>

 {
    CMWorkoutManager *_cmWorkoutManager;
    int _catFlexingNotifyToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 delegate:(id)arg1 ;
-(void)stop;
-(void)unitTest_setCMWorkoutManager:(id)arg0 ;
-(void)workoutManager:(id)arg0 didFailWorkout:(id)arg1 withError:(id)arg2 ;
-(void)workoutManager:(id)arg0 didStartWorkout:(id)arg1 atDate:(id)arg2 ;
-(void)workoutManager:(id)arg0 didStopWorkout:(id)arg1 atDate:(id)arg2 ;
-(void)workoutManager:(id)arg0 suggestedStopWorkout:(id)arg1 atDate:(id)arg2 ;
-(void)workoutManager:(id)arg0 willPauseWorkout:(id)arg1 atDate:(id)arg2 ;
-(void)workoutManager:(id)arg0 willResumeWorkout:(id)arg1 atDate:(id)arg2 ;
-(void)workoutManager:(id)arg0 workoutLocationEventUpdate:(id)arg1 ;


@end


#endif