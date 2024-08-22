// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPITEMCOLLECTION_H
#define FPITEMCOLLECTION_H

@class NSDate, NSMutableDictionary, NSMutableSet, NSPredicate, NSString, NSArray;
@protocol FPReachabilityObserver, FPCollectionDataSourceDelegate, OS_dispatch_queue, OS_dispatch_source, FPItemCollectionItemIDBasedDelegate, FPItemCollectionIndexPathBasedDelegate, FPCollectionDataSource, FPItemCollectionMinimalDelegate;

#import <Foundation/Foundation.h>

#import "_FPItemList.h"
#import "FPAppRegistry.h"
#import "FPItemID.h"
#import "FPPacer.h"

@interface FPItemCollection : NSObject <FPReachabilityObserver, FPCollectionDataSourceDelegate>

 {
    _FPItemList *_currentItems;
    NSObject<OS_dispatch_queue> *_itemAccessQueue;
    NSObject<OS_dispatch_source> *_restartTimer;
    NSDate *_lastInvalidationOnError;
    NSUInteger _invalidationOnErrorCount;
    NSMutableDictionary *_updatedItemsByIdentifiers;
    NSMutableSet *_deletedItemsIdentifiers;
    NSMutableDictionary *_formerItemsIdentifiers;
    NSMutableDictionary *_pendingItemsStitching;
    NSMutableDictionary *_pendingItemsFields;
    BOOL _shouldResort;
    BOOL _regathering;
    BOOL _shouldRetryOnceAfterCrash;
    NSPredicate *_itemFilteringPredicate;
    FPAppRegistry *_appRegistry;
    id<FPItemCollectionItemIDBasedDelegate> *_itemIDBasedDelegate;
    id<FPItemCollectionIndexPathBasedDelegate> *_indexPathBasedDelegate;
}


@property (retain, nonatomic) NSPredicate *additionalItemFilteringPredicate; // ivar: _additionalItemFilteringPredicate
@property (readonly, nonatomic) NSObject<FPCollectionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FPItemCollectionMinimalDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSString *domainIdentifier;
@property (readonly) FPItemID *enumeratedItemID; // ivar: _enumeratedItemID
@property (nonatomic, getter=isGathering) BOOL gathering; // ivar: _gathering
@property (readonly, nonatomic) BOOL hasMoreUpdates; // ivar: _hasMoreUpdates
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isImmutable) BOOL immutable; // ivar: _immutable
@property (retain, nonatomic) NSPredicate *itemFilteringPredicate;
@property (readonly, nonatomic) NSArray *items;
@property (readonly) NSUInteger lastForcedUpdate; // ivar: _lastForcedUpdate
@property (nonatomic) BOOL observing; // ivar: _observing
@property (readonly) NSString *providerIdentifier;
@property (nonatomic) BOOL showHiddenFiles; // ivar: _showHiddenFiles
@property (readonly, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (readonly) Class superclass;
@property (readonly, nonatomic) FPPacer *updatePacer; // ivar: _updatePacer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // ivar: _updateQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // ivar: _workingQueue


+(BOOL)isEnumerationSuspended;
+(id)_bouncedItem:(id)arg0 withinItems:(id)arg1 ;
+(id)activeCollections;
+(void)addActiveCollection:(id)arg0 ;
+(void)consumeUpdates:(id)arg0 deletes:(id)arg1 ;
+(void)initialize;
+(void)refreshActiveCollectionsForDecorationChange;
+(void)removeActiveCollection:(id)arg0 ;
+(void)replacePlaceholders:(id)arg0 withActualItems:(id)arg1 deletedIDs:(id)arg2 ;
+(void)resumeVendorEnumeration;
+(void)suspendVendorEnumeration;
-(BOOL)__isUsingDataSource:(id)arg0 ;
-(BOOL)_isUsingDataSource:(id)arg0 ;
-(BOOL)dataSourceShouldAlwaysReplaceContents:(id)arg0 ;
-(BOOL)isCollectionValidForItem:(id)arg0 ;
-(BOOL)isHiddenItem:(id)arg0 ;
-(BOOL)isRegatheringAfterSignal;
-(BOOL)isRootItem:(id)arg0 ;
-(BOOL)recoverFromError:(id)arg0 ;
-(BOOL)shouldConsiderUsingPlaceholder:(id)arg0 forItem:(id)arg1 skipForwardFormerID:(*BOOL)arg2 ;
-(BOOL)shouldRetryError:(id)arg0 ;
-(NSInteger)_numberOfItems;
-(NSInteger)numberOfItems;
-(NSUInteger)_indexOfItem:(id)arg0 ;
-(NSUInteger)_indexOfItemID:(id)arg0 ;
-(id)_reorderWithPlaceholdersLast:(id)arg0 ;
-(id)computeIndexPathsBasedDiffsWithOldItems:(id)arg0 futureItems:(id)arg1 ;
-(id)computeItemIDBasedDiffs;
-(id)createDataSourceWithSortDescriptors:(id)arg0 ;
-(id)indexPathFromIndex:(NSInteger)arg0 ;
-(id)indexPathsFromIndexSet:(id)arg0 ;
-(id)init;
-(id)initWithPacing:(BOOL)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)scopedSearchQuery;
-(void)_cancelStartTime;
-(void)_didEncounterError:(id)arg0 forObservationID:(NSUInteger)arg1 ;
-(void)_flushPendingUpdates;
-(void)_receivedBatchWithUpdatedItems:(id)arg0 deletedItemsIdentifiers:(id)arg1 ;
-(void)_receivedBatchWithUpdatedItems:(id)arg0 deletedItemsIdentifiers:(id)arg1 dropForReplacedPlaceholders:(BOOL)arg2 ;
-(void)_receivedBatchWithUpdatedItems:(id)arg0 deletedItemsIdentifiers:(id)arg1 forceFlush:(BOOL)arg2 dropForReplacedPlaceholders:(BOOL)arg3 ;
-(void)_replaceContentsWithVendorItems:(id)arg0 ;
-(void)_restartObservation;
-(void)_restartObservationWithReason:(id)arg0 ;
-(void)_startObserving;
-(void)_startRegathering;
-(void)_updateObservedItem:(id)arg0 ;
-(void)dataSource:(id)arg0 receivedUpdatedItems:(id)arg1 deletedItems:(id)arg2 hasMoreChanges:(BOOL)arg3 ;
-(void)dataSource:(id)arg0 replaceContentsWithItems:(id)arg1 hasMoreChanges:(BOOL)arg2 ;
-(void)dataSource:(id)arg0 wasInvalidatedWithError:(id)arg1 ;
-(void)dealloc;
-(void)forceRefreshOfItemWithItemID:(id)arg0 ;
-(void)reachabilityMonitor:(id)arg0 didChangeReachabilityStatusTo:(BOOL)arg1 ;
-(void)receivedBatchWithUpdatedItems:(id)arg0 deletedItemsIdentifiers:(id)arg1 ;
-(void)receivedBatchWithUpdatedItems:(id)arg0 deletedItemsIdentifiers:(id)arg1 hasMoreChanges:(BOOL)arg2 ;
-(void)reorderItemsWithSortDescriptors:(id)arg0 ;
-(void)replacePlaceholders:(id)arg0 withActualItems:(id)arg1 deletedIDs:(id)arg2 ;
-(void)resumeUpdates;
-(void)sendIndexPathBasedDiffs:(id)arg0 ;
-(void)sendItemIDBasedDiffs:(id)arg0 ;
-(void)startObserving;
-(void)startObservingWithEnumerationProperties:(id)arg0 ;
-(void)stopObserving;
-(void)suspendUpdates;
-(void)updateRootItem:(id)arg0 ;


@end


#endif