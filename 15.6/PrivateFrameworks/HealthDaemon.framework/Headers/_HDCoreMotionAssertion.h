// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDCOREMOTIONASSERTION_H
#define _HDCOREMOTIONASSERTION_H

@class HDAssertion, HKWorkoutConfiguration, NSUUID, CMWorkout;



@interface _HDCoreMotionAssertion : HDAssertion {
    HKWorkoutConfiguration *_workoutConfiguration;
    NSUUID *_sessionUUID;
    CMWorkout *_cmWorkout;
}






@end


#endif