// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADREMINDEROPERATIONGROUP_H
#define CADREMINDEROPERATIONGROUP_H

@protocol CADReminderInterface;


#import "CADOperationGroup.h"

@interface CADReminderOperationGroup : CADOperationGroup <CADReminderInterface>





+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
-(void)CADDatabaseGetCountOfRemindersWithPredicate:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(id)arg0 ;
-(void)CADDatabaseGetProperties:(id)arg0 forReminders:(id)arg1 reply:(id)arg2 ;
-(void)CADDatabaseSetDefaultCalendarForNewReminders:(id)arg0 ;
-(void)CADScheduledTaskCacheGetDaysAndTaskCounts:(id)arg0 ;


@end


#endif