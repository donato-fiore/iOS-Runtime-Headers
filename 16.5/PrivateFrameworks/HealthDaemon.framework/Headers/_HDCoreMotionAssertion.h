// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDCOREMOTIONASSERTION_H
#define _HDCOREMOTIONASSERTION_H

@class HDAssertion, HKWorkoutConfiguration, NSUUID, CMWorkout, NSArray;



@interface _HDCoreMotionAssertion : HDAssertion {
    BOOL _enableWorkoutChangeDetection;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSUUID *_sessionUUID;
    CMWorkout *_cmWorkout;
    NSArray *_activityConfigurations;
}






@end


#endif