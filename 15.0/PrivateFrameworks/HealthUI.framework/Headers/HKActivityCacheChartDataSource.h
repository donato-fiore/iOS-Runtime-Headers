// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKACTIVITYCACHECHARTDATASOURCE_H
#define HKACTIVITYCACHECHARTDATASOURCE_H

@class NSCalendar;


#import "HKHealthQueryChartCacheDataSource.h"
#import "HKUnitPreferenceController.h"

@interface HKActivityCacheChartDataSource : HKHealthQueryChartCacheDataSource {
    NSCalendar *_gregorianCalendar;
    NSCalendar *_gregorianNonUTCCalendar;
    HKUnitPreferenceController *_unitController;
}




-(id)_cachePredicateForStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)_dateComponentsForDate:(id)arg0 ;
-(id)_unitForDisplayType;
-(id)_workoutsPredicateForStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)initWithUnitController:(id)arg0 healthStore:(id)arg1 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDescription;
-(void)_handleActivityCaches:(id)arg0 workouts:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 completion:(id)arg4 ;


@end


#endif