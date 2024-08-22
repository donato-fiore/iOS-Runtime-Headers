// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDINMEMORYTHREADQUERYHANDLER_H
#define EDINMEMORYTHREADQUERYHANDLER_H

@class NSMutableOrderedSet, NSMutableDictionary, EFProcessTransaction, NSString, EMMailboxScope, NSArray, EMCollectionItemIDStateCapturer;
@protocol EDMessageQueryHelperDelegate, EFLoggable, EFContentProtectionObserver, EMCollectionItemIDStateCapturerDelegate, OS_dispatch_queue, EDRemoteSearchProvider, EMMessageListItemQueryResultsObserver, EFScheduler;


#import "EDMessageRepositoryQueryHandler.h"
#import "EDMessageQueryHelper.h"
#import "EDThreadReloadSummaryHelper.h"
#import "EDUpdateThrottler.h"
#import "EDVIPManager.h"

@interface EDInMemoryThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageQueryHelperDelegate, EFLoggable, EFContentProtectionObserver, EMCollectionItemIDStateCapturerDelegate>

 {
    NSMutableOrderedSet *_conversationIDs;
    NSMutableDictionary *_threadsByConversationID;
    NSMutableDictionary *_changesWhilePaused;
    NSMutableDictionary *_oldestThreadsByMailboxObjectIDs;
    EFProcessTransaction *_processTransaction;
    os_unfair_lock_s _threadsLock;
}


@property (readonly, nonatomic) id *comparator; // ivar: _comparator
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // ivar: _contentProtectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didCancel; // ivar: _didCancel
@property (nonatomic) BOOL hasChangesWhilePaused; // ivar: _hasChangesWhilePaused
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInitialized; // ivar: _isInitialized
@property (nonatomic) BOOL isPaused; // ivar: _isPaused
@property (readonly, nonatomic) EMMailboxScope *mailboxScope; // ivar: _mailboxScope
@property (retain, nonatomic) EDMessageQueryHelper *messageQueryHelper; // ivar: _messageQueryHelper
@property (readonly, copy, nonatomic) NSArray *messageSortDescriptors; // ivar: _messageSortDescriptors
@property (readonly, nonatomic) EDThreadReloadSummaryHelper *reloadSummaryHelper; // ivar: _reloadSummaryHelper
@property (readonly, nonatomic) NSObject<EDRemoteSearchProvider> *remoteSearchProvider; // ivar: _remoteSearchProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resultQueue; // ivar: _resultQueue
@property (readonly, nonatomic) NSObject<EMMessageListItemQueryResultsObserver> *resultsObserverIfNotPaused;
@property (readonly, nonatomic) NSObject<EFScheduler> *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer; // ivar: _stateCapturer
@property (readonly) Class superclass;
@property (readonly, nonatomic) EDUpdateThrottler *updateThrottler; // ivar: _updateThrottler
@property (readonly, nonatomic) EDVIPManager *vipManager; // ivar: _vipManager


+(id)log;
-(BOOL)_didMergeInThreads:(id)arg0 ;
-(BOOL)_mergeInThreads:(id)arg0 forMove:(BOOL)arg1 ;
-(BOOL)_messageListItemChangeAffectsSorting:(id)arg0 ;
-(BOOL)_queryHelperIsCurrent:(id)arg0 ;
-(BOOL)_removeThreadsForInMemoryThreads:(id)arg0 forMove:(BOOL)arg1 ;
-(BOOL)_reportChanges:(id)arg0 ;
-(BOOL)_reportDeletes:(id)arg0 ;
-(BOOL)_threadsWereDeleted;
-(BOOL)_updateCurrentOldestThreadWithThreadIfApplicable:(id)arg0 forMailbox:(id)arg1 ;
-(BOOL)_updateOldestThreadsForMailboxes:(id)arg0 ;
-(BOOL)start;
-(id)_inMemoryThreadSortDescriptorsForThreadSortDescriptors:(id)arg0 ;
-(id)_messageQueryFromThreadsQuery:(id)arg0 ;
-(id)_messagesByConversationIDForMessages:(id)arg0 ;
-(id)initWithQuery:(id)arg0 messagePersistence:(id)arg1 hookRegistry:(id)arg2 vipManager:(id)arg3 remoteSearchProvider:(id)arg4 observer:(id)arg5 observationIdentifier:(id)arg6 observationResumer:(id)arg7 ;
-(id)itemIDsForStateCaptureWithErrorString:(*id)arg0 ;
-(id)labelForStateCapture;
-(id)messagesForThread:(id)arg0 ;
-(id)threadForObjectID:(id)arg0 error:(*id)arg1 ;
-(void)_blockedSendersDidChange:(id)arg0 ;
-(void)_contentProtectionChangedToLocked;
-(void)_contentProtectionChangedToUnlocked;
-(void)_createHelperAndReconcileJournal:(BOOL)arg0 ;
-(void)_didSendUpdates;
-(void)_initializeOldestThreadsByMailbox;
-(void)_messagesWereAdded:(id)arg0 ;
-(void)_messagesWereChanged:(id)arg0 forKeyPaths:(id)arg1 deleted:(BOOL)arg2 ;
-(void)_notifyObserverOfOldestThreadsByMailboxObjectIDs;
-(void)_prepareToSendUpdates;
-(void)_refreshObserver;
-(void)_restartHelper;
-(void)_vipsDidChange:(id)arg0 ;
-(void)cancel;
-(void)contentProtectionStateChanged:(int)arg0 previousState:(int)arg1 ;
-(void)dealloc;
-(void)queryHelper:(id)arg0 conversationIDDidChangeForMessages:(id)arg1 fromConversationID:(NSInteger)arg2 ;
-(void)queryHelper:(id)arg0 conversationNotificationLevelDidChangeForConversation:(NSInteger)arg1 conversationID:(NSInteger)arg2 ;
-(void)queryHelper:(id)arg0 didAddMessages:(id)arg1 ;
-(void)queryHelper:(id)arg0 didDeleteMessages:(id)arg1 ;
-(void)queryHelper:(id)arg0 didFindMessages:(id)arg1 ;
-(void)queryHelper:(id)arg0 didUpdateMessages:(id)arg1 forKeyPaths:(id)arg2 ;
-(void)queryHelper:(id)arg0 messageFlagsDidChangeForMessages:(id)arg1 ;
-(void)queryHelper:(id)arg0 objectIDDidChangeForMessage:(id)arg1 oldObjectID:(id)arg2 oldConversationID:(NSInteger)arg3 ;
-(void)queryHelperDidFindAllMessages:(id)arg0 ;
-(void)queryHelperDidFinishRemoteSearch:(id)arg0 ;
-(void)queryHelperNeedsRestart:(id)arg0 ;
-(void)tearDown;
-(void)test_tearDown;


@end


#endif