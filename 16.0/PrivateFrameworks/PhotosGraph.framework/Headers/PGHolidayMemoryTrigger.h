// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGHOLIDAYMEMORYTRIGGER_H
#define PGHOLIDAYMEMORYTRIGGER_H

@class CLSHolidayCalendarEventService;


#import "PGMemoryTrigger.h"

@interface PGHolidayMemoryTrigger : PGMemoryTrigger

@property (readonly, nonatomic) CLSHolidayCalendarEventService *holidayService; // ivar: _holidayService


-(id)initWithLoggingConnection:(id)arg0 holidayService:(id)arg1 ;


@end


#endif