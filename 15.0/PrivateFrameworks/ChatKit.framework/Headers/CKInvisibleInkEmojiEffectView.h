// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKINVISIBLEINKEMOJIEFFECTVIEW_H
#define CKINVISIBLEINKEMOJIEFFECTVIEW_H

@class CALayer, NSString, CAEmitterLayer, UITextView;
@protocol CAAnimationDelegate;


#import "CKInvisibleInkEffectView.h"

@interface CKInvisibleInkEmojiEffectView : CKInvisibleInkEffectView <CAAnimationDelegate>



@property (nonatomic) BOOL blendingEnabled; // ivar: _blendingEnabled
@property (retain, nonatomic) CALayer *blurredEmojiLayer; // ivar: _blurredEmojiLayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CAEmitterLayer *drawEmitterLayer; // ivar: _drawEmitterLayer
@property (retain, nonatomic) CALayer *dustContainerLayer; // ivar: _dustContainerLayer
@property (retain, nonatomic) CAEmitterLayer *dustEmitterLayer; // ivar: _dustEmitterLayer
@property (retain, nonatomic) CALayer *emojiContainerLayer; // ivar: _emojiContainerLayer
@property (retain, nonatomic) CALayer *emojiLayer; // ivar: _emojiLayer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CALayer *maskLayer; // ivar: _maskLayer
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)attachToBalloonView:(id)arg0 ;
-(void)createDrawEmitter;
-(void)createDustEmitter;
-(void)detachFromBalloonView;
-(void)disableBlending;
-(void)displayLayer:(id)arg0 ;
-(void)enableBlending;
-(void)endDrawEmitterEffects;
-(void)endDustEmitterLayerFingerEffects;
-(void)endEmittersForTouchesCancelled:(id)arg0 ;
-(void)endEmittersForTouchesEnded:(id)arg0 ;
-(void)endTouches;
-(void)layoutSubviews;
-(void)moveEmittersForTouchesBegan:(id)arg0 ;
-(void)moveEmittersForTouchesMoved:(id)arg0 ;
-(void)moveEmittersWithTouches:(id)arg0 ;
-(void)reset;
-(void)setPaused:(BOOL)arg0 ;
-(void)setSuspended:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif