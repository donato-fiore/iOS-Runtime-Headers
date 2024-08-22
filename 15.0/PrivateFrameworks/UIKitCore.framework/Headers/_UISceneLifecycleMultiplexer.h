// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISCENELIFECYCLEMULTIPLEXER_H
#define _UISCENELIFECYCLEMULTIPLEXER_H


#import <Foundation/Foundation.h>

#import "UIScene.h"
#import "UIApplicationSceneSettings.h"

@interface _UISceneLifecycleMultiplexer : NSObject {
    UIScene *_uiSceneOfRecord;
    UIApplicationSceneSettings *_transitionalLifecycleState;
    ? _multiplexerFlags;
}


@property (readonly, nonatomic) BOOL activatedOnce;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSInteger applicationState;
@property (readonly, nonatomic) BOOL lifecycleWantsUnnecessaryDelayForSceneDelivery;
@property (readonly, nonatomic) BOOL runningInTaskSwitcher;
@property (readonly, nonatomic) BOOL suspendedEventsOnly;
@property (readonly, nonatomic) BOOL suspendedUnderLock;


+(NSInteger)_compareLifecycleStateOfScene:(id)arg0 toScene:(id)arg1 ;
+(id)_mostActiveSceneForApplicationState;
+(id)_mostActiveSceneIncludingInternal:(BOOL)arg0 withTest:(id)arg1 ;
+(id)mostActiveScene;
+(id)mostActiveSceneWithTest:(id)arg0 ;
+(id)mostActiveWindowSceneOnScreen:(id)arg0 ;
+(id)sharedInstance;
+(void)configureInitialDeactivationReasons:(NSUInteger)arg0 ;
-(BOOL)_prepareForClientSuspensionWithScene:(id)arg0 ;
-(BOOL)isTrackingScene:(id)arg0 ;
-(id)initForAppSingleton:(id)arg0 ;
-(void)_evalTransitionToSettings:(id)arg0 fromSettings:(id)arg1 forceExit:(BOOL)arg2 withTransitionStore:(struct ? )arg3 ;
-(void)_globalTestRelatedActivationActionsForFirstActivation:(BOOL)arg0 foreground:(BOOL)arg1 interfaceStyle:(NSInteger)arg2 transitionContext:(id)arg3 ;
// -(void)_performBlock:(id)arg0 withApplicationOfDeactivationReasons:(unk)arg1 fromReasons:(NSUInteger)arg2  ;
-(void)_scheduleFirstCommit;
-(void)collectBackingStores;
-(void)completeApplicationLaunchWithFBSScene:(id)arg0 transitionContext:(id)arg1 ;
-(void)forceExitWithTransitionContext:(id)arg0 scene:(id)arg1 ;
-(void)noteApplicationLaunchCompleted;
-(void)uiScene:(id)arg0 transitionedFromState:(id)arg1 withTransitionContext:(id)arg2 ;


@end


#endif