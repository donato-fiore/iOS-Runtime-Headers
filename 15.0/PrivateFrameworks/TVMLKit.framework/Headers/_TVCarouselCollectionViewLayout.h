// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVCAROUSELCOLLECTIONVIEWLAYOUT_H
#define _TVCAROUSELCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewFlowLayout, NSDictionary;



@interface _TVCarouselCollectionViewLayout : UICollectionViewFlowLayout {
    NSDictionary *_layoutAttributesByIndexPath;
}




-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(NSInteger)_expectedNumberOfCells;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)prepareLayout;


@end


#endif