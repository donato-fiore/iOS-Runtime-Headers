// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPSLEEPEVENTTIMELINEBUILDER_H
#define HKSPSLEEPEVENTTIMELINEBUILDER_H

@class NSCalendar, NSDate;

#import <Foundation/Foundation.h>

#import "HKSPSleepEventTimelineResults.h"
#import "HKSPSleepScheduleModel.h"

@interface HKSPSleepEventTimelineBuilder : NSObject

@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) HKSPSleepEventTimelineResults *results; // ivar: _results
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel; // ivar: _sleepScheduleModel


+(id)builderWithSleepScheduleModel:(id)arg0 date:(id)arg1 ;
-(id)_windDownDateForBedtimeDate:(id)arg0 ;
-(id)buildTimelineWithOptions:(NSUInteger)arg0 ;
-(id)initWithSleepScheduleModel:(id)arg0 date:(id)arg1 ;
-(void)_addSessionToTimelineWithWakeUpDate:(id)arg0 bedtimeDate:(id)arg1 windDownDate:(id)arg2 occurrence:(id)arg3 ;
-(void)_adjustSessionForConfirmedWakeUp;
-(void)_adjustSessionForSnoozedWakeUpAlarm;
-(void)_adjustSessions;
-(void)_gatherSessions;
-(void)_gatherSessionsForOccurrence:(id)arg0 overrideOccurrence:(id)arg1 ;
-(void)_gatherSessionsForValidationForOccurrence:(id)arg0 overrideOccurrence:(id)arg1 ;


@end


#endif