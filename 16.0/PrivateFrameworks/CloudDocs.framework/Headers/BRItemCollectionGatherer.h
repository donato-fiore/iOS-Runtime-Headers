// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRITEMCOLLECTIONGATHERER_H
#define BRITEMCOLLECTIONGATHERER_H

@class NSMutableDictionary, NSMetadataQuery, NSPredicate, NSString, NSMutableArray, NSMutableSet;
@protocol FPItemCollectionItemIDBasedDelegate, OS_dispatch_queue, BRItemCollectionGathererDelegate;

#import <Foundation/Foundation.h>


@interface BRItemCollectionGatherer : NSObject <FPItemCollectionItemIDBasedDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_itemIDToItemCollectionMap;
    id<BRItemCollectionGathererDelegate> *_delegate;
    NSMetadataQuery *_query;
    NSPredicate *_predicate;
    NSUInteger _watchTypes;
    NSString *_gatherPrefix;
    NSMutableArray *_watchedAppLibraryFPItemIDs;
    NSMutableSet *_waitingToBeGatheredCollections;
    BOOL _finishedInitialGathering;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_buildCollectionsOnItem:(id)arg0 ;
-(BOOL)_canWatchItem:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 query:(id)arg1 ;
-(void)_addItemCollectionOnObject:(id)arg0 ;
-(void)_startWatchingAppLibrariesIfNeeded:(id)arg0 ;
-(void)_startWatchingNewSubItem:(id)arg0 ;
-(void)_startWatchingURLsIfNeeded:(id)arg0 ;
-(void)_stopWatchingItemIDRecusively:(id)arg0 ;
-(void)collection:(id)arg0 didUpdateItems:(id)arg1 replaceItemsByFormerID:(id)arg2 deleteItemsWithIDs:(id)arg3 ;
-(void)collectionDidFinishGathering:(id)arg0 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg0 ;
-(void)disableUpdates;
-(void)enableUpdates;
-(void)invalidate;
-(void)startWatchingRootItemWithScopes:(id)arg0 ;
-(void)stop;


@end


#endif