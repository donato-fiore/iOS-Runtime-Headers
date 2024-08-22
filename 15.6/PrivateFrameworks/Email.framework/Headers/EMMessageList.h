// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMMESSAGELIST_H
#define EMMESSAGELIST_H

@class NSMutableDictionary, NSMapTable, EFLazyCache, NSString, NSSet;
@protocol EFContentProtectionObserver, EFLoggable, EMCollectionChangeObserver, EMCollectionItemIDStateCapturerDelegate, EMMessageListQueryResultsObserver, OS_dispatch_queue, EFScheduler;


#import "EMCollection.h"
#import "EMMailboxScope.h"
#import "EMObjectID.h"
#import "EMMessageRepository.h"
#import "EMCollectionItemIDStateCapturer.h"
#import "EMThreadScope.h"
#import "EMMessageList.h"

@interface EMMessageList : EMCollection <EFContentProtectionObserver, EFLoggable, EMCollectionChangeObserver, EMCollectionItemIDStateCapturerDelegate, EMMessageListQueryResultsObserver>

 {
    NSMutableDictionary *_expandedThreads;
    NSMapTable *_messageListItemsForRetry;
    os_unfair_lock_s _expandedThreadsLock;
}


@property (readonly, nonatomic) EFLazyCache *cache; // ivar: _cache
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // ivar: _contentProtectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSSet *expandedThreadItemIDs;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isThreaded;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope; // ivar: _mailboxScope
@property (readonly, copy, nonatomic) EMObjectID *objectID;
@property (readonly, nonatomic) NSObject<EFScheduler> *observerScheduler; // ivar: _observerScheduler
@property (retain, nonatomic) NSSet *recentlyCollapsedItemIDs; // ivar: _recentlyCollapsedItemIDs
@property (readonly, nonatomic) EMMessageRepository *repository;
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer; // ivar: _stateCapturer
@property (readonly) Class superclass;
@property (readonly, nonatomic) EMThreadScope *threadScope; // ivar: _threadScope
@property (retain, nonatomic) EMMessageList *unfilteredMessageList; // ivar: _unfilteredMessageList


+(id)log;
+(id)simpleMessageListForMailboxes:(id)arg0 withRepository:(id)arg1 shouldTrackOldestItems:(BOOL)arg2 ;
+(id)threadedMessageListForMailboxes:(id)arg0 withRepository:(id)arg1 shouldTrackOldestItems:(BOOL)arg2 ;
-(BOOL)_threadIsExpanded:(id)arg0 ;
-(BOOL)_threadIsExpandedForItemID:(id)arg0 ;
-(BOOL)anyExpandedThreadContainsItemID:(id)arg0 ;
-(BOOL)objectIDBelongsToCollection:(id)arg0 ;
-(BOOL)recentlyCollapsedThreadContainsItemID:(id)arg0 ;
-(id)_availableMessageListItemsForItemIDs:(id)arg0 ;
-(id)_expandedObjectIDsForObjectIDs:(id)arg0 ;
-(id)_nextThreadItemIDAfterThreadItemID:(id)arg0 ;
-(id)_unreadItemIDsFromExtraInfo:(id)arg0 ;
-(id)ef_publicDescription;
-(id)filteredMessageListWithPredicate:(id)arg0 ;
-(id)initWithMailboxes:(id)arg0 repository:(id)arg1 targetClass:(Class)arg2 shouldTrackOldestItems:(BOOL)arg3 labelPrefix:(id)arg4 ;
-(id)initWithObjectID:(id)arg0 query:(id)arg1 repository:(id)arg2 ;
-(id)initWithQuery:(id)arg0 repository:(id)arg1 ;
-(id)itemIDForObjectID:(id)arg0 ;
-(id)itemIDOfFirstMessageListItemMatchingPredicate:(id)arg0 ;
-(id)itemIDOfMessageListItemWithDisplayMessage:(id)arg0 ;
-(id)itemIDsForStateCaptureWithErrorString:(*id)arg0 ;
-(id)labelForStateCapture;
-(id)messageListItemForItemID:(id)arg0 ;
-(id)messageListItemForItemID:(id)arg0 ifAvailable:(BOOL)arg1 ;
-(id)messageListItemsForItemIDs:(id)arg0 ;
-(id)messageListItemsForItemIDs:(id)arg0 ifAvailable:(BOOL)arg1 ;
-(id)objectIDForItemID:(id)arg0 ;
-(id)removeItemIDs:(id)arg0 ;
-(void)_attemptToFinishRetryingPromisesByItemID:(id)arg0 ;
-(void)_commonInitWithRepository:(id)arg0 ;
-(void)clearRecentlyCollapsedThread;
-(void)collapseThread:(id)arg0 ;
-(void)collection:(id)arg0 addedItemIDs:(id)arg1 after:(id)arg2 ;
-(void)collection:(id)arg0 addedItemIDs:(id)arg1 before:(id)arg2 ;
-(void)collection:(id)arg0 changedItemIDs:(id)arg1 ;
-(void)collection:(id)arg0 changedItemIDs:(id)arg1 itemIDsWithCountChanges:(id)arg2 ;
-(void)collection:(id)arg0 deletedItemIDs:(id)arg1 ;
-(void)collection:(id)arg0 movedItemIDs:(id)arg1 after:(id)arg2 ;
-(void)collection:(id)arg0 movedItemIDs:(id)arg1 before:(id)arg2 ;
-(void)collection:(id)arg0 replacedExistingItemID:(id)arg1 withNewItemID:(id)arg2 ;
-(void)collectionDidFinishInitialLoad:(id)arg0 ;
-(void)contentProtectionStateChanged:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)dealloc;
-(void)expandThread:(id)arg0 ;
-(void)expandThreadsFromThreadItemIDs:(id)arg0 ;
-(void)finishRecovery;
-(void)invalidateCacheForItemIDs:(id)arg0 ;
-(void)notifyChangeObserver:(id)arg0 stockedItemIDs:(id)arg1 ;
-(void)notifyChangeObserversAboutAddedItemIDs:(id)arg0 after:(id)arg1 extraInfo:(id)arg2 ;
-(void)notifyChangeObserversAboutAddedItemIDs:(id)arg0 before:(id)arg1 extraInfo:(id)arg2 ;
-(void)notifyChangeObserversAboutChangesByItemIDs:(id)arg0 ;
-(void)queryMatchedChangesByObjectIDs:(id)arg0 ;
-(void)queryMatchedMovedObjectIDs:(id)arg0 after:(id)arg1 ;
-(void)queryMatchedMovedObjectIDs:(id)arg0 before:(id)arg1 ;
-(void)queryMatchedOldestItemsUpdatedForMailboxesObjectIDs:(id)arg0 ;
-(void)stopObserving:(id)arg0 ;


@end


#endif