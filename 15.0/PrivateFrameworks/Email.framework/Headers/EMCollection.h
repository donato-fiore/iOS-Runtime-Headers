// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMCOLLECTION_H
#define EMCOLLECTION_H

@class NSMutableOrderedSet, NSMutableSet, NSOrderedSet, EFPromise, EFFuture, NSHashTable, NSString, EFQuery;
@protocol EFLoggable, EFSignpostable, EFCancelable, EFScheduler;


#import "EMRepositoryObject.h"

@interface EMCollection : EMRepositoryObject <EFLoggable, EFSignpostable>

 {
    NSMutableOrderedSet *_itemIDs;
    NSMutableSet *_itemIDsAnticipatingDelete;
    NSOrderedSet *_recoveringItemIDs;
    EFPromise *_allItemIDsPromise;
    os_unfair_lock_s _itemIDsLock;
    BOOL _foundAllItemIDs;
    BOOL _foundFirstBatch;
    os_unfair_lock_s _changeObserversLock;
}


@property (readonly, nonatomic) EFFuture *allItemIDs;
@property (retain, nonatomic) NSObject<EFCancelable> *cancelationToken; // ivar: _cancelationToken
@property (retain, nonatomic) NSHashTable *changeObservers; // ivar: _changeObservers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<EFScheduler> *observerScheduler; // ivar: _observerScheduler
@property (readonly, nonatomic) EFQuery *query; // ivar: _query
@property (readonly, nonatomic) NSObject<EFScheduler> *queryScheduler;
@property (readonly) NSUInteger signpostID;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)log;
+(id)signpostLog;
-(BOOL)containsItemID:(id)arg0 includeRecovery:(BOOL)arg1 ;
-(BOOL)isRecovering;
-(BOOL)objectIDBelongsToCollection:(id)arg0 ;
-(BOOL)observerContainsObjectID:(id)arg0 ;
-(id)_firstExistingItemIDForItemID:(id)arg0 inReverse:(BOOL)arg1 ;
-(id)_itemIDsForObjectIDs:(id)arg0 ;
-(id)_iterateItemIDsStartingAtItemID:(id)arg0 inReverse:(BOOL)arg1 includeStartingItem:(BOOL)arg2 withBlock:(id)arg3 ;
-(id)firstExistingItemIDAfterItemID:(id)arg0 ;
-(id)firstExistingItemIDBeforeItemID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 query:(id)arg1 ;
-(id)initWithQuery:(id)arg0 repository:(id)arg1 ;
-(id)itemIDForObjectID:(id)arg0 ;
-(id)iterateItemIDsStartingAtItemID:(id)arg0 inReverse:(BOOL)arg1 withBlock:(id)arg2 ;
-(id)objectIDForItemID:(id)arg0 ;
-(id)removeItemIDs:(id)arg0 ;
-(void)_cancelQuery;
-(void)_cancelQueryIfNeeded;
-(void)_commonInitWithQuery:(id)arg0 ;
-(void)_filterAndTransformObjectIDs:(id)arg0 before:(BOOL)arg1 existingObjectID:(id)arg2 batchBlock:(id)arg3 ;
-(void)_performQuery;
-(void)_performQueryIfNeeded;
-(void)beginObserving:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateObserversWithBlock:(id)arg0 ;
-(void)finishRecovery;
-(void)insertItemIDs:(id)arg0 after:(id)arg1 ;
-(void)insertItemIDs:(id)arg0 before:(id)arg1 ;
-(void)notifyChangeObserver:(id)arg0 stockedItemIDs:(id)arg1 ;
-(void)notifyChangeObserverAboutStockedItemIDs:(id)arg0 ;
-(void)notifyChangeObserversAboutAddedItemIDs:(id)arg0 after:(id)arg1 extraInfo:(id)arg2 ;
-(void)notifyChangeObserversAboutAddedItemIDs:(id)arg0 before:(id)arg1 extraInfo:(id)arg2 ;
-(void)notifyChangeObserversAboutChangesByItemIDs:(id)arg0 ;
-(void)queryAnticipatesDeletedObjectIDs:(id)arg0 ;
-(void)queryMatchedAddedObjectIDs:(id)arg0 after:(id)arg1 extraInfo:(id)arg2 ;
-(void)queryMatchedAddedObjectIDs:(id)arg0 before:(id)arg1 extraInfo:(id)arg2 ;
-(void)queryMatchedChangesByObjectIDs:(id)arg0 ;
-(void)queryMatchedDeletedObjectIDs:(id)arg0 ;
-(void)queryMatchedMovedObjectIDs:(id)arg0 after:(id)arg1 ;
-(void)queryMatchedMovedObjectIDs:(id)arg0 before:(id)arg1 ;
-(void)queryReplacedObjectID:(id)arg0 withNewObjectID:(id)arg1 ;
-(void)refresh;
-(void)stopObserving:(id)arg0 ;


@end


#endif