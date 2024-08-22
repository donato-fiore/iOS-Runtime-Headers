// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVNOTIFICATIONHANDLER_H
#define CALDAVNOTIFICATIONHANDLER_H


#import <Foundation/Foundation.h>


@interface CalDAVNotificationHandler : NSObject



+(?)_copyCalendarForReplyItem:(?)arg0 inDatabase:(?)arg1 storecalendarHomeURL;
+(?)_copyNotificationWithExternalID:(?)arg0 inCalendar:(?)arg1 withDatabaserecordIDMap;
+(?)_copyNotificationWithUniqueIdentifier:(?)arg0 inCalendar:(?)arg1 orStore:(?)arg2 withDatabaserecordIDMap;
+(?)_createResourceChange:(?)arg0 withType:(?)arg1 forNotification:(?)arg2 withRecurrenceID:(?)arg3 database:(?)arg4 storecalendarHomeURL;
+(?)_handleInviteNotification:(?)arg0 withUid:(?)arg1 serverURL:(?)arg2 syncKey:(?)arg3 database:(?)arg4 store:(?)arg5 calendarHomeURL:(?)arg6 notificationCalendar:(?)arg7 notificationCalendarURLrecordIDMap;
+(?)_handleInviteReply:(?)arg0 withUid:(?)arg1 serverURL:(?)arg2 syncKey:(?)arg3 owningNotification:(?)arg4 database:(?)arg5 store:(?)arg6 calendarHomeURL:(?)arg7 notificationCalendar:(?)arg8 notificationCalendarURL:(?)arg9 contactsProviderrecordIDMap;
+(?)_handleResourceChanged:(?)arg0 withUid:(?)arg1 serverURL:(?)arg2 syncKey:(?)arg3 database:(?)arg4 store:(?)arg5 calendarHomeURL:(?)arg6 notificationCalendar:(?)arg7 notificationCalendarURLrecordIDMap;
+(?)processNotificationWithData:(?)arg0 serverURL:(?)arg1 syncKey:(?)arg2 database:(?)arg3 notificationCalendar:(?)arg4 store:(?)arg5 calendarHomeURL:(?)arg6 notificationCalendarURL:(?)arg7 contactsProviderrecordIDMap;
+(?)setURL:(?)arg0 forResourceWithUUID:(?)arg1 withDatabase:(?)arg2 notificationCalendar:(?)arg3 notificationCalendarURLrecordIDMap;
+(id)_changedAttributesFromCalendarChanges:(id)arg0 ;


@end


#endif