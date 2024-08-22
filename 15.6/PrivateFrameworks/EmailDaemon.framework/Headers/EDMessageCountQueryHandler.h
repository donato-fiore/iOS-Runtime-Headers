// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDMESSAGECOUNTQUERYHANDLER_H
#define EDMESSAGECOUNTQUERYHANDLER_H

@class NSMutableDictionary, NSMutableSet, EMObjectID, EFQuery, EFMutableInt64Set, EFStoppableScheduler<EFAssertableScheduler>, NSPredicate, EMMailboxScope, EFCancelationToken, EFListStateCapturer, NSString;
@protocol EFListStateCapturerDelegate, EFLoggable, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EMMailboxChangeObserver, EFCancelable, EMMessageRepositoryCountQueryObserver_xpc;

#import <Foundation/Foundation.h>

#import "EDMessageQueryEvaluator.h"
#import "EDMessagePersistence.h"
#import "EDPersistenceHookRegistry.h"
#import "EDUpdateThrottler.h"

@interface EDMessageCountQueryHandler : NSObject <EFListStateCapturerDelegate, EFLoggable, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EMMailboxChangeObserver, EFCancelable>

 {
    NSMutableDictionary *_serverCounts;
    NSMutableSet *_mailboxesBeingSynced;
    NSInteger _resyncDatabaseGeneration;
    EMObjectID *_mailboxObserverID;
    EFQuery *_expandedQuery;
    EFMutableInt64Set *_seenMessageIDs;
    EFMutableInt64Set *_newMessageIDs;
    uint8_t _recalculationPending;
    EFAtomicObject _atomicQueryDescription;
    EFAtomicObject _atomicMailboxScopeDescription;
    os_unfair_lock_s _seenMessageIDsLock;
    os_unfair_lock_s _expandedQueryLock;
    EFStoppableScheduler<EFAssertableScheduler> *_scheduler;
    EFQuery *_query;
    NSPredicate *_predicateIgnoringFlags;
    EMMailboxScope *_serverCountMailboxScope;
    EDMessageQueryEvaluator *_queryEvaluator;
    id<EMMessageRepositoryCountQueryObserver_xpc> *_resultsObserver;
    EDMessagePersistence *_messagePersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    EFCancelationToken *_cancelationToken;
    EDUpdateThrottler *_updateThrottler;
    EFListStateCapturer *_stateCapturer;
    NSString *_pendingFlagChangesKey;
    NSInteger _localCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)descriptionForItem:(id)arg0 ;
-(id)initWithQuery:(id)arg0 serverCountMailboxScope:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 observer:(id)arg4 ;
-(id)itemsForStateCaptureWithErrorString:(*id)arg0 ;
-(id)labelForStateCapture;
-(void)cancel;
-(void)dealloc;
-(void)didSyncMailbox:(id)arg0 ;
-(void)mailboxListChanged:(id)arg0 ;
-(void)persistenceDidAddMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidChangeFlags:(id)arg0 messages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidChangeGlobalMessageID:(NSInteger)arg0 orConversationID:(NSInteger)arg1 message:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidChangeVIPStatus:(BOOL)arg0 messages:(id)arg1 ;
-(void)persistenceDidDeleteMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(NSInteger)arg0 forMailboxWithObjectID:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidUpdateMostRecentStatusCount:(NSInteger)arg0 forMailboxWithObjectID:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidUpdateProperties:(id)arg0 message:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidUpdateServerCount:(NSInteger)arg0 forMailboxWithObjectID:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsAddingMailboxWithDatabaseID:(NSInteger)arg0 objectID:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceWillChangeFlags:(id)arg0 messages:(id)arg1 ;
-(void)test_tearDown;
-(void)willSyncMailbox:(id)arg0 ;


@end


#endif