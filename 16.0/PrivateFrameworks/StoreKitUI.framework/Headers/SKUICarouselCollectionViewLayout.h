// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUICAROUSELCOLLECTIONVIEWLAYOUT_H
#define SKUICAROUSELCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewFlowLayout, NSIndexPath;



@interface SKUICarouselCollectionViewLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSIndexPath *startScrollingIndexPath; // ivar: _startScrollingIndexPath


+(Class)layoutAttributesClass;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(struct CGPoint )_collectionViewBoundsCenter;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(void)_panGestureRecognized:(id)arg0 ;
-(void)prepareForTransitionToLayout:(id)arg0 ;
-(void)prepareLayout;


@end


#endif