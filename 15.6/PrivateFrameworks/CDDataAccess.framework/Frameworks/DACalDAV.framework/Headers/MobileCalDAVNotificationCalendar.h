// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOBILECALDAVNOTIFICATIONCALENDAR_H
#define MOBILECALDAVNOTIFICATIONCALENDAR_H



#import "MobileCalDAVCalendar.h"
#import "MobileCalDAVAccount.h"

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar

@property (readonly, nonatomic) MobileCalDAVAccount *daAccount;
@property (nonatomic) int mostRecentNotificationChangeIndex; // ivar: _mostRecentNotificationChangeIndex


-(BOOL)_handleInviteNotification:(id)arg0 withResource:(id)arg1 uid:(id)arg2 ;
-(BOOL)_handleInviteReply:(id)arg0 withResource:(id)arg1 owningNotification:(id)arg2 uid:(id)arg3 ;
-(BOOL)_handleResourceChanged:(id)arg0 withResource:(id)arg1 uid:(id)arg2 ;
-(BOOL)_removeCalendarItemWithURL:(id)arg0 ;
-(BOOL)isNotification;
-(BOOL)setEtag:(id)arg0 forItemAtURL:(id)arg1 ;
-(BOOL)setScheduleTag:(id)arg0 forItemAtURL:(id)arg1 ;
-(BOOL)setURL:(id)arg0 forResourceWithUUID:(id)arg1 ;
-(BOOL)updateResourcesFromServer:(id)arg0 ;
-(Class)appSpecificCalendarItemClass;
-(id)_accountLoggingDescription;
-(id)_changedAttributesFromCalendarChanges:(id)arg0 ;
-(id)_copyNotificationWithExternalID:(id)arg0 ;
-(id)_copyNotificationWithUniqueIdentifier:(id)arg0 ;
-(id)_notifications;
-(id)allItemURLs;
-(id)daPrincipal;
-(id)etagsForItemURLs:(id)arg0 ;
-(id)initWithCalendarURL:(id)arg0 list:(id)arg1 principal:(id)arg2 title:(id)arg3 ;
-(void)clearEventChanges;
-(void)prepareMergeSyncActionsWithCompletionBlock:(id)arg0 ;
-(void)prepareSyncActionsWithCompletionBlock:(id)arg0 ;
-(void)recordDiagnosticsForAccountSync:(id)arg0 ;


@end


#endif