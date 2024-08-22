// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTURESTATUSBARPILLELEMENTPROVIDER_H
#define SBSYSTEMAPERTURESTATUSBARPILLELEMENTPROVIDER_H

@class NSMutableDictionary, UIStatusBarServer, NSTimer, NSString, NSHashTable;
@protocol UIStatusBarServerClient, SBWindowSceneStatusBarAssertionManagerObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneStatusBarStateObserver, BSInvalidatable, SBSystemApertureStatusBarStyleOverridesSuppressing, SAInvalidatable;

#import <Foundation/Foundation.h>

#import "SBSystemApertureStatusBarPillElement.h"
#import "SBSystemApertureController.h"
#import "SBDeviceApplicationSceneHandle.h"
#import "SBSystemApertureSettings.h"
#import "SBWindowSceneStatusBarAssertionManager.h"

@interface SBSystemApertureStatusBarPillElementProvider : NSObject <UIStatusBarServerClient, SBWindowSceneStatusBarAssertionManagerObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneStatusBarStateObserver, BSInvalidatable, SBSystemApertureStatusBarStyleOverridesSuppressing>



@property (readonly, nonatomic) NSMutableDictionary *_activeElements; // ivar: __activeElements
@property (readonly, nonatomic) UIStatusBarServer *_statusBarServer; // ivar: __statusBarServer
@property (nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (retain, nonatomic) SBSystemApertureStatusBarPillElement *activeElement; // ivar: _activeElement
@property (retain, nonatomic) NSTimer *applyOverridesDebounceTimer; // ivar: _applyOverridesDebounceTimer
@property (nonatomic) NSUInteger currentStyleOverrides; // ivar: _currentStyleOverrides
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) SBSystemApertureController *elementRegistrar; // ivar: _elementRegistrar
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SAInvalidatable> *invalidatorForActiveElement; // ivar: _invalidatorForActiveElement
@property (weak, nonatomic) SBDeviceApplicationSceneHandle *observedSceneHandle; // ivar: _observedSceneHandle
@property (nonatomic) NSUInteger resolvedOverrides; // ivar: _resolvedOverrides
@property (retain, nonatomic) SBSystemApertureSettings *settings; // ivar: _settings
@property (weak, nonatomic) SBWindowSceneStatusBarAssertionManager *statusBarAssertionManager; // ivar: _statusBarAssertionManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSHashTable *suppressionAssertions; // ivar: _suppressionAssertions


-(id)acquireSuppressionAssertionForStatusBarStyleOverrides:(NSUInteger)arg0 reason:(id)arg1 ;
-(id)init;
-(void)_invalidateActiveElementWithReason:(id)arg0 ;
-(void)_lockStateChanged;
-(void)_updateActiveElementIfNeededForReason:(id)arg0 ;
-(void)_updateActiveElementIfNeededWithLayoutState:(id)arg0 reason:(id)arg1 ;
-(void)activateWithRegistrar:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionWillEndWithTransitionContext:(id)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleOverridesToSuppressTo:(NSUInteger)arg1 ;
-(void)statusBarAssertionManager:(id)arg0 addStatusBarSettingsAssertion:(id)arg1 ;
-(void)statusBarAssertionManager:(id)arg0 removeStatusBarSettingsAssertion:(id)arg1 ;
-(void)statusBarAssertionManager:(id)arg0 statusBarSettingsDidChange:(id)arg1 ;
-(void)statusBarServer:(id)arg0 didReceiveDoubleHeightStatusString:(id)arg1 forStyle:(NSInteger)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveGlowAnimationState:(BOOL)arg1 forStyle:(NSInteger)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveStatusBarData:(struct ? *)arg1 withActions:(int)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveStyleOverrides:(NSUInteger)arg1 ;


@end


#endif