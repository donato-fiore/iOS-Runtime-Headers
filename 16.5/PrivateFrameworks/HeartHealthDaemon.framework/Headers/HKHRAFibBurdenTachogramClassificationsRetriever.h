// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRAFIBBURDENTACHOGRAMCLASSIFICATIONSRETRIEVER_H
#define HKHRAFIBBURDENTACHOGRAMCLASSIFICATIONSRETRIEVER_H

@class HDProfile, HKSeriesType, HKCalendarCache;

#import <Foundation/Foundation.h>


@interface HKHRAFibBurdenTachogramClassificationsRetriever : NSObject {
    HDProfile *_profile;
    HKSeriesType *_seriesType;
    HKCalendarCache *_calendarCache;
    id *_dateGenerator;
}




-(BOOL)_shouldAnalyzeSample:(id)arg0 ;
// -(id)_tachogramClassificationsWithPredicate:(id)arg0 tachogramClassifier:(id)arg1 error:(*id)arg2 dayIndexBlock:(id)arg3 filterBlock:(unk)arg4  ;
-(id)_totalDatePredicateForStartDayIndex:(NSInteger)arg0 endDayIndex:(NSInteger)arg1 ;
-(id)initWithProfile:(id)arg0 calendarCache:(id)arg1 ;
// -(id)initWithProfile:(id)arg0 dateGenerator:(id)arg1 calendarCache:(unk)arg2  ;
-(id)tachogramClassificationsDayIndexRange:(struct ? )arg0 tachogramClassifier:(id)arg1 error:(*id)arg2 ;
-(id)tachogramClassificationsForLastSixWeeksOfHoursFrom:(NSInteger)arg0 to:(NSInteger)arg1 julianDayToMajorityTimeZone:(id)arg2 tachogramClassifier:(id)arg3 error:(*id)arg4 ;
-(id)tachogramClassificationsForLastSixWeeksOfWeekday:(NSInteger)arg0 tachogramClassifier:(id)arg1 error:(*id)arg2 ;


@end


#endif