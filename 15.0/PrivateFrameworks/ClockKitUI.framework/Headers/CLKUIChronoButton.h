// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKUICHRONOBUTTON_H
#define CLKUICHRONOBUTTON_H

@class UIControl, UIImageView, UIColor;



@interface CLKUIChronoButton : UIControl {
    UIImageView *_ringView;
    UIImageView *_fillView;
    CGPoint _originalCenter;
}


@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) UIColor *ringColor; // ivar: _ringColor
@property (retain, nonatomic) UIColor *ringSwapColor; // ivar: _ringSwapColor
@property (retain, nonatomic) UIColor *swapColor; // ivar: _swapColor
@property (nonatomic) UIEdgeInsets touchEdgeInsets; // ivar: _touchEdgeInsets


+(id)_fillImageWithRadius:(CGFloat)arg0 lineThickness:(CGFloat)arg1 ;
+(id)_ringImageWithRadius:(CGFloat)arg0 lineThickness:(CGFloat)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithDiameter:(CGFloat)arg0 ;
-(id)initWithDiameter:(CGFloat)arg0 lineThickness:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_performTouchAnimationThroughColor:(id)arg0 toColor:(id)arg1 toRingColor:(id)arg2 ;
-(void)_setupImagesWithDiameter:(CGFloat)arg0 lineThickness:(CGFloat)arg1 ;
-(void)_updateColors;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif