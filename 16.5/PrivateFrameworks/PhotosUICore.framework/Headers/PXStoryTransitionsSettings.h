// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYTRANSITIONSSETTINGS_H
#define PXSTORYTRANSITIONSSETTINGS_H



#import "PXSettings.h"

@interface PXStoryTransitionsSettings : PXSettings

@property (nonatomic) CGFloat crossfadeTransitionCueAlignment; // ivar: _crossfadeTransitionCueAlignment
@property (nonatomic) BOOL disableUnsupportedTransitionsAtChapterBoundary; // ivar: _disableUnsupportedTransitionsAtChapterBoundary
@property (nonatomic) CGFloat dividerAnimationDurationFraction; // ivar: _dividerAnimationDurationFraction
@property (nonatomic) CGFloat exposureBleedTransitionBlurRadius; // ivar: _exposureBleedTransitionBlurRadius
@property (nonatomic) CGFloat exposureBleedTransitionCueAlignment; // ivar: _exposureBleedTransitionCueAlignment
@property (nonatomic) CGFloat exposureBleedTransitionExposure; // ivar: _exposureBleedTransitionExposure
@property (nonatomic) CGFloat exposureBleedTransitionMidpoint; // ivar: _exposureBleedTransitionMidpoint
@property (nonatomic) CGFloat fadeToBlackTransitionBlackRelativeDuration; // ivar: _fadeToBlackTransitionBlackRelativeDuration
@property (nonatomic) CGFloat fadeToBlackTransitionCueAlignment; // ivar: _fadeToBlackTransitionCueAlignment
@property (nonatomic) char forcedTransitionKindAtChapterBoundary; // ivar: _forcedTransitionKindAtChapterBoundary
@property (nonatomic) CGFloat panTransitionBlurMidpoint; // ivar: _panTransitionBlurMidpoint
@property (nonatomic) CGFloat panTransitionBlurOffset; // ivar: _panTransitionBlurOffset
@property (nonatomic) CGFloat panTransitionCueAlignment; // ivar: _panTransitionCueAlignment
@property (nonatomic) CGFloat panTransitionMaxIntensity; // ivar: _panTransitionMaxIntensity
@property (nonatomic) CGFloat reverseDividerAnimationDurationFraction; // ivar: _reverseDividerAnimationDurationFraction
@property (nonatomic) CGFloat rotateTransitionAngle; // ivar: _rotateTransitionAngle
@property (nonatomic) CGFloat rotateTransitionBlurAnimationRelativeDuration; // ivar: _rotateTransitionBlurAnimationRelativeDuration
@property (nonatomic) CGFloat rotateTransitionBlurMidpoint; // ivar: _rotateTransitionBlurMidpoint
@property (nonatomic) CGFloat rotateTransitionCueAlignment; // ivar: _rotateTransitionCueAlignment
@property (nonatomic) CGFloat rotateTransitionMaxBlurIntensity; // ivar: _rotateTransitionMaxBlurIntensity
@property (nonatomic) CGFloat scaleTransitionBlurMidpoint; // ivar: _scaleTransitionBlurMidpoint
@property (nonatomic) CGFloat scaleTransitionCueAlignment; // ivar: _scaleTransitionCueAlignment
@property (nonatomic) CGFloat scaleTransitionMaxBlurIntensity; // ivar: _scaleTransitionMaxBlurIntensity
@property (nonatomic) CGFloat scaleTransitionRelativeFactor; // ivar: _scaleTransitionRelativeFactor
@property (nonatomic) BOOL suppressInterruptedTransitionErrors; // ivar: _suppressInterruptedTransitionErrors
@property (nonatomic) BOOL suppressInvalidTransitionErrors; // ivar: _suppressInvalidTransitionErrors
@property (nonatomic) BOOL suppressUnsupportedTransitionErrors; // ivar: _suppressUnsupportedTransitionErrors
@property (nonatomic) NSUInteger transitionQuality; // ivar: _transitionQuality
@property (nonatomic) BOOL useSplitWipeTransitionsFromOneUp; // ivar: _useSplitWipeTransitionsFromOneUp
@property (nonatomic) CGFloat wipeTransitionCueAlignment; // ivar: _wipeTransitionCueAlignment
@property (nonatomic) CGFloat zoomTransitionCueAlignment; // ivar: _zoomTransitionCueAlignment
@property (nonatomic) CGFloat zoomTransitionRelativeFactor; // ivar: _zoomTransitionRelativeFactor


+(id)settingsControllerModule;
+(id)sharedInstance;
+(id)supportedTransitions;
-(CGFloat)cueAlignmentForTransitionKind:(char)arg0 ;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif