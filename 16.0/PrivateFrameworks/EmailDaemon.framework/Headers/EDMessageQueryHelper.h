// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDMESSAGEQUERYHELPER_H
#define EDMESSAGEQUERYHELPER_H

@class NSMutableSet, EFCancelationToken, NSString, NSPredicate, EFQuery;
@protocol EDMessageChangeHookResponder, EDRemindMeNotificationControllerObserver, EDRemoteSearchDelegate, EDSenderBucketChangeHookResponder, EFLoggable, EDMessageQueryHelperMessageSource, EFCancelable, EDMessageQueryHelperDelegate, EDRemoteSearchProvider, EFScheduler;

#import <Foundation/Foundation.h>

#import "EDPersistenceHookRegistry.h"
#import "EDMessagePersistence.h"
#import "EDMessageQueryEvaluator.h"
#import "EDRemindMeNotificationController.h"

@interface EDMessageQueryHelper : NSObject <EDMessageChangeHookResponder, EDRemindMeNotificationControllerObserver, EDRemoteSearchDelegate, EDSenderBucketChangeHookResponder, EFLoggable, EDMessageQueryHelperMessageSource, EFCancelable>

 {
    atomic_flag _didStart;
    NSMutableSet *_noLongerMatchingMessages;
    NSMutableSet *_ignoredMessages;
    os_unfair_lock_s _noLongerMatchingMessagesLock;
    os_unfair_lock_s _ignoredMessagesLock;
}


@property (nonatomic) BOOL addMessagesSynchronously; // ivar: _addMessagesSynchronously
@property (retain, nonatomic) EFCancelationToken *cancelationToken; // ivar: _cancelationToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<EDMessageQueryHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (retain, nonatomic) NSPredicate *ignoreMessagesPredicate; // ivar: _ignoreMessagesPredicate
@property (nonatomic) BOOL keepMessagesInListOnBucketChange; // ivar: _keepMessagesInListOnBucketChange
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly) NSString *pendingConversationIDChangesKey; // ivar: _pendingConversationIDChangesKey
@property (readonly) NSString *pendingDisplayDateChangesKey; // ivar: _pendingDisplayDateChangesKey
@property (readonly) NSString *pendingFlagChangesKey; // ivar: _pendingFlagChangesKey
@property (readonly) NSString *pendingJournaledMessageAddsKey; // ivar: _pendingJournaledMessageAddsKey
@property (readonly) NSString *pendingReadLaterDateChangesKey; // ivar: _pendingReadLaterDateChangesKey
@property (readonly) NSString *pendingSenderBucketChangesKey; // ivar: _pendingSenderBucketChangesKey
@property (readonly, nonatomic) EFQuery *query; // ivar: _query
@property (retain, nonatomic) EDMessageQueryEvaluator *queryEvaluator; // ivar: _queryEvaluator
@property (readonly, nonatomic) EDRemindMeNotificationController *remindMeNotificationController; // ivar: _remindMeNotificationController
@property (readonly, nonatomic) NSObject<EDRemoteSearchProvider> *remoteSearchProvider; // ivar: _remoteSearchProvider
@property (readonly, nonatomic) NSObject<EFScheduler> *scheduler; // ivar: _scheduler
@property (nonatomic) BOOL shouldReconcileJournal; // ivar: _shouldReconcileJournal
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL updateDisplayDate;


+(id)log;
-(id)_persistedMessagesFromSendersWithAddresses:(id)arg0 ;
-(id)_transformAndFilterMessages:(id)arg0 includeDeleted:(BOOL)arg1 removeIgnoredMessages:(BOOL)arg2 ;
-(id)initWithQuery:(id)arg0 messagePersistence:(id)arg1 hookRegistry:(id)arg2 remoteSearchProvider:(id)arg3 scheduler:(id)arg4 remindMeNotificationController:(id)arg5 delegate:(id)arg6 shouldReconcileJournal:(BOOL)arg7 shouldAddMessagesSynchronously:(BOOL)arg8 keepMessagesInListOnBucketChange:(BOOL)arg9 ;
-(id)messagesWithAdditionalPredicates:(id)arg0 limit:(NSInteger)arg1 ;
-(void)_calculateAndReportChangesForPersistedMessages:(id)arg0 withPendingChangesKey:(id)arg1 changeBlock:(id)arg2 ;
-(void)_foundMessages:(id)arg0 ;
-(void)_getInitialResults;
-(void)_persistenceDidDeleteMessages:(id)arg0 includeMessagesWithDeletedFlag:(BOOL)arg1 ;
-(void)_prepareForSenderBucketChangeForThreadsWithSenderAddresses:(id)arg0 ;
-(void)_reportChangesForCurrentlyMatchingMessages:(id)arg0 previouslyMatchingMessages:(id)arg1 keyPaths:(id)arg2 ;
-(void)_reportChangesForPersistedMessages:(id)arg0 withPendingChangesKey:(id)arg1 keyPaths:(id)arg2 ;
-(void)_reportSenderBucketChangeForThreadsWithSenderAddresses:(id)arg0 ;
-(void)cancel;
-(void)controller:(id)arg0 messageTimerFired:(id)arg1 ;
-(void)dealloc;
-(void)persistenceDidAddAddresses:(id)arg0 toSender:(id)arg1 generation:(NSInteger)arg2 ;
-(void)persistenceDidAddMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidChangeConversationNotificationLevel:(NSInteger)arg0 conversationID:(NSInteger)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidChangeFlags:(id)arg0 messages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidChangeGlobalMessageID:(NSInteger)arg0 orConversationID:(NSInteger)arg1 message:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidChangeReadLaterDate:(id)arg0 messages:(id)arg1 changeIsRemote:(BOOL)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidChangeSenderBucketForSender:(id)arg0 toBucket:(NSInteger)arg1 generation:(NSInteger)arg2 ;
-(void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidDeleteMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidReconcileJournaledMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceDidRemoveAddresses:(id)arg0 fromSender:(id)arg1 generation:(NSInteger)arg2 ;
-(void)persistenceDidUpdateDisplayDateForMessages:(id)arg0 changeIsRemote:(BOOL)arg1 generation:(NSInteger)arg2 ;
-(void)persistenceDidUpdateProperties:(id)arg0 message:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsAddingMessages:(id)arg0 journaled:(BOOL)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsChangingConversationID:(NSInteger)arg0 messages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceWillAddAddresses:(id)arg0 toSender:(id)arg1 ;
-(void)persistenceWillChangeConversationID:(NSInteger)arg0 messages:(id)arg1 ;
-(void)persistenceWillChangeFlags:(id)arg0 messages:(id)arg1 ;
-(void)persistenceWillChangeReadLaterDate:(id)arg0 messages:(id)arg1 ;
-(void)persistenceWillChangeSenderBucketForAddresses:(id)arg0 toBucket:(NSInteger)arg1 ;
-(void)persistenceWillChangeSenderBucketForSender:(id)arg0 toBucket:(NSInteger)arg1 ;
-(void)persistenceWillRemoveAddresses:(id)arg0 fromSender:(id)arg1 ;
-(void)persistenceWillUpdateDisplayDateForMessages:(id)arg0 ;
-(void)remoteSearchDidFindMessages:(id)arg0 ;
-(void)remoteSearchDidFinish;
-(void)start;


@end


#endif