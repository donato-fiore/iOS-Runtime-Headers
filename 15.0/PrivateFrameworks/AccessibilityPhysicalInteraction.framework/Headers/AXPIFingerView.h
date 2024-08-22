// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXPIFINGERVIEW_H
#define AXPIFINGERVIEW_H

@class UIView, NSString, CAShapeLayer;
@protocol CAAnimationDelegate, AXPIFingerAppearanceDelegate;


#import "AXPIFingerLayer.h"

@interface AXPIFingerView : UIView <CAAnimationDelegate>



@property (weak, nonatomic) NSObject<AXPIFingerAppearanceDelegate> *appearanceDelegate; // ivar: _appearanceDelegate
@property (retain, nonatomic) AXPIFingerLayer *cursorLayer; // ivar: _cursorLayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat force; // ivar: _force
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAShapeLayer *innerStrokeLayer; // ivar: _innerStrokeLayer
@property (copy, nonatomic) id *lastProgressCompletionBlock; // ivar: _lastProgressCompletionBlock
@property (retain, nonatomic) CAShapeLayer *outerStrokeLayer; // ivar: _outerStrokeLayer
@property (retain, nonatomic) CAShapeLayer *outerStrokeTrackLayer; // ivar: _outerStrokeTrackLayer
@property (nonatomic, getter=isPressed) BOOL pressed; // ivar: _pressed
@property (retain, nonatomic) CAShapeLayer *progressLayer; // ivar: _progressLayer
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) NSUInteger shape; // ivar: _shape
@property (readonly) Class superclass;


+(id)layerClass;
-(BOOL)accessibilityIgnoresInvertColors;
-(BOOL)isUserInteractionEnabled;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_iconScaleForForce:(CGFloat)arg0 ;
-(id)_createProgressLayerWithDuration:(CGFloat)arg0 inRect:(struct CGRect )arg1 ;
-(id)backdropLayer;
-(id)filterLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 appearanceDelegate:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setPathForCurrentShape;
-(void)animateCircularProgressWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)animateToTapWithDuration:(CGFloat)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)cancelExisingCircularProgressAnimation;
-(void)dealloc;


@end


#endif