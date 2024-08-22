// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLUIDSWITCHERICONOVERLAYVIEW_H
#define SBFLUIDSWITCHERICONOVERLAYVIEW_H

@class SBOrientationTransformWrapperView, SBIconView, UIView, NSArray, UIViewFloatAnimatableProperty, CAMediaTimingFunction;



@interface SBFluidSwitcherIconOverlayView : SBOrientationTransformWrapperView {
    SBIconView *_iconOverlayView;
    UIView *_iconCrossfadeView;
    UIView *_iconOverlayContainerView;
    CGRect _initialIconOverlayViewBounds;
    NSArray *_crossfadeViews;
    CGRect _crossfadeViewFrame;
    UIViewFloatAnimatableProperty *_iconCrossfadeAnimatableProperty;
    CAMediaTimingFunction *_iconCrossfadeTimingFunction;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) CGRect crossfadeViewFrame;
@property (readonly, nonatomic) SBIconView *iconView;


-(CGFloat)_currentFadeValue;
-(CGFloat)_iconOverlayScale;
-(id)initWithIconView:(id)arg0 crossfadeViews:(id)arg1 crossfadeViewFrame:(struct CGRect )arg2 contentOrientation:(NSInteger)arg3 containerOrientation:(NSInteger)arg4 ;
-(void)_applyIconOverlayViewOverlayScaleProperties;
-(void)_setCrossfadeViewsAlpha:(CGFloat)arg0 ;
-(void)_setUpIconCrossfadeAnimatableProperty;
-(void)_setUpIconCrossfadeView;
-(void)dealloc;
-(void)invalidate;
-(void)layoutSubviews;


@end


#endif