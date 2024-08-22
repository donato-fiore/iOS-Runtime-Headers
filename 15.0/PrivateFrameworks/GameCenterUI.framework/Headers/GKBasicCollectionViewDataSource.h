// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKBASICCOLLECTIONVIEWDATASOURCE_H
#define GKBASICCOLLECTIONVIEWDATASOURCE_H

@class NSPredicate, NSArray;
@protocol NSCopying;


#import "GKCollectionViewDataSource.h"

@interface GKBasicCollectionViewDataSource : GKCollectionViewDataSource <NSCopying>



@property (retain, nonatomic) NSPredicate *filterPredicate; // ivar: _filterPredicate
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) NSUInteger pageSize; // ivar: _pageSize
@property (nonatomic) _NSRange preloadedRange; // ivar: _preloadedRange
@property (nonatomic) SEL showAllAction; // ivar: _showAllAction


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)countOfItems;
-(id)_gkDescriptionWithChildren:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indexPathsForItem:(id)arg0 ;
-(id)init;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)itemsAtIndexes:(id)arg0 ;
-(id)sectionTitle;
-(void)collectionViewDidBecomeInactive:(id)arg0 ;
-(void)configureCollectionView:(id)arg0 ;
-(void)insertItems:(id)arg0 atIndexes:(id)arg1 ;
-(void)preloadImagesForItems:(id)arg0 startingAtIndex:(NSUInteger)arg1 loadBlock:(id)arg2 ;
-(void)removeItemAtIndexPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeItemsAtIndexes:(id)arg0 ;
-(void)replaceItemsAtIndexes:(id)arg0 withItems:(id)arg1 ;


@end


#endif