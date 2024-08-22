// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCTEXTHIGHLIGHTDOT_H
#define VKCTEXTHIGHLIGHTDOT_H

@class UIView, CALayer, UIColor;



@interface VKCTextHighlightDot : UIView

@property (retain, nonatomic) CALayer *circleLayer; // ivar: _circleLayer
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (nonatomic) BOOL pulsing; // ivar: _pulsing
@property (retain, nonatomic) CALayer *pulsingLayer; // ivar: _pulsingLayer
@property (nonatomic) VKQuadSideLength quadSideLength; // ivar: _quadSideLength
@property (weak, nonatomic) CALayer *textHighlightLayer; // ivar: _textHighlightLayer


-(CGFloat)opacityForCurrentQuadSize;
-(id)initWithColor:(id)arg0 ;
-(struct CGRect )_rectForViewSpace:(struct CGRect )arg0 ;
-(struct CGRect )rectForIndicatorDot;
-(void)_updateLayout;
-(void)configureForPulsing:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateIndicatorDotForState;


@end


#endif