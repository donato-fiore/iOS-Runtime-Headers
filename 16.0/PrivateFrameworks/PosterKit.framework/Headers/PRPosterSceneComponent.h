// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERSCENECOMPONENT_H
#define PRPOSTERSCENECOMPONENT_H

@class FBScene, RBSProcessIdentity, NSString, RBSAssertion, CLInUseAssertion, BSAbsoluteMachTimer;
@protocol FBSceneObserver, BSTimerScheduleQuerying><BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PRPosterSceneComponent : NSObject <FBSceneObserver>

 {
    FBScene *_scene;
    RBSProcessIdentity *_processIdentity;
    NSString *_bundleIdentifier;
    NSUInteger _options;
    RBSAssertion *_mlmAssertion;
    RBSAssertion *_taskAssertion;
    CLInUseAssertion *_locationInUseAssertion;
    BSAbsoluteMachTimer *_wakeTimer;
    id<BSTimerScheduleQuerying><BSInvalidatable> *_eventTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithScene:(id)arg0 bundleIdentifier:(id)arg1 processIdentity:(id)arg2 options:(NSUInteger)arg3 ;
-(void)_main_remoteMLMInvalidation:(id)arg0 ;
-(void)_main_updateState;
-(void)invalidate;
-(void)scene:(id)arg0 clientDidConnect:(id)arg1 ;
-(void)scene:(id)arg0 didApplyUpdateWithContext:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)sceneWillDeactivate:(id)arg0 withError:(id)arg1 ;


@end


#endif