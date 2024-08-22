// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIAPPLICATIONSCENEDEACTIVATIONMANAGER_H
#define UIAPPLICATIONSCENEDEACTIVATIONMANAGER_H

@class NSHashTable, NSMutableSet, FBScene, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface UIApplicationSceneDeactivationManager : NSObject <BSDescriptionProviding>

 {
    NSHashTable *_assertions;
    NSMutableSet *_eligibleScenes;
    FBScene *_updatingScene;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_areEligibleSettings:(id)arg0 ;
-(BOOL)_isEligibleScene:(id)arg0 ;
-(BOOL)_isEligibleScene:(id)arg0 withSettings:(id)arg1 ;
-(NSUInteger)_deactivationReasonsForScene:(id)arg0 withSettings:(id)arg1 ;
-(id)assertions;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)eligibleScenes;
-(id)init;
-(id)newAssertionWithReason:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_setDeactivationReasons:(NSUInteger)arg0 onScene:(id)arg1 withSettings:(id)arg2 reason:(id)arg3 ;
-(void)_trackScene:(id)arg0 ;
-(void)_untrackScene:(id)arg0 ;
-(void)_updateScenesWithTransitionContext:(id)arg0 reason:(id)arg1 ;
-(void)addAssertion:(id)arg0 withTransitionContext:(id)arg1 ;
-(void)amendSceneSettings:(id)arg0 forScene:(id)arg1 ;
-(void)beginTrackingScene:(id)arg0 ;
-(void)endTrackingScene:(id)arg0 ;
-(void)removeAssertion:(id)arg0 ;


@end


#endif