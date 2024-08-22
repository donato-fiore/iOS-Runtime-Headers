// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIITEMGRIDCOLLECTIONVIEWLAYOUT_H
#define SKUIITEMGRIDCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewFlowLayout, UIColor;



@interface SKUIItemGridCollectionViewLayout : UICollectionViewFlowLayout

@property (copy, nonatomic) UIColor *evenRowBackgroundColor; // ivar: _evenColor
@property (nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns
@property (copy, nonatomic) UIColor *oddRowBackgroundColor; // ivar: _oddColor


+(Class)layoutAttributesClass;
-(id)init;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;


@end


#endif