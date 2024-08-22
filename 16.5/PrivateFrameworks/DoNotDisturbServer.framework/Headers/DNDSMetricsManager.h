// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSMETRICSMANAGER_H
#define DNDSMETRICSMANAGER_H

@class NSCalendar;
@protocol OS_dispatch_queue, DNDSBackingStore;

#import <Foundation/Foundation.h>

#import "DNDSMutableMetricsRecord.h"

@interface DNDSMetricsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSBackingStore> *_metricsBackingStore;
    DNDSMutableMetricsRecord *_metricsRecord;
    NSCalendar *_calendar;
}




-(id)_calendar;
-(id)_dateForYesterday;
-(id)_dateFormatter;
-(id)_metricsDayStringForDate:(id)arg0 ;
-(id)_metricsMonthStringForDate:(id)arg0 ;
-(id)_metricsWeekStringForDate:(id)arg0 ;
-(id)_startOfLastMonth;
-(id)_startOfLastWeek;
-(id)_startOfMonthWithDate:(id)arg0 ;
-(id)_startOfWeekWithDate:(id)arg0 ;
-(id)init;
-(void)_aggregateMetricsWithEnabled:(BOOL)arg0 manuallyEnabled:(BOOL)arg1 numberOfNewSessions:(int)arg2 numberOfNewManualSessions:(int)arg3 controlCenterPhone:(BOOL)arg4 controlCenterWatch:(BOOL)arg5 type:(id)arg6 mode:(id)arg7 dayOfWeek:(id)arg8 ;
-(void)_sendDailyHeartbeatIfNeeded;
-(void)_sendMonthlyHeartbeatIfNeeded;
-(void)_sendWeeklyHeartbeatIfNeeded;
-(void)_writeMetricsToStore:(id)arg0 ;
-(void)assertionTaken:(id)arg0 withClientDetails:(id)arg1 lockState:(NSUInteger)arg2 ;
-(void)sendMetricsHeartbeatsIfNeeded;


@end


#endif