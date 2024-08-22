// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADNOTIFICATIONUTILITIES_H
#define CADNOTIFICATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface CADNotificationUtilities : NSObject



+(?)CADDatabaseGetEventNotificationItemsWithDatabase:(?)arg0 afterDate:(?)arg1 forSourceWithExternalIdentifier:(?)arg2 excludingDelegateSources:(?)arg3 filteredByShowsNotificationsFlag:(?)arg4 earliestExpirationDate:(?)arg5 notificationTypes:(?)arg6 rowIDsoccurrenceDates;
+(BOOL)_storeIsDelegate:(*void)arg0 ;
+(BOOL)storeIsReadOnlyDelegate:(*void)arg0 ;
+(id)_stringForNotificationType:(int)arg0 ;
+(int)_gatherEventInvitationsAndRepliesWithContext:(id)arg0 ;
+(int)_gatherSharedCalendarInvitationsWithContext:(id)arg0 ;
+(int)_gatherSharedCalendarInviteReplyNotification:(*void)arg0 withContext:(id)arg1 ;
+(int)_gatherSharedCalendarResourceChangeNotification:(*void)arg0 withContext:(id)arg1 ;
+(int)_gatherSharedCalendarResponsesAndResourceChangesWithContext:(id)arg0 ;
+(int)_gatherSuggestionResourceChangeNotification:(*void)arg0 withContext:(id)arg1 ;
+(void)_logNotificationCountsForNotificationTypes:(id)arg0 ;


@end


#endif