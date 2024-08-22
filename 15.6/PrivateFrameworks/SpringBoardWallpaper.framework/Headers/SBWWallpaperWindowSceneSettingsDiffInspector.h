// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWWALLPAPERWINDOWSCENESETTINGSDIFFINSPECTOR_H
#define SBWWALLPAPERWINDOWSCENESETTINGSDIFFINSPECTOR_H

@class UIApplicationSceneSettingsDiffInspector;



@interface SBWWallpaperWindowSceneSettingsDiffInspector : UIApplicationSceneSettingsDiffInspector



-(void)_observeOtherSetting:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)observeCachingIdentifierWithBlock:(id)arg0 ;
-(void)observeColorSamplingSuspendedWithBlock:(id)arg0 ;
-(void)observeDisallowHomescreenRasterizationWithBlock:(id)arg0 ;
-(void)observeDisallowLockscreenRasterizationWithBlock:(id)arg0 ;
-(void)observeHomescreenStyleChangesDelayedWithBlock:(id)arg0 ;
-(void)observeHomescreenStyleTransitionStateWithBlock:(id)arg0 ;
-(void)observeHomescreenWallpaperAlphaWithBlock:(id)arg0 ;
-(void)observeHomescreenWallpaperHiddenWithBlock:(id)arg0 ;
-(void)observeHomescreenWallpaperScaleWithBlock:(id)arg0 ;
-(void)observeLiveWallpaperInteractiveWithBlock:(id)arg0 ;
-(void)observeLiveWallpaperTouchActiveWithBlock:(id)arg0 ;
-(void)observeLockscreenOnlyWallpaperAlphaWithBlock:(id)arg0 ;
-(void)observeLockscreenStyleTransitionStateWithBlock:(id)arg0 ;
-(void)observeLockscreenWallpaperAlphaWithBlock:(id)arg0 ;
-(void)observeLockscreenWallpaperContentsRectWithBlock:(id)arg0 ;
-(void)observeLockscreenWallpaperHiddenWithBlock:(id)arg0 ;
-(void)observeLockscreenWallpaperScaleWithBlock:(id)arg0 ;
-(void)observeWallpaperAnimationSuspendedWithBlock:(id)arg0 ;
-(void)observeWallpaperRequiredWithBlock:(id)arg0 ;
-(void)observeWallpaperVariantWithBlock:(id)arg0 ;


@end


#endif