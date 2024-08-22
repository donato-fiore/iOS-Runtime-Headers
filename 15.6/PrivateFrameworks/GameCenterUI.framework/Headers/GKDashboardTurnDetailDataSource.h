// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDTURNDETAILDATASOURCE_H
#define GKDASHBOARDTURNDETAILDATASOURCE_H

@class GKTurnBasedMatch;


#import "GKCollectionDataSource.h"

@interface GKDashboardTurnDetailDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKTurnBasedMatch *match; // ivar: _match


-(CGFloat)preferredCollectionHeight;
-(NSInteger)itemCount;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithMatch:(id)arg0 ;
-(id)itemForIndexPath:(id)arg0 ;
-(id)sectionHeaderText;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)setupCollectionView:(id)arg0 ;


@end


#endif