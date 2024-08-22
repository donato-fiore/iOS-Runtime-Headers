// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUICIRCLEPROGRESSINDICATOR_H
#define SKUICIRCLEPROGRESSINDICATOR_H

@class UIView, UIImage, CADisplayLink, UIImageView, UIColor;



@interface SKUICircleProgressIndicator : UIView {
    CGFloat _animatedValue;
    CGFloat _animationEndTime;
    CGFloat _animationStartTime;
    CGFloat _animationStartValue;
    UIImage *_borderImage;
    CADisplayLink *_displayLink;
    UIImage *_fillImage;
    UIImageView *_indeterminateView;
    BOOL _isAnimating;
    UIColor *_unhighlightedBackgroundColor;
}


@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIImage *image; // ivar: _centerImage
@property (nonatomic) UIEdgeInsets imageInsets; // ivar: _centerImageInsets
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (nonatomic) CGFloat progress; // ivar: _progress


+(id)_borderImage;
+(id)_fillImage;
+(id)_indeterminateImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_animateValueOnDisplayLink:(id)arg0 ;
-(void)_setHidesBorderView:(BOOL)arg0 ;
-(void)_startIndeterminateAnimation;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif