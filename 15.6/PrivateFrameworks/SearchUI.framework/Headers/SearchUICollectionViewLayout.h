// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUICOLLECTIONVIEWLAYOUT_H
#define SEARCHUICOLLECTIONVIEWLAYOUT_H

@class UICollectionViewCompositionalLayout, NSSet;



@interface SearchUICollectionViewLayout : UICollectionViewCompositionalLayout

@property (retain, nonatomic) NSSet *sectionIndexesForHeightMatching; // ivar: _sectionIndexesForHeightMatching


+(Class)layoutAttributesClass;
+(void)applyForcedHeightToAttributes:(id)arg0 height:(CGFloat)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;


@end


#endif