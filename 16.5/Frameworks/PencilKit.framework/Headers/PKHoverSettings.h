// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKHOVERSETTINGS_H
#define PKHOVERSETTINGS_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface PKHoverSettings : NSObject {
    NSUserDefaults *_pencilDefaults;
    BOOL _didAddObserver;
}


@property (nonatomic) int altitudeBuckets; // ivar: _altitudeBuckets
@property (nonatomic) CGFloat altitudeJitterNoise; // ivar: _altitudeJitterNoise
@property (nonatomic) CGFloat altitudeOffsetNoise; // ivar: _altitudeOffsetNoise
@property (nonatomic) BOOL avoidSwitchingToolsOutsideHoverRange; // ivar: _avoidSwitchingToolsOutsideHoverRange
@property (nonatomic) int azimuthBuckets; // ivar: _azimuthBuckets
@property (nonatomic) CGFloat azimuthJitterNoise; // ivar: _azimuthJitterNoise
@property (nonatomic) CGFloat azimuthOffsetNoise; // ivar: _azimuthOffsetNoise
@property (nonatomic) CGFloat deactivateExtraDistance; // ivar: _deactivateExtraDistance
@property (nonatomic) NSInteger debugCursorType; // ivar: _debugCursorType
@property (nonatomic) CGFloat erasePreviewAlphaFactor; // ivar: _erasePreviewAlphaFactor
@property (nonatomic) CGFloat hoverAndHoldActionTimeInterval; // ivar: _hoverAndHoldActionTimeInterval
@property (nonatomic) CGFloat hoverAndHoldTriggerTimeInterval; // ivar: _hoverAndHoldTriggerTimeInterval
@property (nonatomic) CGFloat maxZDistance; // ivar: _maxZDistance
@property (nonatomic) BOOL noiseIsHeightBased; // ivar: _noiseIsHeightBased
@property (nonatomic) NSUInteger numFramesExtraLatency; // ivar: _numFramesExtraLatency
@property (nonatomic) NSUInteger numFramesReduceFramerate; // ivar: _numFramesReduceFramerate
@property (nonatomic) CGFloat predictionTimeInterval; // ivar: _predictionTimeInterval
@property (nonatomic) CGFloat screenEdgeSizeInMillimeters; // ivar: _screenEdgeSizeInMillimeters
@property (nonatomic) BOOL scribbleCommitOnLift; // ivar: _scribbleCommitOnLift
@property (nonatomic) BOOL scribbleFlashCursorActive; // ivar: _scribbleFlashCursorActive
@property (nonatomic) BOOL scribbleFocusActive; // ivar: _scribbleFocusActive
@property (nonatomic) BOOL scribbleHoverStrongActive; // ivar: _scribbleHoverStrongActive
@property (nonatomic) BOOL scribbleIBeamActive; // ivar: _scribbleIBeamActive
@property (nonatomic) BOOL scribbleLineBreakHandling; // ivar: _scribbleLineBreakHandling
@property (nonatomic) CGFloat scribbleLineBreakMultiLineDelay; // ivar: _scribbleLineBreakMultiLineDelay
@property (nonatomic) BOOL scribbleLineBreakMultiLineEnabled; // ivar: _scribbleLineBreakMultiLineEnabled
@property (nonatomic) int scribbleLineBreakMultiLineMaxLines; // ivar: _scribbleLineBreakMultiLineMaxLines
@property (nonatomic) BOOL scribbleShowWritableElementsActive; // ivar: _scribbleShowWritableElementsActive
@property (nonatomic) BOOL showDebugLayer; // ivar: _showDebugLayer
@property (nonatomic) BOOL snapToShapeActive; // ivar: _snapToShapeActive
@property (nonatomic) BOOL supportTouchPad; // ivar: _supportTouchPad
@property (nonatomic) BOOL systemShadow; // ivar: _systemShadow
@property (nonatomic) BOOL toolIndicatorActive; // ivar: _toolIndicatorActive
@property (nonatomic) BOOL toolPreviewActive;
@property (nonatomic) CGFloat toolPreviewAzimuthTiltMaxZDistance; // ivar: _toolPreviewAzimuthTiltMaxZDistance
@property (nonatomic) CGFloat toolPreviewFadeOutDistance; // ivar: _toolPreviewFadeOutDistance
@property (nonatomic) CGFloat toolPreviewMaxZDistance; // ivar: _toolPreviewMaxZDistance
@property (nonatomic) BOOL toolPreviewShouldWaitForHoverAndHold; // ivar: _toolPreviewShouldWaitForHoverAndHold
@property (nonatomic) BOOL toolShadowActive; // ivar: _toolShadowActive
@property (nonatomic) BOOL toolShadowActiveOutsideNotes; // ivar: _toolShadowActiveOutsideNotes
@property (nonatomic) BOOL toolShadowActiveWhileDrawing; // ivar: _toolShadowActiveWhileDrawing
@property (nonatomic) CGFloat toolShadowFadeInDistance; // ivar: _toolShadowFadeInDistance
@property (nonatomic) CGFloat toolShadowMaxBlurRadius; // ivar: _toolShadowMaxBlurRadius
@property (nonatomic) CGFloat toolShadowMaxOpacity; // ivar: _toolShadowMaxOpacity
@property (nonatomic) CGFloat toolShadowMaxOpacityInDrawingCanvas; // ivar: _toolShadowMaxOpacityInDrawingCanvas
@property (nonatomic) CGFloat toolShadowMovementSpeedHideThreshold; // ivar: _toolShadowMovementSpeedHideThreshold
@property (nonatomic) BOOL toolShadowRenderInMetal; // ivar: _toolShadowRenderInMetal
@property (nonatomic) BOOL toolSwitchIndicatorActive; // ivar: _toolSwitchIndicatorActive
@property (nonatomic) BOOL tooltipsActive; // ivar: _tooltipsActive
@property (nonatomic) CGFloat weightedAverageAltitudeFactor; // ivar: _weightedAverageAltitudeFactor
@property (nonatomic) CGFloat weightedAverageAzimuthFactor; // ivar: _weightedAverageAzimuthFactor
@property (nonatomic) CGFloat weightedAverageLocationFactor; // ivar: _weightedAverageLocationFactor


+(BOOL)allowDoubleTapOnlyWithPencilHover;
+(BOOL)isHoverActive;
+(BOOL)isHoverAnglesActive;
+(BOOL)isHoverEnabled;
+(BOOL)isHoverShadowActive;
+(id)sharedSettings;
+(void)prewarmIfNecessary;
-(BOOL)_shouldSaveSettings;
-(id)init;
-(id)settingsDictionaryRepresentation;
-(void)_loadDefaultValues;
-(void)_scheduleSavingSettingsSoon;
-(void)_scheduledSaveSettingsTriggered;
-(void)dealloc;
-(void)loadSettingsFromDictionary:(id)arg0 ;
-(void)loadSettingsFromUserDefaults;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resetToDefaultValues;
-(void)saveSettingsToUserDefaults;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif