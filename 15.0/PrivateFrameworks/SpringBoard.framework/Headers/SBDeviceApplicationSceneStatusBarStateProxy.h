// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDEVICEAPPLICATIONSCENESTATUSBARSTATEPROXY_H
#define SBDEVICEAPPLICATIONSCENESTATUSBARSTATEPROXY_H

@class Base, NSString;
@protocol SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable;


#import "SBDeviceApplicationSceneStatusBarStateProvider.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBDeviceApplicationSceneStatusBarStateProxy : Base <SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable>

 {
    SBDeviceApplicationSceneStatusBarStateProvider *_stateProvider;
    SBDeviceApplicationSceneHandle *_deviceApplicationSceneHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_anyObserverWants:(SEL)arg0 ;
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(NSInteger)arg0 ;
-(BOOL)_suppressInheritedPartStyles;
-(BOOL)sceneWantsDeviceOrientationEventsEnabled;
-(CGFloat)_statusBarAlpha;
-(NSInteger)_fallbackInterfaceOrientation;
-(NSInteger)_statusBarOrientationGivenFallbackOrientation:(NSInteger)arg0 ;
-(NSInteger)_statusBarStyle;
-(NSInteger)_statusBarStyleForPartWithIdentifier:(id)arg0 suppressingInherited:(BOOL)arg1 ;
-(NSUInteger)statusBarStyleOverridesToSuppress;
-(id)_statusBarPartStyles;
-(id)breadcrumbProvider;
-(id)classicApplicationSceneHandleIfExists;
-(id)initWithDeviceApplicationSceneHandle:(id)arg0 ;
-(id)overlayStatusBarData;
-(id)sceneToHandleStatusBarTapIfExists;
-(id)statusBarSceneIdentifier;
-(struct CGRect )statusBarAvoidanceFrame;
-(void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)arg0 ;
-(void)invalidate;
-(void)invalidateStatusBarSettings;
-(void)sceneWithIdentifier:(id)arg0 didChangeSceneInterfaceOrientationTo:(NSInteger)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarAlphaTo:(CGFloat)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarAvoidanceFrameTo:(struct CGRect )arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarHiddenTo:(BOOL)arg1 withAnimation:(NSInteger)arg2 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarOrientationTo:(NSInteger)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleOverridesToSuppressTo:(NSUInteger)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleTo:(NSInteger)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleTo:(NSInteger)arg1 forPartWithIdentifier:(id)arg2 ;


@end


#endif