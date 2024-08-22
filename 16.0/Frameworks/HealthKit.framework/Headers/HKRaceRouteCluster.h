// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKRACEROUTECLUSTER_H
#define HKRACEROUTECLUSTER_H

@class NSDate, NSUUID, CLLocation, NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKRaceRouteCluster : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *bestWorkoutDate; // ivar: _bestWorkoutDate
@property (readonly, nonatomic) CGFloat bestWorkoutDistance; // ivar: _bestWorkoutDistance
@property (readonly, nonatomic) CGFloat bestWorkoutDuration; // ivar: _bestWorkoutDuration
@property (readonly, copy, nonatomic) NSUUID *bestWorkoutUUID; // ivar: _bestWorkoutUUID
@property (readonly, nonatomic) NSUInteger clusterSize; // ivar: _clusterSize
@property (readonly, copy, nonatomic) NSUUID *clusterUUID; // ivar: _clusterUUID
@property (readonly, copy, nonatomic) NSDate *lastWorkoutDate; // ivar: _lastWorkoutDate
@property (readonly, nonatomic) CGFloat lastWorkoutDistance; // ivar: _lastWorkoutDistance
@property (readonly, nonatomic) CGFloat lastWorkoutDuration; // ivar: _lastWorkoutDuration
@property (readonly, copy, nonatomic) CLLocation *lastWorkoutStartingPoint; // ivar: _lastWorkoutStartingPoint
@property (readonly, copy, nonatomic) NSUUID *lastWorkoutUUID; // ivar: _lastWorkoutUUID
@property (readonly, nonatomic) CGFloat relevanceValue; // ivar: _relevanceValue
@property (readonly, nonatomic) NSUInteger workoutActivityType; // ivar: _workoutActivityType
@property (readonly, copy, nonatomic) NSUUID *workoutClusterUUID; // ivar: _workoutClusterUUID
@property (readonly, copy, nonatomic) NSString *workoutRouteLabel; // ivar: _workoutRouteLabel
@property (readonly, copy, nonatomic) NSData *workoutRouteSnapshot; // ivar: _workoutRouteSnapshot


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithUUID:(id)arg0 workoutClusterUUID:(id)arg1 clusterSize:(NSUInteger)arg2 relevanceValue:(CGFloat)arg3 workoutActivityType:(NSUInteger)arg4 lastWorkoutUUID:(id)arg5 lastWorkoutDate:(id)arg6 lastWorkoutDistance:(CGFloat)arg7 lastWorkoutDuration:(CGFloat)arg8 lastWorkoutStartingPoint:(id)arg9 bestWorkoutUUID:(id)arg10 bestWorkoutDate:(id)arg11 bestWorkoutDistance:(CGFloat)arg12 bestWorkoutDuration:(CGFloat)arg13 workoutRouteSnapshot:(id)arg14 workoutRouteLabel:(id)arg15 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif