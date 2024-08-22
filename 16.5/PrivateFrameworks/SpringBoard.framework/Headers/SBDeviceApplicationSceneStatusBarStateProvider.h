// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDEVICEAPPLICATIONSCENESTATUSBARSTATEPROVIDER_H
#define SBDEVICEAPPLICATIONSCENESTATUSBARSTATEPROVIDER_H

@class Base, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, SBSUIInCallSceneClientSettingsDiffInspector, NSString;
@protocol SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable;


#import "SBDeviceApplicationSceneHandle.h"

@interface SBDeviceApplicationSceneStatusBarStateProvider : Base <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable>

 {
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    UIApplicationSceneSettingsDiffInspector *_appSceneSettingsDiffInspector;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
    BOOL _hasAttemptedInCallSceneClientSettingsDiffInspectorCreation;
    SBDeviceApplicationSceneHandle *_sceneHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_anyObserverWants:(SEL)arg0 ;
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(BOOL)_statusBarAppearsOutsideOfAJailedAppCanChange;
-(BOOL)_statusBarAppearsOutsideOfAJailedAppInOrientation:(NSInteger)arg0 ;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(NSInteger)arg0 ;
-(BOOL)_suppressInheritedPartStyles;
-(BOOL)sceneWantsDeviceOrientationEventsEnabled;
-(CGFloat)_statusBarAlpha;
-(NSInteger)_defaultStatusBarStyle;
-(NSInteger)_fallbackInterfaceOrientation;
-(NSInteger)_statusBarOrientationGivenFallbackOrientation:(NSInteger)arg0 ;
-(NSInteger)_statusBarStyle;
-(NSInteger)_statusBarStyleForPartWithIdentifier:(id)arg0 suppressingInherited:(BOOL)arg1 ;
-(NSUInteger)statusBarStyleOverridesToSuppress;
-(id)_initWithSceneHandle:(id)arg0 ;
-(id)_statusBarPartStyles;
-(id)breadcrumbProvider;
-(id)classicApplicationSceneHandleIfExists;
-(id)overlayStatusBarData;
-(id)sceneToHandleStatusBarTapIfExists;
-(id)statusBarSceneIdentifier;
-(struct CGRect )statusBarAvoidanceFrame;
-(void)_handleStatusBarStyleOverridesToSuppressUpdate;
-(void)_performUpdateWith:(id)arg0 actions:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateStatusBarSettings;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;


@end


#endif