// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHWORKOUTEVALUATIONWORKOUTPROPERTIES_H
#define ACHWORKOUTEVALUATIONWORKOUTPROPERTIES_H


#import <Foundation/Foundation.h>


@interface ACHWorkoutEvaluationWorkoutProperties : NSObject

@property (readonly, nonatomic) CGFloat best10KDuration; // ivar: _best10KDuration
@property (readonly, nonatomic) CGFloat best5KDuration; // ivar: _best5KDuration
@property (readonly, nonatomic) CGFloat bestHalfMarathonDuration; // ivar: _bestHalfMarathonDuration
@property (readonly, nonatomic) CGFloat bestMarathonDuration; // ivar: _bestMarathonDuration
@property (readonly, nonatomic) CGFloat bestWheelchair10KDuration; // ivar: _bestWheelchair10KDuration
@property (readonly, nonatomic) CGFloat bestWheelchair5KDuration; // ivar: _bestWheelchair5KDuration
@property (readonly, nonatomic) CGFloat bestWheelchairHalfMarathonDuration; // ivar: _bestWheelchairHalfMarathonDuration
@property (readonly, nonatomic) CGFloat bestWheelchairMarathonDuration; // ivar: _bestWheelchairMarathonDuration
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat elevationGained; // ivar: _elevationGained
@property (readonly, nonatomic) CGFloat elevationGainedInMeters; // ivar: _elevationGainedInMeters
@property (readonly, nonatomic) BOOL isDuathlon; // ivar: _isDuathlon
@property (readonly, nonatomic) BOOL isFiftyKilometerTriathlon; // ivar: _isFiftyKilometerTriathlon
@property (readonly, nonatomic) BOOL isFirstParty; // ivar: _isFirstParty
@property (readonly, nonatomic) BOOL isFullDistanceTriathlon; // ivar: _isFullDistanceTriathlon
@property (readonly, nonatomic) BOOL isHalfDistanceTriathlon; // ivar: _isHalfDistanceTriathlon
@property (readonly, nonatomic) BOOL isIndoor; // ivar: _isIndoor
@property (readonly, nonatomic) BOOL isSprintTriathlon; // ivar: _isSprintTriathlon
@property (readonly, nonatomic) CGFloat kilocalories; // ivar: _kilocalories
@property (readonly, nonatomic) CGFloat kilometers; // ivar: _kilometers
@property (readonly, nonatomic) CGFloat meters; // ivar: _meters
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)_workoutIsDuathlon:(id)arg0 ;
-(BOOL)_workoutIsTriathlon:(id)arg0 swimmingDistanceInKilometers:(CGFloat)arg1 cyclingDistanceInKilometers:(CGFloat)arg2 runningDistanceInKilometers:(CGFloat)arg3 ;
-(id)_nonMetaActivitiesForWorkout:(id)arg0 ;
-(id)initWithWorkout:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;


@end


#endif