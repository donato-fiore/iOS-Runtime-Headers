// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPREVEALINGRINGVIEW_H
#define TPREVEALINGRINGVIEW_H

@class UIView, UIColor;


#import "_TPTemplatedColoredImageView.h"

@interface TPRevealingRingView : UIView {
    ? _outerViewDrawingProperties;
    _TPTemplatedColoredImageView *_outerView;
    ? _innerViewDrawingProperties;
    _TPTemplatedColoredImageView *_innerView;
    UIColor *_colorInsideRing;
    BOOL _isCircularRing;
    BOOL _revealed;
}


@property (nonatomic) CGFloat alphaInsideRing; // ivar: _alphaInsideRing
@property (nonatomic) CGFloat alphaOutsideRing; // ivar: _alphaOutsideRing
@property (retain, nonatomic) UIColor *colorInsideRing; // ivar: _colorInsidegamRing
@property (retain, nonatomic) UIColor *colorOutsideRing; // ivar: _colorOutsideRing
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat defaultRingStrokeWidth; // ivar: _defaultRingStrokeWidth
@property (readonly, nonatomic) UIEdgeInsets paddingOutsideRing; // ivar: _paddingOutsideRing
@property (nonatomic) CGFloat revealAnimationDuration; // ivar: _revealAnimationDuration
@property (readonly, nonatomic) CGSize ringSize;
@property (nonatomic) CGFloat unrevealAnimationDuration; // ivar: _unrevealAnimationDuration


+(id)classIdentifier;
-(BOOL)_isSquare:(struct CGSize )arg0 ;
-(BOOL)_shouldDrawAsCircle:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 ;
-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 paddingOutsideRing:(struct UIEdgeInsets )arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_animateForReveal:(BOOL)arg0 withDuration:(float)arg1 delay:(CGFloat)arg2 ;
-(void)_calculateOuter:(struct CGRect *)arg0 inner:(struct CGRect *)arg1 newXOffset:(*CGFloat)arg2 newYOffset:(*CGFloat)arg3 withScale:(CGFloat)arg4 ;
-(void)_computeInnerViewDrawingPropertiesWithScale:(CGFloat)arg0 ;
-(void)_computeOuterViewDrawingPropertiesWithScale:(CGFloat)arg0 ;
-(void)_evaluateCircularness;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setRevealed:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setRevealed:(BOOL)arg0 animated:(BOOL)arg1 delay:(CGFloat)arg2 ;


@end


#endif