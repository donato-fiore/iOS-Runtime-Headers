// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFULLSCREENALWAYSLIVELIVECONTENTOVERLAY_H
#define SBFULLSCREENALWAYSLIVELIVECONTENTOVERLAY_H

@class SBOrientationTransformWrapperView, UIApplicationSceneSettingsDiffInspector, UIView, NSString;
@protocol BSInvalidatable, SBDeviceApplicationSceneHandleObserver, SBSceneViewPresentationConfiguring, SBFullScreenSwitcherSceneLiveContentOverlay, SBSwitcherLiveContentOverlayDelegate;

#import <Foundation/Foundation.h>

#import "SBDeviceApplicationSceneHandle.h"
#import "SBDeviceApplicationSceneView.h"

@interface SBFullScreenAlwaysLiveLiveContentOverlay : NSObject <BSInvalidatable, SBDeviceApplicationSceneHandleObserver, SBSceneViewPresentationConfiguring, SBFullScreenSwitcherSceneLiveContentOverlay>

 {
    SBOrientationTransformWrapperView *_transformWrapperView;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    SBDeviceApplicationSceneView *_sceneView;
}


@property (readonly, nonatomic, getter=isAsyncRenderingEnabled) BOOL asyncRenderingEnabled; // ivar: _asyncRenderingEnabled
@property (nonatomic) NSInteger containerOrientation; // ivar: _containerOrientation
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSwitcherLiveContentOverlayDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance; // ivar: _isInsetForHomeAffordance
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;
@property (nonatomic) BOOL resizesHostedContext; // ivar: _resizesHostedContext
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger touchBehavior;
@property (nonatomic) BOOL wantsEnhancedWindowingEnabled; // ivar: _wantsEnhancedWindowingEnabled


-(BOOL)isContentUpdating;
-(CGFloat)currentStatusBarHeight;
-(NSInteger)leadingStatusBarStyle;
-(NSInteger)overlayType;
-(NSInteger)preferredInterfaceOrientation;
-(NSInteger)sceneViewPresentationPriority:(id)arg0 ;
-(NSInteger)trailingStatusBarStyle;
-(NSUInteger)styleOverridesToSuppress;
-(NSUInteger)supportedInterfaceOrientations;
-(id)contentViewController;
-(id)initWithSceneHandle:(id)arg0 referenceSize:(struct CGSize )arg1 containerOrientation:(NSInteger)arg2 ;
-(id)liveSceneIdentityToken;
-(id)overlaySceneHandle;
-(id)prepareOverlayForContentRotation;
-(id)sceneViewPresentationIdentifier:(id)arg0 ;
-(void)configureWithWorkspaceEntity:(id)arg0 referenceFrame:(struct CGRect )arg1 contentOrientation:(NSInteger)arg2 containerOrientation:(NSInteger)arg3 layoutRole:(NSInteger)arg4 sbsDisplayLayoutRole:(NSInteger)arg5 spaceConfiguration:(NSInteger)arg6 floatingConfiguration:(NSInteger)arg7 hasClassicAppOrientationMismatch:(BOOL)arg8 sizingPolicy:(NSInteger)arg9 ;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)invalidate;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg0 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)setBlurViewIconScale:(CGFloat)arg0 ;
-(void)setDimmed:(BOOL)arg0 ;
// -(void)setLiveContentBlurEnabled:(BOOL)arg0 duration:(CGFloat)arg1 blurDelay:(CGFloat)arg2 iconViewScale:(CGFloat)arg3 began:(id)arg4 completion:(unk)arg5  ;
-(void)setMatchMovedToScene:(BOOL)arg0 ;
-(void)setStatusBarHidden:(BOOL)arg0 nubViewHidden:(BOOL)arg1 animator:(id)arg2 ;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg0 ;
-(void)updateDisplayLayoutElementWithBuilder:(id)arg0 ;


@end


#endif