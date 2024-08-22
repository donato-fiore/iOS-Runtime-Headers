// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLUIDSWITCHERPORTALEDSCENELIVECONTENTOVERLAY_H
#define SBFLUIDSWITCHERPORTALEDSCENELIVECONTENTOVERLAY_H

@class UIView, NSString, SBUISizeObservingView;
@protocol SBUISizeObservingViewDelegate, SBFullScreenSwitcherSceneLiveContentOverlay, SBSceneViewPresentationConfiguring, SBSwitcherLiveContentOverlayDelegate;

#import <Foundation/Foundation.h>

#import "SBDeviceApplicationSceneHandle.h"
#import "SBDeviceApplicationSceneView.h"

@interface SBFluidSwitcherPortaledSceneLiveContentOverlay : NSObject <SBUISizeObservingViewDelegate, SBFullScreenSwitcherSceneLiveContentOverlay, SBSceneViewPresentationConfiguring>



@property (readonly, nonatomic, getter=isAsyncRenderingEnabled) BOOL asyncRenderingEnabled;
@property (readonly, nonatomic) NSInteger containerOrientation; // ivar: _containerOrientation
@property (readonly, nonatomic) NSInteger contentOrientation; // ivar: _contentOrientation
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSwitcherLiveContentOverlayDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
@property (readonly, nonatomic) UIView *livePortalView; // ivar: _livePortalView
@property (readonly, nonatomic) CGSize referenceSize; // ivar: _referenceSize
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;
@property (nonatomic) BOOL resizesHostedContext; // ivar: resizesHostedContext
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly, nonatomic) SBDeviceApplicationSceneView *sceneView; // ivar: _sceneView
@property (readonly, nonatomic) SBUISizeObservingView *sizeObservingView; // ivar: _sizeObservingView
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger touchBehavior;
@property (nonatomic) BOOL wantsEnhancedWindowingEnabled; // ivar: wantsEnhancedWindowingEnabled


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
-(id)initWithSceneHandle:(id)arg0 referenceSize:(struct CGSize )arg1 contentOrientation:(NSInteger)arg2 containerOrientation:(NSInteger)arg3 livePortalView:(id)arg4 isInsetForHomeAffordance:(BOOL)arg5 ;
-(id)liveSceneIdentityToken;
-(id)overlaySceneHandle;
-(id)prepareOverlayForContentRotation;
-(id)sceneViewPresentationIdentifier:(id)arg0 ;
-(void)configureWithWorkspaceEntity:(id)arg0 referenceFrame:(struct CGRect )arg1 contentOrientation:(NSInteger)arg2 containerOrientation:(NSInteger)arg3 layoutRole:(NSInteger)arg4 sbsDisplayLayoutRole:(NSInteger)arg5 spaceConfiguration:(NSInteger)arg6 floatingConfiguration:(NSInteger)arg7 hasClassicAppOrientationMismatch:(BOOL)arg8 sizingPolicy:(NSInteger)arg9 ;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)invalidate;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg0 ;
-(void)setBlurViewIconScale:(CGFloat)arg0 ;
-(void)setDimmed:(BOOL)arg0 ;
// -(void)setLiveContentBlurEnabled:(BOOL)arg0 duration:(CGFloat)arg1 blurDelay:(CGFloat)arg2 iconViewScale:(CGFloat)arg3 began:(id)arg4 completion:(unk)arg5  ;
-(void)setMatchMovedToScene:(BOOL)arg0 ;
-(void)setStatusBarHidden:(BOOL)arg0 nubViewHidden:(BOOL)arg1 animator:(id)arg2 ;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg0 ;
-(void)sizeObservingView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)updateDisplayLayoutElementWithBuilder:(id)arg0 ;


@end


#endif