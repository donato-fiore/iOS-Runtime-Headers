// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMCDAILYHEARTSTATISTICS_H
#define HKMCDAILYHEARTSTATISTICS_H

@class NSString;
@protocol NSSecureCoding, NSCopying, HKSampleAggregateCacheProviding;

#import <Foundation/Foundation.h>

#import "HKMCHeartStatistics.h"

@interface HKMCDailyHeartStatistics : NSObject <NSSecureCoding, NSCopying, HKSampleAggregateCacheProviding>



@property (readonly, nonatomic) NSInteger dayIndex; // ivar: _dayIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HKMCHeartStatistics *tenthPercentileAsleepHeartRateStatistics; // ivar: _tenthPercentileAsleepHeartRateStatistics
@property (readonly, copy, nonatomic) HKMCHeartStatistics *tenthPercentileAwakeHeartRateStatistics; // ivar: _tenthPercentileAwakeHeartRateStatistics


+(BOOL)supportsSecureCoding;
+(id)dailyHeartStatisticsWithDayIndex:(NSInteger)arg0 asleepStatistics:(id)arg1 awakeStatistics:(id)arg2 ;
-(BOOL)getData:(*id)arg0 error:(*id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)bucketIndexForIntervalComponents:(id)arg0 anchorDate:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDayIndex:(NSInteger)arg0 tenthPercentileAsleepHeartRateStatistics:(id)arg1 tenthPercentileAwakeHeartRateStatistics:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif