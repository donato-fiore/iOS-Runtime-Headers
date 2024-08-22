// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSDIFFABLEDATASOURCESECTIONSNAPSHOT_H
#define NSDIFFABLEDATASOURCESECTIONSNAPSHOT_H

@class NSMutableArray, NSOrderedSet, NSArray, NSIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_NSDiffableDataSourceSectionSnapshotState.h"

@interface NSDiffableDataSourceSectionSnapshot : NSObject <NSCopying>

 {
    _NSDiffableDataSourceSectionSnapshotState *_state;
    NSMutableArray *_expandedItemsUpdates;
    NSMutableArray *_collapsedItemsUpdates;
}


@property (readonly, nonatomic) NSOrderedSet *_itemsOrderedSet;
@property (readonly, nonatomic) NSArray *_rootItems;
@property (readonly, nonatomic) _NSDiffableDataSourceSectionSnapshotState *_state;
@property (readonly, nonatomic) NSIndexSet *_visibleIndexes;
@property (readonly, nonatomic) NSOrderedSet *_visibleItemsOrderedSet;
@property (readonly, nonatomic) NSArray *collapsedItemsUpdates;
@property (readonly, nonatomic) NSArray *expandedItemsUpdates;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *rootItems;
@property (readonly, nonatomic) NSArray *visibleItems;


-(BOOL)_itemHasChildren:(id)arg0 ;
-(BOOL)containsItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExpanded:(id)arg0 ;
-(BOOL)isVisible:(id)arg0 ;
-(NSInteger)indexOfItem:(id)arg0 ;
-(NSInteger)levelForItem:(id)arg0 ;
-(NSInteger)levelOfItem:(id)arg0 ;
-(id)_indexesOfChildrenForParent:(id)arg0 recursive:(BOOL)arg1 ;
-(id)_indexesOfItems:(id)arg0 ;
-(id)_indexesOfItems:(id)arg0 ignoringItemsNotFound:(BOOL)arg1 ;
-(id)_itemAfterItem:(id)arg0 ;
-(id)_itemBeforeItem:(id)arg0 ;
-(id)childSnapshotOfParent:(id)arg0 ;
-(id)childSnapshotOfParent:(id)arg0 includingParent:(BOOL)arg1 ;
-(id)childrenOfParent:(id)arg0 ;
-(id)childrenOfParent:(id)arg0 recursive:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)expandedItems;
-(id)init;
-(id)initWithSnapshot:(id)arg0 ;
-(id)initWithState:(id)arg0 ;
-(id)insertSnapshot:(id)arg0 afterItem:(id)arg1 ;
-(id)parentOfChild:(id)arg0 ;
-(id)parentOfChildItem:(id)arg0 ;
-(id)snapshotOfParentItem:(id)arg0 ;
-(id)snapshotOfParentItem:(id)arg0 includingParentItem:(BOOL)arg1 ;
-(id)snapshotter;
-(id)visualDescription;
-(void)_prepareForApplyToDataSource;
-(void)_replaceItem:(id)arg0 withItem:(id)arg1 ;
-(void)appendItems:(id)arg0 ;
-(void)appendItems:(id)arg0 intoParent:(id)arg1 ;
-(void)appendItems:(id)arg0 intoParentItem:(id)arg1 ;
-(void)collapseItems:(id)arg0 ;
-(void)deleteAllItems;
-(void)deleteItems:(id)arg0 ;
-(void)deleteItems:(id)arg0 orphanDisposition:(NSInteger)arg1 ;
-(void)expandItems:(id)arg0 ;
-(void)insertItems:(id)arg0 afterItem:(id)arg1 ;
-(void)insertItems:(id)arg0 afterItem:(id)arg1 insertionMode:(NSInteger)arg2 ;
-(void)insertItems:(id)arg0 beforeItem:(id)arg1 ;
-(void)insertSnapshot:(id)arg0 beforeItem:(id)arg1 ;
-(void)replaceChildrenOfParentItem:(id)arg0 withSnapshot:(id)arg1 ;
-(void)setChildrenWithSnapshot:(id)arg0 forParent:(id)arg1 ;


@end


#endif