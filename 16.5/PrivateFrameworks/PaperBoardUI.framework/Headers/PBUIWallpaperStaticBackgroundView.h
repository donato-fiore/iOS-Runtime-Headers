// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIWALLPAPERSTATICBACKGROUNDVIEW_H
#define PBUIWALLPAPERSTATICBACKGROUNDVIEW_H

@class UIView;
@protocol PBUIWallpaperPresenting><PBUIWallpaperLegibilityProviding, BSInvalidatable;


#import "PBUIWallpaperEffectViewBase.h"

@interface PBUIWallpaperStaticBackgroundView : UIView {
    id<PBUIWallpaperPresenting><PBUIWallpaperLegibilityProviding> *_wallpaperPresenter;
    PBUIWallpaperEffectViewBase *_lockscreenWallpaperEffectView;
    PBUIWallpaperEffectViewBase *_homescreenWallpaperEffectView;
}


@property (nonatomic) NSInteger variant; // ivar: _variant
@property (retain, nonatomic) NSObject<BSInvalidatable> *wallpaperStyleAnimationAssertion; // ivar: _wallpaperStyleAnimationAssertion


-(BOOL)_shouldSuspendMotionEffectsForState:(struct ? )arg0 ;
-(BOOL)_shouldSuspendMotionEffectsForStyle:(NSInteger)arg0 ;
-(BOOL)setWallpaperStyleTransitionState:(struct ? )arg0 forVariant:(NSInteger)arg1 withAnimationFactory:(id)arg2 ;
-(id)_effectViewForVariant:(NSInteger)arg0 ;
-(id)_newEffectViewForVariant:(NSInteger)arg0 transitionState:(struct ? )arg1 ;
-(id)initWithWallpaperPresenter:(id)arg0 ;
-(void)_beginSuspendingMotionEffectsForStyleIfNeeded;
-(void)_endSuspendingMotionEffectsForStyleIfNeeded;
-(void)_setEffectView:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)_updateMotionEffectsForState:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif