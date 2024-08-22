// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKINVISIBLEINKTEXTEFFECTVIEW_H
#define CKINVISIBLEINKTEXTEFFECTVIEW_H

@class NSString, CAEmitterLayer, CALayer, NSArray, UITextView;
@protocol CAAnimationDelegate;


#import "CKInvisibleInkEffectView.h"
#import "CKTextBalloonView.h"

@interface CKInvisibleInkTextEffectView : CKInvisibleInkEffectView <CAAnimationDelegate>



@property (weak, nonatomic) CKTextBalloonView *balloonView; // ivar: _balloonView
@property (nonatomic) BOOL blendingEnabled; // ivar: _blendingEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CAEmitterLayer *dustDrawEmitterLayer; // ivar: _dustDrawEmitterLayer
@property (retain, nonatomic) CALayer *dustEmitterContainerLayer; // ivar: _dustEmitterContainerLayer
@property (retain, nonatomic) NSArray *dustEmitterLayers; // ivar: _dustEmitterLayers
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) CAEmitterLayer *textDrawEmitterLayer; // ivar: _textDrawEmitterLayer
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(id)createDrawEmitter;
-(id)dustEmitter;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)attachToBalloonView:(id)arg0 ;
-(void)cullSubviewsWithVisibleBounds:(struct CGRect )arg0 ;
-(void)detachFromBalloonView;
-(void)didMoveToWindow;
-(void)endDrawEmitterEffects;
-(void)endDustEmitterLayerFingerEffects:(id)arg0 ;
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
-(void)updateDustCellColor;


@end


#endif