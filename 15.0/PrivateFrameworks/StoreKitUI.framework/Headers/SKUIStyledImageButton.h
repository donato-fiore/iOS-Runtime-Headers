// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISTYLEDIMAGEBUTTON_H
#define SKUISTYLEDIMAGEBUTTON_H

@class UIControl;


#import "SKUIImageView.h"

@interface SKUIStyledImageButton : UIControl {
    BOOL _didInitialHighlightForTouch;
}


@property (readonly, nonatomic) SKUIImageView *additionalImageView; // ivar: _additionalImageView
@property (nonatomic) UIEdgeInsets bigHitInsets; // ivar: _bigHitInsets
@property (nonatomic) UIEdgeInsets hitRectInsets; // ivar: _hitRectInsets
@property (readonly, nonatomic) SKUIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL useBigHitTarget; // ivar: _useBigHitTarget


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )hitRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif