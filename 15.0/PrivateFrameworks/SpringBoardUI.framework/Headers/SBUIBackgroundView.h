// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIBACKGROUNDVIEW_H
#define SBUIBACKGROUNDVIEW_H

@class UIView, BSUIBackdropView, UIColor, MTMaterialView, NSString;
@protocol SBUIBackgroundStyleTransitioning, SBUIWallpaperOverlay;



@interface SBUIBackgroundView : UIView <SBUIBackgroundStyleTransitioning, SBUIWallpaperOverlay>

 {
    NSInteger _transitionStyle;
    CGFloat _progress;
    BSUIBackdropView *_backdropView;
    BOOL _isReducedTransparencyEnabled;
    UIView *_reduceTransparencyView;
    UIView *_reduceTransparencyTintingView;
    UIView *_sourceOverView;
    UIView *_darkenSourceOverView;
    UIView *_tintView;
    UIView *_lightenSourceOverView;
    UIColor *_reduceTransparencyBackingColor;
    MTMaterialView *_luminanceView;
}


@property (nonatomic) NSInteger backgroundStyle; // ivar: _style
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *groupName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransitioningBackgroundStyle) BOOL transitioningBackgroundStyle; // ivar: _transitioning


-(BOOL)_shouldApplyReducedTransparencyTintForBackgroundStyle:(NSInteger)arg0 ;
-(CGFloat)_darkenValueForBackgroundStyle:(NSInteger)arg0 ;
-(CGFloat)_lightenSourceOverValueForBackgroundStyle:(NSInteger)arg0 ;
-(CGFloat)_luminanceValueForBackgroundStyle:(NSInteger)arg0 ;
-(CGFloat)_reducedTransparencyValueForBackgroundStyle:(NSInteger)arg0 ;
-(CGFloat)_tintColorAlphaForBackgroundStyle:(NSInteger)arg0 ;
-(CGFloat)_tintValueForBackgroundStyle:(NSInteger)arg0 ;
-(CGFloat)_valueFromStart:(CGFloat)arg0 toEnd:(CGFloat)arg1 withFraction:(CGFloat)arg2 ;
-(id)_backgroundColorForDarkenAlpha:(CGFloat)arg0 andProgress:(CGFloat)arg1 ;
-(id)backdropView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_darkenWithProgress:(CGFloat)arg0 ;
-(void)_lightenSourceOverWithProgress:(CGFloat)arg0 ;
-(void)_luminanceWithProgress:(CGFloat)arg0 ;
-(void)_reduceTransparencyEnabledStateDidChange:(id)arg0 ;
-(void)_reduceTransparencyWithProgress:(CGFloat)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_tintWithProgress:(CGFloat)arg0 backgroundColorAlpha:(CGFloat)arg1 ;
-(void)_updateAppearanceForBackgroundStyle:(NSInteger)arg0 transitionToSettings:(BOOL)arg1 ;
-(void)_updateAppearanceForTransitionFromStyle:(NSInteger)arg0 toStyle:(NSInteger)arg1 withProgress:(CGFloat)arg2 ;
-(void)_updateReduceTransparencyTinting;
-(void)_updateReduceTransparencyTintingWithProgressWeighting:(CGFloat)arg0 ;
-(void)beginTransitionToBackgroundStyle:(NSInteger)arg0 ;
-(void)completeTransitionToBackgroundStyle:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)modifyAllViewsWithChanges:(id)arg0 ;
-(void)setReduceTransparencyBackingColor:(id)arg0 ;
-(void)updateBackgroundStyleTransitionProgress:(CGFloat)arg0 ;


@end


#endif