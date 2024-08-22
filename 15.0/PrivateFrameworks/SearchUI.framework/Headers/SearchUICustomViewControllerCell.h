// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICUSTOMVIEWCONTROLLERCELL_H
#define SEARCHUICUSTOMVIEWCONTROLLERCELL_H

@class UICollectionViewCell, UIViewController, UIView;



@interface SearchUICustomViewControllerCell : UICollectionViewCell

@property (retain, nonatomic) UIViewController *embeddedViewController; // ivar: _embeddedViewController
@property (retain) UIView *hostedView; // ivar: _hostedView


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif