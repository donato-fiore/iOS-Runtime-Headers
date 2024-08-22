// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCOLLECTIONFOCUSINGLAYOUT_H
#define GKCOLLECTIONFOCUSINGLAYOUT_H

@class UICollectionViewFlowLayout, NSIndexPath, UICollectionViewLayoutAttributes;



@interface GKCollectionFocusingLayout : UICollectionViewFlowLayout

@property (nonatomic) CGFloat focusHeaderOffset; // ivar: _focusHeaderOffset
@property (nonatomic) CGFloat focusScaleFactor; // ivar: _focusScaleFactor
@property (retain, nonatomic) NSIndexPath *focusedIndexPath; // ivar: _focusedIndexPath
@property (nonatomic) CGFloat headerToItemSpacing; // ivar: _headerToItemSpacing
@property (retain, nonatomic) UICollectionViewLayoutAttributes *topHeaderAttributes; // ivar: _topHeaderAttributes
@property (nonatomic) CGFloat topHeaderHeight; // ivar: _topHeaderHeight


-(BOOL)shouldUpdateVisibleCellLayoutAttributes;
-(CGFloat)minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg0 ;
-(CGFloat)minimumLineSpacingForSectionAtIndex:(NSInteger)arg0 ;
-(id)focusAdjustedAttributesForItemAttributes:(id)arg0 ;
-(id)focusAdjustedAttributesForSupplementaryViewAttributes:(id)arg0 ;
-(id)init;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGSize )sizeForFooterInSection:(NSInteger)arg0 ;
-(struct CGSize )sizeForHeaderInSection:(NSInteger)arg0 ;
-(struct CGSize )sizeForItemAtIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionInset;
-(void)_updateFocusFrameForCellAtIndexPath:(id)arg0 ;
-(void)_updateFocusOffsetsForSectionHeadersWithAnimationCoordinator:(id)arg0 ;
-(void)applyDefaults;
-(void)awakeFromNib;
-(void)prepareLayout;


@end


#endif