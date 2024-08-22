// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADNOTIFICATIONMONITOROPERATIONGROUP_H
#define CADNOTIFICATIONMONITOROPERATIONGROUP_H

@protocol CADNotificationMonitorInterface;


#import "CADOperationGroup.h"

@interface CADNotificationMonitorOperationGroup : CADOperationGroup <CADNotificationMonitorInterface>





+(BOOL)requiresEventAccess;
+(id)whitelistedBundles;
-(void)CADCalendarSetClearedFromNotificationCenter:(id)arg0 error:(id)arg1 ;
-(void)CADDatabaseGetEventNotificationItemsAfterDate:(id)arg0 excludingUncheckedCalendars:(BOOL)arg1 filteredByShowsNotificationsFlag:(BOOL)arg2 reply:(id)arg3 ;
-(void)CADDatabaseGetInboxRepliedSectionItems:(id)arg0 ;
-(void)CADDatabaseGetInviteReplyNotifications:(id)arg0 ;
-(void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(id)arg0 excludingDelegateSources:(BOOL)arg1 filteredByShowsNotificationsFlag:(BOOL)arg2 expanded:(BOOL)arg3 reply:(id)arg4 ;
-(void)CADDatabaseGetResourceChanges:(id)arg0 ;
-(void)CADDatabaseGetSharedCalendarInvitationsWithReply:(id)arg0 ;
-(void)CADEventSetInvitationStatus:(int)arg0 forEvents:(id)arg1 error:(id)arg2 ;
-(void)CADResourceChange:(id)arg0 setAlertedWithError:(id)arg1 ;


@end


#endif