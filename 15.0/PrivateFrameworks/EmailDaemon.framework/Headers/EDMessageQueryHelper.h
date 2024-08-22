// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDMESSAGEQUERYHELPER_H
#define EDMESSAGEQUERYHELPER_H

@class NSMutableSet, EFCancelationToken, NSString, EFQuery;
@protocol EDMessageChangeHookResponder, EDRemoteSearchDelegate, EFLoggable, EDMessageQueryHelperMessageSource, EFCancelable, EDMessageQueryHelperDelegate, EDRemoteSearchProvider, EFScheduler;

#import <Foundation/Foundation.h>

#import "EDPersistenceHookRegistry.h"
#import "EDMessagePersistence.h"
#import "EDMessageQueryEvaluator.h"

@interface EDMessageQueryHelper : NSObject <EDMessageChangeHookResponder, EDRemoteSearchDelegate, EFLoggable, EDMessageQueryHelperMessageSource, EFCancelable>

 {
    atomic_flag _didStart;
    NSMutableSet *_noLongerMatchingMessages;
    os_unfair_lock_s _noLongerMatchingMessagesLock;
}


@property (nonatomic) BOOL addMessagesSynchronously; // ivar: _addMessagesSynchronously
@property (retain, nonatomic) EFCancelationToken *cancelationToken; // ivar: _cancelationToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<EDMessageQueryHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly) NSString *pendingConversationIDChangesKey; // ivar: _pendingConversationIDChangesKey
@property (readonly) NSString *pendingFlagChangesKey; // ivar: _pendingFlagChangesKey
@property (readonly) NSString *pendingJournaledMessageAddsKey; // ivar: _pendingJournaledMessageAddsKey
@property (readonly, nonatomic) EFQuery *query; // ivar: _query
@property (retain, nonatomic) EDMessageQueryEvaluator *queryEvaluator; // ivar: _queryEvaluator
@property (readonly, nonatomic) NSObject<EDRemoteSearchProvider> *remoteSearchProvider; // ivar: _remoteSearchProvider
@property (readonly, nonatomic) NSObject<EFScheduler> *scheduler; // ivar: _scheduler
@property (nonatomic) BOOL shouldReconcileJournal; // ivar: _shouldReconcileJournal
@property (readonly) Class superclass;


+(id)log;
-(id)_transformAndFilterMessages:(id)arg0 includeDeleted:(BOOL)arg1 ;
-(id)initWithQuery:(id)arg0 messagePersistence:(id)arg1 hookRegistry:(id)arg2 remoteSearchProvider:(id)arg3 scheduler:(id)arg4 delegate:(id)arg5 shouldReconcileJournal:(BOOL)arg6 shouldAddMessagesSynchronously:(BOOL)arg7 ;
-(id)messagesWithAdditionalPredicates:(id)arg0 limit:(NSInteger)arg1 ;
-(void)_foundMessages:(id)arg0 ;
-(void)_getInitialResults;
-(void)_persistenceDidDeleteMessages:(id)arg0 includeMessagesWithDeletedFlag:(BOOL)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)persistenceDidAddMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidChangeConversationNotificationLevel:(NSInteger)arg0 conversationID:(NSInteger)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidChangeFlags:(id)arg0 messages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidChangeGlobalMessageID:(NSInteger)arg0 orConversationID:(NSInteger)arg1 message:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidDeleteMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidReconcileJournaledMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidUpdateProperties:(id)arg0 message:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsAddingMessages:(id)arg0 journaled:(BOOL)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsChangingConversationID:(NSInteger)arg0 messages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceWillChangeConversationID:(NSInteger)arg0 messages:(id)arg1 ;
-(void)persistenceWillChangeFlags:(id)arg0 messages:(id)arg1 ;
-(void)remoteSearchDidFindMessages:(id)arg0 ;
-(void)remoteSearchDidFinish;
-(void)start;


@end


#endif