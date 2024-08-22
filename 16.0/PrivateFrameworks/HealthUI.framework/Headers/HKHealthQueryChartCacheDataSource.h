// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEALTHQUERYCHARTCACHEDATASOURCE_H
#define HKHEALTHQUERYCHARTCACHEDATASOURCE_H

@class HKHealthStore, NSCalendar, NSString;
@protocol HKChartCacheDataSource;

#import <Foundation/Foundation.h>

#import "HKDisplayType.h"

@interface HKHealthQueryChartCacheDataSource : NSObject <HKChartCacheDataSource>

 {
    HKHealthStore *_healthStore;
}


@property (retain, nonatomic) NSCalendar *calendarOverride; // ivar: _calendarOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger queryAlignment; // ivar: _queryAlignment
@property (readonly) Class superclass;


-(BOOL)supportsChartQueryDataGeneration;
-(NSUInteger)calendarUnitForTimeScope:(NSInteger)arg0 displayType:(id)arg1 ;
-(id)_buildDescriptionFromStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 ;
-(id)_calendar;
-(id)_shiftedQueryIntervalIfNecessaryForStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 ;
-(id)chartPointsFromQueryData:(id)arg0 dataIsFromRemoteSource:(BOOL)arg1 ;
-(id)codableQueryDataWithType:(int)arg0 startDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 queryDataObject:(id)arg4 ;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 ;
-(id)mappingFunctionForContext:(SEL)arg0 ;
-(id)operationForIdentifier:(id)arg0 priorityDelegate:(id)arg1 completion:(id)arg2 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDataForStartDate:(SEL)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 healthStore:(id)arg3 completionHandler:(id)arg4 ;
-(id)queryDescription;
-(id)statisticsIntervalForTimeScope:(NSInteger)arg0 displayType:(id)arg1 ;


@end


#endif