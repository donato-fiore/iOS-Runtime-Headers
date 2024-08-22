// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOLLECTIONVIEWLEFTALIGNEDLAYOUT_H
#define WFCOLLECTIONVIEWLEFTALIGNEDLAYOUT_H

@class UICollectionViewFlowLayout, NSMutableDictionary;



@interface WFCollectionViewLeftAlignedLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableDictionary *frameCache; // ivar: _frameCache
@property (retain, nonatomic) NSMutableDictionary *sectionInsetCache; // ivar: _sectionInsetCache


-(CGFloat)minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg0 ;
-(id)init;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)leftAlignedAttributesForAttribute:(id)arg0 sectionInset:(struct UIEdgeInsets )arg1 ;
-(struct UIEdgeInsets )sectionInsetForItemAtIndex:(NSInteger)arg0 ;
-(void)invalidateLayout;


@end


#endif