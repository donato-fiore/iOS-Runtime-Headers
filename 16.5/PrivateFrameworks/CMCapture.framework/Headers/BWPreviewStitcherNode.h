// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWPREVIEWSTITCHERNODE_H
#define BWPREVIEWSTITCHERNODE_H

@class NSArray, NSString, CIContext, NSMutableDictionary;
@protocol BWPreviewStitcherDelegate, OS_dispatch_queue, OS_dispatch_group;


#import "BWNode.h"
#import "BWPreviewRegistration.h"
#import "FigCaptureMachPortSendRight.h"
#import "BWRamp.h"
#import "BWPixelBufferPool.h"
#import "BWMemoryPoolFlushAssertion.h"
#import "BWSpringSimulation.h"
#import "BWFencedAnimationQueue.h"

@interface BWPreviewStitcherNode : BWNode {
    ? _outputDimensions;
    int _rotationDegrees;
    BOOL _flipHorizontal;
    BOOL _flipVertical;
    CGFloat _primaryCaptureRectYInset;
    int _primaryCaptureRectPixelInset;
    CGFloat _primaryCaptureRectCenterX;
    int _primaryCaptureRectCenterXPixelOffset;
    int _primaryCaptureRectCenterXPixelOffsetFudge;
    BOOL _previewsWideBeforeSlaveStreamStarts;
    BOOL _generatesHistogram;
    int _maxLossyCompressionLevel;
    BOOL _superWideFallbackForMacroSceneEnabled;
    BOOL _haveSuperWideCamera;
    BOOL _haveTeleCamera;
    float _superWideBaseZoomFactor;
    float _wideBaseZoomFactor;
    float _teleBaseZoomFactor;
    float _superWideCorrectedBaseZoomFactor;
    float _wideBaseZoomFactorOverride;
    BOOL _wideBaseZoomFactorDynamicOverrideEnabled;
    float _wideBaseZoomFactorDynamicOverride;
    float _wideBaseZoomFactorDynamicOverrideScaled;
    float _wideBaseZoomFactorOverrideMacro;
    float _widePinholeFocalLengthInfinity;
    float _widePinholeFocalLengthMacro;
    float _dynamicWideBaseZoomFactorSmoothingFactor;
    BOOL _inputBuffersHaveHorizontalOverscanOnly;
    float _dynamicCameraScaleMSRMarginPercentage;
    NSArray *_wideNondisruptiveSwitchingZoomFactors;
    float _wideNondisruptiveSwitchingScaleFactor;
    float _lastWideNondisruptiveSwitchingScaleFactor;
    BOOL _wideNondisruptiveSwitchingCroppedFrameEnabled;
    BOOL _wideNondisruptiveSwitchingCurrentFrameIsCropped;
    float _teleBaseZoomFactorOverride;
    ? _sensorBinningFactor;
    float _shiftSmoothingFactor;
    BOOL _applyShift;
    CGPoint _superWideToWideBravoShift;
    CGPoint _wideToTeleBravoShift;
    *OpaqueVTPixelRotationSession _intermediateRotationSession;
    *OpaqueVTPixelRotationSession _outputRotationSession;
    *opaqueCMFormatDescription _outputFormatDescription;
    CGAffineTransform _outputTransform;
    id<BWPreviewStitcherDelegate> *_delegate;
    os_unfair_lock_s _configurationLock;
    BOOL _deviceIsStationary;
    BOOL _pendingRegistrationAfterDeviceBecomesStationary;
    BOOL _registrationEnabled;
    int _lastRegisteredFrameCaptureID;
    BOOL _lastRegistrationEnabled;
    int _registrationType;
    BWPreviewRegistration *_registration;
    BOOL _registrationResourcesAllocated;
    BOOL _firstRegistrationCompleted;
    BOOL _firstRegistrationIsSynchronous;
    os_unfair_lock_s _shiftCorrectionsUpdateLock;
    BWPreviewStitcherShiftCorrection _wideToTeleShiftCorrections;
    BWPreviewStitcherShiftCorrection _superWideToWideShiftCorrections;
    int _registrationFrameSkipCount;
    int _registrationUpdateRampFrameCount;
    BOOL _registerFirstFrame;
    CGFloat _primaryCameraAspectRatio;
    float _lastPrimaryCameraAspectRatio;
    FigCaptureMachPortSendRight *_fencePortSendRight;
    BOOL _displaysWidestCameraOnly;
    BOOL _displaysPrimaryCameraOnly;
    BOOL _drawWiderCameraOnly;
    BOOL _currentZoomRequiresWiderCamera;
    BOOL _lastZoomingOrSwitchingCameras;
    float _rampZoomFactorOfInterest;
    float _rampStartZoomFactor;
    NSString *_lastRecommendedMasterPortType;
    NSString *_lastPreferredMasterPortType;
    NSString *_lastNarrowerPortType;
    BOOL _lastNarrowerCameraIsTele;
    BWRamp *_teleOpacityRamp;
    BWPixelBufferPool *_teleOpacityPool;
    BWMemoryPoolFlushAssertion *_teleOpacityPoolReadyAssertion;
    ? _teleOpacityPoolDimensions;
    CIContext *_teleOpacityCIContext;
    BOOL _teleOpacityRampForSuperMacroFallbackTransition;
    int _screenScale;
    BOOL _frameRateBasedRampsEnabled;
    NSObject<OS_dispatch_queue> *_ciPreheatingQueue;
    NSObject<OS_dispatch_group> *_ciPreheatingGroup;
    BOOL _havePreheatedCI;
    ? _firstFramePTS;
    BOOL _edgeFeatheringEnabled;
    BOOL _showFeatherGradient;
    float _edgeFeatheringAspectCompensation;
    float _zoomInFeatheringInnerRadiusStart;
    float _zoomInFeatheringInnerRadiusEnd;
    float _zoomInFeatheringOuterRadiusStart;
    float _zoomInFeatheringOuterRadiusEnd;
    float _zoomOutFeatheringInnerRadiusStart;
    float _zoomOutFeatheringInnerRadiusEnd;
    float _zoomOutFeatheringOuterRadiusStart;
    float _zoomOutFeatheringOuterRadiusEnd;
    BOOL _featherEdgesForOpacityRamp;
    *opaqueCMSampleBuffer _lastSampleBuffer;
    ? _lastRenderedPTS;
    BOOL _multiCameraStitchingEnabled;
    BOOL _aspectRatioChanging;
    NSInteger _lastRenderTime;
    float _additionalZoomFactor;
    float _additionalZoomFactorSpringStartFactor;
    ? _additionalZoomFactorSpringStartPTS;
    BWSpringSimulation *_additionalZoomFactorSpring;
    NSMutableDictionary *_blackFilledBorderRectsBySurfaceID;
    BOOL _forceBlackFillBorderEnabled;
    int _overCaptureStatus;
    BWSmartCameraScene _wideFocusDistanceFarEnoughForStitching;
    BOOL _hideSuperWideOverCaptureWhenTooClose;
    BOOL _superWideOccludedByWide;
    BOOL _superWideDrawingSuspendedUntilFocusImproves;
    BOOL _hideSuperWideStitchingWhenTooClose;
    BOOL _hidePartialOverCapture;
    BWSmartCameraScene _widerCameraFoVFillsOverCapture;
    float _uiZoomFactor;
    BOOL _deviceTooHotDimmingEnabled;
    int _wideFallbackMode;
    BWSmartCameraScene _wideFocusDistanceFarEnoughToUseTele;
    BOOL _wideFocusingOneShot;
    BOOL _teleFocusingOneShot;
    BWRamp *_wideFallbackShiftRamp;
    CGPoint _wideFallbackRecenteringShiftOffset;
    BOOL _wantWideFallbackDueToTeleAEAF;
    BOOL _wideFallbackShiftRampTargetValueIsWide;
    int _lastRecommendedMasterSelectionReason;
    BWSmartCameraScene _wideFocusDistanceFarEnoughToUseWide;
    BWRamp *_superWideFallbackShiftRamp;
    BOOL _superWideFallbackShiftRampTargetValueIsSuperWide;
    CGPoint _superWideFallbackRecenteringShiftOffset;
    float _superWideFallbackRecenteringStrength;
    BOOL _wantSuperWideFallback;
    BOOL _superWideFallbackTransitioningWithStreamingPortTypesChanged;
    BOOL _superMacroUserInitiatedFallbackTuningEnabled;
    BOOL _lastSuperWideCameraFallbackWasUserInitiated;
    BOOL _inSuperMacroRange;
    BOOL _superMacroRangeRegistrationTuningEnabled;
    BWSmartCameraScene _superWideFocusDistanceFarEnoughForRegistration;
    BOOL _superMacroOpacityRampOnFullPrimaryRectEnabled;
    BOOL _superMacroEdgeFeatheringBlurEnabled;
    float _superMacroEdgeFeatheringBlurInset;
    BOOL _superMacroEdgeFeatheringShowBlurMask;
    BOOL _waitsForRegistrationToComplete;
    BWFencedAnimationQueue *_fencedAnimationQueue;
    BOOL _momentMovieRecordingRecenteringEnabled;
    int _momentMovieRecordingRecenteringShiftRampFrameCount;
    BOOL _borderBlurEnabled;
    float _borderBlurStrength;
    BOOL _borderStretchEnabled;
    float _borderStretchScaleFactor;
    float _borderStretchNextNarrowerBaseZoomFactorMultiplier;
    BOOL _fractionalSourceRectEnabled;
}


@property (nonatomic) NSObject<BWPreviewStitcherDelegate> *delegate;
@property BOOL displaysWidestCameraOnly;
@property (nonatomic) BOOL stoppingForModeSwitch; // ivar: _stoppingForModeSwitch


+(void)initialize;
-(BOOL)centerRegistrationValid;
-(BOOL)flipHorizontal;
-(BOOL)flipVertical;
-(BOOL)forceBlackFillBorderEnabled;
-(BOOL)generatesHistogram;
-(BOOL)previewsWideBeforeSlaveStreamStarts;
-(BOOL)superWideFallbackForMacroSceneEnabled;
-(BOOL)tooCloseFor1xStitching;
-(BOOL)tooCloseForSuperWideRegistration;
-(BOOL)waitsForRegistrationToComplete;
-(CGFloat)primaryCameraAspectRatio;
-(CGFloat)primaryCaptureRectCenterX;
-(CGFloat)primaryCaptureRectYInset;
-(float)superWideFocusDistance;
-(float)wideBaseZoomFactor;
-(float)wideFocusDistance;
-(id)focusingDescription;
-(id)initWithCameraInfoByPortType:(id)arg0 sensorBinningFactor:(struct ? )arg1 inputBuffersHaveHorizontalOverscanOnly:(BOOL)arg2 registrationType:(int)arg3 ;
-(id)initWithStitchingDisabled;
-(id)nodeSubType;
-(id)nodeType;
-(id)overCaptureStatusString;
-(id)previewRegistrationType;
-(id)primaryCameraShortDisplayName;
-(id)wideFallbackDescription;
-(int)maxLossyCompressionLevel;
-(int)rotationDegrees;
-(struct ? )outputDimensions;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)rampToAdditionalZoomFactor:(CGFloat)arg0 momentMovieRecordingRecenteringEnabled:(BOOL)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setFlipHorizontal:(BOOL)arg0 ;
-(void)setFlipVertical:(BOOL)arg0 ;
-(void)setForceBlackFillBorderEnabled:(BOOL)arg0 ;
-(void)setGeneratesHistogram:(BOOL)arg0 ;
-(void)setMaxLossyCompressionLevel:(int)arg0 ;
-(void)setOutputDimensions:(struct ? )arg0 ;
-(void)setPreviewsWideBeforeSlaveStreamStarts:(BOOL)arg0 ;
-(void)setPrimaryCameraAspectRatio:(CGFloat)arg0 ;
-(void)setPrimaryCaptureRectAspectRatio:(CGFloat)arg0 center:(struct CGPoint )arg1 fencePortSendRight:(id)arg2 ;
-(void)setPrimaryCaptureRectCenterX:(CGFloat)arg0 ;
-(void)setPrimaryCaptureRectYInset:(CGFloat)arg0 ;
-(void)setRotationDegrees:(int)arg0 ;
-(void)setSuperWideFallbackForMacroSceneEnabled:(BOOL)arg0 ;
-(void)setWaitsForRegistrationToComplete:(BOOL)arg0 ;


@end


#endif