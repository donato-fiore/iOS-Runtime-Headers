// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSINGLEDAILYVALUEQUANTITYTYPEDATASOURCE_H
#define HKSINGLEDAILYVALUEQUANTITYTYPEDATASOURCE_H



#import "HKQuantityTypeDataSource.h"

@interface HKSingleDailyValueQuantityTypeDataSource : HKQuantityTypeDataSource



-(BOOL)_matchesDailyValues:(id)arg0 ;
-(BOOL)_shouldEmitOnlySinglePointForStatistics:(id)arg0 ;
-(BOOL)requiresPointRealignmentToMidnightForStatisticsInterval:(id)arg0 ;
-(NSUInteger)calendarUnitForTimeScope:(NSInteger)arg0 displayType:(id)arg1 ;
-(id)_componentsForDailyValues;
-(id)_quantityValueFromStatistics:(id)arg0 statisticsInterval:(id)arg1 date:(id)arg2 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDescription;
-(id)statisticsIntervalForTimeScope:(NSInteger)arg0 displayType:(id)arg1 ;


@end


#endif