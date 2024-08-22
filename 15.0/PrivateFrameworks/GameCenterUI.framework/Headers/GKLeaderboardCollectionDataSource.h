// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKLEADERBOARDCOLLECTIONDATASOURCE_H
#define GKLEADERBOARDCOLLECTIONDATASOURCE_H



#import "GKGameLayerCollectionDataSource.h"

@interface GKLeaderboardCollectionDataSource : GKGameLayerCollectionDataSource



-(CGFloat)cellSpacing;
-(CGFloat)headerSpacing;
-(CGFloat)preferredCollectionHeight;
-(CGFloat)topMargin;
-(NSInteger)allowedColumnCount:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 updateLayoutForSectionHeader:(id)arg1 ;
-(void)setupCollectionView:(id)arg0 ;
-(void)updateHighlightsInSectionHeader:(id)arg0 ;


@end


#endif