// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKINVISIBLEINKIMAGEEFFECTVIEW_H
#define CKINVISIBLEINKIMAGEEFFECTVIEW_H

@class CALayer, NSString, CAEmitterLayer;
@protocol CAAnimationDelegate;


#import "CKInvisibleInkEffectView.h"

@interface CKInvisibleInkImageEffectView : CKInvisibleInkEffectView <CAAnimationDelegate>



@property (retain, nonatomic) CALayer *blurredImageContainerLayer; // ivar: _blurredImageContainerLayer
@property (retain, nonatomic) CALayer *blurredImageLayer; // ivar: _blurredImageLayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CALayer *drawEmitterContainerLayer; // ivar: _drawEmitterContainerLayer
@property (retain, nonatomic) CAEmitterLayer *drawEmitterLayer; // ivar: _drawEmitterLayer
@property (retain, nonatomic) CALayer *dustEmitterContainerLayer; // ivar: _dustEmitterContainerLayer
@property (retain, nonatomic) CAEmitterLayer *dustEmitterLayer; // ivar: _dustEmitterLayer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addDustRandomEmitterAnimationsWithSize:(struct CGSize )arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)disableBlending;
-(void)enableBlending;
-(void)endDrawEmitterEffects;
-(void)endDustEmitterFingerEffects;
-(void)endEmittersForTouchesCancelled:(id)arg0 ;
-(void)endEmittersForTouchesEnded:(id)arg0 ;
-(void)layoutSubviews;
-(void)moveEmittersForTouchesBegan:(id)arg0 ;
-(void)moveEmittersForTouchesMoved:(id)arg0 ;
-(void)moveEmittersWithTouches:(id)arg0 ;
-(void)reset;
-(void)setImage:(id)arg0 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)setRandomAttractorsEnabled:(BOOL)arg0 ;
-(void)setSuspended:(BOOL)arg0 ;
-(void)setupDrawEmitter;
-(void)setupDustEmitter;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif