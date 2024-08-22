// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCOLLECTIONMULTIDATASOURCE_H
#define GKCOLLECTIONMULTIDATASOURCE_H

@class NSArray;


#import "GKCollectionDataSource.h"

@interface GKCollectionMultiDataSource : GKCollectionDataSource

@property (retain, nonatomic) NSArray *dataSources; // ivar: _dataSources


-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)preferredCollectionHeight;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)itemCount;
-(NSInteger)itemCountInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)dataSourceForIndexPath:(id)arg0 ;
-(id)itemForIndexPath:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didFocusItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnfocusItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)setupCollectionView:(id)arg0 ;


@end


#endif