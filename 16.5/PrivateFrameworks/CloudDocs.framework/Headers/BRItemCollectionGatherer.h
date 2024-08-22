// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRITEMCOLLECTIONGATHERER_H
#define BRITEMCOLLECTIONGATHERER_H

@class NSMutableDictionary, NSMetadataQuery, NSPredicate, NSMutableSet, NSData, NSString;
@protocol FPItemCollectionItemIDBasedDelegate, OS_dispatch_queue, BRItemCollectionGathererDelegate, NSObject;

#import <Foundation/Foundation.h>

#import "BRWatchingConfiguration.h"

@interface BRItemCollectionGatherer : NSObject <FPItemCollectionItemIDBasedDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_itemIDToItemCollectionMap;
    id<BRItemCollectionGathererDelegate> *_delegate;
    NSMetadataQuery *_query;
    NSPredicate *_predicate;
    BRWatchingConfiguration *_config;
    NSMutableSet *_watchedAppLibraryFPItemIDs;
    NSMutableSet *_waitingToBeGatheredCollections;
    NSMutableSet *_collectionsSet;
    NSMutableDictionary *_itemOwnersMap;
    BOOL _finishedInitialGathering;
    NSMutableSet *_boostedAppLibraries;
    NSMutableDictionary *_failureCountByItemID;
    NSData *_perAppAccountIdentifier;
    id<NSObject> *_accountTokenDidChangeNotificationObserver;
    NSUInteger _appLibrariesLookupAttempts;
    BOOL _finishedLookingUpAppLibraries;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_buildCollectionOnItemIfPossible:(id)arg0 ;
-(BOOL)_canWatchItem:(id)arg0 ;
-(BOOL)_isItemOwnedByAnyCollection:(id)arg0 ;
-(BOOL)_signalDelegateIfNeededOnFinishGathering;
-(NSUInteger)_itemID:(id)arg0 becameOwnedByCollection:(id)arg1 ;
-(NSUInteger)_itemID:(id)arg0 wasDeletedByCollection:(id)arg1 ;
-(id)_getAppLibraryURLFromConfig:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 query:(id)arg1 ;
-(void)_addItemCollectionOnItem:(id)arg0 ;
-(void)_boostAppLibraryOfItemIfNeeded:(id)arg0 ;
-(void)_queueSignalDelegateIfNeededOnFinishGathering;
-(void)_removeCollectionFromGatherSet:(id)arg0 ;
-(void)_startObservingAccountTokenDidChangeNotification;
-(void)_startWatchingAppLibraries:(id)arg0 ;
-(void)_startWatchingNewSubItem:(id)arg0 ;
-(void)_startWatchingRootItemWithConfig:(id)arg0 ;
-(void)_startWatchingTrash:(id)arg0 ;
-(void)_startWatchingURLs:(id)arg0 ;
-(void)_stopObserving;
-(void)_stopObservingAccountTokenDidChangeNotification;
-(void)_stopWatchingItemIDRecusively:(id)arg0 itemIDsInItem:(id)arg1 ;
-(void)_unboostApplibrariesIfNeeded;
-(void)collection:(id)arg0 didEncounterError:(id)arg1 ;
-(void)collection:(id)arg0 didUpdateItems:(id)arg1 replaceItemsByFormerID:(id)arg2 deleteItemsWithIDs:(id)arg3 ;
-(void)collectionDidFinishGathering:(id)arg0 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg0 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg0 deleteItemsWithIDs:(id)arg1 ;
-(void)disableUpdates;
-(void)enableUpdates;
-(void)invalidate;
-(void)startWatchingRootItemWithScopes:(id)arg0 ;
-(void)stop;


@end


#endif