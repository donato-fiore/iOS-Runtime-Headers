// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPQUILTVIEW_H
#define UPQUILTVIEW_H

@class UIView, NSTimer, CAShapeLayer, UIColor;
@protocol UPQuiltViewDelegate;


#import "UPQuiltConfiguration.h"

@interface UPQuiltView : UIView {
    CGFloat _animationDuration;
    id *_animationCompletion;
    NSTimer *_animationCompletionTimer;
    *CGPath _topQuiltPieceTargetPathRef;
    *CGPath _bottomQuiltPieceTargetPathRef;
    CAShapeLayer *_intersectionPieceLayer;
    *CGPath _intersectionPieceTargetPathRef;
}


@property (retain, nonatomic) UIColor *bottomQuiltColor; // ivar: _bottomQuiltColor
@property (readonly, nonatomic) *CGPath bottomQuiltPathRef;
@property (retain, nonatomic) CAShapeLayer *bottomQuiltPieceLayer; // ivar: _bottomQuiltPieceLayer
@property (retain, nonatomic) UPQuiltConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) UIColor *intersectionPieceColor; // ivar: _intersectionPieceColor
@property (readonly, nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (weak, nonatomic) NSObject<UPQuiltViewDelegate> *quiltViewDelegate; // ivar: _quiltViewDelegate
@property (retain, nonatomic) UIColor *topQuiltColor; // ivar: _topQuiltColor
@property (readonly, nonatomic) *CGPath topQuiltPathRef;
@property (retain, nonatomic) CAShapeLayer *topQuiltPieceLayer; // ivar: _topQuiltPieceLayer


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setColors;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateQuiltsWithUnlockProgress:(CGFloat)arg0 wakeProgress:(CGFloat)arg1 ;


@end


#endif