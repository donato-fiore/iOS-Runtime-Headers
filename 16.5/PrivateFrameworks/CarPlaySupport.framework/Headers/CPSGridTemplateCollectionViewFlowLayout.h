// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSGRIDTEMPLATECOLLECTIONVIEWFLOWLAYOUT_H
#define CPSGRIDTEMPLATECOLLECTIONVIEWFLOWLAYOUT_H

@class UICollectionViewFlowLayout;



@interface CPSGridTemplateCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) CGFloat preferredItemWidth; // ivar: _preferredItemWidth


-(id)gridItemLayoutInRect:(struct CGRect )arg0 numberOfItems:(NSUInteger)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;


@end


#endif