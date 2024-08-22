// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDEVICEAPPLICATIONSCENECLASSICACCESSORYVIEW_H
#define SBDEVICEAPPLICATIONSCENECLASSICACCESSORYVIEW_H

@class UIView, UIButton, SBOrientationTransformWrapperView, SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, NSLayoutConstraint, NSString;
@protocol BSInvalidatable, SBDeviceApplicationSceneClassicAccessoryViewDelegate;


#import "SBDeviceApplicationSceneHandle.h"

@interface SBDeviceApplicationSceneClassicAccessoryView : UIView <BSInvalidatable>

 {
    UIView *_buttonWrapperView;
    UIButton *_zoomButton;
    UIButton *_clockWiseRotationButton;
    UIButton *_counterClockWiseRotationButton;
    SBOrientationTransformWrapperView *_transformWrapperView;
    BOOL _rotatingFromButtonTap;
    SBSceneHandleBlockObserver *_sceneHandleObserver;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    NSLayoutConstraint *_zoomButtonHorizontalConstraint;
    NSLayoutConstraint *_zoomButtonVerticalConstraint;
    NSLayoutConstraint *_zoomButtonWidthConstraint;
    NSLayoutConstraint *_zoomButtonHeightConstraint;
    NSLayoutConstraint *_rotationButtonTopConstraint;
    NSLayoutConstraint *_rotationButtonBottomConstraint;
    NSLayoutConstraint *_rotationButtonLeadingConstraint;
    NSLayoutConstraint *_rotationButtonTrailingConstraint;
}


@property (nonatomic) NSInteger buttonOrientation; // ivar: _buttonOrientation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBDeviceApplicationSceneClassicAccessoryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly) Class superclass;


-(BOOL)_isZoomed;
-(BOOL)_rotationButtonShouldBeVisible;
-(BOOL)_zoomButtonShouldBeVisible;
-(id)initWithFrame:(struct CGRect )arg0 sceneHandle:(id)arg1 ;
-(void)_changeZoom:(id)arg0 ;
-(void)_rotateApplicationScene:(id)arg0 ;
-(void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg0 transitionContext:(id)arg1 ;
-(void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg0 previousSettings:(id)arg1 ;
-(void)_setupPositioningAndRotationForInterfaceOrientation:(NSInteger)arg0 offscreen:(BOOL)arg1 ;
-(void)_updateButtonVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateOrientationFrom:(NSInteger)arg0 toOrientation:(NSInteger)arg1 animationSettings:(id)arg2 ;
-(void)_updateRotationButton;
-(void)_updateRotationButtonConstraints;
-(void)_updateRotationButtonWithAnimationSettings:(id)arg0 ;
-(void)_updateZoomButton;
-(void)dealloc;
-(void)invalidate;
-(void)layoutSubviews;


@end


#endif