// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMCANALYSIS_H
#define HKMCANALYSIS_H

@class NSNumber, NSArray, NSString;
@protocol HKRedactedDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKMCRecentBasalBodyTemperature.h"
#import "HKMCStatistics.h"

@interface HKMCAnalysis : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSNumber *anchor; // ivar: _anchor
@property (readonly, nonatomic) NSArray *cycles; // ivar: _cycles
@property (readonly, nonatomic) NSArray *deviations; // ivar: _deviations
@property (readonly, nonatomic) NSArray *fertileWindowProjections; // ivar: _fertileWindowProjections
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, nonatomic) BOOL isPeriodLogLate; // ivar: _isPeriodLogLate
@property (readonly, copy, nonatomic) NSNumber *lastLoggedDayIndex; // ivar: _lastLoggedDayIndex
@property (readonly, copy, nonatomic) NSNumber *lastMenstrualFlowDayIndex; // ivar: _lastMenstrualFlowDayIndex
@property (readonly, nonatomic) NSArray *menstruationProjections; // ivar: _menstruationProjections
@property (readonly, nonatomic) NSInteger numberOfDailyAwakeHeartRateStatisticsForPast100Days; // ivar: _numberOfDailyAwakeHeartRateStatisticsForPast100Days
@property (readonly, nonatomic) NSInteger numberOfDailySleepHeartRateStatisticsForPast100Days; // ivar: _numberOfDailySleepHeartRateStatisticsForPast100Days
@property (readonly, nonatomic) NSArray *ongoingCycleFactors; // ivar: _ongoingCycleFactors
@property (readonly, nonatomic) HKMCRecentBasalBodyTemperature *recentBasalBodyTemperature; // ivar: _recentBasalBodyTemperature
@property (readonly, nonatomic) NSUInteger recentSymptoms; // ivar: _recentSymptoms
@property (readonly, nonatomic) HKMCStatistics *statistics; // ivar: _statistics


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatistics:(id)arg0 menstruationProjections:(id)arg1 fertileWindowProjections:(id)arg2 cycles:(id)arg3 deviations:(id)arg4 recentSymptoms:(NSUInteger)arg5 recentBasalBodyTemperature:(id)arg6 lastLoggedDayIndex:(id)arg7 lastMenstrualFlowDayIndex:(id)arg8 isPeriodLogLate:(BOOL)arg9 ongoingCycleFactors:(id)arg10 ;
-(id)initWithStatistics:(id)arg0 menstruationProjections:(id)arg1 fertileWindowProjections:(id)arg2 cycles:(id)arg3 deviations:(id)arg4 recentSymptoms:(NSUInteger)arg5 recentBasalBodyTemperature:(id)arg6 lastLoggedDayIndex:(id)arg7 lastMenstrualFlowDayIndex:(id)arg8 isPeriodLogLate:(BOOL)arg9 ongoingCycleFactors:(id)arg10 numberOfDailySleepHeartRateStatisticsForPast100Days:(NSInteger)arg11 numberOfDailyAwakeHeartRateStatisticsForPast100Days:(NSInteger)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif