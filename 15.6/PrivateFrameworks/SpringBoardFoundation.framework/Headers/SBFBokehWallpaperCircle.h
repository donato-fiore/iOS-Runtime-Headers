// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFBOKEHWALLPAPERCIRCLE_H
#define SBFBOKEHWALLPAPERCIRCLE_H

@class CALayer, NSString;
@protocol CAAnimationDelegate;



@interface SBFBokehWallpaperCircle : CALayer <CAAnimationDelegate>

 {
    NSInteger _color;
    CGFloat _dxdt;
    CGFloat _dydt;
    CGFloat _speed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGRect superviewBounds; // ivar: _superviewBounds


+(id)_newFadeAnimation;
+(id)_newFlickerAnimation;
+(id)_newScaleAnimation;
-(id)initWithSuperviewBounds:(struct CGRect )arg0 color:(NSInteger)arg1 ;
-(void)_pauseAnimations;
-(void)_resumeAnimations;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)configureAnimationsWithPhase:(CGFloat)arg0 ;
-(void)randomize;
-(void)setAnimationsEnabled:(BOOL)arg0 ;
-(void)setColor:(NSInteger)arg0 ;
-(void)updatePositionWithTime:(CGFloat)arg0 dx:(CGFloat)arg1 dy:(CGFloat)arg2 lockScreen:(BOOL)arg3 ;


@end


#endif