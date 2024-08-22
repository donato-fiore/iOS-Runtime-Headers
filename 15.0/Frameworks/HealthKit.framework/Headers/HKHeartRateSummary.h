// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEARTRATESUMMARY_H
#define HKHEARTRATESUMMARY_H

@class NSArray, NSDateInterval;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKHeartRateSummaryStatistics.h"
#import "HKQuantity.h"

@interface HKHeartRateSummary : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger activityCacheIndex; // ivar: _activityCacheIndex
@property (retain, nonatomic) HKHeartRateSummaryStatistics *allDayStatistics; // ivar: _allDayStatistics
@property (retain, nonatomic) NSArray *breatheStatistics; // ivar: _breatheStatistics
@property (retain, nonatomic) NSDateInterval *heartRateDateInterval; // ivar: _heartRateDateInterval
@property (retain, nonatomic) HKQuantity *restingHeartRate; // ivar: _restingHeartRate
@property (retain, nonatomic) HKQuantity *walkingAverageHeartRate; // ivar: _walkingAverageHeartRate
@property (retain, nonatomic) NSArray *workoutRecoveryStatistics; // ivar: _workoutRecoveryStatistics
@property (retain, nonatomic) NSArray *workoutStatistics; // ivar: _workoutStatistics


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithActivityCacheIndex:(NSInteger)arg0 heartRateDateInterval:(id)arg1 restingHeartRate:(id)arg2 walkingAverageHeartRate:(id)arg3 allDayStatistics:(id)arg4 workoutStatistics:(id)arg5 workoutRecoveryStatistics:(id)arg6 breatheStatistics:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif