// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESSTORE_H
#define PXPLACESSTORE_H

@class NSSet, NSString, NSMutableSet, NSMutableArray;
@protocol PXPlacesGeotaggedItemDataSource, OS_dispatch_semaphore, PXPlacesGeotaggedItemDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface PXPlacesStore : NSObject <PXPlacesGeotaggedItemDataSource>

 {
    *_PXQuadTreeStoreNode _rootNode;
    uint8_t _updateCount;
    _opaque_pthread_rwlock_t _rwlock;
    NSObject<OS_dispatch_semaphore> *_itemChangeSemaphore;
}


@property (readonly) NSSet *allItems;
@property (readonly) NSUInteger capacityPerNode; // ivar: _capacityPerNode
@property (readonly, copy) NSString *debugDescription;
@property NSObject<PXPlacesGeotaggedItemDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableSet *itemsToAdd; // ivar: _itemsToAdd
@property (retain) NSMutableArray *itemsToAddArray; // ivar: _itemsToAddArray
@property (retain) NSMutableSet *itemsToRemove; // ivar: _itemsToRemove
@property (readonly, nonatomic) NSInteger numberOfItems; // ivar: _numberOfItems
@property ? rect; // ivar: _rect
@property (readonly) Class superclass;


+(id)traceStoreLog;
+(id)traceStoreQueryLog;
-(id)_findItemsInMapRect:(struct ? )arg0 ;
-(id)findItemsInMapRect:(struct ? )arg0 ;
-(id)init;
-(id)initWithCapacityPerNode:(NSUInteger)arg0 ;
-(struct ? )minimalEncompassingMapRect;
-(void)_commitChanges;
-(void)addItem:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)addItemsFromArray:(id)arg0 ;
-(void)beginUpdates;
-(void)dealloc;
-(void)endUpdates;
-(void)removeItem:(id)arg0 ;
-(void)removeItems:(id)arg0 ;
-(void)runNodeDebugCollector:(id)arg0 ;


@end


#endif