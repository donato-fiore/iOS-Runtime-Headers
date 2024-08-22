// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXSCANNERINDICATORVIEW_H
#define PRXSCANNERINDICATORVIEW_H

@class UIView, CAShapeLayer, NSString, CAGradientLayer;
@protocol CAAnimationDelegate;



@interface PRXScannerIndicatorView : UIView <CAAnimationDelegate>



@property (readonly, nonatomic) CAShapeLayer *borderLayerMask; // ivar: _borderLayerMask
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CAShapeLayer *initialWhiteTintLayer; // ivar: _initialWhiteTintLayer
@property (nonatomic) BOOL needsReset; // ivar: _needsReset
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAGradientLayer *viewFinderBorderLayer; // ivar: _viewFinderBorderLayer
@property (readonly, nonatomic) CAShapeLayer *viewFinderTintLayer; // ivar: _viewFinderTintLayer


+(CGFloat)innerHoleRatio;
+(CGFloat)strokeWidth;
-(id)init;
-(id)innerHolePathForRatio:(CGFloat)arg0 stroke:(CGFloat)arg1 ;
-(void)animateBorderFrom:(id)arg0 to:(id)arg1 duration:(CGFloat)arg2 ;
-(void)animateInitialIfNeeded;
-(void)animateToColors:(id)arg0 duration:(CGFloat)arg1 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)complete;
-(void)completed;
-(void)configure;
-(void)initial;
-(void)layoutSubviews;
-(void)reset;


@end


#endif