// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSSCHEDULELIFETIMEMONITOR_H
#define DNDSSCHEDULELIFETIMEMONITOR_H

@class NSDate, NSCalendar;
@protocol DNDSScheduleLifetimeMonitorDataSource;


#import "DNDSBaseLifetimeMonitor.h"

@interface DNDSScheduleLifetimeMonitor : DNDSBaseLifetimeMonitor {
    NSDate *_lifetimeTimerFireDate;
}


@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (weak, nonatomic) NSObject<DNDSScheduleLifetimeMonitorDataSource> *dataSource;


+(Class)lifetimeClass;
-(id)_activeDateIntervalForScheduleLifetime:(id)arg0 assertion:(id)arg1 date:(id)arg2 ignoreMatchScheduleStartDate:(BOOL)arg3 ;
-(id)_activeDateIntervalForScheduleLifetime:(id)arg0 assertionStartDate:(id)arg1 date:(id)arg2 scheduleSettings:(id)arg3 calendar:(id)arg4 ignoreMatchScheduleStartDate:(BOOL)arg5 ;
-(id)activeDateIntervalForScheduleLifetime:(id)arg0 assertion:(id)arg1 date:(id)arg2 ;
-(id)nextActiveDateIntervalForScheduleLifetime:(id)arg0 assertion:(id)arg1 date:(id)arg2 ;
-(id)updateForModeAssertions:(id)arg0 date:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif