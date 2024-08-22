// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISWOOSHCOLLECTIONVIEWLAYOUT_H
#define SKUISWOOSHCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewFlowLayout, UIColor;



@interface SKUISwooshCollectionViewLayout : UICollectionViewFlowLayout

@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL snapsToItemBoundaries; // ivar: _snapsToItemBoundaries
@property (nonatomic) BOOL snapsToItemCenters; // ivar: _snapsToItemCenters


+(Class)layoutAttributesClass;
+(float)snapToBoundariesDecelerationRate;
-(id)init;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;


@end


#endif