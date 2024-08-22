// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWPREVIEWSTITCHERNODE_H
#define BWPREVIEWSTITCHERNODE_H

@class NSString, CIContext, NSMutableDictionary;
@protocol BWPreviewStitcherDelegate, OS_dispatch_queue, OS_dispatch_group;


#import "BWNode.h"
#import "BWPreviewRegistration.h"
#import "FigCaptureMachPortSendRight.h"
#import "BWRamp.h"
#import "BWPixelBufferPool.h"
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
    float _teleBaseZoomFactorOverride;
    ? _sensorBinningFactor;
    float _shiftSmoothingFactor;
    BOOL _applyShift;
    CGPoint _superWideToWideBravoShift;
    CGPoint _wideToTeleBravoShift;
    *OpaqueVTImageRotationSession _intermediateRotationSession;
    *OpaqueVTImageRotationSession _outputRotationSession;
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
    BOOL _momentMovieRecordingEnabled;
    int _momentMovieRecordingRecenteringShiftRampFrameCount;
}


@property (nonatomic) NSObject<BWPreviewStitcherDelegate> *delegate;
@property BOOL displaysWidestCameraOnly;
@property (nonatomic) BOOL stoppingForModeSwitch; // ivar: _stoppingForModeSwitch


+(void)initialize;
-(BOOL)_currentlyRampingZoom;
-(BOOL)_currentlyRunningShortZoomRampOrNotRampingZoom;
-(BOOL)_currentlySwitchingCameras;
-(BOOL)_currentlyZoomingOrSwitchingCameras;
-(BOOL)_displaysPrimaryCameraOnly;
-(BOOL)_haveSuperBravo;
-(BOOL)_updateZoomStatusFromWideSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 teleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
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
-(float)_scaleFactorAppliedForPixelBuffer:(struct __CVBuffer *)arg0 usedSourceRect:(struct CGRect )arg1 primaryCaptureRectAspectRatio:(CGFloat)arg2 metadata:(id)arg3 ;
-(float)_superWideUserInitiatedFallbackRecenteringStrength;
-(float)_teleBaseZoomFactorWithOverride;
-(float)_wideBaseZoomFactorWithOverride;
-(float)_wideBaseZoomFactorWithOverrideLocked;
-(float)_wideFallbackRecenteringStrength;
-(float)superWideFocusDistance;
-(float)wideBaseZoomFactor;
-(float)wideFocusDistance;
-(id)_displayStringForPortType:(id)arg0 ;
-(id)_featheredImageWithTeleImage:(id)arg0 wideImage:(id)arg1 teleClipRect:(struct CGRect )arg2 wideClipRect:(struct CGRect )arg3 zoomingIn:(BOOL)arg4 progress:(float)arg5 ;
-(id)_primaryCameraPortType;
-(id)_teleOpacityPool;
-(id)focusingDescription;
-(id)initWithCameraInfoByPortType:(id)arg0 sensorBinningFactor:(struct ? )arg1 inputBuffersHaveHorizontalOverscanOnly:(BOOL)arg2 registrationType:(int)arg3 ;
-(id)initWithStitchingDisabled;
-(id)nodeSubType;
-(id)nodeType;
-(id)overCaptureStatusString;
-(id)previewRegistrationType;
-(id)primaryCameraShortDisplayName;
-(id)wideFallbackDescription;
-(int)_cameraDisplayTransitionFrameCountForCameraFallbackChange:(BOOL)arg0 currentFrameRate:(float)arg1 ;
-(int)_scale30FPSFrameCount:(int)arg0 toFrameRate:(float)arg1 ;
-(int)_superWideUserInitiatedFallbackOpacityRampFrameCount;
-(int)_superWideUserInitiatedFallbackShiftRampFrameCount;
-(int)_wideFallbackOpacityRampFrameCount;
-(int)_wideFallbackShiftRampFrameCount;
-(int)_zoomInOpacityRampFrameCount;
-(int)_zoomOutOpacityRampFrameCount;
-(int)maxLossyCompressionLevel;
-(int)rotationDegrees;
-(struct ? )outputDimensions;
-(struct CGPoint )_computeBravoWideToTeleShiftFromWideSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 teleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(struct CGRect )_transferPixelBuffer:(struct __CVBuffer *)arg0 rect:(struct CGRect )arg1 intoPixelBuffer:(struct __CVBuffer *)arg2 rect:(struct CGRect )arg3 isFinalOutput:(BOOL)arg4 withInputShift:(struct CGPoint )arg5 scale:(float)arg6 inputSourceRectOut:(struct CGRect *)arg7 ;
-(struct opaqueCMSampleBuffer *)_newStitchedSampleBufferFromWide:(struct opaqueCMSampleBuffer *)arg0 tele:(struct opaqueCMSampleBuffer *)arg1 wideRegionsShifts:(struct CGPoint *)arg2 teleShift:(struct CGPoint )arg3 primaryCaptureRectOut:(struct CGRect *)arg4 primaryCaptureRectBeforeCroppingOut:(struct CGRect *)arg5 currentFrameRate:(float)arg6 ;
-(void)_callDelegateWithAppliedWiderShift:(struct CGPoint )arg0 narrowerShift:(struct CGPoint )arg1 widerScaleFactor:(float)arg2 narrowerScaleFactor:(float)arg3 widerPixelBuffer:(struct __CVBuffer *)arg4 narrowerPixelBuffer:(struct __CVBuffer *)arg5 widerPortType:(id)arg6 narrowerPortType:(id)arg7 ;
-(void)_getInputRect:(struct CGRect *)arg0 outputRect:(struct CGRect *)arg1 inputShiftAppliedInOutputRect:(struct CGPoint *)arg2 toTransferPixelBuffer:(struct __CVBuffer *)arg3 rect:(struct CGRect )arg4 intoPixelBufferDimensions:(struct ? )arg5 rect:(struct CGRect )arg6 withInputShift:(struct CGPoint )arg7 shiftOutsideBoundingRectAllowed:(BOOL)arg8 scale:(float)arg9 forFinalOutput:(BOOL)arg10 ;
-(void)_preheatCIRenderingAsync;
-(void)_renderOpacityRampToPixelBuffer:(struct __CVBuffer *)arg0 bounds:(struct CGRect )arg1 withWidePixelBuffer:(struct __CVBuffer *)arg2 telePixelBuffer:(struct __CVBuffer *)arg3 zoomingIn:(BOOL)arg4 progress:(float)arg5 teleBounds:(struct CGRect )arg6 teleShift:(struct CGPoint )arg7 ;
-(void)_restitchAndEmitLastInputForAspectAndCenterChange;
-(void)_setOverCaptureStatus:(int)arg0 ;
-(void)_updateAndGetWideRegionShifts:(struct CGPoint *)arg0 teleShift:(struct CGPoint *)arg1 wideIsSuperWide:(BOOL)arg2 forComputedShift:(struct CGPoint )arg3 registrationEnabled:(BOOL)arg4 currentFrameRate:(float)arg5 ;
-(void)_updateInputRequirements;
-(void)_updateOverCaptureStatusWithWiderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 narrowerSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_updateShiftCorrectionsAsyncFromComputedShift:(struct CGPoint )arg0 byRegisteringWide:(struct opaqueCMSampleBuffer *)arg1 tele:(struct opaqueCMSampleBuffer *)arg2 macroTransitionType:(int)arg3 ;
-(void)_updateUprightExifOrientationOnSampleBufferIfNeeded:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_waitForCIPreheatingToFinish;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)rampToAdditionalZoomFactor:(CGFloat)arg0 momentMovieRecordingEnabled:(BOOL)arg1 ;
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