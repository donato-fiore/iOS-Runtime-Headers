// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKACHIEVEMENTDATASOURCE_H
#define GKACHIEVEMENTDATASOURCE_H

@class NSArray, GKGameRecord;


#import "GKCollectionDataSource.h"

@interface GKAchievementDataSource : GKCollectionDataSource

@property (retain, nonatomic) NSArray *achievements; // ivar: _achievements
@property (nonatomic) UIEdgeInsets collectionLayoutInsets; // ivar: _collectionLayoutInsets
@property (retain, nonatomic) GKGameRecord *gameRecord; // ivar: _gameRecord
@property (retain, nonatomic) NSArray *localAchievements; // ivar: _localAchievements


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)preferredCollectionHeight;
-(NSInteger)itemCount;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)heightMultipliersForSizeCategories;
-(id)initWithGameRecord:(id)arg0 ;
-(id)itemForIndexPath:(id)arg0 ;
-(id)sectionHeaderText;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)setupCollectionView:(id)arg0 ;


@end


#endif