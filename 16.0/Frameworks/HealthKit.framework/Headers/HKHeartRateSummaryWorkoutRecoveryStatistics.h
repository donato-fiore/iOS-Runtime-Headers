// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEARTRATESUMMARYWORKOUTRECOVERYSTATISTICS_H
#define HKHEARTRATESUMMARYWORKOUTRECOVERYSTATISTICS_H

@class NSDictionary;


#import "HKHeartRateSummaryStatistics.h"

@interface HKHeartRateSummaryWorkoutRecoveryStatistics : HKHeartRateSummaryStatistics

@property (retain, nonatomic, setter=_setPerMinuteReadings:) NSDictionary *perMinuteReadings; // ivar: _perMinuteReadings
@property (readonly, nonatomic) NSUInteger workoutActivityType; // ivar: _workoutActivityType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initFromStatistics:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 numberOfBuckets:(NSInteger)arg1 workoutUUID:(id)arg2 workoutActivityType:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif