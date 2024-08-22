// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTRECURRENCEEDITITEM_H
#define EKEVENTRECURRENCEEDITITEM_H



#import "EKCalendarItemRecurrenceEditItem.h"

@interface EKEventRecurrenceEditItem : EKCalendarItemRecurrenceEditItem



-(id)event;
-(id)minRecurrenceEndDate;
-(id)recurrenceDate;
-(id)recurrenceTimeZone;
-(id)stringForDate:(id)arg0 ;
-(void)setCalendarItem:(id)arg0 store:(id)arg1 ;


@end


#endif