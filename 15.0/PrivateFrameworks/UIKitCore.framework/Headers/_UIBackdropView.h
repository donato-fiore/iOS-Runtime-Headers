// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBACKDROPVIEW_H
#define _UIBACKDROPVIEW_H

@class NSString, NSMutableDictionary, CAFilter, NSHashTable, NSMutableSet;
@protocol _UIBackdropViewGraphicsQualityChangeDelegate, _UIBackdropViewObserver;


#import "UIView.h"
#import "_UIBackdropEffectView.h"
#import "UIImage.h"
#import "UIColor.h"
#import "_UIBackdropViewSettings.h"

@interface _UIBackdropView : UIView {
    CGFloat _cornerRadius;
    BOOL _cornerRadiusIsContinuous;
}


@property (nonatomic) BOOL _backdropVisible; // ivar: __backdropVisible
@property (copy, nonatomic) NSString *_blurQuality; // ivar: __blurQuality
@property (nonatomic) CGFloat _blurRadius; // ivar: __blurRadius
@property (nonatomic) CGFloat _saturationDeltaFactor; // ivar: __saturationDeltaFactor
@property (nonatomic) BOOL allowsColorSettingsSuppression; // ivar: _allowsColorSettingsSuppression
@property (nonatomic) CGFloat appliesOutputSettingsAnimationDuration; // ivar: _appliesOutputSettingsAnimationDuration
@property (nonatomic) BOOL appliesOutputSettingsAutomatically; // ivar: _appliesOutputSettingsAutomatically
@property (nonatomic) BOOL appliesOutputSettingsAutomaticallyEnabledComputesColorSettings; // ivar: _appliesOutputSettingsAutomaticallyEnabledComputesColorSettings
@property (nonatomic) BOOL applySaturationBeforeBlur; // ivar: _applySaturationBeforeBlur
@property (nonatomic) BOOL applySettingsAfterLayout; // ivar: _applySettingsAfterLayout
@property (nonatomic) BOOL applyingBackdropChanges; // ivar: _applyingBackdropChanges
@property (nonatomic) BOOL applyingTransition; // ivar: _applyingTransition
@property (nonatomic) BOOL autoGroup; // ivar: _autoGroup
@property (nonatomic) BOOL autosizesToFitSuperview; // ivar: _autosizesToFitSuperview
@property (retain, nonatomic) _UIBackdropEffectView *backdropEffectView; // ivar: _backdropEffectView
@property (nonatomic) BOOL backdropVisibilitySetOnce; // ivar: _backdropVisibilitySetOnce
@property (nonatomic) BOOL blurRadiusSetOnce; // ivar: _blurRadiusSetOnce
@property (nonatomic) BOOL blursBackground; // ivar: _blursBackground
@property (retain, nonatomic) UIImage *colorBurnTintMaskImage; // ivar: _colorBurnTintMaskImage
@property (retain, nonatomic) UIView *colorBurnTintMaskViewContainer; // ivar: _colorBurnTintMaskViewContainer
@property (retain, nonatomic) NSMutableDictionary *colorBurnTintMaskViewMap; // ivar: _colorBurnTintMaskViewMap
@property (retain, nonatomic) UIView *colorBurnTintView; // ivar: _colorBurnTintView
@property (retain, nonatomic) UIColor *colorMatrixColorTint; // ivar: _colorMatrixColorTint
@property (nonatomic) CGFloat colorMatrixColorTintAlpha; // ivar: _colorMatrixColorTintAlpha
@property (nonatomic) CGFloat colorMatrixGrayscaleTintAlpha; // ivar: _colorMatrixGrayscaleTintAlpha
@property (nonatomic) CGFloat colorMatrixGrayscaleTintLevel; // ivar: _colorMatrixGrayscaleTintLevel
@property (retain, nonatomic) CAFilter *colorOffsetFilter; // ivar: _colorOffsetFilter
@property (retain, nonatomic) CAFilter *colorSaturateFilter; // ivar: _colorSaturateFilter
@property (retain, nonatomic) UIImage *colorTintMaskImage; // ivar: _colorTintMaskImage
@property (retain, nonatomic) UIView *colorTintMaskViewContainer; // ivar: _colorTintMaskViewContainer
@property (retain, nonatomic) NSMutableDictionary *colorTintMaskViewMap; // ivar: _colorTintMaskViewMap
@property (retain, nonatomic) UIView *colorTintView; // ivar: _colorTintView
@property (retain, nonatomic) id *computeAndApplySettingsNotificationObserver; // ivar: _computeAndApplySettingsNotificationObserver
@property (nonatomic) BOOL computesColorSettings; // ivar: _computesColorSettings
@property (nonatomic) NSInteger configuration; // ivar: _configuration
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) BOOL contentViewAccessed; // ivar: _contentViewAccessed
@property (nonatomic) BOOL contentViewAccessorGuard; // ivar: _contentViewAccessorGuard
@property (retain, nonatomic) UIImage *darkeningTintMaskImage; // ivar: _darkeningTintMaskImage
@property (retain, nonatomic) UIView *darkeningTintMaskViewContainer; // ivar: _darkeningTintMaskViewContainer
@property (retain, nonatomic) NSMutableDictionary *darkeningTintMaskViewMap; // ivar: _darkeningTintMaskViewMap
@property (retain, nonatomic) UIView *darkeningTintView; // ivar: _darkeningTintView
@property (readonly, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIImage *filterMaskImage; // ivar: _filterMaskImage
@property (retain, nonatomic) UIView *filterMaskViewContainer; // ivar: _filterMaskViewContainer
@property (retain, nonatomic) NSMutableDictionary *filterMaskViewMap; // ivar: _filterMaskViewMap
@property (retain, nonatomic) CAFilter *gaussianBlurFilter; // ivar: _gaussianBlurFilter
@property (nonatomic) NSObject<_UIBackdropViewGraphicsQualityChangeDelegate> *graphicsQualityChangeDelegate; // ivar: _graphicsQualityChangeDelegate
@property (retain, nonatomic) UIImage *grayscaleTintMaskImage; // ivar: _grayscaleTintMaskImage
@property (retain, nonatomic) UIView *grayscaleTintMaskViewContainer; // ivar: _grayscaleTintMaskViewContainer
@property (retain, nonatomic) NSMutableDictionary *grayscaleTintMaskViewMap; // ivar: _grayscaleTintMaskViewMap
@property (retain, nonatomic) UIView *grayscaleTintView; // ivar: _grayscaleTintView
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (retain, nonatomic) _UIBackdropViewSettings *inputSettings; // ivar: _inputSettings
@property (nonatomic) NSInteger maskMode; // ivar: _maskMode
@property (nonatomic) NSObject<_UIBackdropViewObserver> *observer; // ivar: _observer
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) _UIBackdropViewSettings *outputSettings; // ivar: _outputSettings
@property (retain, nonatomic) NSMutableSet *partialMaskViews; // ivar: _partialMaskViews
@property (nonatomic) CGFloat previousBackdropStatisticsBlue; // ivar: _previousBackdropStatisticsBlue
@property (nonatomic) CGFloat previousBackdropStatisticsContrast; // ivar: _previousBackdropStatisticsContrast
@property (nonatomic) CGFloat previousBackdropStatisticsGreen; // ivar: _previousBackdropStatisticsGreen
@property (nonatomic) CGFloat previousBackdropStatisticsRed; // ivar: _previousBackdropStatisticsRed
@property (nonatomic) BOOL requiresTintViews; // ivar: _requiresTintViews
@property (retain, nonatomic) _UIBackdropViewSettings *savedInputSettingsDuringRenderInContext; // ivar: _savedInputSettingsDuringRenderInContext
@property (nonatomic) BOOL simulatesMasks; // ivar: _simulatesMasks
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) CAFilter *tintFilter; // ivar: _tintFilter
@property (nonatomic) BOOL transitioningBetweenMaterialsRequiringRasterizationAndAlphaHack; // ivar: _transitioningBetweenMaterialsRequiringRasterizationAndAlphaHack
@property (nonatomic) BOOL updateMaskViewsForViewReentrancyGuard; // ivar: _updateMaskViewsForViewReentrancyGuard


+(Class)defaultSettingsClass;
+(Class)layerClass;
+(id)allBackdropViews;
+(void)adjustGraphicsQualityForAccessibilityIfNeeded:(id)arg0 ;
+(void)restoreColorSettingsForRequester:(id)arg0 ;
+(void)setAllBackdropViewsToGraphicsQuality:(NSInteger)arg0 ;
+(void)suppressColorSettingsForRequester:(id)arg0 ;
-(BOOL)disablesOccludedBackdropBlurs;
-(BOOL)isBackdropVisible;
-(CGFloat)_continuousCornerRadius;
-(CGFloat)_cornerRadius;
-(CGFloat)blurRadius;
-(CGFloat)saturationDeltaFactor;
-(id)backdropViewLayer;
-(id)blurQuality;
-(id)filters;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 autosizesToFitSuperview:(BOOL)arg1 settings:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 privateStyle:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 settings:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(id)initWithPrivateStyle:(NSInteger)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_applyCornerRadiusToSubviews;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)_transitionToGraphicsQuality:(NSInteger)arg0 ;
-(void)_updateBackdropGroupName;
-(void)_updateFilters;
-(void)addBackdropEffectViewIfNeededForSettings:(id)arg0 ;
-(void)addColorBurnTintViewIfNeededForSettings:(id)arg0 ;
-(void)addColorTintViewIfNeededForSettings:(id)arg0 ;
-(void)addContentViewIfNeededForSettings:(id)arg0 ;
-(void)addDarkeningTintViewIfNeededForSettings:(id)arg0 ;
-(void)addGrayscaleTintViewIfNeededForSettings:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)adjustTintImplementationIfNeeded:(id)arg0 ;
-(void)applyOverlayBlendMode:(NSInteger)arg0 toView:(id)arg1 ;
-(void)applyOverlayBlendModeToView:(id)arg0 ;
-(void)applySettings:(id)arg0 ;
-(void)applySettingsWithBuiltInAnimation:(id)arg0 ;
-(void)computeAndApplySettingsForTransition;
-(void)dealloc;
-(void)didCallRenderInContextOnBackdropViewLayer;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)ensureProperSubviewOrdering;
-(void)layoutSubviews;
-(void)prepareForTransitionToSettings:(id)arg0 ;
-(void)removeMaskViews;
-(void)removeObserver:(id)arg0 ;
-(void)removeOverlayBlendModeFromView:(id)arg0 ;
-(void)setBackdropVisible:(BOOL)arg0 ;
-(void)setBlurFilterWithRadius:(CGFloat)arg0 blurQuality:(id)arg1 ;
-(void)setBlurQuality:(id)arg0 ;
-(void)setBlurRadius:(CGFloat)arg0 ;
-(void)setDisablesOccludedBackdropBlurs:(BOOL)arg0 ;
-(void)setMaskImage:(id)arg0 onLayer:(id)arg1 ;
-(void)setSaturationDeltaFactor:(CGFloat)arg0 ;
-(void)setShouldRasterizeEffectsView:(BOOL)arg0 ;
-(void)setTintOpacity:(CGFloat)arg0 ;
-(void)setUsesZoom;
-(void)settingsDidChange:(id)arg0 ;
-(void)transitionComplete;
-(void)transitionIncrementallyToPrivateStyle:(NSInteger)arg0 weighting:(CGFloat)arg1 ;
-(void)transitionIncrementallyToSettings:(id)arg0 weighting:(CGFloat)arg1 ;
-(void)transitionIncrementallyToStyle:(NSInteger)arg0 weighting:(CGFloat)arg1 ;
-(void)transitionToColor:(id)arg0 ;
-(void)transitionToPrivateStyle:(NSInteger)arg0 ;
-(void)transitionToSettings:(id)arg0 ;
-(void)transitionToStyle:(NSInteger)arg0 ;
-(void)updateMaskViewForView:(id)arg0 flag:(NSInteger)arg1 ;
-(void)updateMaskViewsForView:(id)arg0 ;
-(void)updateSubviewHierarchyIfNeededForSettings:(id)arg0 ;
-(void)willCallRenderInContextOnBackdropViewLayer;


@end


#endif