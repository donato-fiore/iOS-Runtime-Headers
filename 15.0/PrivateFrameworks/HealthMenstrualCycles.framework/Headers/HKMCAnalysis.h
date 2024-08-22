// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMCANALYSIS_H
#define HKMCANALYSIS_H

@class NSNumber, NSArray, NSString, HKQuantity;
@protocol HKRedactedDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKMCStatistics.h"

@interface HKMCAnalysis : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSNumber *anchor; // ivar: _anchor
@property (readonly, nonatomic) NSArray *cycles; // ivar: _cycles
@property (readonly, nonatomic) NSArray *fertileWindowProjections; // ivar: _fertileWindowProjections
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, copy, nonatomic) NSNumber *lastLoggedDayIndex; // ivar: _lastLoggedDayIndex
@property (readonly, copy, nonatomic) NSNumber *lastMenstrualFlowDayIndex; // ivar: _lastMenstrualFlowDayIndex
@property (readonly, nonatomic) NSArray *menstruationProjections; // ivar: _menstruationProjections
@property (readonly, nonatomic) NSInteger numberOfDailyAwakeHeartRateStatisticsForPast100Days; // ivar: _numberOfDailyAwakeHeartRateStatisticsForPast100Days
@property (readonly, nonatomic) NSInteger numberOfDailySleepHeartRateStatisticsForPast100Days; // ivar: _numberOfDailySleepHeartRateStatisticsForPast100Days
@property (readonly, nonatomic) NSArray *ongoingCycleFactors; // ivar: _ongoingCycleFactors
@property (readonly, nonatomic) HKQuantity *recentBasalBodyTemperature; // ivar: _recentBasalBodyTemperature
@property (readonly, nonatomic) NSUInteger recentSymptoms; // ivar: _recentSymptoms
@property (readonly, nonatomic) HKMCStatistics *statistics; // ivar: _statistics


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatistics:(id)arg0 menstruationProjections:(id)arg1 fertileWindowProjections:(id)arg2 cycles:(id)arg3 recentSymptoms:(NSUInteger)arg4 recentBasalBodyTemperature:(id)arg5 lastLoggedDayIndex:(id)arg6 lastMenstrualFlowDayIndex:(id)arg7 ;
-(id)initWithStatistics:(id)arg0 menstruationProjections:(id)arg1 fertileWindowProjections:(id)arg2 cycles:(id)arg3 recentSymptoms:(NSUInteger)arg4 recentBasalBodyTemperature:(id)arg5 lastLoggedDayIndex:(id)arg6 lastMenstrualFlowDayIndex:(id)arg7 ongoingCycleFactors:(id)arg8 ;
-(id)initWithStatistics:(id)arg0 menstruationProjections:(id)arg1 fertileWindowProjections:(id)arg2 cycles:(id)arg3 recentSymptoms:(NSUInteger)arg4 recentBasalBodyTemperature:(id)arg5 lastLoggedDayIndex:(id)arg6 lastMenstrualFlowDayIndex:(id)arg7 ongoingCycleFactors:(id)arg8 numberOfDailySleepHeartRateStatisticsForPast100Days:(NSInteger)arg9 numberOfDailyAwakeHeartRateStatisticsForPast100Days:(NSInteger)arg10 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif