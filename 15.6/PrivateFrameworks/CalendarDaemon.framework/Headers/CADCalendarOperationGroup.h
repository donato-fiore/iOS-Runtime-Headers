// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADCALENDAROPERATIONGROUP_H
#define CADCALENDAROPERATIONGROUP_H

@protocol CADCalendarInterface;


#import "CADOperationGroup.h"

@interface CADCalendarOperationGroup : CADOperationGroup <CADCalendarInterface>





+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
-(int)_tryPerformBlockWithCalendarID:(id)arg0 forAction:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)CADCalendar:(id)arg0 hasEvents:(id)arg1 ;
-(void)CADCalendar:(id)arg0 hasReminders:(id)arg1 ;
-(void)CADDatabaseGetCalendarsWithFaultedProperties:(id)arg0 reply:(id)arg1 ;


@end


#endif