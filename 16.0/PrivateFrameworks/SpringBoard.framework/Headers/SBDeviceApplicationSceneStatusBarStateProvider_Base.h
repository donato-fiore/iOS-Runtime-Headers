// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDEVICEAPPLICATIONSCENESTATUSBARSTATEPROVIDER_BASE_H
#define SBDEVICEAPPLICATIONSCENESTATUSBARSTATEPROVIDER_BASE_H

@class NSMutableArray, NSString, _UIStatusBarData, FBScene;
@protocol SBApplicationSceneStatusBarDescribingInternal, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, SBApplicationSceneStatusBarDescribing;

#import <Foundation/Foundation.h>

#import "SBDeviceApplicationSceneStatusBarBreadcrumbProvider.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBDeviceApplicationSceneStatusBarStateProvider_Base : NSObject <SBApplicationSceneStatusBarDescribingInternal, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, SBApplicationSceneStatusBarDescribing>

 {
    NSMutableArray *_observers;
}


@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *classicApplicationSceneHandleIfExists;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defaultStatusBarStyle;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIStatusBarData *overlayStatusBarData;
@property (readonly, nonatomic) FBScene *sceneToHandleStatusBarTapIfExists;
@property (readonly, nonatomic) BOOL sceneWantsDeviceOrientationEventsEnabled;
@property (readonly, nonatomic) CGFloat statusBarAlpha;
@property (readonly, nonatomic) CGRect statusBarAvoidanceFrame;
@property (readonly, nonatomic) BOOL statusBarHidden;
@property (readonly, nonatomic) NSInteger statusBarOrientation;
@property (readonly, nonatomic) NSString *statusBarSceneIdentifier;
@property (readonly, nonatomic) NSInteger statusBarStyle;
@property (readonly, nonatomic) NSUInteger statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;


-(BOOL)SB_conformsToSBApplicationSceneStatusBarDescribing;
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(NSInteger)arg0 ;
-(BOOL)_suppressInheritedPartStyles;
-(NSInteger)_fallbackInterfaceOrientation;
-(NSInteger)_statusBarOrientationGivenFallbackOrientation:(NSInteger)arg0 ;
-(NSInteger)_statusBarStyleForPartWithIdentifier:(id)arg0 suppressingInherited:(BOOL)arg1 ;
-(NSInteger)statusBarStyleForPartWithIdentifier:(id)arg0 ;
-(id)_allObservers;
-(id)_observerRecords;
-(id)_statusBarPartStyles;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)statusBarPartStyles;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addStatusBarObserver:(id)arg0 ;
-(void)enumerateObserversWithBlock:(id)arg0 ;
-(void)removeStatusBarObserver:(id)arg0 ;


@end


#endif