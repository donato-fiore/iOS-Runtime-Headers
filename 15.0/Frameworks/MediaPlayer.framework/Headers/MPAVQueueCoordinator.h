// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPAVQUEUECOORDINATOR_H
#define MPAVQUEUECOORDINATOR_H

@class NSOperationQueue, NSHashTable, NSMutableSet, NSString, NSArray;
@protocol MPAVQueueCoordinating, MPAVQueueCoordinatingDataSource;

#import <Foundation/Foundation.h>

#import "MPAVItem.h"
#import "MPQueuePlayer.h"

@interface MPAVQueueCoordinator : NSObject <MPAVQueueCoordinating>

 {
    NSOperationQueue *_assetQueue;
    NSUInteger _backgroundTaskIdentifier;
    NSUInteger _backgroundTasks;
    BOOL _holdingPlaybackTransactionForFirstItem;
    BOOL _isPendingPlayerItemSync;
    BOOL _isSyncingPlayerItems;
    NSHashTable *_itemsPendingAssetLoading;
    MPAVItem *_lastItemAnchor;
    NSUInteger _lastPreferredQueueDepth;
    BOOL _needsCurrentItemUpdateAfterPlayerItemSync;
    BOOL _preventLoadingItems;
    NSMutableSet *_reusableItems;
}


@property (readonly, nonatomic) MPAVItem *currentItem; // ivar: _currentItem
@property (readonly, weak, nonatomic) NSObject<MPAVQueueCoordinatingDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *equilibriumAchievedHandler; // ivar: _equilibriumAchievedHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) MPQueuePlayer *player; // ivar: _player
@property (nonatomic) BOOL shouldDeferItemLoading; // ivar: _shouldDeferItemLoading
@property (nonatomic) BOOL shouldExpectEmptyQueue; // ivar: _shouldExpectEmptyQueue
@property (readonly) Class superclass;


-(BOOL)_hasAchievedEquilibrium;
-(NSUInteger)_preferredQueueDepthWithFirstItem:(id)arg0 ;
-(id)initWithPlayer:(id)arg0 dataSource:(id)arg1 ;
-(void)_beginBackgroundTaskAssertion;
-(void)_currentItemHasFinishedDownloadingDidChangeNotification:(id)arg0 ;
-(void)_dequeueFailedItem:(id)arg0 ;
-(void)_endBackgroundTaskAssertion;
-(void)_loadAssetForItem:(id)arg0 ;
-(void)_reloadItemsKeepingCurrentItem:(BOOL)arg0 ;
-(void)_removeItemFromPlayer:(id)arg0 ;
-(void)_sendItemsDidChange;
-(void)_syncItemsWithPreviousItems:(id)arg0 ;
-(void)_syncPlayerItems;
-(void)_updateCurrentItem;
-(void)_updateQueueDepthIfNeeded;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg0 ;
-(void)reset;


@end


#endif