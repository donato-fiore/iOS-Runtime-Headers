// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPSPOTLIGHTCOLLECTOR_H
#define FPSPOTLIGHTCOLLECTOR_H

@class NSMutableDictionary, NSDate, NSMapTable, NSMutableSet, NSMutableArray;
@protocol FPSpotlightCollectorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPSpotlightQueryDescriptor.h"

@interface FPSpotlightCollector : NSObject {
    NSMutableDictionary *_itemsByBundleAndCSID;
    BOOL _suspended;
    NSUInteger _numberOfRecoveryAttempts;
    NSDate *_lastStartOfRecovery;
    NSMapTable *_queryToMountPoint;
}


@property (weak, nonatomic) NSObject<FPSpotlightCollectorDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isGathering) BOOL gathering; // ivar: _gathering
@property (nonatomic) NSUInteger itemsOrigin; // ivar: _itemsOrigin
@property (retain, nonatomic) NSMutableSet *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (retain, nonatomic) NSMutableArray *queries; // ivar: _queries
@property (readonly, nonatomic) FPSpotlightQueryDescriptor *queryDescriptor; // ivar: _queryDescriptor
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;


+(id)_recursiveDescription;
-(BOOL)_areItemsTransientFromBundleIdentifier:(id)arg0 ;
-(BOOL)_shouldFilterUpdatesForObserver:(id)arg0 ;
-(BOOL)_shouldRemoveItemsFromObserver:(id)arg0 ;
-(BOOL)isQueryCancelled:(id)arg0 ;
-(NSUInteger)_itemsOriginForItems:(id)arg0 ;
-(id)_allItemsForMountPoint:(id)arg0 ;
-(id)_createQueriesForMountPoints:(id)arg0 ;
-(id)_createQueryForMountPoint:(id)arg0 ;
-(id)_mountPointForExistingSearchQuery:(id)arg0 ;
-(id)_mountPointsForDescriptor;
-(id)allItems;
-(id)allItemsForObserver:(id)arg0 ;
-(id)allObservers;
-(id)description;
-(id)filterItems:(id)arg0 forObserver:(id)arg1 excludedItemIDs:(*id)arg2 ;
-(id)init;
-(id)initWithDescriptor:(id)arg0 ;
-(void)_addObserver:(id)arg0 ;
-(void)_clear;
-(void)_regather;
-(void)_removeItemsForQuery:(id)arg0 mountPoint:(id)arg1 ;
-(void)_removeObserver:(id)arg0 ;
-(void)_start;
-(void)_stop;
-(void)addObserver:(id)arg0 ;
-(void)mountPointsDidChange:(id)arg0 ;
-(void)query:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)query:(id)arg0 didRemoveItemsWithCSIdentifiers:(id)arg1 inBundle:(id)arg2 ;
-(void)query:(id)arg0 didUpdateItems:(id)arg1 ;
-(void)queryDidFinishGathering:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)resume;
-(void)setNeedsItemsOriginUpdate;
-(void)suspend;


@end


#endif