// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKWIDGETGRIDVIEWCONDENSEDLAYOUT_H
#define OKWIDGETGRIDVIEWCONDENSEDLAYOUT_H

@class UICollectionViewLayout, NSMutableArray;



@interface OKWidgetGridViewCondensedLayout : UICollectionViewLayout {
    NSMutableArray *_attributes;
    CGFloat _largestWidth;
    CGSize _contentSize;
    CGRect _oldBounds;
}


@property NSUInteger numberOfRows; // ivar: _numberOfRows
@property BOOL snappingEnabled; // ivar: _snappingEnabled
@property float spacingRatio; // ivar: _spacingRatio


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)shouldUpdateVisibleCellLayoutAttributes;
-(id)indexPathsForItemsInRect:(struct CGRect )arg0 ;
-(id)init;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)dealloc;
-(void)finalizeAnimatedBoundsChange;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareForAnimatedBoundsChange:(struct CGRect )arg0 ;
-(void)prepareLayout;


@end


#endif