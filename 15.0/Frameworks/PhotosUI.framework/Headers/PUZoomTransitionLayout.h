// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUZOOMTRANSITIONLAYOUT_H
#define PUZOOMTRANSITIONLAYOUT_H

@class UICollectionViewTransitionLayout;



@interface PUZoomTransitionLayout : UICollectionViewTransitionLayout {
    CGSize _centerOffset;
}




-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(void)_adjustLayoutAttributes:(id)arg0 ;
-(void)setTransitionProgress:(CGFloat)arg0 ;


@end


#endif