// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLUIDSWITCHERAPPCLIPLIVECONTENTOVERLAY_H
#define SBFLUIDSWITCHERAPPCLIPLIVECONTENTOVERLAY_H

@class NSString, UIStatusBar, SBUISizeObservingView, UIView, UIViewController, FBDisplayLayoutElement;
@protocol SBUISizeObservingViewDelegate, SBFullScreenSwitcherSceneLiveContentOverlay, SBSwitcherLiveContentOverlayDelegate;

#import <Foundation/Foundation.h>

#import "SBAppClipOverlayViewController.h"

@interface SBFluidSwitcherAppClipLiveContentOverlay : NSObject <SBUISizeObservingViewDelegate, SBFullScreenSwitcherSceneLiveContentOverlay>

 {
    NSString *_bundleIdentifier;
    NSString *_sceneIdentifier;
    SBAppClipOverlayViewController *_placeholderViewController;
    UIStatusBar *_statusBar;
    SBUISizeObservingView *_containerView;
    BOOL _isPendingUpdate;
}


@property (readonly, nonatomic, getter=isAsyncRenderingEnabled) BOOL asyncRenderingEnabled; // ivar: _asyncRenderingEnabled
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSwitcherLiveContentOverlayDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // ivar: _displayLayoutElement
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance; // ivar: _isInsetForHomeAffordance
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;
@property (readonly) Class superclass;


-(BOOL)isContentUpdating;
-(CGFloat)currentStatusBarHeight;
-(NSInteger)leadingStatusBarStyle;
-(NSInteger)overlayType;
-(NSInteger)preferredInterfaceOrientation;
-(NSInteger)trailingStatusBarStyle;
-(NSUInteger)_debugPostModernRotationSupportedInterfaceOrientations;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithPlaceholderEntity:(id)arg0 ;
-(void)_beginPollingUpdateStillAvailable;
-(void)_createAndConfigureStatusBar;
-(void)_installedApplicationsDidChange:(id)arg0 ;
-(void)_launchApplication:(id)arg0 ;
-(void)configureWithWorkspaceEntity:(id)arg0 referenceFrame:(struct CGRect )arg1 interfaceOrientation:(NSInteger)arg2 layoutRole:(NSInteger)arg3 spaceConfiguration:(NSInteger)arg4 floatingConfiguration:(NSInteger)arg5 hasClassicAppOrientationMismatch:(BOOL)arg6 ;
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


@end


#endif