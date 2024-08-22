// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDRACEROUTECLUSTERWORKOUT_H
#define HDRACEROUTECLUSTERWORKOUT_H

@class NSDate, NSUUID;

#import <Foundation/Foundation.h>


@interface HDRaceRouteClusterWorkout : NSObject

@property (readonly, nonatomic) NSUInteger activityType; // ivar: _activityType
@property (readonly, nonatomic) CGFloat distance; // ivar: _distance
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat finishDuration; // ivar: _finishDuration
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) CGFloat startDuration; // ivar: _startDuration
@property (readonly, nonatomic) NSUUID *workoutUUID; // ivar: _workoutUUID


+(id)clusterWorkoutWithWorkoutEntity:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)clusterWorkoutWithWorkoutUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;


@end


#endif