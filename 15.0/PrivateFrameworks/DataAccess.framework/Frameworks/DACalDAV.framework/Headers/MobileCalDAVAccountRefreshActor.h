// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOBILECALDAVACCOUNTREFRESHACTOR_H
#define MOBILECALDAVACCOUNTREFRESHACTOR_H

@class DATransaction, CalDiagAccountSync, NSArray, NSString, NSMutableArray, NSMutableSet, NSMutableDictionary;
@protocol CalDAVAccountPropertyRefreshDelegate, CalDAVCalendarPropertyRefreshDelegate, CalDAVCalendarSyncDelegate, CalDAVAccountDelegatesRefreshDelegate, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "MobileCalDAVAccount.h"
#import "CalDAVRefreshContext.h"

@interface MobileCalDAVAccountRefreshActor : NSObject <CalDAVAccountPropertyRefreshDelegate, CalDAVCalendarPropertyRefreshDelegate, CalDAVCalendarSyncDelegate, CalDAVAccountDelegatesRefreshDelegate>

 {
    DATransaction *_transaction;
}


@property (weak, nonatomic) MobileCalDAVAccount *account; // ivar: _account
@property (retain, nonatomic) CalDiagAccountSync *accountSyncDiagnostics; // ivar: _accountSyncDiagnostics
@property (retain, nonatomic) NSArray *attachmentUUIDsToUpload; // ivar: _attachmentUUIDsToUpload
@property (retain, nonatomic) NSString *calendarHomeSyncToken; // ivar: _calendarHomeSyncToken
@property (retain, nonatomic) NSMutableArray *calendarsToRefresh; // ivar: _calendarsToRefresh
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) CalDAVRefreshContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFinish; // ivar: _didFinish
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsRemindersSync;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *outstandingOperationGroup; // ivar: _outstandingOperationGroup
@property (retain, nonatomic) NSMutableSet *outstandingTaskGroups; // ivar: _outstandingTaskGroups
@property (retain, nonatomic) NSMutableSet *outstandingTasks; // ivar: _outstandingTasks
@property (retain, nonatomic) NSMutableDictionary *pathsToCTags; // ivar: _pathsToCTags
@property (retain, nonatomic) NSMutableDictionary *pathsToSyncTokens; // ivar: _pathsToSyncTokens
@property (nonatomic) BOOL refreshFoundDeletedContainerURL; // ivar: _refreshFoundDeletedContainerURL
@property (nonatomic) BOOL refreshFoundUpdatedSpecialCalendar; // ivar: _refreshFoundUpdatedSpecialCalendar
@property (nonatomic) BOOL refreshFoundUpdatedTaskContainer; // ivar: _refreshFoundUpdatedTaskContainer
@property (nonatomic) BOOL refreshing; // ivar: _refreshing
@property (nonatomic) BOOL shouldCancel; // ivar: _shouldCancel
@property (nonatomic) int state; // ivar: _state
@property (readonly) Class superclass;


-(?)_checkForNewItemsDeletedSinceSyncStartedInCalendarsdatabase;
-(BOOL)_cleanUpDuplicateCalendar:(id)arg0 ofCalendar:(id)arg1 ;
-(BOOL)_refreshShouldContinue;
-(BOOL)_sendMoveForItem:(id)arg0 ;
-(BOOL)calendarRefreshShouldRetryMkCalendarForPrincipal:(id)arg0 calendar:(id)arg1 error:(id)arg2 ;
-(id)_attachmentsByOwnerURL:(struct __CFArray *)arg0 calDAVItemsByOwnerURL:(*id)arg1 ;
-(id)_guidsOfExistingCalendars;
-(id)_powerLogInfoDictionary;
-(id)_refreshedCtagForCalendar:(id)arg0 ;
-(id)_refreshedSyncTokenForCalendar:(id)arg0 ;
-(id)initWithAccount:(id)arg0 context:(id)arg1 ;
-(struct __CFArray *)_copyArrayOfAttachmentsToUpload;
-(void)_beginAttachmentDownloads;
-(void)_calendarCollectionsWereRefreshed;
-(void)_cleanUpDuplicateCalendars;
-(void)_cleanUpOrphanedPreferredUserAddressesPerCalendar;
-(void)_clearMoveChange:(id)arg0 ;
-(void)_downloadAttachments;
-(void)_handleAttachmentUploadComplete:(id)arg0 attachmentUUID:(id)arg1 ;
-(void)_handleMoveTaskComplete:(id)arg0 moveItem:(id)arg1 ;
-(void)_refreshAccountProperties;
-(void)_refreshCalendarProperties;
-(void)_refreshDelegateAccountProperties;
-(void)_refreshRegularCalendars;
-(void)_refreshSpecialCalendars;
-(void)_saveMoveChange:(id)arg0 ;
-(void)_sendMoveTasks;
-(void)_sendResultToAccount;
-(void)_syncCalendar:(id)arg0 ;
-(void)_teardownAllOutstandingOperations;
-(void)_uploadAttachments;
-(void)_uploadAttachments:(id)arg0 calDAVItemsByOwnerURL:(id)arg1 ;
-(void)_uploadAttachments:(struct __CFArray *)arg0 forOwnerURL:(id)arg1 syncKey:(id)arg2 scheduleTag:(id)arg3 ;
-(void)_waitForStateTransition;
-(void)calendarRefreshForPrincipal:(id)arg0 completedWithNewCTags:(id)arg1 newSyncTokens:(id)arg2 calendarHomeSyncToken:(id)arg3 updatedCalendars:(id)arg4 error:(id)arg5 ;
-(void)calendarRefreshFoundDeletedContainerURL:(id)arg0 ;
-(void)calendarRefreshFoundUpdatedContainerWithIgnoredEntityType:(id)arg0 ;
-(void)calendarRefreshFoundUpdatedSpecialContainer:(id)arg0 ;
-(void)calendarSyncForPrincipal:(id)arg0 calendar:(id)arg1 completedWithError:(id)arg2 ;
-(void)cancelWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)delegateRefreshForPrincipal:(id)arg0 completedWithError:(id)arg1 ;
-(void)propertyRefreshForPrincipal:(id)arg0 completedWithError:(id)arg1 ;
-(void)refresh;
-(void)teardown;


@end


#endif