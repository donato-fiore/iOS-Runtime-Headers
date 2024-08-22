// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMMESSAGEREPOSITORY_H
#define EMMESSAGEREPOSITORY_H

@class NSMapTable, NSHashTable, EFLazyCache, NSURL, NSArray, NSString, NSCache, EFPromise, EFFuture;
@protocol EFFutureDelegate, EFLoggable, EMVIPManager;


#import "EMRepository.h"
#import "EMRemoteConnectionRecoveryAssertion.h"
#import "EMBlockedSenderManager.h"
#import "EMMailboxRepository.h"

@interface EMMessageRepository : EMRepository <EFFutureDelegate, EFLoggable>

 {
    NSMapTable *_observedMessageListItemCache;
    NSMapTable *_unobservedMessageListItemCache;
    NSMapTable *_wrappedObserversByActualObserver;
    NSHashTable *_recoverableObservers;
    os_unfair_lock_s _messageListItemCacheLock;
    os_unfair_lock_s _observersLock;
    EMRemoteConnectionRecoveryAssertion *_connectionRecoveryAssertion;
}


@property (readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager; // ivar: _blockedSenderManager
@property (retain, nonatomic) EFLazyCache *brandIndicatorsCache; // ivar: _brandIndicatorsCache
@property (retain, nonatomic) NSURL *cacheURL; // ivar: _cacheURL
@property (readonly, copy) NSArray *currentObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EMMailboxRepository *mailboxRepository; // ivar: _mailboxRepository
@property (retain, nonatomic) NSCache *queryCountCache; // ivar: _queryCountCache
@property (retain, nonatomic) EFPromise *remoteContentCachePromise; // ivar: _remoteContentCachePromise
@property (readonly, nonatomic) EFFuture *remoteContentURLCache;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<EMVIPManager> *vipManager; // ivar: _vipManager


+(id)log;
+(id)remoteInterface;
+(id)signpostLog;
-(BOOL)_anyObserver:(id)arg0 containsObjectID:(id)arg1 ;
-(NSUInteger)signpostID;
-(id)_cachedItemForItem:(id)arg0 observers:(id)arg1 validationBlock:(id)arg2 ;
-(id)_existingObservedItemForObjectID:(id)arg0 ;
-(id)_messageListItemsForObjectIDs:(id)arg0 observationIdentifier:(id)arg1 checkCache:(BOOL)arg2 ;
-(id)brandIndicatorForLocation:(id)arg0 ;
-(id)cachedMetadataJSONForKey:(id)arg0 messageID:(id)arg1 ;
-(id)initInternal;
-(id)initWithRemoteConnection:(id)arg0 mailboxRepository:(id)arg1 vipManager:(id)arg2 blockedSenderManager:(id)arg3 ;
-(id)messageForObjectID:(id)arg0 ;
-(id)messageForSearchableItemIdentifier:(id)arg0 ;
-(id)messageListItemsForObjectIDs:(id)arg0 ;
-(id)messageListItemsForObjectIDs:(id)arg0 observationIdentifier:(id)arg1 ;
-(id)messageObjectIDForURL:(id)arg0 ;
-(id)messageObjectIDsForSearchableItemIdentifiers:(id)arg0 ;
-(id)performMessageChangeActionReturningUndoAction:(id)arg0 ;
-(id)performQuery:(id)arg0 withObserver:(id)arg1 ;
-(id)predictMailboxForMovingMessages:(id)arg0 completionHandler:(id)arg1 ;
-(id)predictMailboxForMovingMessagesWithIDs:(id)arg0 completionHandler:(id)arg1 ;
-(id)requestRepresentationForMessageWithID:(id)arg0 options:(id)arg1 delegate:(id)arg2 completionHandler:(id)arg3 ;
-(id)requestRepresentationForMessageWithID:(id)arg0 requestID:(NSUInteger)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(id)arg4 ;
-(id)startCountingQuery:(id)arg0 includingServerCountsForMailboxScope:(id)arg1 withObserver:(id)arg2 ;
-(void)_applyChangesToCachedObjects:(id)arg0 ;
-(void)_blockedSendersDidChange:(id)arg0 ;
-(void)_broadcastMessageListItemChangesToObservers:(id)arg0 ;
-(void)_detectChangesForMatchedAddedObjectIDs:(id)arg0 observerationIdentifier:(id)arg1 matchedChangesHandler:(id)arg2 ;
-(void)_notifyRecoverableObservers;
-(void)_removeItemsFromObservedItemsCacheIfNotObservedByObservers:(id)arg0 ;
-(void)_updateObserversForAction:(id)arg0 ;
-(void)_updateObserversForDeletedObjectIDs:(id)arg0 ;
-(void)_updateObserversForFlagChangeAction:(id)arg0 ;
-(void)_vipsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didFinishBlockingMainThreadForFuture:(id)arg0 ;
-(void)didStartBlockingMainThreadForFuture:(id)arg0 ;
-(void)getCachedMetadataJSONForKey:(id)arg0 messageID:(id)arg1 handler:(id)arg2 ;
-(void)getRemoteContentURLInfoOrderedBy:(NSInteger)arg0 inReverseOrder:(BOOL)arg1 limit:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)isDataAccessible:(id)arg0 ;
-(void)loadOlderMessagesForMailboxes:(id)arg0 ;
-(void)noteViewOfRemoteContentLinks:(id)arg0 ;
-(void)parseRemoteContentURLsFromMessageWithObjectID:(id)arg0 completionHandler:(id)arg1 ;
-(void)performCountQuery:(id)arg0 completionHandler:(id)arg1 ;
-(void)performMessageChangeAction:(id)arg0 ;
-(void)performQuery:(id)arg0 limit:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)refreshQueryWithObserver:(id)arg0 ;
-(void)requestRichLinkMetadataForRichLinkID:(id)arg0 messageID:(id)arg1 completionHandler:(id)arg2 ;
-(void)resetAllPrecomputedThreadScopes;
-(void)resetPrecomputedThreadScopesForMailboxObjectID:(id)arg0 ;
-(void)resetPrecomputedThreadScopesForMailboxType:(NSInteger)arg0 ;
-(void)setCachedMetadataJSON:(id)arg0 forKey:(id)arg1 messageID:(id)arg2 ;
-(void)setQueryCount:(id)arg0 forQueryIdentifier:(id)arg1 ;
-(void)setUpURLCacheWithMemoryCapacity:(NSUInteger)arg0 ;


@end


#endif