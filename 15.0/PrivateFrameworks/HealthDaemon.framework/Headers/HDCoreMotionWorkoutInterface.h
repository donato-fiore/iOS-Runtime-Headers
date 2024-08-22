// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCOREMOTIONWORKOUTINTERFACE_H
#define HDCOREMOTIONWORKOUTINTERFACE_H

@class CMWorkoutManager, CMWorkoutMets, HDAssertionManager, CMWorkout, NSString;
@protocol HDAssertionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDCoreMotionWorkoutInterface : NSObject <HDAssertionObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CMWorkoutManager *_cmWorkoutManager;
    CMWorkoutMets *_cmWorkoutMets;
    HDAssertionManager *_assertionManager;
    CMWorkout *_currentCMWorkout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)takeCMWorkoutAssertionForOwnerIdentifier:(id)arg0 sessionUUID:(id)arg1 workoutConfiguration:(id)arg2 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)averageMETsForWorkoutSessionUUID:(id)arg0 completion:(id)arg1 ;
-(void)unitTest_setCMWorkoutManager:(id)arg0 ;


@end


#endif