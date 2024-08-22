// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBNOTCHEDSTATUSBARPROXIMITYBACKLIGHTPOLICYENABLEMENTCONDITION_H
#define SBNOTCHEDSTATUSBARPROXIMITYBACKLIGHTPOLICYENABLEMENTCONDITION_H

@class UIStatusBarServer, UIApplicationSceneSettingsDiffInspector, NSString;
@protocol SBAppStatusBarAssertionManagerObserver, SBMainDisplaySceneManagerObserver, SBDeviceApplicationSceneHandleObserver, UIStatusBarServerClient, SBUIActiveOrientationObserver, BSInvalidatable, SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate;

#import <Foundation/Foundation.h>

#import "SpringBoard.h"
#import "SBAppStatusBarAssertionManager.h"
#import "SBMainDisplaySceneManager.h"

@interface SBNotchedStatusBarProximityBacklightPolicyEnablementCondition : NSObject <SBAppStatusBarAssertionManagerObserver, SBMainDisplaySceneManagerObserver, SBDeviceApplicationSceneHandleObserver, UIStatusBarServerClient, SBUIActiveOrientationObserver, BSInvalidatable>

 {
    SpringBoard *_orientationProvider;
    UIStatusBarServer *_statusBarConnection;
    SBAppStatusBarAssertionManager *_statusBarAssertionManager;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    UIApplicationSceneSettingsDiffInspector *_applicationSceneSettingsDiffInspector;
    NSUInteger _currentStyleOverrides;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _isEnabled
@property (readonly, nonatomic) CGFloat enabledStatusBarHeight; // ivar: _statusBarHeight
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithMainDisplaySceneManager:(id)arg0 statusBarAssertionManager:(id)arg1 statusBarServer:(id)arg2 orientationProvider:(id)arg3 ;
-(void)_evaluateEnablement;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)sceneManager:(id)arg0 didAddExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)sceneManager:(id)arg0 didRemoveExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)statusBarAssertionManager:(id)arg0 statusBarSettingsDidChange:(id)arg1 ;
-(void)statusBarServer:(id)arg0 didReceiveDoubleHeightStatusString:(id)arg1 forStyle:(NSInteger)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveGlowAnimationState:(BOOL)arg1 forStyle:(NSInteger)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveStatusBarData:(struct ? *)arg1 withActions:(int)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveStyleOverrides:(NSUInteger)arg1 ;


@end


#endif