// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKBUTTON_H
#define TLKBUTTON_H

@class UIView, UIImage, CAShapeLayer;


#import "TLKTapContainerButton.h"
#import "TLKImageView.h"

@interface TLKButton : UIView

@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) TLKTapContainerButton *button; // ivar: _button
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) CGSize fixedSize; // ivar: _fixedSize
@property (readonly) UIView *hitView;
@property (readonly) UIImage *imageOnImageView;
@property (retain, nonatomic) TLKImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate; // ivar: _indeterminate
@property (retain, nonatomic) CAShapeLayer *innerProgressLayer; // ivar: _innerProgressLayer
@property (retain, nonatomic) CAShapeLayer *outerProgressLayer; // ivar: _outerProgressLayer
@property (retain, nonatomic) UIImage *overlayImage; // ivar: _overlayImage
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic, getter=isToggled) BOOL toggled; // ivar: _toggled
@property (retain, nonatomic) UIImage *toggledImage; // ivar: _toggledImage
@property (retain, nonatomic) UIImage *untoggledImage; // ivar: _untoggledImage


+(id)blurColorForColor:(id)arg0 ;
+(id)blurColorForImage:(id)arg0 forButtonSize:(struct CGSize )arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3 ;
+(struct ? )_calculateStatistics:(struct CGImage *)arg0 withSize:(struct CGSize )arg1 ;
-(id)_newShapeViewWithBounds:(struct CGRect )arg0 lineWidth:(CGFloat)arg1 ;
-(id)iconColor;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_beginIndeterminateAnimation;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateInnerProgressLayerStroke;
-(void)addTarget:(id)arg0 forAction:(SEL)arg1 ;
-(void)beginIndeterminateAnimation;
-(void)didMoveToWindow;
-(void)endIndeterminateAnimation;
-(void)hideProgressAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)showPlayIndicator:(BOOL)arg0 ;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateOuterProgressLayerStroke;


@end


#endif