// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADNOTIFICATIONUTILITIES_H
#define CADNOTIFICATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface CADNotificationUtilities : NSObject



+(?)_gatherSharedCalendarInviteReplyNotification:(?)arg0 withContext:(?)arg1 databasedatabaseID;
+(?)_gatherSharedCalendarResourceChangeNotification:(?)arg0 withContext:(?)arg1 databasedatabaseID;
+(?)_gatherSuggestionResourceChangeNotification:(?)arg0 withContext:(?)arg1 databasedatabaseID;
+(BOOL)_storeIsDelegate:(*void)arg0 ;
+(BOOL)storeIsReadOnlyDelegate:(*void)arg0 ;
+(id)_attendeeObjectIDsFromNotifications:(id)arg0 ;
+(id)_notificationTypesFromNotifications:(id)arg0 ;
+(id)_objectIDsFromNotifications:(id)arg0 ;
+(id)_occurrenceDatesFromNotifications:(id)arg0 ;
+(id)_stringForNotificationType:(int)arg0 ;
+(id)flattenedNotificationsFromNotifications:(id)arg0 expanded:(BOOL)arg1 ;
+(int)CADDatabaseGetEventNotificationItemsWithConnection:(id)arg0 afterDate:(id)arg1 forSourceWithExternalIdentifier:(id)arg2 excludingDelegateSources:(BOOL)arg3 excludingUncheckedCalendars:(BOOL)arg4 filteredByShowsNotificationsFlag:(BOOL)arg5 expanded:(BOOL)arg6 earliestExpirationDate:(*id)arg7 notificationTypes:(*id)arg8 objectIDs:(*id)arg9 occurrenceDates:(*id)arg10 attendeeObjectIDs:(*id)arg11 ;
+(int)_gatherEventInvitationsAndRepliesWithContext:(id)arg0 ;
+(int)_gatherSharedCalendarInvitationsWithContext:(id)arg0 ;
+(int)_gatherSharedCalendarResponsesAndResourceChangesWithContext:(id)arg0 ;
+(void)_logNotificationCountsForNotifications:(id)arg0 ;


@end


#endif