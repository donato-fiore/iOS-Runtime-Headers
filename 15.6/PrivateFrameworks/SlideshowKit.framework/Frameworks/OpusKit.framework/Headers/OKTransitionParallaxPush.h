// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKTRANSITIONPARALLAXPUSH_H
#define OKTRANSITIONPARALLAXPUSH_H



#import "OKTransition.h"

@interface OKTransitionParallaxPush : OKTransition

@property (nonatomic) NSUInteger direction; // ivar: _direction
@property (nonatomic) CGFloat fadeFromAlpha; // ivar: _fadeFromAlpha
@property (nonatomic) CGFloat fadeToAlpha; // ivar: _fadeToAlpha
@property (nonatomic) CGFloat parallaxAmount; // ivar: _parallaxAmount


+(id)supportedSettings;
-(BOOL)tracksWithFinger;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)_transitionInView:(id)arg0 fromSubview:(id)arg1 toSubview:(id)arg2 wasInteractive:(BOOL)arg3 duration:(CGFloat)arg4 doEaseIn:(BOOL)arg5 doEaseOut:(BOOL)arg6 isCompleting:(BOOL)arg7 wasCancelled:(BOOL)arg8 fromProgress:(CGFloat)arg9 completionHandler:(id)arg10 ;
-(void)makeCurrentTransitionInteractiveWithContext:(id)arg0 andProgress:(CGFloat)arg1 ;
-(void)setSettingDirection:(NSUInteger)arg0 ;
-(void)setSettingFadeFromAlpha:(CGFloat)arg0 ;
-(void)setSettingFadeToAlpha:(CGFloat)arg0 ;
-(void)setSettingParallaxAmount:(CGFloat)arg0 ;
-(void)startInteractiveTransitionWithContext:(id)arg0 ;
-(void)updateInteractiveTransitionWithContext:(id)arg0 andProgress:(CGFloat)arg1 ;


@end


#endif