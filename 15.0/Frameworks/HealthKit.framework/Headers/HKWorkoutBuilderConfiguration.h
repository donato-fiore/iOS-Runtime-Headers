// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKWORKOUTBUILDERCONFIGURATION_H
#define HKWORKOUTBUILDERCONFIGURATION_H

@class NSUUID;


#import "HKTaskConfiguration.h"
#import "HKDevice.h"
#import "HKQuantity.h"
#import "HKWorkoutConfiguration.h"

@interface HKWorkoutBuilderConfiguration : HKTaskConfiguration

@property (copy, nonatomic) NSUUID *associatedSessionUUID; // ivar: _associatedSessionUUID
@property (copy, nonatomic) HKDevice *device; // ivar: _device
@property (copy, nonatomic) HKQuantity *goal; // ivar: _goal
@property (nonatomic) NSUInteger goalType; // ivar: _goalType
@property (nonatomic) BOOL requiresRecovery; // ivar: _requiresRecovery
@property (nonatomic) BOOL shouldCollectWorkoutEvents; // ivar: _shouldCollectWorkoutEvents
@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // ivar: _workoutConfiguration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif