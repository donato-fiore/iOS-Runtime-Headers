// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOSSHARINGSELECTIONVIEW_H
#define PUPHOTOSSHARINGSELECTIONVIEW_H

@class UICollectionReusableView, UIView;



@interface PUPhotosSharingSelectionView : UICollectionReusableView {
    UIView *_selectedCheckmarkView;
    UIView *_unselectedCheckmarkView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif