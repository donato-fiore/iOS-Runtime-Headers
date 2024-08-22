// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPANALYTICSDAILYREPORTBUILDER_H
#define HDSPANALYTICSDAILYREPORTBUILDER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPAnalyticsDailyReportBuilder : NSObject

@property (readonly, nonatomic) NSArray *daySummaries; // ivar: _daySummaries
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) ? morningIndexRange; // ivar: _morningIndexRange


-(BOOL)_changedSchedule:(id)arg0 withinNumberOfDays:(NSUInteger)arg1 currentDate:(id)arg2 calendar:(id)arg3 ;
-(BOOL)_didInteractWithWindDownActionsWithinLastTwoDays;
-(BOOL)_woreWatchToSleepLastNight;
-(NSInteger)_daysWatchWornToSleepOverLastNumberOfDays:(NSInteger)arg0 excludeWeekdays:(BOOL)arg1 calendar:(id)arg2 ;
-(id)_biologicalSex;
-(id)_dailyReportEvent;
-(id)_userAgeForCurrentDate:(id)arg0 ;
-(id)_weeksSinceOnboardDate:(id)arg0 currentDate:(id)arg1 calendar:(id)arg2 ;
-(id)_windDownEvents;
-(id)analyticsManager;
-(id)analyticsStore;
-(id)buildReports;
-(id)currentDate;
-(id)healthStore;
-(id)initWithEnvironment:(id)arg0 daySummaries:(id)arg1 morningIndexRange:(struct ? )arg2 ;
-(id)sleepSchedule;
-(id)sleepSettings;


@end


#endif