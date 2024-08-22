// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKGAMELAYERCOLLECTIONDATASOURCE_H
#define GKGAMELAYERCOLLECTIONDATASOURCE_H

@class NSString, GKGameRecord, UIViewController;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout;

#import <Foundation/Foundation.h>


@interface GKGameLayerCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GKGameRecord *gameRecord; // ivar: _gameRecord
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentationViewController; // ivar: _presentationViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)cellSpacing;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)itemCount;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithGameRecord:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )standardCellSizeForCollectionView:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)handleSelectionInCollectionView:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)prepareCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)setupCollectionView:(id)arg0 ;


@end


#endif