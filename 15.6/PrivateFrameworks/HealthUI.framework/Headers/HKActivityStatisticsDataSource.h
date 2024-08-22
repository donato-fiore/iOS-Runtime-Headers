// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKACTIVITYSTATISTICSDATASOURCE_H
#define HKACTIVITYSTATISTICSDATASOURCE_H

@class NSPredicate, NSCalendar;


#import "HKHealthQueryChartCacheDataSource.h"
#import "HKUnitPreferenceController.h"

@interface HKActivityStatisticsDataSource : HKHealthQueryChartCacheDataSource {
    NSPredicate *_sourcesPredicate;
    NSCalendar *_gregorianCalendar;
    NSCalendar *_gregorianNonUTCCalendar;
    HKUnitPreferenceController *_unitController;
}




-(id)_cachePredicateForStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)_calorieValueFromStatsCollection:(id)arg0 range:(id)arg1 ;
-(id)_dateComponentsForDate:(id)arg0 ;
-(id)_workoutsPredicateForStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)initWithUnitController:(id)arg0 healthStore:(id)arg1 sourcesPredicate:(id)arg2 ;
-(id)queriesForStartDate:(id)arg0 endDate:(id)arg1 statisticsInterval:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryDescription;
-(void)_handleStatistics:(id)arg0 activityCaches:(id)arg1 workouts:(id)arg2 completion:(id)arg3 ;


@end


#endif