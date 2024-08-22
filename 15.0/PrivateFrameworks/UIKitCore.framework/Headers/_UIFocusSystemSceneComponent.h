// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSSYSTEMSCENECOMPONENT_H
#define _UIFOCUSSYSTEMSCENECOMPONENT_H

@class NSMutableSet, NSString, NSArray;
@protocol _UIFocusEnvironmentInternal, _UISceneComponentProviding, _UIWindowSceneComponentProviding, _UIFocusEnvironmentPrivate, UIFocusItemContainer, _UIFocusRegionContainer, _UIFocusBehavior, UICoordinateSpace, UIFocusEnvironment;

#import <Foundation/Foundation.h>

#import "UIScene.h"
#import "UITraitCollection.h"
#import "_UIFocusActiveSceneObserver.h"
#import "UIFocusSystem.h"
#import "_UIFocusGameControllerObserver.h"
#import "_UIFocusHardwareKeyboardObserver.h"
#import "_UIFocusMovementPerformer.h"
#import "UIView.h"
#import "_UIScreenFocusSystemManager.h"
#import "_UIFocusScrollManager.h"
#import "_UIFocusTreeLock.h"

@interface _UIFocusSystemSceneComponent : NSObject <_UIFocusEnvironmentInternal, _UISceneComponentProviding, _UIWindowSceneComponentProviding, _UIFocusEnvironmentPrivate, UIFocusItemContainer, _UIFocusRegionContainer>

 {
    NSMutableSet *_overrideFocusSystemEnablementIdentifiers;
    id<_UIFocusBehavior> *_cachedFocusBehavior;
    BOOL _sceneIsValid;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, nonatomic) UITraitCollection *_traitOverrides;
@property (readonly, nonatomic) _UIFocusActiveSceneObserver *activeSceneObserver; // ivar: _activeSceneObserver
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace;
@property (readonly, nonatomic) NSObject<_UIFocusBehavior> *currentFocusBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly, weak, nonatomic, getter=_focusMapContainer) NSObject<_UIFocusRegionContainer> *focusMapContainer;
@property (retain, nonatomic) UIFocusSystem *focusSystem; // ivar: _focusSystem
@property (readonly, nonatomic) _UIFocusGameControllerObserver *gameControllerObserver; // ivar: _gameControllerObserver
@property (readonly, nonatomic) _UIFocusHardwareKeyboardObserver *hardwareKeyboardObserver; // ivar: _hardwareKeyboardObserver
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOverrideFocusSystemEnabled;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, nonatomic) _UIFocusMovementPerformer *movementPerformer; // ivar: _movementPerformer
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) NSInteger preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, nonatomic) _UIScreenFocusSystemManager *screenManager; // ivar: _screenManager
@property (readonly, nonatomic) _UIFocusScrollManager *scrollManager; // ivar: _scrollManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIFocusTreeLock *treeLock; // ivar: _treeLock


+(BOOL)__applicationIsSpringBoard;
+(BOOL)needsFocusSystem;
+(id)_screenForScene:(id)arg0 ;
+(id)sceneComponentForEnvironment:(id)arg0 ;
+(id)sceneComponentForFocusSystem:(id)arg0 ;
-(BOOL)_focusSystemExplicitlyDisabledForBehavior:(id)arg0 ;
-(BOOL)_isEnvironmentLocked:(id)arg0 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)_currentFocusBehaviorRespectingApplicationOverride:(BOOL)arg0 ;
-(id)_preferredFocusRegionCoordinateSpace;
-(id)_regionForFocusedItem:(id)arg0 inCoordinateSpace:(id)arg1 ;
-(id)_windowScene;
-(id)focusItemsInRect:(struct CGRect )arg0 ;
-(id)initWithScene:(id)arg0 ;
-(struct CGRect )_clippingRectInCoordinateSpace:(id)arg0 ;
-(void)_adjustFocusSystemAvailability;
-(void)_adjustFocusSystemAvailabilityUpdatingTraits:(BOOL)arg0 ;
-(void)_focusBehaviorDidChange:(id)arg0 ;
-(void)_focusSystemEnabledStateDidChange:(id)arg0 ;
-(void)_lockEnvironment:(id)arg0 ;
-(void)_notifyDidPerformFocusSystemInitialSetup;
-(void)_sceneWillInvalidate:(id)arg0 ;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)_setNeedsNonDeferredFocusUpdate;
-(void)_setupFocusSystem;
-(void)_tearDownFocusSystem;
-(void)_unlockEnvironment:(id)arg0 ;
-(void)_updateDeviceCapabilityObserver;
-(void)_updateFocusSystemCapabilities;
-(void)_updateFocusSystemState;
-(void)_updateWantsTreeLocking;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)setOverrideFocusSystemEnabled:(BOOL)arg0 withIdentifier:(id)arg1 ;
-(void)updateFocusIfNeeded;


@end


#endif