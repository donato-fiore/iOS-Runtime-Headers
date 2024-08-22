// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUICOLLECTIONVIEWWRAPPERCELL_H
#define VUICOLLECTIONVIEWWRAPPERCELL_H

@class UICollectionViewCell, UIView;



@interface VUICollectionViewWrapperCell : UICollectionViewCell

@property (retain, nonatomic) UIView *childView; // ivar: _childView


-(BOOL)canBecomeFocused;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif