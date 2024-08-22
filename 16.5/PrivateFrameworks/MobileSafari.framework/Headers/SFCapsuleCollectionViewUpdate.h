// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCAPSULECOLLECTIONVIEWUPDATE_H
#define SFCAPSULECOLLECTIONVIEWUPDATE_H

@class NSMutableSet, NSSet, NSIndexSet, NSArray;

#import <Foundation/Foundation.h>

#import "SFCapsuleCollectionView.h"

@interface SFCapsuleCollectionViewUpdate : NSObject {
    NSMutableSet *_insertedItems;
}


@property (readonly, nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (readonly, weak, nonatomic) SFCapsuleCollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) NSSet *deletedItems; // ivar: _deletedItems
@property (readonly, nonatomic) NSInteger indexAfterUpdateOfSelectedItemBeforeUpdate; // ivar: _indexAfterUpdateOfSelectedItemBeforeUpdate
@property (readonly, nonatomic) NSInteger indexBeforeUpdateOfSelectedItemAfterUpdate; // ivar: _indexBeforeUpdateOfSelectedItemAfterUpdate
@property (readonly, nonatomic) NSIndexSet *indexesOfDeletedItems; // ivar: _indexesOfDeletedItems
@property (readonly, nonatomic) NSIndexSet *indexesOfInsertedItems; // ivar: _indexesOfInsertedItems
@property (readonly, nonatomic) NSIndexSet *indexesOfVisibleItemsBeforeUpdate; // ivar: _indexesOfVisibleItemsBeforeUpdate
@property (readonly, nonatomic) NSArray *itemsAfterUpdate; // ivar: _itemsAfterUpdate
@property (readonly, nonatomic) NSArray *itemsBeforeUpdate; // ivar: _itemsBeforeUpdate
@property (readonly, nonatomic) NSInteger selectedItemIndexAfterUpdate; // ivar: _selectedItemIndexAfterUpdate
@property (readonly, nonatomic) NSInteger selectedItemIndexBeforeUpdate; // ivar: _selectedItemIndexBeforeUpdate


-(id)initWithCollectionView:(id)arg0 ;
-(void)_calculateIndexesIfNeeded;
-(void)deleteItemsAtIndexes:(id)arg0 animated:(BOOL)arg1 ;
-(void)insertItemsAtIndexes:(id)arg0 animated:(BOOL)arg1 ;
-(void)setSelectedItemIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif