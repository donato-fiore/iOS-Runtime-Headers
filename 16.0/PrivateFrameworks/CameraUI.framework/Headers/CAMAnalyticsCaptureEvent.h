// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMANALYTICSCAPTUREEVENT_H
#define CAMANALYTICSCAPTUREEVENT_H



#import "CAMAnalyticsEvent.h"

@interface CAMAnalyticsCaptureEvent : CAMAnalyticsEvent

@property (readonly, nonatomic) NSInteger _captureDevice; // ivar: __captureDevice
@property (readonly, nonatomic) NSInteger _captureDevicePosition; // ivar: __captureDevicePosition
@property (readonly, nonatomic) NSInteger _captureMode; // ivar: __captureMode
@property (readonly, nonatomic) NSInteger _captureVideoConfiguration; // ivar: __captureVideoConfiguration
@property (nonatomic) BOOL _isStillDuringVideo; // ivar: __isStillDuringVideo
@property (nonatomic) NSInteger _lightingEffectType; // ivar: __lightingEffectType
@property (nonatomic) NSInteger _mediaType; // ivar: __mediaType
@property (readonly, nonatomic) NSInteger _videoStabilizationStrength; // ivar: __videoStabilizationStrength


-(id)_defaultRangeStringForValue:(float)arg0 lowerBound:(float)arg1 upperBound:(float)arg2 defaultValue:(float)arg3 ;
-(id)_zoomRangeStringForZoomFactor:(float)arg0 mode:(NSInteger)arg1 devicePosition:(NSInteger)arg2 ;
-(id)eventName;
-(id)initWithEvent:(id)arg0 ;
-(id)initWithGraphConfiguration:(id)arg0 ;
-(void)_populateFromCaptureRequest:(id)arg0 ;
-(void)populateAEAFLocked:(BOOL)arg0 ;
-(void)populateBurstLength:(NSInteger)arg0 ;
-(void)populateDesiredFlashMode:(NSInteger)arg0 desiredLivePhotoMode:(NSInteger)arg1 desiredHDRMode:(NSInteger)arg2 timerDuration:(NSInteger)arg3 ;
-(void)populateDesiredMacroMode:(NSInteger)arg0 isMacroCapture:(BOOL)arg1 isMacroSuggested:(BOOL)arg2 ;
-(void)populateDesiredNightModeControlMode:(NSUInteger)arg0 resolvedNightModeControlMode:(NSUInteger)arg1 resolvedNightModeMode:(NSInteger)arg2 ;
-(void)populateDesiredTorchMode:(NSInteger)arg0 ;
-(void)populateDeviceOrientation:(NSInteger)arg0 isDeviceOrientationLocked:(BOOL)arg1 ;
-(void)populateDuration:(CGFloat)arg0 ;
-(void)populateExposureSliderBias:(float)arg0 exposureTapAndBias:(float)arg1 totalExposureBias:(float)arg2 ;
-(void)populateForTimelapseCaptureOrientation:(NSInteger)arg0 captureMirrored:(BOOL)arg1 origin:(NSInteger)arg2 pressType:(NSInteger)arg3 zoomInteractionType:(NSInteger)arg4 startDate:(id)arg5 ;
-(void)populateFromPanoramaCaptureNotification:(NSInteger)arg0 ;
-(void)populateFromPanoramaCaptureRequest:(id)arg0 ;
-(void)populateFromStillImageCaptureRequest:(id)arg0 burst:(BOOL)arg1 preferences:(id)arg2 ;
-(void)populateFromStillImageCaptureResponse:(id)arg0 ;
-(void)populateFromVideoCaptureRequest:(id)arg0 preferences:(id)arg1 ;
-(void)populateFromVideoCaptureResponse:(id)arg0 ;
-(void)populateObjectResultsWithNumberOfFaces:(NSUInteger)arg0 numberOfCats:(NSUInteger)arg1 numberOfDogs:(NSUInteger)arg2 ;
-(void)populatePanoramaDirection:(NSInteger)arg0 ;
-(void)populatePanoramaInstruction:(NSInteger)arg0 ;
-(void)populatePortraitStatus:(NSInteger)arg0 lightingEffectIntensity:(CGFloat)arg1 apertureValue:(CGFloat)arg2 zoomFactor:(CGFloat)arg3 ;
-(void)populateSharedLibraryMode:(NSInteger)arg0 ;
-(void)populateZoomFromZoomButtonSymbol:(NSInteger)arg0 ;
-(void)populateZoomFromZoomFactor:(float)arg0 ;


@end


#endif