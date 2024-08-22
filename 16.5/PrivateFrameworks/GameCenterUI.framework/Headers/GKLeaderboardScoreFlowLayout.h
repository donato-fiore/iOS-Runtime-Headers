// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKLEADERBOARDSCOREFLOWLAYOUT_H
#define GKLEADERBOARDSCOREFLOWLAYOUT_H

@class UICollectionViewFlowLayout;



@interface GKLeaderboardScoreFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) CGSize contentSizeBeforeInsertingItemsAbove; // ivar: _contentSizeBeforeInsertingItemsAbove
@property (nonatomic) CGFloat heightOfInsertedItems; // ivar: _heightOfInsertedItems
@property (nonatomic) CGFloat initialContentOffset; // ivar: _initialContentOffset
@property (nonatomic) BOOL isInsertingItemsAbove; // ivar: _isInsertingItemsAbove


-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;


@end


#endif