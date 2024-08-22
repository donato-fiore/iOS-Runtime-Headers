// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOBILECALDAVINBOXCALENDAR_H
#define MOBILECALDAVINBOXCALENDAR_H

@class CalDiagInboxCollectionSync;


#import "MobileCalDAVCalendar.h"

@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar

@property (retain, nonatomic) CalDiagInboxCollectionSync *inboxCollectionSyncDiagnostics; // ivar: _inboxCollectionSyncDiagnostics


-(*void)_copyEventActionWithURL:(id)arg0 forCalItemWithUniqueIdentifier:(id)arg1 ;
-(BOOL)_removeInvitationWithURL:(id)arg0 ;
-(BOOL)deleteResourcesAtURLs:(id)arg0 ;
-(BOOL)isScheduleInbox;
-(BOOL)shouldCalendarBeHidden;
-(BOOL)updateResourcesFromServer:(id)arg0 ;
-(id)allItemURLs;
-(id)etagsForItemURLs:(id)arg0 ;
-(id)initWithCalendarURL:(id)arg0 calendar:(*void)arg1 principal:(id)arg2 title:(id)arg3 ;
-(void)recordDiagnosticsForAccountSync:(id)arg0 ;
-(void)setETag:(id)arg0 forInvitationAtURL:(id)arg1 uniqueIdentifier:(id)arg2 ;


@end


#endif