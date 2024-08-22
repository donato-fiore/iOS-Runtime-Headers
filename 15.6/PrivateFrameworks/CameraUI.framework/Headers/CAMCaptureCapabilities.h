// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMCAPTURECAPABILITIES_H
#define CAMCAPTURECAPABILITIES_H

@class NSDictionary, UIColor;

#import <Foundation/Foundation.h>


@interface CAMCaptureCapabilities : NSObject

@property (readonly, nonatomic, getter=isHDR10BitVideoSupported) BOOL HDR10BitVideoSupported; // ivar: _HDR10BitVideoSupported
@property (readonly, nonatomic, getter=isHDR10BitVideoSupports60FPS) BOOL HDR10BitVideoSupports60FPS; // ivar: _HDR10BitVideoSupports60FPS
@property (readonly, nonatomic, getter=isHDREV0CaptureSupported) BOOL HDREV0CaptureSupported; // ivar: _HDREV0CaptureSupported
@property (readonly, nonatomic, getter=isHDRSettingAllowed) BOOL HDRSettingAllowed; // ivar: _HDRSettingAllowed
@property (readonly, nonatomic, getter=isHEVCEncodingSupported) BOOL HEVCEncodingSupported; // ivar: _HEVCEncodingSupported
@property (readonly, nonatomic, getter=isPALVideoSupported) BOOL PALVideoSupported; // ivar: _PALVideoSupported
@property (readonly, nonatomic) NSDictionary *_FFCZoomBehaviorForCaptureMode; // ivar: __FFCZoomBehaviorForCaptureMode
@property (readonly, nonatomic) CGFloat _backCaptureInterval; // ivar: __backCaptureInterval
@property (readonly, nonatomic) CGFloat _backDualCameraSwitchOverZoomFactor; // ivar: __backDualCameraSwitchOverZoomFactor
@property (readonly, nonatomic) CGFloat _backDualPhotoModeMaximumZoomFactor; // ivar: __backDualPhotoModeMaximumZoomFactor
@property (readonly, nonatomic) CGFloat _backDualVideoModeMaximumZoomFactor; // ivar: __backDualVideoModeMaximumZoomFactor
@property (readonly, nonatomic) CGFloat _backPhotoModeMaximumZoomFactor; // ivar: __backPhotoModeMaximumZoomFactor
@property (readonly, nonatomic) BOOL _backStageLightPortaitEffectsSupported; // ivar: __backStageLightPortaitEffectsSupported
@property (readonly, nonatomic) CGFloat _backTripleCameraPhotoModeMaximumZoomFactor; // ivar: __backTripleCameraPhotoModeMaximumZoomFactor
@property (readonly, nonatomic) CGFloat _backTripleCameraVideoModeMaximumZoomFactor; // ivar: __backTripleCameraVideoModeMaximumZoomFactor
@property (readonly, nonatomic) CGFloat _backVideoModeMaximumZoomFactor; // ivar: __backVideoModeMaximumZoomFactor
@property (readonly, nonatomic) CGFloat _backWideDualCameraSwitchOverZoomFactor; // ivar: __backWideDualCameraSwitchOverZoomFactor
@property (readonly, nonatomic) BOOL _disablePortraitBravoDevices; // ivar: __disablePortraitBravoDevices
@property (readonly, nonatomic) BOOL _disableSuperBravoDevice; // ivar: __disableSuperBravoDevice
@property (readonly, nonatomic) BOOL _forceDisableExposureClippingIndicator; // ivar: __forceDisableExposureClippingIndicator
@property (readonly, nonatomic) BOOL _forceEnableExposureClippingIndicator; // ivar: __forceEnableExposureClippingIndicator
@property (readonly, nonatomic) NSInteger _forcedBackCamera; // ivar: __forcedBackCamera
@property (readonly, nonatomic) CGFloat _forcedInitialZoomDisplayFactor; // ivar: __forcedInitialZoomDisplayFactor
@property (readonly, nonatomic) CGFloat _frontCaptureInterval; // ivar: __frontCaptureInterval
@property (readonly, nonatomic) CGFloat _frontDualCameraSwitchOverZoomFactor; // ivar: __frontDualCameraSwitchOverZoomFactor
@property (readonly, nonatomic) CGFloat _frontDualPhotoModeMaximumZoomFactor; // ivar: __frontDualPhotoModeMaximumZoomFactor
@property (readonly, nonatomic) CGFloat _frontDualVideoModeMaximumZoomFactor; // ivar: __frontDualVideoModeMaximumZoomFactor
@property (readonly, nonatomic) CGFloat _frontPhotoModeMaximumZoomFactor; // ivar: __frontPhotoModeMaximumZoomFactor
@property (readonly, nonatomic) BOOL _frontStageLightPortaitEffectsSupported; // ivar: __frontStageLightPortaitEffectsSupported
@property (readonly, nonatomic) CGFloat _frontTripleCameraPhotoModeMaximumZoomFactor; // ivar: __frontTripleCameraPhotoModeMaximumZoomFactor
@property (readonly, nonatomic) CGFloat _frontTripleCameraVideoModeMaximumZoomFactor; // ivar: __frontTripleCameraVideoModeMaximumZoomFactor
@property (readonly, nonatomic) CGFloat _frontVideoModeMaximumZoomFactor; // ivar: __frontVideoModeMaximumZoomFactor
@property (readonly, nonatomic) CGFloat _frontWideDualCameraSwitchOverZoomFactor; // ivar: __frontWideDualCameraSwitchOverZoomFactor
@property (readonly, nonatomic) BOOL _preferWideDualPortrait; // ivar: __preferWideDualPortrait
@property (readonly, nonatomic, getter=_isPreviewAspectRatioToggleSupportedForPhotoModes) BOOL _previewAspectRatioToggleSupportedForPhotoModes; // ivar: __previewAspectRatioToggleSupportedForPhotoModes
@property (readonly, nonatomic) NSInteger _proResVideoMaxFPS1080p; // ivar: __proResVideoMaxFPS1080p
@property (readonly, nonatomic) NSInteger _proResVideoMaxFPS4k; // ivar: __proResVideoMaxFPS4k
@property (readonly, nonatomic) BOOL _processZoomWithoutUpscaleBack; // ivar: __processZoomWithoutUpscaleBack
@property (readonly, nonatomic) BOOL _processZoomWithoutUpscaleFront; // ivar: __processZoomWithoutUpscaleFront
@property (readonly, nonatomic, getter=_isTripleCamera1080p60Supported) BOOL _tripleCamera1080p60Supported; // ivar: __tripleCamera1080p60Supported
@property (readonly, nonatomic) BOOL _wideDualPortraitLowLightSupported; // ivar: __wideDualPortraitLowLightSupported
@property (readonly, nonatomic) BOOL allowControlDrawer; // ivar: _allowControlDrawer
@property (readonly, nonatomic) BOOL allowDynamicShutterZoom; // ivar: _allowDynamicShutterZoom
@property (readonly, nonatomic) BOOL allowHaptics; // ivar: _allowHaptics
@property (readonly, nonatomic) BOOL allowHapticsOnConfigurationTaps; // ivar: _allowHapticsOnConfigurationTaps
@property (readonly, nonatomic) BOOL allowPortraitDescriptionOverlay; // ivar: _allowPortraitDescriptionOverlay
@property (readonly, nonatomic, getter=isAspectRatioCropSupported) BOOL aspectRatioCropSupported;
@property (readonly, nonatomic, getter=isAutoLowLightVideoSupported) BOOL autoLowLightVideoSupported; // ivar: _autoLowLightVideoSupported
@property (readonly, nonatomic, getter=isBack1080p120Supported) BOOL back1080p120Supported; // ivar: _back1080p120Supported
@property (readonly, nonatomic, getter=isBack1080p240Supported) BOOL back1080p240Supported; // ivar: _back1080p240Supported
@property (readonly, nonatomic) NSInteger back1080pMaxFPS; // ivar: _back1080pMaxFPS
@property (readonly, nonatomic, getter=isBack4k24VideoSupported) BOOL back4k24VideoSupported; // ivar: _back4k24VideoSupported
@property (readonly, nonatomic, getter=isBack4k30VideoSupported) BOOL back4k30VideoSupported; // ivar: _back4k30VideoSupported
@property (readonly, nonatomic, getter=isBack4k60VideoSupported) BOOL back4k60VideoSupported; // ivar: _back4k60VideoSupported
@property (readonly, nonatomic) NSInteger back4kMaxFPS; // ivar: _back4kMaxFPS
@property (readonly, nonatomic, getter=isBack720p240Supported) BOOL back720p240Supported; // ivar: _back720p240Supported
@property (readonly, nonatomic) NSInteger back720pMaxFPS; // ivar: _back720pMaxFPS
@property (readonly, nonatomic, getter=isBackAutomaticHDRSupported) BOOL backAutomaticHDRSupported; // ivar: _backAutomaticHDRSupported
@property (readonly, nonatomic, getter=isBackBurstSupported) BOOL backBurstSupported; // ivar: _backBurstSupported
@property (readonly, nonatomic, getter=isBackCameraSupported) BOOL backCameraSupported; // ivar: _backCameraSupported
@property (readonly, nonatomic, getter=isBackCinematicModeSupported) BOOL backCinematicModeSupported; // ivar: _backCinematicModeSupported
@property (readonly, nonatomic, getter=isBackDualSupported) BOOL backDualSupported; // ivar: _backDualSupported
@property (readonly, nonatomic, getter=isBackFlashSupported) BOOL backFlashSupported; // ivar: _backFlashSupported
@property (readonly, nonatomic, getter=isBackHDROnSupported) BOOL backHDROnSupported; // ivar: _backHDROnSupported
@property (readonly, nonatomic, getter=isBackHDRSupported) BOOL backHDRSupported; // ivar: _backHDRSupported
@property (readonly, nonatomic) NSInteger backHighFrameRate1080pMaxFPS; // ivar: _backHighFrameRate1080pMaxFPS
@property (readonly, nonatomic) NSInteger backHighFrameRate720pMaxFPS; // ivar: _backHighFrameRate720pMaxFPS
@property (readonly, nonatomic, getter=isBackLivePhotoSupported) BOOL backLivePhotoSupported; // ivar: _backLivePhotoSupported
@property (readonly, nonatomic, getter=isBackLiveStageLightSupported) BOOL backLiveStageLightSupported; // ivar: _backLiveStageLightSupported
@property (readonly, nonatomic) UIColor *backLowLightPreviewOverlayColor; // ivar: _backLowLightPreviewOverlayColor
@property (readonly, nonatomic) NSUInteger backLowLightPreviewOverlayStyle; // ivar: _backLowLightPreviewOverlayStyle
@property (readonly, nonatomic, getter=isBackLowLightSupported) BOOL backLowLightSupported; // ivar: _backLowLightSupported
@property (readonly, nonatomic, getter=isBackPanoramaSupported) BOOL backPanoramaSupported; // ivar: _backPanoramaSupported
@property (readonly, nonatomic, getter=isBackPearlSupported) BOOL backPearlSupported; // ivar: _backPearlSupported
@property (readonly, nonatomic, getter=isBackPortraitModeSupported) BOOL backPortraitModeSupported; // ivar: _backPortraitModeSupported
@property (readonly, nonatomic, getter=isBackSingleCameraPortraitModeSupported) BOOL backSingleCameraPortraitModeSupported; // ivar: _backSingleCameraPortraitModeSupported
@property (readonly, nonatomic, getter=isBackSlomoSupported) BOOL backSlomoSupported; // ivar: _backSlomoSupported
@property (readonly, nonatomic, getter=isBackSmartHDRSupported) BOOL backSmartHDRSupported; // ivar: _backSmartHDRSupported
@property (readonly, nonatomic, getter=isBackSpatialOverCaptureSupported) BOOL backSpatialOverCaptureSupported; // ivar: _backSpatialOverCaptureSupported
@property (readonly, nonatomic, getter=isBackSuperWideSupported) BOOL backSuperWideSupported; // ivar: _backSuperWideSupported
@property (readonly, nonatomic, getter=isBackTelephotoSupported) BOOL backTelephotoSupported; // ivar: _backTelephotoSupported
@property (readonly, nonatomic, getter=isBackTimeOfFlightSupported) BOOL backTimeOfFlightSupported; // ivar: _backTimeOfFlightSupported
@property (readonly, nonatomic, getter=isBackTimelapseSupported) BOOL backTimelapseSupported; // ivar: _backTimelapseSupported
@property (readonly, nonatomic, getter=isBackTorchPatternSupported) BOOL backTorchPatternSupported; // ivar: _backTorchPatternSupported
@property (readonly, nonatomic, getter=isBackTorchSupported) BOOL backTorchSupported; // ivar: _backTorchSupported
@property (readonly, nonatomic, getter=isBackTripleCameraSupported) BOOL backTripleCameraSupported; // ivar: _backTripleCameraSupported
@property (readonly, nonatomic, getter=isBackWideDualSupported) BOOL backWideDualSupported; // ivar: _backWideDualSupported
@property (readonly, nonatomic, getter=isCacheDeleteSupported) BOOL cacheDeleteSupported; // ivar: _cacheDeleteSupported
@property (readonly, nonatomic) int cacheDeleteUrgency; // ivar: _cacheDeleteUrgency
@property (readonly, nonatomic) BOOL captureOnTouchDown; // ivar: _captureOnTouchDown
@property (readonly, nonatomic, getter=isCinematicModeSupported) BOOL cinematicModeSupported; // ivar: _cinematicModeSupported
@property (readonly, nonatomic) BOOL contentAwareDistortionCorrectionSupported; // ivar: _contentAwareDistortionCorrectionSupported
@property (readonly, nonatomic, getter=isCTMSupportSupressed) BOOL ctmSupportSuppressed; // ivar: _ctmSupportSuppressed
@property (readonly, nonatomic, getter=isCTMSupported) BOOL ctmSupported; // ivar: _ctmSupported
@property (readonly, nonatomic, getter=isDeepFusionSupported) BOOL deepFusionSupported; // ivar: _deepFusionSupported
@property (readonly, nonatomic) CGFloat defaultPortraitEffectIntensity;
@property (readonly, nonatomic, getter=isDeferredPortraitRenderingSupported) BOOL deferredPortraitRenderingSupported; // ivar: _deferredPortraitRenderingSupported
@property (readonly, nonatomic, getter=isDeferredProcessingSupported) BOOL deferredProcessingSupported; // ivar: _deferredProcessingSupported
@property (readonly, nonatomic, getter=isDepthEffectApertureSupported) BOOL depthEffectApertureSupported; // ivar: _depthEffectApertureSupported
@property (readonly, nonatomic) BOOL deviceSupportsCTM; // ivar: _deviceSupportsCTM
@property (readonly, nonatomic, getter=isDualSupported) BOOL dualSupported;
@property (readonly, nonatomic) BOOL enableSemanticDevelopmentFilterDebugging; // ivar: _enableSemanticDevelopmentFilterDebugging
@property (readonly, nonatomic, getter=isExposureSliderSupported) BOOL exposureSliderSupported; // ivar: _exposureSliderSupported
@property (readonly, nonatomic) BOOL featureDevelopmentEmulateSuperWide; // ivar: _featureDevelopmentEmulateSuperWide
@property (readonly, nonatomic) BOOL featureDevelopmentForceSingleCamera; // ivar: _featureDevelopmentForceSingleCamera
@property (readonly, nonatomic, getter=isFlashMitigationSupported) BOOL flashMitigationSupported; // ivar: _flashMitigationSupported
@property (readonly, nonatomic) BOOL forceAllowAllInterfaceOrientations; // ivar: _forceAllowAllInterfaceOrientations
@property (readonly, nonatomic, getter=isForceTouchSupported) BOOL forceTouchSupported; // ivar: _forceTouchSupported
@property (readonly, nonatomic, getter=isFront1080p120Supported) BOOL front1080p120Supported; // ivar: _front1080p120Supported
@property (readonly, nonatomic, getter=isFront1080p240Supported) BOOL front1080p240Supported; // ivar: _front1080p240Supported
@property (readonly, nonatomic) NSInteger front1080pMaxFPS; // ivar: _front1080pMaxFPS
@property (readonly, nonatomic, getter=isFront4k24VideoSupported) BOOL front4k24VideoSupported; // ivar: _front4k24VideoSupported
@property (readonly, nonatomic, getter=isFront4k30VideoSupported) BOOL front4k30VideoSupported; // ivar: _front4k30VideoSupported
@property (readonly, nonatomic, getter=isFront4k60VideoSupported) BOOL front4k60VideoSupported; // ivar: _front4k60VideoSupported
@property (readonly, nonatomic) NSInteger front4kMaxFPS; // ivar: _front4kMaxFPS
@property (readonly, nonatomic, getter=isFront720p240Supported) BOOL front720p240Supported; // ivar: _front720p240Supported
@property (readonly, nonatomic) NSInteger front720pMaxFPS; // ivar: _front720pMaxFPS
@property (readonly, nonatomic, getter=isFrontAutomaticHDRSupported) BOOL frontAutomaticHDRSupported; // ivar: _frontAutomaticHDRSupported
@property (readonly, nonatomic, getter=isFrontBurstSupported) BOOL frontBurstSupported; // ivar: _frontBurstSupported
@property (readonly, nonatomic, getter=isFrontCameraSupported) BOOL frontCameraSupported; // ivar: _frontCameraSupported
@property (readonly, nonatomic, getter=isFrontCinematicModeSupported) BOOL frontCinematicModeSupported; // ivar: _frontCinematicModeSupported
@property (readonly, nonatomic, getter=isFrontDualSupported) BOOL frontDualSupported; // ivar: _frontDualSupported
@property (readonly, nonatomic, getter=isFrontFlashSupported) BOOL frontFlashSupported; // ivar: _frontFlashSupported
@property (readonly, nonatomic, getter=isFrontHDROnSupported) BOOL frontHDROnSupported; // ivar: _frontHDROnSupported
@property (readonly, nonatomic, getter=isFrontHDRSupported) BOOL frontHDRSupported; // ivar: _frontHDRSupported
@property (readonly, nonatomic) NSInteger frontHighFrameRate1080pMaxFPS; // ivar: _frontHighFrameRate1080pMaxFPS
@property (readonly, nonatomic) NSInteger frontHighFrameRate720pMaxFPS; // ivar: _frontHighFrameRate720pMaxFPS
@property (readonly, nonatomic, getter=isFrontLivePhotoSupported) BOOL frontLivePhotoSupported; // ivar: _frontLivePhotoSupported
@property (readonly, nonatomic, getter=isFrontLiveStageLightSupported) BOOL frontLiveStageLightSupported; // ivar: _frontLiveStageLightSupported
@property (readonly, nonatomic) UIColor *frontLowLightPreviewOverlayColor; // ivar: _frontLowLightPreviewOverlayColor
@property (readonly, nonatomic) NSUInteger frontLowLightPreviewOverlayStyle; // ivar: _frontLowLightPreviewOverlayStyle
@property (readonly, nonatomic, getter=isFrontLowLightSupported) BOOL frontLowLightSupported; // ivar: _frontLowLightSupported
@property (readonly, nonatomic, getter=isFrontPanoramaSupported) BOOL frontPanoramaSupported; // ivar: _frontPanoramaSupported
@property (readonly, nonatomic, getter=isFrontPearlSupported) BOOL frontPearlSupported; // ivar: _frontPearlSupported
@property (readonly, nonatomic, getter=isFrontPortraitModeSupported) BOOL frontPortraitModeSupported; // ivar: _frontPortraitModeSupported
@property (readonly, nonatomic, getter=isFrontSingleCameraPortraitModeSupported) BOOL frontSingleCameraPortraitModeSupported; // ivar: _frontSingleCameraPortraitModeSupported
@property (readonly, nonatomic, getter=isFrontSlomoSupported) BOOL frontSlomoSupported; // ivar: _frontSlomoSupported
@property (readonly, nonatomic, getter=isFrontSmartHDRSupported) BOOL frontSmartHDRSupported; // ivar: _frontSmartHDRSupported
@property (readonly, nonatomic, getter=isFrontSpatialOverCaptureSupported) BOOL frontSpatialOverCaptureSupported; // ivar: _frontSpatialOverCaptureSupported
@property (readonly, nonatomic, getter=isFrontSuperWideSupported) BOOL frontSuperWideSupported; // ivar: _frontSuperWideSupported
@property (readonly, nonatomic, getter=isFrontTelephotoSupported) BOOL frontTelephotoSupported; // ivar: _frontTelephotoSupported
@property (readonly, nonatomic, getter=isFrontTimeOfFlightSupported) BOOL frontTimeOfFlightSupported; // ivar: _frontTimeOfFlightSupported
@property (readonly, nonatomic, getter=isFrontTimelapseSupported) BOOL frontTimelapseSupported; // ivar: _frontTimelapseSupported
@property (readonly, nonatomic, getter=isFrontTorchPatternSupported) BOOL frontTorchPatternSupported; // ivar: _frontTorchPatternSupported
@property (readonly, nonatomic, getter=isFrontTorchSupported) BOOL frontTorchSupported; // ivar: _frontTorchSupported
@property (readonly, nonatomic, getter=isFrontTripleCameraSupported) BOOL frontTripleCameraSupported; // ivar: _frontTripleCameraSupported
@property (readonly, nonatomic, getter=isFrontWideDualSupported) BOOL frontWideDualSupported; // ivar: _frontWideDualSupported
@property (readonly, nonatomic) BOOL hasFilteringEntitlement; // ivar: _hasFilteringEntitlement
@property (readonly, nonatomic) BOOL hasSystemTelephonyOfAnyKind; // ivar: _hasSystemTelephonyOfAnyKind
@property (readonly, nonatomic) NSInteger hostProcess; // ivar: _hostProcess
@property (readonly, nonatomic, getter=isImageAnalysisButtonAlwaysVisible) BOOL imageAnalysisButtonAlwaysVisible; // ivar: _imageAnalysisButtonAlwaysVisible
@property (readonly, nonatomic) BOOL imageAnalysisShowsInactiveTextRegions; // ivar: _imageAnalysisShowsInactiveTextRegions
@property (readonly, nonatomic, getter=isImageAnalysisSupported) BOOL imageAnalysisSupported; // ivar: _imageAnalysisSupported
@property (readonly, nonatomic) BOOL imagePickerUsesModernLayout; // ivar: _imagePickerUsesModernLayout
@property (readonly, nonatomic) BOOL interactiveVideoFormatControlAlwaysEnabled; // ivar: _interactiveVideoFormatControlAlwaysEnabled
@property (readonly, nonatomic) BOOL interactiveVideoFormatControlSupported; // ivar: _interactiveVideoFormatControlSupported
@property (readonly, nonatomic, getter=isInternalInstall) BOOL internalInstall; // ivar: _internalInstall
@property (readonly, nonatomic, getter=isLinearDNGSupported) BOOL linearDNGSupported; // ivar: _linearDNGSupported
@property (readonly, nonatomic, getter=isLiveFilteringSupported) BOOL liveFilteringSupported; // ivar: _liveFilteringSupported
@property (readonly, nonatomic, getter=isLivePhotoAutoModeSupported) BOOL livePhotoAutoModeSupported; // ivar: _livePhotoAutoModeSupported
@property (readonly, nonatomic, getter=isLivePhotoSupported) BOOL livePhotoSupported;
@property (readonly, nonatomic, getter=isLockButtonAppropriateForShutter) BOOL lockButtonAppropriateForShutter; // ivar: _lockButtonAppropriateForShutter
@property (readonly, nonatomic, getter=isLowEndHardware) BOOL lowEndHardware; // ivar: _lowEndHardware
@property (readonly, nonatomic, getter=isLowLightSupported) BOOL lowLightSupported;
@property (readonly, nonatomic) NSInteger maximumBurstLength; // ivar: _maximumBurstLength
@property (readonly, nonatomic) NSInteger maximumNumberOfInflightRequests; // ivar: _maximumNumberOfInflightRequests
@property (readonly, nonatomic) CGFloat maximumPortraitEffectIntensity;
@property (readonly, nonatomic) NSInteger maximumRecordedFileSize; // ivar: _maximumRecordedFileSize
@property (readonly, nonatomic) CGFloat minimumMachineReadableCodeNormalizedHeight; // ivar: _minimumMachineReadableCodeNormalizedHeight
@property (readonly, nonatomic) CGFloat minimumPortraitEffectIntensity;
@property (readonly, nonatomic, getter=isMirroredFrontCapturesSupported) BOOL mirroredFrontCapturesSupported; // ivar: _mirroredFrontCapturesSupported
@property (readonly, nonatomic, getter=isMirroredFrontVideosSupported) BOOL mirroredFrontVideosSupported; // ivar: _mirroredFrontVideosSupported
@property (readonly, nonatomic, getter=isModernHDRSupported) BOOL modernHDRSupported; // ivar: _modernHDRSupported
@property (readonly, nonatomic, getter=isNaturalLightingAppliedToOriginal) BOOL naturalLightingAppliedToOriginal; // ivar: _naturalLightingAppliedToOriginal
@property (readonly, nonatomic, getter=isNeuralEngineSupported) BOOL neuralEngineSupported; // ivar: _neuralEngineSupported
@property (readonly, nonatomic) BOOL overContentFlipButtonSupported; // ivar: _overContentFlipButtonSupported
@property (readonly, nonatomic, getter=isPipelinedStillImageProcessingSupported) BOOL pipelinedStillImageProcessingSupported; // ivar: _pipelinedStillImageProcessingSupported
@property (readonly, nonatomic, getter=isPortraitEffectIntensitySupported) BOOL portraitEffectIntensitySupported; // ivar: _portraitEffectIntensitySupported
@property (readonly, nonatomic, getter=arePortraitEffectsSupported) BOOL portraitEffectsSupported; // ivar: _portraitEffectsSupported
@property (readonly, nonatomic, getter=isPortraitModeSupported) BOOL portraitModeSupported;
@property (readonly, nonatomic) BOOL portraitZoomSupported;
@property (readonly, nonatomic, getter=isPreviewDuringHDRSupported) BOOL previewSupportedDuringHDR; // ivar: _previewSupportedDuringHDR
@property (readonly, nonatomic) CGFloat proResMinimumDiskSpaceOverrideAsFractionOfSystemTotal; // ivar: _proResMinimumDiskSpaceOverrideAsFractionOfSystemTotal
@property (readonly, nonatomic) NSInteger proResMinimumDiskSpaceOverrideMegabytesRelativeToFreeSpace; // ivar: _proResMinimumDiskSpaceOverrideMegabytesRelativeToFreeSpace
@property (readonly, nonatomic, getter=isProResVideoSupported) BOOL proResVideoSupported; // ivar: _proResVideoSupported
@property (readonly, nonatomic) BOOL responsiveShutterSupported; // ivar: _responsiveShutterSupported
@property (readonly, nonatomic) BOOL semanticDevelopmentSupported; // ivar: _semanticDevelopmentSupported
@property (readonly, nonatomic) NSUInteger semanticStylesSupport; // ivar: _semanticStylesSupport
@property (readonly, nonatomic) BOOL sfCameraFontSupported; // ivar: _sfCameraFontSupported
@property (readonly, nonatomic, getter=isShotBufferSupported) BOOL shotBufferSupported; // ivar: _shotBufferSupported
@property (readonly, nonatomic) BOOL shouldEnableUserNotifications; // ivar: _shouldEnableUserNotifications
@property (readonly, nonatomic) BOOL shouldPersistPreferences; // ivar: _shouldPersistPreferences
@property (readonly, nonatomic, getter=isSmartHDRSupported) BOOL smartHDRSupported;
@property (readonly, nonatomic, getter=isSpatialOverCaptureSupported) BOOL spatialOverCaptureSupported;
@property (readonly, nonatomic, getter=isSplitScreenSupported) BOOL splitScreenSupported; // ivar: _splitScreenSupported
@property (readonly, nonatomic, getter=isSquareModeSupported) BOOL squareModeSupported; // ivar: _squareModeSupported
@property (readonly, nonatomic, getter=isStereoAudioRecordingSupported) BOOL stereoAudioRecordingSupported; // ivar: _stereoAudioRecordingSupported
@property (readonly, nonatomic, getter=isStillDuringVideoSupported) BOOL stillDuringVideoSupported; // ivar: _stillDuringVideoSupported
@property (readonly, nonatomic, getter=isSuperWideAutoMacroSupported) BOOL superWideAutoMacroSupported; // ivar: _superWideAutoMacroSupported
@property (readonly, nonatomic) CGFloat superWideDisplayZoomFactor; // ivar: _superWideDisplayZoomFactor
@property (readonly, nonatomic, getter=isSuperWideSupported) BOOL superWideSupported;
@property (readonly, nonatomic) NSInteger supportedPortraitLightingVersion; // ivar: _supportedPortraitLightingVersion
@property (readonly, nonatomic) CGFloat telephotoDisplayZoomFactor; // ivar: _telephotoDisplayZoomFactor
@property (readonly, nonatomic, getter=isTelephotoSupported) BOOL telephotoSupported;
@property (readonly, nonatomic, getter=isTimeOfFlightSupported) BOOL timeOfFlightSupported;
@property (readonly, nonatomic) CGFloat timelapseFirstShotDelay; // ivar: _timelapseFirstShotDelay
@property (readonly, nonatomic, getter=isTripleCameraSupported) BOOL tripleCameraSupported;
@property (readonly, nonatomic) BOOL useCTMModeSelector; // ivar: _useCTMModeSelector
@property (readonly, nonatomic) BOOL useCTMTransientImageWell; // ivar: _useCTMTransientImageWell
@property (readonly, nonatomic) BOOL useReticleStroke; // ivar: _useReticleStroke
@property (readonly, nonatomic, getter=isVariableFramerateVideoSupported) BOOL variableFramerateVideoSupported; // ivar: _variableFramerateVideoSupported
@property (readonly, nonatomic, getter=isVideoSupported) BOOL videoSupported; // ivar: _videoSupported
@property (readonly, nonatomic) CGFloat wideDisplayZoomFactor; // ivar: _wideDisplayZoomFactor
@property (readonly, nonatomic, getter=isWideDualSupported) BOOL wideDualSupported;
@property (readonly, nonatomic) BOOL zoomControlSupported;
@property (readonly, nonatomic) NSInteger zoomDialStyle; // ivar: _zoomDialStyle
@property (readonly, nonatomic, getter=isZoomPlatterSupported) BOOL zoomPlatterSupported; // ivar: _zoomPlatterSupported


+(BOOL)isPALVideoConfiguration:(NSInteger)arg0 ;
+(id)capabilities;
-(BOOL)_isSpatialOverCaptureSupportedForMode:(NSInteger)arg0 ;
-(BOOL)_isVariableFramerateVideoSupportedForResolvedVideoConfiguration:(NSInteger)arg0 ;
-(BOOL)_isVariableFramerateVideoSupportedForVideoEncodingBehavior:(NSInteger)arg0 ;
-(BOOL)_shouldUseTripleCameraForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(BOOL)allowCaptureWhileViewfinderIsOpeningForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 ;
-(BOOL)is1080p120SupportedForDevice:(NSInteger)arg0 ;
-(BOOL)is1080p240SupportedForDevice:(NSInteger)arg0 ;
-(BOOL)is1080p60VideoSupportedForDevice:(NSInteger)arg0 ;
-(BOOL)is4k24VideoSupportedForDevice:(NSInteger)arg0 ;
-(BOOL)is4k30VideoSupportedForDevice:(NSInteger)arg0 ;
-(BOOL)is4k60VideoSupportedForDevice:(NSInteger)arg0 ;
-(BOOL)is720p240SupportedForDevice:(NSInteger)arg0 ;
-(BOOL)isAspectRatioCropSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isAutoFPSVideoSupportedForMode:(NSInteger)arg0 videoConfiguration:(NSInteger)arg1 videoEncodingBehavior:(NSInteger)arg2 ;
-(BOOL)isAutoLowLightVideoSupportedForMode:(NSInteger)arg0 videoConfiguration:(NSInteger)arg1 videoEncodingBehavior:(NSInteger)arg2 ;
-(BOOL)isAutomaticHDRSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isBurstSupportedForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(BOOL)isCTMVideoCaptureSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isCameraSupportedForDevice:(NSInteger)arg0 ;
-(BOOL)isCameraSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isCinematicModeSupportedForDevice:(NSInteger)arg0 ;
-(BOOL)isCinematicModeSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isContentAwareDistortionCorrectionSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isDepthEffectApertureSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isDualSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isDualSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(BOOL)isExposureClippingIndicatorSupportedForMode:(NSInteger)arg0 videoConfiguration:(NSInteger)arg1 ;
-(BOOL)isExposureSliderSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isFlashOrTorchSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 ;
-(BOOL)isFlashSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isFlashSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 ;
-(BOOL)isHDR10BitVideoSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isHDR10BitVideoSupportedForVideoConfiguration:(NSInteger)arg0 videoEncodingBehavior:(NSInteger)arg1 ;
-(BOOL)isHDROnSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isHDRSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isHDRSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 ;
-(BOOL)isImageAnalysisSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 ;
-(BOOL)isLinearDNGSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isLivePhotoSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isLivePhotoSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 ;
-(BOOL)isLivePreviewSupportedForLightingType:(NSInteger)arg0 devicePosition:(NSInteger)arg1 ;
-(BOOL)isLowLightSupportedForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(BOOL)isPanoramaSupportedForDevice:(NSInteger)arg0 ;
-(BOOL)isPearlSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isPearlSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 ;
-(BOOL)isPortraitEffectIntensitySupportedForLightingType:(NSInteger)arg0 ;
-(BOOL)isPortraitEffectIntensitySupportedForMode:(NSInteger)arg0 ;
-(BOOL)isPortraitModeSupportedForDevice:(NSInteger)arg0 ;
-(BOOL)isPortraitModeSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isPortraitZoomSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isPreviewAspectRatioToggleSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isProResVideoSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isProResVideoSupportedForMode:(NSInteger)arg0 videoConfiguration:(NSInteger)arg1 ;
-(BOOL)isResponsiveShutterSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isSemanticDevelopmentSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isSingleCameraPortraitModeSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isSlomoSupportedForDevice:(NSInteger)arg0 ;
-(BOOL)isSmartHDRSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 ;
-(BOOL)isSpatialOverCapturePreviewSupportedForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(BOOL)isSpatialOverCaptureSupportedForCTMCaptureType:(NSInteger)arg0 ;
-(BOOL)isSpatialOverCaptureSupportedForDevice:(NSInteger)arg0 ;
-(BOOL)isSpatialOverCaptureSupportedForMode:(NSInteger)arg0 device:(NSInteger)arg1 ctmCaptureType:(NSInteger)arg2 photoEncodingBehavior:(NSInteger)arg3 ;
-(BOOL)isStereoAudioRecordingSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isStillDuringVideoSupportedForVideoEncodingBehavior:(NSInteger)arg0 ;
-(BOOL)isSuperWideAutoMacroSupportedForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(BOOL)isSuperWideSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isSuperWideSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(BOOL)isSupportedMode:(NSInteger)arg0 withDevice:(NSInteger)arg1 ;
-(BOOL)isSupportedVideoConfiguration:(NSInteger)arg0 forMode:(NSInteger)arg1 device:(NSInteger)arg2 ;
-(BOOL)isSupportedVideoConfiguration:(NSInteger)arg0 forMode:(NSInteger)arg1 videoEncodingBehavior:(NSInteger)arg2 ;
-(BOOL)isTapAndBiasSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isTapToExposeSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isTelephotoSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isTelephotoSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(BOOL)isTimeOfFlightSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isTimelapseSupportedForDevice:(NSInteger)arg0 ;
-(BOOL)isTimerSupportedForMode:(NSInteger)arg0 ;
-(BOOL)isTorchPatternSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isTorchSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isTorchSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 ;
-(BOOL)isTripleCameraSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isTripleCameraSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(BOOL)isVariableFramerateVideoSupportedForMode:(NSInteger)arg0 videoConfiguration:(NSInteger)arg1 videoEncodingBehavior:(NSInteger)arg2 ;
-(BOOL)isWideDualSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isWideDualSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(BOOL)isWideSupportedForDevicePosition:(NSInteger)arg0 ;
-(BOOL)isWideSupportedForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(BOOL)isZoomAllowedForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(BOOL)mirroredFrontCapturesSupportedForMode:(NSInteger)arg0 ;
-(BOOL)processZoomWithoutUpscaleForDevicePosition:(NSInteger)arg0 ;
-(BOOL)shouldAdjustZoomOnOrientationChangeForDevicePosition:(NSInteger)arg0 ;
-(BOOL)shouldAllowCameraToggleForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(BOOL)shouldSuspendVideoHDRForHDRMode:(NSInteger)arg0 captureMode:(NSInteger)arg1 ;
-(CGFloat)_doubleForKey:(id)arg0 applicationID:(id)arg1 ;
-(CGFloat)captureIntervalForDevice:(NSInteger)arg0 ;
-(CGFloat)defaultDepthEffectApertureForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(CGFloat)defaultZoomFactorForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 captureOrientation:(NSInteger)arg3 ;
-(CGFloat)dualCameraSwitchOverZoomFactorForDevicePosition:(NSInteger)arg0 ;
-(CGFloat)maximumDepthEffectApertureForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(CGFloat)maximumZoomFactorForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(CGFloat)maximumZoomFactorForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 shouldResolveDevice:(BOOL)arg3 ;
-(CGFloat)minimumDepthEffectApertureForMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(CGFloat)superWideToWideZoomFactorForDevicePosition:(NSInteger)arg0 ;
-(CGFloat)wideDualCameraSwitchOverZoomFactorForDevicePosition:(NSInteger)arg0 ;
-(CGFloat)wideToTelephotoZoomFactorForDevicePosition:(NSInteger)arg0 ;
-(NSInteger)_knownFramerateForVideoConfiguration:(NSInteger)arg0 ;
-(NSInteger)preferredDeviceForPosition:(NSInteger)arg0 mode:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(NSInteger)resolvedDeviceForDesiredDevice:(NSInteger)arg0 mode:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 ;
-(NSInteger)resolvedVideoConfigurationForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoEncodingBehavior:(NSInteger)arg2 videoConfiguration:(NSInteger)arg3 ;
-(NSInteger)sanitizeDesiredDevice:(NSInteger)arg0 forMode:(NSInteger)arg1 ;
-(NSInteger)supportedEffectSetForDevicePosition:(NSInteger)arg0 ;
-(NSUInteger)frontZoomBehaviorForCaptureMode:(NSInteger)arg0 ;
-(NSUInteger)lowLightPreviewOverlayStyleForDevicePosition:(NSInteger)arg0 sensitiveToChangingDisplayFeedback:(BOOL)arg1 ;
-(NSUInteger)semanticStyleSupportForMode:(NSInteger)arg0 ;
-(id)initWithHostProcess:(NSInteger)arg0 ;
-(id)lowLightPreviewOverlayColorForDevicePosition:(NSInteger)arg0 ;
-(struct ? )tripleCameraSwitchOverZoomFactorsForDevicePosition:(NSInteger)arg0 ;


@end


#endif