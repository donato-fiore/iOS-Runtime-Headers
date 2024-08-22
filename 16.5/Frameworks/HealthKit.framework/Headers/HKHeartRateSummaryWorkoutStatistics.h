// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEARTRATESUMMARYWORKOUTSTATISTICS_H
#define HKHEARTRATESUMMARYWORKOUTSTATISTICS_H



#import "HKHeartRateSummaryStatistics.h"
#import "HKQuantity.h"

@interface HKHeartRateSummaryWorkoutStatistics : HKHeartRateSummaryStatistics

@property (retain, nonatomic, setter=_setAverageHeartRate:) HKQuantity *averageHeartRate; // ivar: _averageHeartRate
@property (retain, nonatomic, setter=_setMaximumHeartRate:) HKQuantity *maximumHeartRate; // ivar: _maximumHeartRate
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