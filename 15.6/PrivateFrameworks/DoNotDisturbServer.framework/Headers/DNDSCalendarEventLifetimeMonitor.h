// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSCALENDAREVENTLIFETIMEMONITOR_H
#define DNDSCALENDAREVENTLIFETIMEMONITOR_H

@class EKEventStore, NSDate;


#import "DNDSBaseLifetimeMonitor.h"

@interface DNDSCalendarEventLifetimeMonitor : DNDSBaseLifetimeMonitor {
    EKEventStore *_eventStore;
    NSDate *_lifetimeTimerFireDate;
}




+(Class)lifetimeClass;
-(id)_eventForCalendarEventLifetime:(id)arg0 assertionStartDate:(id)arg1 ;
-(id)_eventStore;
-(id)_eventStoreCreatingIfNeeded;
-(id)activeDateIntervalForCalendarEventLifetime:(id)arg0 assertionStartDate:(id)arg1 ;
-(id)init;
-(id)updateForModeAssertions:(id)arg0 date:(id)arg1 ;
-(void)_calendarEventStoreChangedWithNotification:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif