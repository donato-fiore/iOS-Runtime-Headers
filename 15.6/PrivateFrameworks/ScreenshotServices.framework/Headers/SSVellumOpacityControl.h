// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVELLUMOPACITYCONTROL_H
#define SSVELLUMOPACITYCONTROL_H

@class UIControl, UISlider, UIImageView;



@interface SSVellumOpacityControl : UIControl {
    UISlider *_slider;
    UIImageView *_leadingImageView;
    UIImageView *_trailingImageView;
}


@property (nonatomic) CGFloat value;


+(CGFloat)preferredWidth;
-(id)_leftImageView;
-(id)_rightImageView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addTarget:(id)arg0 action:(SEL)arg1 forControlEvents:(NSUInteger)arg2 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif