// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERCHAMOISSETTINGS_H
#define SBSWITCHERCHAMOISSETTINGS_H

@class PTSettings, SBAppSwitcherDefaults, SBFFluidBehaviorSettings;


#import "SBDisplayItemLayoutGrid.h"

@interface SBSwitcherChamoisSettings : PTSettings {
    SBDisplayItemLayoutGrid *_cachedDisplayItemLayoutGrid;
    SBAppSwitcherDefaults *_appSwitcherDefaults;
}


@property BOOL allowTrueMaximizeForAllApps; // ivar: _allowTrueMaximizeForAllApps
@property (retain) SBFFluidBehaviorSettings *appToAppLayoutSettings; // ivar: _appToAppLayoutSettings
@property (retain) SBFFluidBehaviorSettings *appToAppOpacitySettings; // ivar: _appToAppOpacitySettings
@property CGSize diffuseShadowOffset; // ivar: _diffuseShadowOffset
@property CGFloat diffuseShadowOpacity; // ivar: _diffuseShadowOpacity
@property CGFloat diffuseShadowRadius; // ivar: _diffuseShadowRadius
@property NSUInteger externalDisplayHighResVerticalResolution; // ivar: _externalDisplayHighResVerticalResolution
@property (retain) SBFFluidBehaviorSettings *liveResizeAfterReleaseLayoutAnimationSettings; // ivar: _liveResizeAfterReleaseLayoutAnimationSettings
@property (retain) SBFFluidBehaviorSettings *liveResizeDuringDragLayoutAnimationSettings; // ivar: _liveResizeDuringDragLayoutAnimationSettings
@property NSUInteger maximumNumberOfAppsOnStage; // ivar: _maximumNumberOfAppsOnStage
@property NSUInteger numberOfRowsWhileInAppOnEmbeddedDisplay; // ivar: _numberOfRowsWhileInAppOnEmbeddedDisplay
@property NSUInteger numberOfRowsWhileInAppOnExternalDisplay; // ivar: _numberOfRowsWhileInAppOnExternalDisplay
@property NSUInteger numberOfRowsWhileInAppOnExternalDisplayHighRes; // ivar: _numberOfRowsWhileInAppOnExternalDisplayHighRes
@property NSUInteger numberOfVisibleItemsPerGroup; // ivar: _numberOfVisibleItemsPerGroup
@property CGFloat pinWindowEdgeForResizeMargin; // ivar: _pinWindowEdgeForResizeMargin
@property BOOL rejectDropsWhenStageIsFull; // ivar: _rejectDropsWhenStageIsFull
@property CGFloat rimShadowOpacity; // ivar: _rimShadowOpacity
@property CGFloat rimShadowRadius; // ivar: _rimShadowRadius
@property CGFloat stripsHoverRevealZoneWidthFixed; // ivar: _stripsHoverRevealZoneWidthFixed
@property CGFloat stripsHoverRevealZoneWidthScale; // ivar: _stripsHoverRevealZoneWidthScale
@property NSUInteger stripsHoverRevealZoneWidthType; // ivar: _stripsHoverRevealZoneWidthType


+(id)settingsControllerModule;
-(BOOL)_shouldPreferDockHiddenForWindowScene:(id)arg0 ;
-(BOOL)_shouldPreferStripHiddenForWindowScene:(id)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(CGFloat)_statusBarHeight;
-(CGFloat)_stripCardScaleForContainerBounds:(struct CGRect )arg0 screenEdgePadding:(CGFloat)arg1 stripVerticalEdgeSpacing:(CGFloat)arg2 stripInterItemSpacing:(CGFloat)arg3 floatingDockHeight:(CGFloat)arg4 numberOfRows:(NSUInteger)arg5 ;
-(CGFloat)_stripWidthForContainerBounds:(struct CGRect )arg0 screenEdgePadding:(CGFloat)arg1 stripStackDistance:(CGFloat)arg2 stripCardScale:(CGFloat)arg3 stripTiltAngle:(CGFloat)arg4 containerPerspective:(CGFloat)arg5 ;
-(CGFloat)widthThresholdToHideContinuousExposeStripsForStageWithItemCount:(NSUInteger)arg0 bounds:(struct CGRect )arg1 chamoisLayoutAttributes:(id)arg2 ;
-(id)_appSwitcherDefaults;
-(id)_displayItemLayoutGrid;
-(id)layoutAttributesForContainerBounds:(struct CGRect )arg0 nativeContainerReferencePixelBounds:(struct CGRect )arg1 interfaceOrientation:(NSInteger)arg2 floatingDockHeight:(CGFloat)arg3 statusBarHeight:(CGFloat)arg4 requiresFullScreen:(BOOL)arg5 prefersStripHidden:(BOOL)arg6 prefersDockHidden:(BOOL)arg7 isEmbeddedDisplay:(BOOL)arg8 ;
-(id)layoutAttributesForWindowScene:(id)arg0 interfaceOrientation:(NSInteger)arg1 requiresFullScreen:(BOOL)arg2 ;
-(id)layoutAttributesForWindowScene:(id)arg0 requiresFullScreen:(BOOL)arg1 ;
-(struct CGSize )_defaultAppSizeForContainerBounds:(struct CGRect )arg0 nativeContainerReferencePixelBounds:(struct CGRect )arg1 requiresFullScreen:(BOOL)arg2 screenEdgePadding:(CGFloat)arg3 stripWidth:(CGFloat)arg4 floatingDockHeight:(CGFloat)arg5 minimumDefaultWindowSize:(struct CGSize )arg6 prefersStripHidden:(BOOL)arg7 prefersDockHidden:(BOOL)arg8 isEmbeddedDisplay:(BOOL)arg9 outMaximumWidthForOverlappingSpace:(*CGFloat)arg10 ;
-(struct CGSize )_minimumDefaultWindowSizeForContainerBounds:(struct CGRect )arg0 ;
-(void)setDefaultValues;


@end


#endif