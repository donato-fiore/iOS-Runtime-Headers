// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRAFIBBURDENSEVENDAYANALYSISMANAGER_H
#define HKHRAFIBBURDENSEVENDAYANALYSISMANAGER_H

@class HDProfile, HKCalendarCache;

#import <Foundation/Foundation.h>

#import "HKHRAFibBurdenSevenDayAnalysisModeDeterminer.h"
#import "HKHRAFibBurdenAnalyzer.h"

@interface HKHRAFibBurdenSevenDayAnalysisManager : NSObject {
    HDProfile *_profile;
    HKHRAFibBurdenSevenDayAnalysisModeDeterminer *_modeDeterminer;
    HKHRAFibBurdenAnalyzer *_analyzer;
    HKCalendarCache *_calendarCache;
    id *_dateGenerator;
}




-(BOOL)_isDayOneDayAfterCalendarWeekWithCurrentDate:(id)arg0 ;
-(id)_createBurdenSampleWithPercentage:(CGFloat)arg0 burdenPercentageWasClampedToLowerBound:(BOOL)arg1 range:(struct ? )arg2 shouldSaveSampleToDatabase:(BOOL)arg3 error:(*id)arg4 ;
-(id)analyzePreviousCalendarWeekWithFeatureStatus:(id)arg0 shouldSaveSampleToDatabase:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithProfile:(id)arg0 analyzer:(id)arg1 ;
-(id)initWithProfile:(id)arg0 modeDeterminer:(id)arg1 analyzer:(id)arg2 calendarCache:(id)arg3 dateGenerator:(id)arg4 ;
-(struct ? )_determineDayIndexRangeForPreviousCalendarWeekWithCurrentDate:(id)arg0 ;


@end


#endif