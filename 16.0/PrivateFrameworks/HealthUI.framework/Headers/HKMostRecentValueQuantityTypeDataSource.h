// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMOSTRECENTVALUEQUANTITYTYPEDATASOURCE_H
#define HKMOSTRECENTVALUEQUANTITYTYPEDATASOURCE_H

@class NSCalendar;


#import "HKQuantityTypeDataSource.h"

@interface HKMostRecentValueQuantityTypeDataSource : HKQuantityTypeDataSource

@property (nonatomic) BOOL attenuated; // ivar: _attenuated
@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar


-(BOOL)_interval:(id)arg0 isEqualToInterval:(id)arg1 ;
-(id)_dataSourceValueFromMostRecentQuantity:(id)arg0 quantityDateInterval:(id)arg1 statisticsInterval:(id)arg2 ;
-(id)_intervalFromZoomLevel:(NSInteger)arg0 ;
-(id)_middleDateFromInterval:(id)arg0 endDate:(id)arg1 ;
-(id)initWithUnitController:(id)arg0 displayType:(id)arg1 healthStore:(id)arg2 currentCalendar:(id)arg3 ;
-(id)initWithUnitController:(id)arg0 displayType:(id)arg1 healthStore:(id)arg2 currentCalendar:(id)arg3 attenuated:(BOOL)arg4 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDescription;


@end


#endif