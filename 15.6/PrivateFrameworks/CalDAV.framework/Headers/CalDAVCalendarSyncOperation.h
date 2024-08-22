// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVCALENDARSYNCOPERATION_H
#define CALDAVCALENDARSYNCOPERATION_H

@class NSError, NSString;
@protocol CalDAVCalendar, CalDAVCalendarSyncDelegate;


#import "CalDAVOperation.h"

@interface CalDAVCalendarSyncOperation : CalDAVOperation {
    NSError *_savedError;
    NSString *_nextCtag;
    NSString *_nextSyncToken;
    id<CalDAVCalendar> *_calendar;
    NSError *_reportJunkError;
    NSUInteger _currentStage;
}


@property (nonatomic) NSObject<CalDAVCalendarSyncDelegate> *delegate;
@property (nonatomic) BOOL getScheduleChanges; // ivar: _getScheduleChanges
@property (nonatomic) BOOL getScheduleTags; // ivar: _getScheduleTags


-(BOOL)setLocalETag:(id)arg0 forItemWithURL:(id)arg1 inFolderWithURL:(id)arg2 ;
-(BOOL)setLocalScheduleTag:(id)arg0 forItemWithURL:(id)arg1 inFolderWithURL:(id)arg2 ;
-(BOOL)syncDeleteTask:(id)arg0 error:(id)arg1 ;
-(BOOL)syncPutTask:(id)arg0 completedWithNewETag:(id)arg1 error:(id)arg2 ;
-(id)_distantFutureEndDate;
-(id)copyAllLocalURLsInFolderWithURL:(id)arg0 ;
-(id)copyLocalETagsForURLs:(id)arg0 inFolderWithURL:(id)arg1 ;
-(id)initWithPrincipal:(id)arg0 calendar:(id)arg1 nextCtag:(id)arg2 nextSyncToken:(id)arg3 ;
-(void)_advanceStage;
-(void)_finishWithError:(id)arg0 ;
-(void)_performNextStage;
-(void)_processAddedOrModified:(id)arg0 removed:(id)arg1 ;
-(void)_reportJunk;
-(void)_splitRecurrences;
-(void)_syncCalendar;
-(void)_syncEventsForMerge;
-(void)containerSyncTask:(id)arg0 completedWithNewCTag:(id)arg1 newSyncToken:(id)arg2 addedOrModified:(id)arg3 removed:(id)arg4 error:(id)arg5 ;
-(void)containerSyncTask:(id)arg0 retrievedAddedOrModifiedActions:(id)arg1 removed:(id)arg2 ;
-(void)recurrenceSplitAction:(id)arg0 completedWithUpdatedETag:(id)arg1 updatedScheduleTag:(id)arg2 createdURL:(id)arg3 createdETag:(id)arg4 createdScheduleTag:(id)arg5 ;
-(void)recurrenceSplitAction:(id)arg0 failedWithError:(id)arg1 ;
-(void)syncCalendar;


@end


#endif