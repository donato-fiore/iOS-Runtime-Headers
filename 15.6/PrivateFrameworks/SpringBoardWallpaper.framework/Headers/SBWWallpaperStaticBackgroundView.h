// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWWALLPAPERSTATICBACKGROUNDVIEW_H
#define SBWWALLPAPERSTATICBACKGROUNDVIEW_H

@class UIView;
@protocol SBWWallpaperPresenting><SBWWallpaperLegibilityProviding, BSInvalidatable;


#import "SBWWallpaperEffectViewBase.h"

@interface SBWWallpaperStaticBackgroundView : UIView {
    id<SBWWallpaperPresenting><SBWWallpaperLegibilityProviding> *_wallpaperPresenter;
    SBWWallpaperEffectViewBase *_lockscreenWallpaperEffectView;
    SBWWallpaperEffectViewBase *_homescreenWallpaperEffectView;
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