// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBISOLATEDSCENEORIENTATIONFOLLOWINGWRAPPERVIEWCONTROLLER_H
#define SBISOLATEDSCENEORIENTATIONFOLLOWINGWRAPPERVIEWCONTROLLER_H

@class UIViewController, UIApplicationSceneSettingsDiffInspector, UIApplicationSceneClientSettingsDiffInspector, NSString, UIView<SBDeviceApplicationSceneOverlayView>;
@protocol SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneOverlayViewController, SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate;


#import "SBDeviceApplicationSceneHandle.h"
#import "SBIsolatedSceneOrientationFollowingWindow.h"
#import "SBWindowSelfHostWrapper.h"
#import "SBIsolatedSceneOrientationFollowingContainerView.h"

@interface SBIsolatedSceneOrientationFollowingWrapperViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneOverlayViewController>

 {
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIViewController *_contentViewController;
    SBIsolatedSceneOrientationFollowingWindow *_appOverlayWindow;
    SBWindowSelfHostWrapper *_appOverlayHostWrapper;
    SBIsolatedSceneOrientationFollowingContainerView *_containerView;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDiffInspector;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
    BOOL _sceneWantsDeviceOrientationEvents;
    BOOL _rendersWhileLocked;
    BOOL _needsDeferredOverlayWindowRotation;
    id<SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate> *_orientationDelegate;
}


@property (readonly, nonatomic) NSInteger currentInterfaceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView<SBDeviceApplicationSceneOverlayView> *overlayView;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_isSceneStatusBarHidden;
-(NSInteger)_effectiveSceneOrientation;
-(NSInteger)_orientationBasedOnScene;
-(id)initWithContentViewController:(id)arg0 sceneHandle:(id)arg1 orientationDelegate:(id)arg2 rendersWhileLocked:(BOOL)arg3 ;
-(struct CGRect )_boundsForOverlayRootView;
-(void)_containerViewDidSetBounds:(struct CGRect )arg0 ;
-(void)_containerViewDidSetCenter:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif