// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISCENELIFECYCLEMONITOR_H
#define _UISCENELIFECYCLEMONITOR_H


#import <Foundation/Foundation.h>

#import "UIScene.h"

@interface _UISceneLifecycleMonitor : NSObject

@property (weak, nonatomic) UIScene *_scene; // ivar: __scene
@property (readonly, nonatomic) NSInteger currentActivationState;


-(id)initWithScene:(id)arg0 ;
-(void)didBecomeActive;
-(void)didConnect;
-(void)didDisonnect;
-(void)didEnterBackground;
-(void)didEnterForeground;
-(void)didResignActive;
-(void)transitionToTargetState:(id)arg0 fromState:(id)arg1 withTransitionContext:(id)arg2 preparations:(id)arg3 ;
-(void)willBecomeActive;
-(void)willConnect;
-(void)willDisonnect;
-(void)willEnterBackground;
-(void)willEnterForeground;
-(void)willResignActive;


@end


#endif