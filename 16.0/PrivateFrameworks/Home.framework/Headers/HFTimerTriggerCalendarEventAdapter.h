// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTIMERTRIGGERCALENDAREVENTADAPTER_H
#define HFTIMERTRIGGERCALENDAREVENTADAPTER_H



#import "HFTimerTriggerTimeEventAdapter.h"

@interface HFTimerTriggerCalendarEventAdapter : HFTimerTriggerTimeEventAdapter



+(BOOL)hasWeekdayRecurrenceInRecurrences:(id)arg0 ;
-(id)createTriggerWithName:(id)arg0 timeZone:(id)arg1 recurrences:(id)arg2 ;
-(id)updateTrigger:(id)arg0 ;


@end


#endif