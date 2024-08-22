// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDCHALLENGEDATASOURCE_H
#define GKDASHBOARDCHALLENGEDATASOURCE_H

@class NSArray, GKGameRecord;
@protocol GKDashboardChallengeDetailViewControllerDelegate;


#import "GKCollectionDataSource.h"

@interface GKDashboardChallengeDataSource : GKCollectionDataSource <GKDashboardChallengeDetailViewControllerDelegate>



@property (retain, nonatomic) NSArray *challenges; // ivar: _challenges
@property (retain, nonatomic) GKGameRecord *gameRecord; // ivar: _gameRecord
@property (nonatomic) BOOL shouldShowPlay; // ivar: _shouldShowPlay


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)preferredCollectionHeight;
-(NSInteger)itemCount;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithGameRecord:(id)arg0 ;
-(id)itemForIndexPath:(id)arg0 ;
-(id)sectionHeaderText;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)newDashboardUserDidSelectPlayChallenge:(id)arg0 ;
-(void)setupCollectionView:(id)arg0 ;
-(void)userDidSelectPlay:(id)arg0 ;


@end


#endif