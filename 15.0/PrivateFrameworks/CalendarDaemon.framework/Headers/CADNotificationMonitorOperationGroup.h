// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADNOTIFICATIONMONITOROPERATIONGROUP_H
#define CADNOTIFICATIONMONITOROPERATIONGROUP_H

@protocol CADNotificationMonitorInterface;


#import "CADOperationGroup.h"

@interface CADNotificationMonitorOperationGroup : CADOperationGroup <CADNotificationMonitorInterface>





+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(id)whitelistedBundles;
-(void)CADCalendar:(id)arg0 setAlertedWithError:(id)arg1 ;
-(void)CADCalendarSetClearedFromNotificationCenter:(id)arg0 error:(id)arg1 ;
-(void)CADDatabaseGetEventNotificationItemsAfterDate:(id)arg0 filteredByShowsNotificationsFlag:(BOOL)arg1 calculateEarliestExpirationDate:(BOOL)arg2 reply:(id)arg3 ;
-(void)CADDatabaseGetInboxRepliedSectionItems:(id)arg0 ;
-(void)CADDatabaseGetInviteReplyNotifications:(id)arg0 ;
-(void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(id)arg0 excludingDelegateSources:(BOOL)arg1 filteredByShowsNotificationsFlag:(BOOL)arg2 reply:(id)arg3 ;
-(void)CADDatabaseGetResourceChanges:(id)arg0 ;
-(void)CADDatabaseGetSharedCalendarInvitationsWithReply:(id)arg0 ;
-(void)CADEvent:(id)arg0 setAlertedWithError:(id)arg1 ;
-(void)CADEventSetInvitationStatus:(int)arg0 forEvents:(id)arg1 error:(id)arg2 ;
-(void)CADInviteReplyNotification:(id)arg0 setAlertedWithError:(id)arg1 ;
-(void)CADResourceChange:(id)arg0 setAlertedWithError:(id)arg1 ;


@end


#endif