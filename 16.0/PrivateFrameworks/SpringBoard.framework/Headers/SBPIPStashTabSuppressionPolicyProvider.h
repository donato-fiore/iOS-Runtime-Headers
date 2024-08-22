// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPSTASHTABSUPPRESSIONPOLICYPROVIDER_H
#define SBPIPSTASHTABSUPPRESSIONPOLICYPROVIDER_H

@class NSMutableSet, UIApplicationSceneClientSettingsDiffInspector, NSString, NSTimer;
@protocol SBBannerManagerTransitionObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneHandleObserver, UIGestureRecognizerDelegate, SBUIActiveOrientationObserver, SBPIPStashTabSuppressionPolicyProviderObserver;

#import <Foundation/Foundation.h>

#import "SBBannerManager.h"
#import "SBDeviceApplicationSceneHandle.h"
#import "SBMainDisplaySceneManager.h"

@interface SBPIPStashTabSuppressionPolicyProvider : NSObject <SBBannerManagerTransitionObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneHandleObserver, UIGestureRecognizerDelegate, SBUIActiveOrientationObserver>

 {
    NSMutableSet *_requestIdentifiersForPresentedExpanseBanners;
    BOOL _invalidated;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
}


@property (readonly, weak, nonatomic) SBBannerManager *bannerManager; // ivar: _bannerManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBPIPStashTabSuppressionPolicyProviderObserver> *observer; // ivar: _observer
@property (retain, nonatomic) NSTimer *reevaluatePolicyTimer; // ivar: _reevaluatePolicyTimer
@property (weak, nonatomic) SBDeviceApplicationSceneHandle *sceneHandleToObserve; // ivar: _sceneHandleToObserve
@property (readonly, weak, nonatomic) SBMainDisplaySceneManager *sceneManager; // ivar: _sceneManager
@property (nonatomic) BOOL stashTabCanBeHidden; // ivar: _stashTabCanBeHidden
@property (readonly) Class superclass;


-(id)initWithObserver:(id)arg0 bannerManager:(id)arg1 sceneManager:(id)arg2 ;
-(void)_reevaluatePolicy;
-(void)_startTrackingPresentable:(id)arg0 ;
-(void)_stopTrackingPresentable:(id)arg0 ;
-(void)_tapRecognized:(id)arg0 ;
-(void)_updateSceneHandleToObserveForLayoutState:(id)arg0 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)bannerManager:(id)arg0 willDismissPresentable:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)bannerManager:(id)arg0 willPresentPresentable:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;


@end


#endif