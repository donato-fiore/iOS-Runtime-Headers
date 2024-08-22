// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYTRANSITIONSSETTINGS_H
#define PXSTORYTRANSITIONSSETTINGS_H



#import "PXSettings.h"

@interface PXStoryTransitionsSettings : PXSettings

@property (nonatomic) CGFloat dividerAnimationDurationFraction; // ivar: _dividerAnimationDurationFraction
@property (nonatomic) CGFloat exposureBleedTransitionBlurRadius; // ivar: _exposureBleedTransitionBlurRadius
@property (nonatomic) CGFloat exposureBleedTransitionExposure; // ivar: _exposureBleedTransitionExposure
@property (nonatomic) CGFloat exposureBleedTransitionMidpoint; // ivar: _exposureBleedTransitionMidpoint
@property (nonatomic) CGFloat fadeToBlackTransitionBlackRelativeDuration; // ivar: _fadeToBlackTransitionBlackRelativeDuration
@property (nonatomic) CGFloat panTransitionBlurMidpoint; // ivar: _panTransitionBlurMidpoint
@property (nonatomic) CGFloat panTransitionBlurOffset; // ivar: _panTransitionBlurOffset
@property (nonatomic) CGFloat panTransitionMaxIntensity; // ivar: _panTransitionMaxIntensity
@property (nonatomic) CGFloat reverseDividerAnimationDurationFraction; // ivar: _reverseDividerAnimationDurationFraction
@property (nonatomic) CGFloat rotateTransitionAngle; // ivar: _rotateTransitionAngle
@property (nonatomic) CGFloat rotateTransitionBlurAnimationRelativeDuration; // ivar: _rotateTransitionBlurAnimationRelativeDuration
@property (nonatomic) CGFloat rotateTransitionBlurMidpoint; // ivar: _rotateTransitionBlurMidpoint
@property (nonatomic) CGFloat rotateTransitionMaxBlurIntensity; // ivar: _rotateTransitionMaxBlurIntensity
@property (nonatomic) CGFloat scaleTransitionBlurMidpoint; // ivar: _scaleTransitionBlurMidpoint
@property (nonatomic) CGFloat scaleTransitionMaxBlurIntensity; // ivar: _scaleTransitionMaxBlurIntensity
@property (nonatomic) CGFloat scaleTransitionRelativeFactor; // ivar: _scaleTransitionRelativeFactor
@property (nonatomic) BOOL suppressInterruptedTransitionErrors; // ivar: _suppressInterruptedTransitionErrors
@property (nonatomic) BOOL suppressInvalidTransitionErrors; // ivar: _suppressInvalidTransitionErrors
@property (nonatomic) BOOL suppressUnsupportedTransitionErrors; // ivar: _suppressUnsupportedTransitionErrors
@property (nonatomic) NSUInteger transitionQuality; // ivar: _transitionQuality
@property (nonatomic) BOOL useSplitWipeTransitionsFromOneUp; // ivar: _useSplitWipeTransitionsFromOneUp
@property (nonatomic) CGFloat zoomTransitionRelativeFactor; // ivar: _zoomTransitionRelativeFactor


+(id)settingsControllerModule;
+(id)sharedInstance;
+(id)supportedTransitions;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif