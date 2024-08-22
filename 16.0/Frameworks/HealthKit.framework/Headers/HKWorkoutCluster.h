// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWORKOUTCLUSTER_H
#define HKWORKOUTCLUSTER_H

@class NSUUID, NSString, NSData, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKWorkoutCluster : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *bestWorkoutUUID; // ivar: _bestWorkoutUUID
@property (readonly, copy, nonatomic) NSUUID *clusterUUID; // ivar: _clusterUUID
@property (readonly, copy, nonatomic) NSUUID *lastWorkoutUUID; // ivar: _lastWorkoutUUID
@property (readonly, nonatomic) CGFloat relevanceValue; // ivar: _relevanceValue
@property (readonly, copy, nonatomic) NSString *workoutRouteLabel; // ivar: _workoutRouteLabel
@property (readonly, copy, nonatomic) NSData *workoutRouteSnapshot; // ivar: _workoutRouteSnapshot
@property (readonly, copy, nonatomic) NSArray *workoutUUIDs; // ivar: _workoutUUIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithUUID:(id)arg0 workoutUUIDs:(id)arg1 lastWorkoutUUID:(id)arg2 bestWorkoutUUID:(id)arg3 relevanceValue:(CGFloat)arg4 workoutRouteSnapshot:(id)arg5 workoutRouteLabel:(id)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkoutUUIDs:(id)arg0 lastWorkoutUUID:(id)arg1 bestWorkoutUUID:(id)arg2 relevanceValue:(CGFloat)arg3 workoutRouteSnapshot:(id)arg4 workoutRouteLabel:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif