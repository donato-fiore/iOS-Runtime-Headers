// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBREACHABILITYBACKGROUNDVIEW_H
#define SBREACHABILITYBACKGROUNDVIEW_H

@class UIView, CAShapeLayer, UIViewFloatAnimatableProperty, NSString;
@protocol SBHomeGrabberDelegate;


#import "SBWallpaperEffectView.h"
#import "SBHomeGrabberView.h"

@interface SBReachabilityBackgroundView : UIView <SBHomeGrabberDelegate>

 {
    UIView *_wallpaperContainerView;
    SBWallpaperEffectView *_topWallpaperEffectView;
    SBWallpaperEffectView *_bottomWallpaperEffectView;
    UIView *_hitTestBlockerView;
    SBHomeGrabberView *_homeGrabberView;
    CAShapeLayer *_chevronLayer;
    UIViewFloatAnimatableProperty *_chevronShapeAnimatableProperty;
}


@property (nonatomic) CGFloat chevronAlpha;
@property (nonatomic) CGFloat containerViewYOffset; // ivar: _containerViewYOffset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat homeGrabberAdditionalOffset; // ivar: _homeGrabberAdditionalOffset
@property (nonatomic) CGFloat homeGrabberAlpha;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger wallpaperVariant; // ivar: _wallpaperVariant


-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg0 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg0 ;
-(CGFloat)_displayCornerRadius;
-(CGFloat)additionalEdgeSpacingForHomeGrabberView:(id)arg0 ;
-(id)_newWallpaperEffectViewForVariant:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 wallpaperVariant:(NSInteger)arg1 ;
-(void)_setupChevron;
-(void)_setupCornerContentsImageForWallpaperEffectView:(id)arg0 ;
-(void)_setupHitTestBlockerView;
-(void)_setupHomeGrabberView;
-(void)_updateChevronPathForUpFraction:(CGFloat)arg0 ;
-(void)_updateWallpaperEffectViewAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif