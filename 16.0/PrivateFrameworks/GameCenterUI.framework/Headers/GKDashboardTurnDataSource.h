// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDASHBOARDTURNDATASOURCE_H
#define GKDASHBOARDTURNDATASOURCE_H

@class NSArray;


#import "GKCollectionDataSource.h"

@interface GKDashboardTurnDataSource : GKCollectionDataSource

@property (retain, nonatomic) NSArray *matches; // ivar: _matches
@property (nonatomic) BOOL shouldShowPlay; // ivar: _shouldShowPlay
@property (nonatomic) BOOL shouldShowQuit; // ivar: _shouldShowQuit


-(CGFloat)preferredCollectionHeight;
-(NSInteger)itemCount;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)init;
-(id)itemForIndexPath:(id)arg0 ;
-(id)sectionHeaderText;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)setupCollectionView:(id)arg0 ;


@end


#endif