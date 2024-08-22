// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOBILECALDAVNOTIFICATIONCALENDAR_H
#define MOBILECALDAVNOTIFICATIONCALENDAR_H

@class CalDiagNotificationCollectionSync;


#import "MobileCalDAVCalendar.h"

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar

@property (retain, nonatomic) CalDiagNotificationCollectionSync *notificationCollectionSyncDiagnostics; // ivar: _notificationCollectionSyncDiagnostics


-(*void)_copyNotificationWithExternalID:(id)arg0 ;
-(*void)_copyNotificationWithUniqueIdentifier:(id)arg0 inCalendar:(*void)arg1 orStore:(*void)arg2 ;
-(BOOL)_removeCalendarItemWithURL:(id)arg0 ;
-(BOOL)isNotification;
-(BOOL)setEtag:(id)arg0 forItemAtURL:(id)arg1 ;
-(BOOL)setScheduleTag:(id)arg0 forItemAtURL:(id)arg1 ;
-(BOOL)setURL:(id)arg0 forResourceWithUUID:(id)arg1 ;
-(BOOL)shouldCalendarBeHidden;
-(BOOL)updateResourcesFromServer:(id)arg0 ;
-(Class)appSpecificCalendarItemClass;
-(id)allItemURLs;
-(id)etagsForItemURLs:(id)arg0 ;
-(id)initWithCalendarURL:(id)arg0 calendar:(*void)arg1 principal:(id)arg2 title:(id)arg3 ;
-(void)clearEventChanges;
-(void)prepareMergeSyncActionsWithCompletionBlock:(id)arg0 ;
-(void)prepareSyncActionsWithCompletionBlock:(id)arg0 ;
-(void)recordDiagnosticsForAccountSync:(id)arg0 ;


@end


#endif