// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKFITNESSFRIENDWORKOUT_H
#define _HKFITNESSFRIENDWORKOUT_H

@class NSString, NSUUID;
@protocol NSCopying;


#import "HKSample.h"
#import "HKQuantity.h"

@interface _HKFitnessFriendWorkout : HKSample <NSCopying>



@property (nonatomic) NSInteger amm; // ivar: _amm
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *deviceManufacturer; // ivar: _deviceManufacturer
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSUUID *friendUUID; // ivar: _friendUUID
@property (retain, nonatomic) HKQuantity *goal; // ivar: _goal
@property (nonatomic) NSUInteger goalType; // ivar: _goalType
@property (nonatomic) BOOL isIndoorWorkout; // ivar: _isIndoorWorkout
@property (nonatomic) BOOL isWatchWorkout; // ivar: _isWatchWorkout
@property (retain, nonatomic) NSString *seymourCatalogWorkoutIdentifier; // ivar: _seymourCatalogWorkoutIdentifier
@property (retain, nonatomic) NSString *seymourMediaType; // ivar: _seymourMediaType
@property (retain, nonatomic) HKQuantity *totalBasalEnergyBurned; // ivar: _totalBasalEnergyBurned
@property (retain, nonatomic) HKQuantity *totalDistance; // ivar: _totalDistance
@property (retain, nonatomic) HKQuantity *totalEnergyBurned; // ivar: _totalEnergyBurned
@property (nonatomic) NSUInteger workoutActivityType; // ivar: _workoutActivityType


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
+(id)fitnessFriendWorkoutFromHKWorkout:(id)arg0 ;
+(id)fitnessFriendworkoutWithActivityType:(NSUInteger)arg0 friendUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(CGFloat)arg4 totalActiveEnergyBurned:(id)arg5 totalBasalEnergyBurned:(id)arg6 totalDistance:(id)arg7 goalType:(NSUInteger)arg8 goal:(id)arg9 bundleID:(id)arg10 isWatchWorkout:(BOOL)arg11 isIndoorWorkout:(BOOL)arg12 deviceManufacturer:(id)arg13 deviceModel:(id)arg14 amm:(NSInteger)arg15 seymourCatalogWorkoutIdentifier:(id)arg16 seymourMediaType:(id)arg17 ;
-(id)description;
-(id)hkWorkoutFromFriendWorkout;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif