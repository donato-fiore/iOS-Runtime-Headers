// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTEDGEDISAPPEARINGCOLLECTIONVIEWLAYOUT_H
#define AVTEDGEDISAPPEARINGCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewFlowLayout, UICollectionViewLayoutAttributes;



@interface AVTEdgeDisappearingCollectionViewLayout : UICollectionViewFlowLayout

@property (nonatomic) BOOL enableEdgeDisappearing; // ivar: _enableEdgeDisappearing
@property (retain, nonatomic) UICollectionViewLayoutAttributes *fixedHeaderLayoutAttributes; // ivar: _fixedHeaderLayoutAttributes
@property (nonatomic) BOOL pinHeaderToVisible; // ivar: _pinHeaderToVisible


-(BOOL)isRTL;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(void)modifyLayoutAttributes:(id)arg0 ;
-(void)prepareLayout;


@end


#endif