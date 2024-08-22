// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance; // ivar: _isInsetForHomeAffordance
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;
@property (readonly) Class superclass;


-(BOOL)isContentUpdating;
-(CGFloat)currentStatusBarHeight;
-(NSInteger)leadingStatusBarStyle;
-(NSInteger)overlayType;
-(NSInteger)preferredInterfaceOrientation;
-(NSInteger)sceneViewPresentationPriority:(id)arg0 ;
-(NSInteger)trailingStatusBarStyle;
-(NSUInteger)_debugPostModernRotationSupportedInterfaceOrientations;
-(NSUInteger)supportedInterfaceOrientations;
-(id)contentViewController;
-(id)initWithSceneHandle:(id)arg0 referenceSize:(struct CGSize )arg1 containerOrientation:(NSInteger)arg2 ;
-(id)sceneViewPresentationIdentifier:(id)arg0 ;
-(void)configureWithWorkspaceEntity:(id)arg0 referenceFrame:(struct CGRect )arg1 interfaceOrientation:(NSInteger)arg2 layoutRole:(NSInteger)arg3 spaceConfiguration:(NSInteger)arg4 floatingConfiguration:(NSInteger)arg5 hasClassicAppOrientationMismatch:(BOOL)arg6 ;
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


@end


#endif