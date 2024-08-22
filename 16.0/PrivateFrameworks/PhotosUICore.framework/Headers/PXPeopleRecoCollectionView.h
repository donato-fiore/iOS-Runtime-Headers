// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLERECOCOLLECTIONVIEW_H
#define PXPEOPLERECOCOLLECTIONVIEW_H

@class UICollectionView;
@protocol PXPeopleRecoCollectionViewDelegate;



@interface PXPeopleRecoCollectionView : UICollectionView

@property (weak, nonatomic) NSObject<PXPeopleRecoCollectionViewDelegate> *recoCollectionViewDelegate; // ivar: _recoCollectionViewDelegate


-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif