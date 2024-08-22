// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDOCUMENT_H
#define UIDOCUMENT_H

@class NSUserActivity, NSLock, NSURL, NSString, NSUndoManager, NSDate, NSOperationQueue, NSTimer, NSMutableArray, NSMutableSet, NSSet, NSProgress;
@protocol NSFilePresenter, NSProgressReporting, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "NSDocumentDifferenceSize.h"

@interface UIDocument : NSObject <NSFilePresenter, NSProgressReporting>

 {
    NSUserActivity *_currentUserActivity;
    NSLock *_activityContinuationLock;
    NSURL *_fileURL;
    NSString *_fileBookmark;
    NSString *_fileType;
    NSString *_localizedName;
    NSUndoManager *_undoManager;
    NSDate *_fileModificationDate;
    NSObject<OS_dispatch_queue> *_fileAccessQueue;
    NSObject<OS_dispatch_queue> *_openingQueue;
    NSObject<OS_dispatch_semaphore> *_fileAccessSemaphore;
    NSOperationQueue *_filePresenterQueue;
    NSTimer *_autosavingTimer;
    CGFloat _lastSaveTime;
    CGFloat _lastPreservationTime;
    id *_versionWithoutRecentChanges;
    NSMutableArray *_versions;
    id *_alertPresenter;
    id *_progressSubscriber;
    NSMutableSet *_progresses;
    __docFlags _docFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDocumentDifferenceSize *differenceDueToRecentChanges; // ivar: _differenceDueToRecentChanges
@property (readonly, nonatomic) NSDocumentDifferenceSize *differenceSincePreservingPreviousVersion; // ivar: _differenceSincePreservingPreviousVersion
@property (readonly, nonatomic) NSDocumentDifferenceSize *differenceSinceSaving; // ivar: _differenceSinceSaving
@property (readonly) NSUInteger documentState;
@property (copy) NSDate *fileModificationDate;
@property (readonly, copy) NSString *fileType;
@property (readonly) NSURL *fileURL;
@property (readonly, nonatomic) BOOL hasUnsavedChanges;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *localizedName;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSProgress *progress;
@property (readonly, nonatomic) NSString *savingFileType;
@property (readonly) Class superclass;
@property (retain) NSUndoManager *undoManager;


+(BOOL)_url:(id)arg0 matchesURL:(id)arg1 ;
+(id)_customizationOfError:(id)arg0 withDescription:(id)arg1 recoverySuggestion:(id)arg2 recoveryAttempter:(id)arg3 ;
+(id)_fileModificationDateForURL:(id)arg0 ;
+(id)_typeForContentsOfURL:(id)arg0 error:(*id)arg1 ;
+(void)_autosavingTimerDidFireSoContinue:(id)arg0 ;
+(void)_finishWritingToURL:(id)arg0 withTemporaryDirectoryURL:(id)arg1 newContentsURL:(id)arg2 afterSuccess:(BOOL)arg3 ;
-(BOOL)_coordinateWritingItemAtURL:(id)arg0 error:(*id)arg1 byAccessor:(id)arg2 ;
-(BOOL)_documentIsUbiquitous;
-(BOOL)_hasSavingError;
-(BOOL)_isEditingDisabledDueToPermissions;
-(BOOL)_isEditingTemporarilyDisabled;
-(BOOL)_isInConflict;
-(BOOL)_isInOpen;
-(BOOL)_isOpen;
-(BOOL)_shouldAllowWritingInResponseToPresenterMessage;
-(BOOL)loadFromContents:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
-(BOOL)readFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeContents:(id)arg0 andAttributes:(id)arg1 safelyToURL:(id)arg2 forSaveOperation:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)writeContents:(id)arg0 toURL:(id)arg1 forSaveOperation:(NSInteger)arg2 originalContentsURL:(id)arg3 error:(*id)arg4 ;
-(CGFloat)_autosavingDelay;
-(id)_activityTypeIdentifierForCloudDocument:(*BOOL)arg0 ;
-(id)_fileOpeningQueue;
-(id)_presentableFileNameForSaveOperation:(NSInteger)arg0 url:(id)arg1 ;
-(id)_titleForActivityContinuation;
-(id)_userActivityWithActivityType:(id)arg0 ;
-(id)_userInfoForActivityContinuation;
-(id)_writingProgressForURL:(id)arg0 indeterminate:(BOOL)arg1 ;
-(id)changeCountTokenForSaveOperation:(NSInteger)arg0 ;
-(id)contentsForType:(id)arg0 error:(*id)arg1 ;
-(id)fileAttributesToWriteToURL:(id)arg0 forSaveOperation:(NSInteger)arg1 error:(*id)arg2 ;
-(id)fileNameExtensionForType:(id)arg0 saveOperation:(NSInteger)arg1 ;
-(id)init;
-(id)initWithFileURL:(id)arg0 ;
-(id)userActivity;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_autosaveWithCompletionHandler:(id)arg0 ;
-(void)_autosavingCompletedSuccessfully:(BOOL)arg0 ;
-(void)_changeWasDone:(id)arg0 ;
-(void)_changeWasRedone:(id)arg0 ;
-(void)_changeWasUndone:(id)arg0 ;
-(void)_clearUserActivity;
-(void)_finishSavingToURL:(id)arg0 forSaveOperation:(NSInteger)arg1 changeCount:(id)arg2 ;
-(void)_invalidateCurrentUserActivity;
-(void)_lockFileAccessQueueAndPerformBlock:(id)arg0 ;
-(void)_manageUserActivity;
// -(void)_performBlock:(id)arg0 synchronouslyOnQueue:(unk)arg1  ;
-(void)_performBlockSynchronouslyOnMainThread:(id)arg0 ;
-(void)_progressPublished:(id)arg0 ;
-(void)_progressUnpublished:(id)arg0 ;
-(void)_reallyManageUserActivity;
-(void)_registerAsFilePresenterIfNecessary;
-(void)_releaseUndoManager;
-(void)_rescheduleAutosaving;
-(void)_saveUnsavedChangesWithCompletionHandler:(id)arg0 ;
-(void)_scheduleAutosaving;
-(void)_scheduleAutosavingAfterDelay:(CGFloat)arg0 reset:(BOOL)arg1 ;
-(void)_sendStateChangedNotification;
-(void)_setEditingDisabledDueToPermissions:(BOOL)arg0 ;
-(void)_setEditingTemporarilyDisabled:(BOOL)arg0 ;
-(void)_setHasSavingError:(BOOL)arg0 ;
-(void)_setInConflict:(BOOL)arg0 ;
-(void)_setInOpen:(BOOL)arg0 ;
-(void)_setOpen:(BOOL)arg0 ;
-(void)_setUserActivity:(id)arg0 ;
-(void)_unlockFileAccessQueue;
-(void)_unregisterAsFilePresenterIfNecessary;
-(void)_updateConflictState;
-(void)_updateLastUsedDate;
-(void)_updateLocalizedName;
-(void)_updatePermissionsState:(BOOL)arg0 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg0 ;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)autosaveWithCompletionHandler:(id)arg0 ;
-(void)closeWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)disableEditing;
-(void)enableEditing;
-(void)finishedHandlingError:(id)arg0 recovered:(BOOL)arg1 ;
-(void)handleError:(id)arg0 userInteractionPermitted:(BOOL)arg1 ;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)performAsynchronousFileAccessUsingBlock:(id)arg0 ;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)arg0 ;
-(void)presentedItemDidLoseVersion:(id)arg0 ;
-(void)presentedItemDidMoveToURL:(id)arg0 ;
-(void)presentedItemDidResolveConflictVersion:(id)arg0 ;
-(void)presentedItemHasUnsavedChangesWithCompletionHandler:(id)arg0 ;
-(void)presentedSubitemAtURL:(id)arg0 didGainVersion:(id)arg1 ;
-(void)presentedSubitemAtURL:(id)arg0 didLoseVersion:(id)arg1 ;
-(void)presentedSubitemAtURL:(id)arg0 didMoveToURL:(id)arg1 ;
-(void)presentedSubitemAtURL:(id)arg0 didResolveConflictVersion:(id)arg1 ;
-(void)presentedSubitemDidAppearAtURL:(id)arg0 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg0 ;
-(void)relinquishPresentedItemToReader:(id)arg0 ;
-(void)relinquishPresentedItemToWriter:(id)arg0 ;
-(void)restoreUserActivityState:(id)arg0 ;
-(void)revertToContentsOfURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)savePresentedItemChangesWithCompletionHandler:(id)arg0 ;
-(void)saveToURL:(id)arg0 forSaveOperation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)setUserActivity:(id)arg0 ;
-(void)updateChangeCount:(NSInteger)arg0 ;
-(void)updateChangeCountWithToken:(id)arg0 forSaveOperation:(NSInteger)arg1 ;
-(void)updateUserActivityState:(id)arg0 ;
-(void)userInteractionNoLongerPermittedForError:(id)arg0 ;


@end


#endif