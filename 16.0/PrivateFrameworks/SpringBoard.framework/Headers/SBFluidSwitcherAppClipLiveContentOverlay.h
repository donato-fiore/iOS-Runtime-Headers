// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERAPPCLIPLIVECONTENTOVERLAY_H
#define SBFLUIDSWITCHERAPPCLIPLIVECONTENTOVERLAY_H

@class NSString, UIStatusBar, SBUISizeObservingView, SBSDisplayLayoutElement, UIView, UIViewController;
@protocol SBUISizeObservingViewDelegate, SBFullScreenSwitcherSceneLiveContentOverlay, SBSDisplayLayoutElementProviding, BSInvalidatable, SBSwitcherLiveContentOverlayDelegate;

#import <Foundation/Foundation.h>

#import "SBAppClipOverlayViewController.h"
#import "SBWindowScene.h"

@interface SBFluidSwitcherAppClipLiveContentOverlay : NSObject <SBUISizeObservingViewDelegate, SBFullScreenSwitcherSceneLiveContentOverlay, SBSDisplayLayoutElementProviding>

 {
    NSString *_bundleIdentifier;
    NSString *_sceneIdentifier;
    SBAppClipOverlayViewController *_placeholderViewController;
    UIStatusBar *_statusBar;
    SBUISizeObservingView *_containerView;
    BOOL _isPendingUpdate;
    SBSDisplayLayoutElement *_displayLayoutElement;
    id<BSInvalidatable> *_displayLayoutElementAssertion;
}


@property (readonly, nonatomic, getter=isAsyncRenderingEnabled) BOOL asyncRenderingEnabled; // ivar: _asyncRenderingEnabled
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSwitcherLiveContentOverlayDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance; // ivar: _isInsetForHomeAffordance
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;
@property (nonatomic) BOOL resizesHostedContext; // ivar: _resizesHostedContext
@property (readonly, weak, nonatomic, getter=_sbWindowScene) SBWindowScene *sbWindowScene; // ivar: _sbWindowScene
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger touchBehavior;
@property (nonatomic) BOOL wantsEnhancedWindowingEnabled; // ivar: _wantsEnhancedWindowingEnabled


-(BOOL)isContentUpdating;
-(CGFloat)currentStatusBarHeight;
-(NSInteger)leadingStatusBarStyle;
-(NSInteger)overlayType;
-(NSInteger)preferredInterfaceOrientation;
-(NSInteger)trailingStatusBarStyle;
-(NSUInteger)styleOverridesToSuppress;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_statusBarReusePool;
-(id)initWithPlaceholderEntity:(id)arg0 windowScene:(id)arg1 ;
-(id)liveSceneIdentityToken;
-(id)overlaySceneHandle;
-(id)prepareOverlayForContentRotation;
-(void)_beginPollingUpdateStillAvailable;
-(void)_createAndConfigureStatusBar;
-(void)_installedApplicationsDidChange:(id)arg0 ;
-(void)_launchApplication:(id)arg0 ;
-(void)configureWithWorkspaceEntity:(id)arg0 referenceFrame:(struct CGRect )arg1 interfaceOrientation:(NSInteger)arg2 layoutRole:(NSInteger)arg3 spaceConfiguration:(NSInteger)arg4 floatingConfiguration:(NSInteger)arg5 hasClassicAppOrientationMismatch:(BOOL)arg6 sizingPolicy:(NSInteger)arg7 ;
-(void)dealloc;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)invalidate;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg0 ;
-(void)setBlurViewIconScale:(CGFloat)arg0 ;
-(void)setContentReferenceSize:(struct CGSize )arg0 interfaceOrientation:(NSInteger)arg1 ;
-(void)setDimmed:(BOOL)arg0 ;
// -(void)setLiveContentBlurEnabled:(BOOL)arg0 duration:(CGFloat)arg1 blurDelay:(CGFloat)arg2 iconViewScale:(CGFloat)arg3 began:(id)arg4 completion:(unk)arg5  ;
-(void)setMatchMovedToScene:(BOOL)arg0 ;
-(void)setStatusBarHidden:(BOOL)arg0 nubViewHidden:(BOOL)arg1 animator:(id)arg2 ;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg0 ;
-(void)sizeObservingView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)updateDisplayLayoutElementWithBuilder:(id)arg0 ;


@end


#endif