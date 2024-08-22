// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFNESTEDCOLLECTIONVIEWCELL_H
#define SFNESTEDCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UICollectionView;



@interface SFNestedCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_setUpCollectionViewIfNeeded;


@end


#endif