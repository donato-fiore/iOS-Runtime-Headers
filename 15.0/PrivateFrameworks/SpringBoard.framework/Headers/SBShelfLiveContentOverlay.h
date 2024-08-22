// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSHELFLIVECONTENTOVERLAY_H
#define SBSHELFLIVECONTENTOVERLAY_H

@class SBUISizeObservingView, UIView, NSString;
@protocol SBSwitcherLiveContentOverlay, SBSceneViewPresentationConfiguring, SBUISizeObservingViewDelegate, SBSwitcherLiveContentOverlayDelegate;

#import <Foundation/Foundation.h>

#import "SBDeviceApplicationSceneView.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBShelfLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay, SBSceneViewPresentationConfiguring, SBUISizeObservingViewDelegate>

 {
    SBDeviceApplicationSceneView *_sceneView;
    SBUISizeObservingView *_sizeObservingView;
}


@property (readonly, nonatomic, getter=isAsyncRenderingEnabled) BOOL asyncRenderingEnabled; // ivar: asyncRenderingEnabled
@property (readonly, nonatomic) UIView *contentOverlayView; // ivar: contentOverlayView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSwitcherLiveContentOverlayDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance; // ivar: _isInsetForHomeAffordance
@property (nonatomic, getter=isPendingSwitcherSnapshotCacheUpdate) BOOL pendingSwitcherSnapshotCacheUpdate; // ivar: _pendingSwitcherSnapshotCacheUpdate
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly) Class superclass;


-(BOOL)isContentUpdating;
-(CGFloat)currentStatusBarHeight;
-(NSInteger)leadingStatusBarStyle;
-(NSInteger)preferredInterfaceOrientation;
-(NSInteger)sceneViewPresentationPriority:(id)arg0 ;
-(NSInteger)trailingStatusBarStyle;
-(NSUInteger)_debugPostModernRotationSupportedInterfaceOrientations;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithSceneHandle:(id)arg0 referenceSize:(struct CGSize )arg1 referenceOrientation:(NSInteger)arg2 livePortalView:(id)arg3 isInsetForHomeAffordance:(BOOL)arg4 ;
-(id)sceneViewPresentationIdentifier:(id)arg0 ;
-(void)_updateSceneViewInSideSizeObserveringViewIfNecessary;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg0 ;
-(void)setBlurViewIconScale:(CGFloat)arg0 ;
-(void)setDimmed:(BOOL)arg0 ;
// -(void)setLiveContentBlurEnabled:(BOOL)arg0 duration:(CGFloat)arg1 blurDelay:(CGFloat)arg2 iconViewScale:(CGFloat)arg3 began:(id)arg4 completion:(unk)arg5  ;
-(void)setMatchMovedToScene:(BOOL)arg0 ;
-(void)setStatusBarHidden:(BOOL)arg0 nubViewHidden:(BOOL)arg1 animator:(id)arg2 ;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg0 ;
-(void)sizeObservingView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;


@end


#endif