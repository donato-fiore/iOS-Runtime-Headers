// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKTRANSITION_H
#define OKTRANSITION_H

@class NSString;
@protocol OKSettingsSupport, OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning;

#import <Foundation/Foundation.h>


@interface OKTransition : NSObject <OKSettingsSupport, OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning>

 {
    int _animationCompletionBarrier;
}


@property (readonly) CGPoint currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isForward; // ivar: _isForward
@property (nonatomic) BOOL reversed; // ivar: _reversed
@property (readonly) Class superclass;
@property (readonly) BOOL tracksWithFinger;


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)_canComplete;
-(CGFloat)transitionDurationWithContext:(id)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(struct CGPoint )resolveLocation:(struct CGPoint )arg0 ;
-(void)_transitionInView:(id)arg0 fromSubview:(id)arg1 toSubview:(id)arg2 wasInteractive:(BOOL)arg3 duration:(CGFloat)arg4 doEaseIn:(BOOL)arg5 doEaseOut:(BOOL)arg6 isCompleting:(BOOL)arg7 wasCancelled:(BOOL)arg8 fromProgress:(CGFloat)arg9 completionHandler:(id)arg10 ;
-(void)animateTransitionWithContext:(id)arg0 ;
-(void)dealloc;
-(void)endInteractiveTransitionWithContext:(id)arg0 transitionCompleted:(BOOL)arg1 ;
-(void)makeCurrentTransitionInteractiveWithContext:(id)arg0 andProgress:(CGFloat)arg1 ;
-(void)setSettingDuration:(CGFloat)arg0 ;
-(void)setSettingReversed:(BOOL)arg0 ;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;
-(void)startInteractiveTransitionWithContext:(id)arg0 ;
-(void)transitionInView:(id)arg0 fromSubview:(id)arg1 toSubview:(id)arg2 completionHandler:(id)arg3 ;
-(void)updateInteractiveTransitionWithContext:(id)arg0 andProgress:(CGFloat)arg1 ;


@end


#endif