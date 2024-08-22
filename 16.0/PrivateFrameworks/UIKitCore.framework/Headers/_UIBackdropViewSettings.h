// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBACKDROPVIEWSETTINGS_H
#define _UIBACKDROPVIEWSETTINGS_H

@class NSString, NSValue;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "_UIBackdropView.h"
#import "UIImage.h"
#import "_UIBackdropColorSettings.h"

@interface _UIBackdropViewSettings : NSObject {
    *__CFRunLoopObserver _runLoopObserver;
    BOOL _shouldDoRasterizationAndAlphaHack;
    UIColor *_combinedTintColor;
}


@property (nonatomic) BOOL appliesTintAndBlurSettings; // ivar: _appliesTintAndBlurSettings
@property (nonatomic) _UIBackdropView *backdrop; // ivar: _backdrop
@property (nonatomic, getter=isBackdropVisible) BOOL backdropVisible; // ivar: _backdropVisible
@property (nonatomic) NSInteger blurHardEdges; // ivar: _blurHardEdges
@property (copy, nonatomic) NSString *blurQuality; // ivar: _blurQuality
@property (nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (nonatomic) BOOL blursWithHardEdges;
@property (nonatomic) CGFloat colorBurnTintAlpha; // ivar: _colorBurnTintAlpha
@property (nonatomic) CGFloat colorBurnTintLevel; // ivar: _colorBurnTintLevel
@property (retain, nonatomic) UIImage *colorBurnTintMaskImage; // ivar: _colorBurnTintMaskImage
@property (nonatomic) CGFloat colorOffsetAlpha; // ivar: _colorOffsetAlpha
@property (retain, nonatomic) NSValue *colorOffsetMatrix; // ivar: _colorOffsetMatrix
@property (retain, nonatomic) _UIBackdropColorSettings *colorSettings; // ivar: _colorSettings
@property (retain, nonatomic) UIColor *colorTint; // ivar: _colorTint
@property (nonatomic) CGFloat colorTintAlpha; // ivar: _colorTintAlpha
@property (nonatomic) CGFloat colorTintMaskAlpha; // ivar: _colorTintMaskAlpha
@property (retain, nonatomic) UIImage *colorTintMaskImage; // ivar: _colorTintMaskImage
@property (readonly, nonatomic) UIColor *combinedTintColor;
@property (nonatomic) BOOL darkenWithSourceOver; // ivar: _darkenWithSourceOver
@property (nonatomic) CGFloat darkeningTintAlpha; // ivar: _darkeningTintAlpha
@property (nonatomic) CGFloat darkeningTintBrightness; // ivar: _darkeningTintBrightness
@property (nonatomic) CGFloat darkeningTintHue; // ivar: _darkeningTintHue
@property (retain, nonatomic) UIImage *darkeningTintMaskImage; // ivar: _darkeningTintMaskImage
@property (nonatomic) CGFloat darkeningTintSaturation; // ivar: _darkeningTintSaturation
@property (nonatomic, setter=setDesignMode:) BOOL designMode; // ivar: _designMode
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL explicitlySetGraphicsQuality; // ivar: _explicitlySetGraphicsQuality
@property (nonatomic) CGFloat filterMaskAlpha; // ivar: _filterMaskAlpha
@property (retain, nonatomic) UIImage *filterMaskImage; // ivar: _filterMaskImage
@property (nonatomic) NSInteger graphicsQuality; // ivar: _graphicsQuality
@property (nonatomic) CGFloat grayscaleTintAlpha; // ivar: _grayscaleTintAlpha
@property (nonatomic) CGFloat grayscaleTintLevel; // ivar: _grayscaleTintLevel
@property (nonatomic) CGFloat grayscaleTintMaskAlpha; // ivar: _grayscaleTintMaskAlpha
@property (retain, nonatomic) UIImage *grayscaleTintMaskImage; // ivar: _grayscaleTintMaskImage
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIColor *legibleColor; // ivar: _legibleColor
@property (nonatomic) BOOL lightenGrayscaleWithSourceOver; // ivar: _lightenGrayscaleWithSourceOver
@property (nonatomic) NSInteger renderingHint; // ivar: _renderingHint
@property (nonatomic) BOOL requiresColorStatistics; // ivar: _requiresColorStatistics
@property (nonatomic) CGFloat saturationDeltaFactor; // ivar: _saturationDeltaFactor
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) NSInteger stackingLevel; // ivar: _stackingLevel
@property (nonatomic) CGFloat statisticsInterval; // ivar: _statisticsInterval
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (nonatomic) NSInteger suppressSettingsDidChange; // ivar: _suppressSettingsDidChange
@property (nonatomic) BOOL usesBackdropEffectView; // ivar: _usesBackdropEffectView
@property (nonatomic) BOOL usesColorBurnTintView; // ivar: _usesColorBurnTintView
@property (nonatomic) BOOL usesColorOffset; // ivar: _usesColorOffset
@property (nonatomic) BOOL usesColorTintView; // ivar: _usesColorTintView
@property (nonatomic) BOOL usesContentView; // ivar: _usesContentView
@property (nonatomic) BOOL usesDarkeningTintView; // ivar: _usesDarkeningTintView
@property (nonatomic) BOOL usesGrayscaleTintView; // ivar: _usesGrayscaleTintView
@property (nonatomic) NSUInteger version; // ivar: _version
@property (nonatomic) CGFloat zoom; // ivar: _zoom
@property (nonatomic) BOOL zoomsBack;


+(id)darkeningTintColor;
+(id)settingsForPrivateStyle:(NSInteger)arg0 ;
+(id)settingsForPrivateStyle:(NSInteger)arg0 graphicsQuality:(NSInteger)arg1 ;
+(id)settingsForStyle:(NSInteger)arg0 ;
+(id)settingsForStyle:(NSInteger)arg0 graphicsQuality:(NSInteger)arg1 ;
+(id)settingsPreservingHintsFromSettings:(id)arg0 graphicsQuality:(NSInteger)arg1 ;
-(BOOL)requiresBackdropLayer;
-(id)description;
-(id)init;
-(id)initWithDefaultValues;
-(id)initWithDefaultValuesForGraphicsQuality:(NSInteger)arg0 ;
-(void)addKeyPathObserver:(id)arg0 ;
-(void)clearRunLoopObserver;
-(void)computeOutputSettingsUsingModel:(id)arg0 ;
-(void)copyAdditionalSettingsFromSettings:(id)arg0 ;
-(void)dealloc;
-(void)removeKeyPathObserver:(id)arg0 ;
-(void)restoreDefaultValues;
-(void)scheduleSettingsDidChangeIfNeeded;
-(void)setDefaultValues;
-(void)setStackinglevel:(NSInteger)arg0 ;
-(void)setValuesFromModel:(id)arg0 ;


@end


#endif