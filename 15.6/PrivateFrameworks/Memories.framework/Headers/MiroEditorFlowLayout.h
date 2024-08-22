// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROEDITORFLOWLAYOUT_H
#define MIROEDITORFLOWLAYOUT_H

@class UICollectionViewFlowLayout, NSIndexPath, NSMapTable;



@interface MiroEditorFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) CGFloat abscissa; // ivar: _abscissa
@property (readonly, nonatomic) NSIndexPath *centerCellIndexPath;
@property (weak, nonatomic) NSIndexPath *currentIndexPath; // ivar: _currentIndexPath
@property (retain, nonatomic) NSMapTable *initalIndexPathToCGRectMap; // ivar: _initalIndexPathToCGRectMap
@property (retain, nonatomic) NSMapTable *layoutIndexPathToCGRectMap; // ivar: _layoutIndexPathToCGRectMap
@property (nonatomic) CGFloat maximumCenterItemLoupeSpacing; // ivar: _maximumCenterItemLoupeSpacing
@property (weak, nonatomic) NSIndexPath *neighboringIndexPath; // ivar: _neighboringIndexPath
@property (nonatomic) UIEdgeInsets sectionInsets; // ivar: _sectionInsets
@property (retain, nonatomic) NSIndexPath *snappedIndexPath; // ivar: _snappedIndexPath
@property (nonatomic) CGFloat transitionProgress; // ivar: _transitionProgress


-(BOOL)wantsLoupe;
-(CGFloat)_horizontalOffsetForIndexPath:(id)arg0 ;
-(CGFloat)_loupeAmountForIndexPath:(id)arg0 ;
-(CGFloat)_transitionProgressFrom:(id)arg0 abscissa:(CGFloat)arg1 outNeighborIndexPath:(*id)arg2 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGPoint )_snappedContentOffsetForProposedContentOffset:(struct CGPoint )arg0 chosenLayoutAttributes:(*id)arg1 ;
-(struct CGPoint )contentOffsetForScrollingToIndexPath:(id)arg0 transitionProgress:(CGFloat)arg1 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGRect )_rectForItemAtIndexPath:(id)arg0 withLoupe:(BOOL)arg1 ;
-(struct CGSize )_sizeForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)invalidateLayout;
-(void)prepareLayout;


@end


#endif