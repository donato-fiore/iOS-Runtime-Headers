// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDMESSAGEREPOSITORY_H
#define EDMESSAGEREPOSITORY_H

@class NSString, NSMutableSet, NSConditionLock, NSMutableDictionary, NSSet;
@protocol EDAccountChangeHookResponder, EDThreadQueryHandlerDelegate, EFContentProtectionObserver, EMMessageRepositoryInterface, EDReconciliationQueryProvider, EFLoggable, OS_dispatch_queue, EDResumable, EDRemoteSearchProvider, EFScheduler, EMUserProfileProvider;

#import <Foundation/Foundation.h>

#import "EDMailboxPredictionController.h"
#import "EDConversationPersistence.h"
#import "EDFetchController.h"
#import "EDPersistenceHookRegistry.h"
#import "EDMailboxPersistence.h"
#import "EDMessageChangeManager.h"
#import "EDMessagePersistence.h"
#import "EDRemoteContentCacheConfiguration.h"
#import "EDRemoteContentManager.h"
#import "EDRemoteContentPersistence.h"
#import "EDThreadPersistence.h"
#import "EDVIPManager.h"

@interface EDMessageRepository : NSObject <EDAccountChangeHookResponder, EDThreadQueryHandlerDelegate, EFContentProtectionObserver, EMMessageRepositoryInterface, EDReconciliationQueryProvider, EFLoggable>

 {
    EDMailboxPredictionController *_mailboxPredictionController;
    os_unfair_lock_s _mailboxPredictionControllerLock;
    os_unfair_lock_s _handlersLock;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // ivar: _contentProtectionQueue
@property (readonly, nonatomic) EDConversationPersistence *conversationPersistence; // ivar: _conversationPersistence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EDFetchController *fetchController; // ivar: _fetchController
@property (retain, nonatomic) NSMutableSet *handlerTokens; // ivar: _handlerTokens
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (readonly, nonatomic) EDMailboxPersistence *mailboxPersistence; // ivar: _mailboxPersistence
@property (retain, nonatomic) EDMessageChangeManager *messageChangeManager; // ivar: _messageChangeManager
@property (retain, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) NSObject<EDResumable> *observerResumer; // ivar: _observerResumer
@property (readonly, nonatomic) NSConditionLock *performQueryOnSerializationQueue; // ivar: _performQueryOnSerializationQueue
@property (retain, nonatomic) NSMutableDictionary *queryHandlers; // ivar: _queryHandlers
@property (readonly, nonatomic) EDRemoteContentCacheConfiguration *remoteContentCacheConfiguration; // ivar: _remoteContentCacheConfiguration
@property (readonly, nonatomic) EDRemoteContentManager *remoteContentManager; // ivar: _remoteContentManager
@property (readonly, nonatomic) EDRemoteContentPersistence *remoteContentPersistence; // ivar: _remoteContentPersistence
@property (readonly, nonatomic) NSObject<EDRemoteSearchProvider> *remoteSearchProvider; // ivar: _remoteSearchProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serializationQueue; // ivar: _serializationQueue
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *test_activeQueryCancelationTokens;
@property (retain, nonatomic) EDThreadPersistence *threadPersistence; // ivar: _threadPersistence
@property (retain, nonatomic) NSMutableDictionary *threadQueryHandlers; // ivar: _threadQueryHandlers
@property (weak, nonatomic) id *updateThrottlerResetBlock; // ivar: _updateThrottlerResetBlock
@property (readonly, nonatomic) NSObject<EFScheduler> *updateThrottlerResetScheduler; // ivar: _updateThrottlerResetScheduler
@property (readonly, nonatomic) NSObject<EMUserProfileProvider> *userProfileProvider; // ivar: _userProfileProvider
@property (readonly, nonatomic) EDVIPManager *vipManager; // ivar: _vipManager


+(id)log;
+(id)signpostLog;
-(NSUInteger)signpostID;
-(id)_changeFlagsForPersistedMessages:(id)arg0 flagChange:(id)arg1 returnUndoAction:(BOOL)arg2 ;
-(id)_partitionObjectIDs:(id)arg0 ;
-(id)_performMessageFlagChangeAction:(id)arg0 returnUndoAction:(BOOL)arg1 ;
-(id)_performMessageTransferAction:(id)arg0 returnUndoAction:(BOOL)arg1 ;
-(id)_performMessageTransferActionToSpecialMailbox:(id)arg0 returnUndoAction:(BOOL)arg1 ;
-(id)_performUndoAction:(id)arg0 ;
-(id)_persistedMessagesForMessageChangeAction:(id)arg0 ;
-(id)_persistedMessagesForObjectIDs:(id)arg0 ;
-(id)_persistedObjectIDsForObjectIDs:(id)arg0 ;
-(id)_undoActionsForMovedMessages:(id)arg0 ;
-(id)initWithMessagePersistence:(id)arg0 conversationPersistence:(id)arg1 threadPersistence:(id)arg2 remoteContentPersistence:(id)arg3 messageChangeManager:(id)arg4 hookRegistry:(id)arg5 mailboxPersistence:(id)arg6 remoteSearchProvider:(id)arg7 userProfileProvider:(id)arg8 vipManager:(id)arg9 fetchController:(id)arg10 observerResumer:(id)arg11 remoteContentManager:(id)arg12 remoteContentCacheConfiguration:(id)arg13 ;
-(id)mailboxPredictionController;
-(id)messageReconciliationQueries;
-(id)requestRepresentationForMessageWithID:(id)arg0 requestID:(NSUInteger)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(id)arg4 ;
-(id)threadReconciliationQueries;
-(void)_enumerateThreadsByThreadObjectIDsByScope:(id)arg0 usingBlock:(id)arg1 ;
-(void)_performMessageConversationFlagChangeAction:(id)arg0 ;
-(void)_performMessageDeleteAction:(id)arg0 ;
-(void)_performMessageDeleteAllAction:(id)arg0 ;
-(void)_performMessageFlagChangeAllAction:(id)arg0 ;
-(void)_performMessageTransferAllAction:(id)arg0 ;
-(void)_performMessageTransferAllActionToSpecialMailbox:(id)arg0 ;
-(void)_performQuery:(id)arg0 withObserver:(id)arg1 observationIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)_resetUpdateThrottlersWithLogMessage:(id)arg0 ;
-(void)_triggerMigrationForThreadScopes:(id)arg0 ;
-(void)_triggerMigrationWithThreadScopesMatcher:(id)arg0 ;
-(void)accountBecameActive:(id)arg0 ;
-(void)accountBecameInactive:(id)arg0 ;
-(void)cancelAllHandlers;
-(void)contentProtectionStateChanged:(int)arg0 previousState:(int)arg1 ;
-(void)dealloc;
-(void)getCachedMetadataJSONForKey:(id)arg0 messageID:(id)arg1 completionHandler:(id)arg2 ;
-(void)getRemoteContentURLInfoOrderedBy:(NSInteger)arg0 inReverseOrder:(BOOL)arg1 limit:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)getURLCacheInformationWithCompletion:(id)arg0 ;
-(void)isDataAccessible:(id)arg0 ;
-(void)loadOlderMessagesForMailboxes:(id)arg0 ;
-(void)messageListItemsForObjectIDs:(id)arg0 requestID:(NSUInteger)arg1 observationIdentifier:(id)arg2 loadSummaryForAdditionalObjectIDs:(id)arg3 completionHandler:(id)arg4 ;
-(void)messageObjectIDForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)messageObjectIDsForSearchableItemIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)noteViewOfRemoteContentLinks:(id)arg0 ;
-(void)parseRemoteContentURLsFromMessageWithObjectID:(id)arg0 requestID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)performCountQuery:(id)arg0 completionHandler:(id)arg1 ;
-(void)performMessageChangeAction:(id)arg0 requestID:(NSUInteger)arg1 returnUndoAction:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)performQuery:(id)arg0 limit:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)performQuery:(id)arg0 withObserver:(id)arg1 observationIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)predictMailboxForMovingMessages:(id)arg0 withObserver:(id)arg1 completionHandler:(id)arg2 ;
-(void)resetPrecomputedThreadScopesForMailboxScope:(id)arg0 ;
-(void)setCachedMetadataJSON:(id)arg0 forKey:(id)arg1 messageID:(id)arg2 ;
-(void)startCountingQuery:(id)arg0 includingServerCountsForMailboxScope:(id)arg1 withObserver:(id)arg2 completionHandler:(id)arg3 ;
-(void)test_tearDown;
-(void)threadQueryHandlerStateDidChange:(id)arg0 ;


@end


#endif