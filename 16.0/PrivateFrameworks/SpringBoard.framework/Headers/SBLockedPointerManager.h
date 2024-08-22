// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKEDPOINTERMANAGER_H
#define SBLOCKEDPOINTERMANAGER_H

@class PSPointerClientController, UIApplicationSceneSettingsDiffInspector, NSMutableDictionary, NSString;
@protocol SBMainDisplaySceneManagerObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneHandleObserver, OS_dispatch_queue, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBLockedPointerManager : NSObject <SBMainDisplaySceneManagerObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneHandleObserver>

 {
    PSPointerClientController *_pointerClientController;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    NSObject<OS_dispatch_queue> *_stateSerialQueue;
    NSMutableDictionary *_queue_preferredLockStatusBySceneIdentifier;
    NSString *_queue_sceneIdentifierThatHasLockedPointer;
    id<BSInvalidatable> *_queue_backboardLockedPointerAssertion;
    id<BSInvalidatable> *_queue_pointerHiddenAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_queue_prefersLockForSceneIdentifier:(id)arg0 ;
-(BOOL)_shouldAllowPointerLockedForScene:(id)arg0 ;
-(id)_possibleSceneHandleForLockingPointerFromLayoutState:(id)arg0 ;
-(id)initWithSceneManager:(id)arg0 ;
-(void)_queue_lockPointerForSceneIdentifier:(id)arg0 ;
-(void)_queue_unlockPointer;
-(void)_queue_updateLockForLayoutState:(id)arg0 ;
-(void)_setPointerLockStatus:(NSInteger)arg0 forSceneWithIdentifier:(id)arg1 ;
-(void)_updateLockForLayoutState:(id)arg0 ;
-(void)clientWithSceneIdentifier:(id)arg0 prefersPointerLockStatus:(NSInteger)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)sceneManager:(id)arg0 didAddExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)sceneManager:(id)arg0 didRemoveExternalForegroundApplicationSceneHandle:(id)arg1 ;


@end


#endif