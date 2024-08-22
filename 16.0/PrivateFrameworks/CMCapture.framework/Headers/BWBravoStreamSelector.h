// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWBRAVOSTREAMSELECTOR_H
#define BWBRAVOSTREAMSELECTOR_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "BWFigVideoCaptureStream.h"

@interface BWBravoStreamSelector : NSObject {
    BWFigVideoCaptureStream *_wideStream;
    BWFigVideoCaptureStream *_teleStream;
    BWFigVideoCaptureStream *_superWideStream;
    float _teleMaxAEGain;
    float _teleAEGainHysteresisLag;
    BOOL _teleAEHysteresisUseEIT;
    float _teleMaxEIT;
    float _teleMinTeleToWideEITThresholdPercentage;
    float _teleMaxTeleToWideEITThresholdPercentage;
    float _teleToWideFocusDistance;
    float _wideToTeleFocusDistance;
    int _teleMaxSubsequentFramesAtMaxGain;
    int _teleMaxSubsequentFramesAtMaxEIT;
    float _superWideMaximumAETargetOffset;
    float _superWideMaximumAETargetOffsetHysteresisLag;
    int _superWideToWideNumberOfConsecutiveFramesWithMaximumAETargetOffset;
    int _superWideToWideNumberOfConsecutiveFramesWithMaximumAETargetOffsetThreshold;
    CGFloat _digitalFlashMinTeleToWideEITThreshold;
    CGFloat _digitalFlashMaxTeleToWideEITThreshold;
    CGFloat _digitalFlashMinTeleToWideEITThresholdWithHumansPresent;
    CGFloat _digitalFlashMaxTeleToWideEITThresholdWithHumansPresent;
    int _digitalFlashTeleToWideNumberOfConsecutiveFramesWithHumanPresentThreshold;
    BOOL _digitalFlashAdjustEITForTargetOffsetAndBias;
    BWFigVideoCaptureStream *_currentMasterStream;
    BWFigVideoCaptureStream *_recommendedMasterStream;
    ? _selectionConfiguration;
    ? _pendingSelectionConfiguration;
    os_unfair_lock_s _pendingSelectionConfigurationLock;
    NSArray *_lastPotentialMasterStreams;
    NSArray *_lastEligibleFallbackPortTypes;
    BOOL _allowSwitchesWithFineMovement;
    float _previousZoomFactor;
    NSInteger _timeOfLastZoomFactorChange;
    NSInteger _timeOfLastPortTypeMadeEligibleByZoom;
    NSString *_lastPortTypeMadeEligibleByZoom;
    NSInteger _timeOfLastFocusModeChange;
    NSInteger _timeOfLastExposureModeChange;
    BOOL _waitingForSlaveFocusAfterZoomChange;
    int _teleMaxGainReachedCounter;
    int _teleMaxEITReachedCounter;
    int _numberOfConsecutiveFramesWithHumans;
    os_unfair_lock_s _eligibleFallbackPortTypesLock;
    NSArray *_eligibleFallbackPortTypes;
    NSArray *_supportedFallbackPortTypes;
    float _minLuxLevelChangeForSceneChange;
    CGFloat _digitalFlashMinEITPercentageChangeForSceneChange;
    float _minFocusDistanceChangeForSceneChange;
    BOOL _resetSceneChangeMonitoring;
    BOOL _sceneChangeDetected;
    int _initialLuxLevel;
    CGFloat _initialEIT;
    float _initialFocusDistance;
    BOOL _superWideWaitForStableFocusOnce;
    ? _superWideFirstFrameReceivedTime;
    int _lastSuperWideLogicalLensFocusPosition;
    BOOL _superWideLogicalLensFocusPositionChangedOnce;
    unsigned int _superWideLogicalLensFocusPositionChangedTimeoutInMilliSeconds;
    BOOL _superWideFocusIsStableOnce;
    float _exposureRangeLowForRecommendedMasterSwitch;
    float _exposureRangeHighForRecommendedMasterSwitch;
}


@property (copy, nonatomic) NSArray *eligibleFallbackPortTypes;
@property (readonly, nonatomic) int lastSelectionReason; // ivar: _lastSelectionReason
@property (readonly, nonatomic, getter=isLensMakersFocusDistanceRequired) BOOL lensMakersFocusDistanceRequired; // ivar: _usesLensMakersFocusDistance
@property (readonly, nonatomic) BWFigVideoCaptureStream *preferredMasterStreamIgnoringEligibleFallbackPortTypes; // ivar: _preferredMasterStreamIgnoringEligibleFallbackPortTypes
@property (nonatomic) ? selectionConfiguration;
@property (readonly, nonatomic) BWFigVideoCaptureStream *slaveStreamBlockingFocusAndExposureStability; // ivar: _slaveStreamBlockingFocusAndExposureStability
@property (readonly, nonatomic) BOOL superWideAutoSwitchingSupported;
@property (readonly, nonatomic) float superWideToWideFocusDistance; // ivar: _superWideToWideFocusDistance
@property (nonatomic) float teleMaxAEGain;
@property (nonatomic) float teleMaxEIT;
@property (readonly, nonatomic) float wideToSuperWideFocusDistance; // ivar: _wideToSuperWideFocusDistance


+(void)initialize;
-(BOOL)telephotoLimitsReachedForFrameStatisticsByPortType:(id)arg0 ;
-(id)initWithStreamSelectionAttributes:(id)arg0 wideStream:(id)arg1 teleStream:(id)arg2 superWideStream:(id)arg3 cameraCalibrationValid:(BOOL)arg4 ;
-(id)recommendMasterStreamUsingCurrentMasterStream:(id)arg0 frameStatisticsByPortType:(id)arg1 zoomFactor:(float)arg2 digitalFlashMode:(int)arg3 detectedObjects:(id)arg4 ;
-(void)dealloc;
-(void)exposureModeDidChange;
-(void)focusModeDidChange;
-(void)resetWithZoomFactor:(float)arg0 currentMasterStream:(id)arg1 ;


@end


#endif