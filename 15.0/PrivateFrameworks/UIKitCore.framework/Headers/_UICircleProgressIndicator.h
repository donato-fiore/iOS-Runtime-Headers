// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICIRCLEPROGRESSINDICATOR_H
#define _UICIRCLEPROGRESSINDICATOR_H

@class CADisplayLink;


#import "UIView.h"
#import "UIImageView.h"
#import "UIColor.h"
#import "UIImage.h"

@interface _UICircleProgressIndicator : UIView {
    CGFloat _animatedValue;
    CGFloat _animationEndTime;
    CGFloat _animationStartTime;
    CGFloat _animationStartValue;
    CADisplayLink *_displayLink;
    UIImageView *_indeterminateView;
    BOOL _isAnimating;
    UIColor *_unhighlightedBackgroundColor;
}


@property (retain, nonatomic) UIImage *borderImage; // ivar: _borderImage
@property (retain, nonatomic) UIImage *fillImage; // ivar: _fillImage
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIImage *image; // ivar: _centerImage
@property (nonatomic) UIEdgeInsets imageInsets; // ivar: _centerImageInsets
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (nonatomic) CGFloat progress; // ivar: _progress


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
-(void)tintColorDidChange;


@end


#endif