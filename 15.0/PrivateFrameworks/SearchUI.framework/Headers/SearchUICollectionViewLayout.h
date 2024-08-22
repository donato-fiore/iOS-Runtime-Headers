// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICOLLECTIONVIEWLAYOUT_H
#define SEARCHUICOLLECTIONVIEWLAYOUT_H

@class UICollectionViewCompositionalLayout, NSMutableDictionary, NSSet;



@interface SearchUICollectionViewLayout : UICollectionViewCompositionalLayout

@property (retain, nonatomic) NSMutableDictionary *maxHeightForSectionDict; // ivar: _maxHeightForSectionDict
@property (retain, nonatomic) NSSet *sectionIndexesForHeightMatching; // ivar: _sectionIndexesForHeightMatching


+(Class)layoutAttributesClass;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;


@end


#endif