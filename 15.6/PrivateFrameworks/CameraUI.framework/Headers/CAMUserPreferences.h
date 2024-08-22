// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMUSERPREFERENCES_H
#define CAMUSERPREFERENCES_H

@class NSUserDefaults, NSDate;

#import <Foundation/Foundation.h>

#import "CAMCaptureConfiguration.h"
#import "CAMConflictingControlConfiguration.h"

@interface CAMUserPreferences : NSObject

@property (readonly, nonatomic) BOOL HDR10BitVideoEnabled; // ivar: _HDR10BitVideoEnabled
@property (readonly, nonatomic, getter=isPALVideoEnabled) BOOL PALVideoEnabled; // ivar: _PALVideoEnabled
@property (readonly, nonatomic) BOOL QRBannersEnabledInSettings; // ivar: _QRBannersEnabledInSettings
@property (readonly, nonatomic) NSInteger VFRMode; // ivar: _VFRMode
@property (nonatomic, setter=_setHasReadLastWrittenValues:) BOOL _hasReadLastWrittenValues; // ivar: __hasReadLastWrittenValues
@property (readonly, nonatomic) BOOL _preferHEVCWhenAvailable; // ivar: __preferHEVCWhenAvailable
@property (nonatomic, setter=_setPreviewAspectModeForPhotoModes:) NSInteger _previewAspectModeForPhotoModes; // ivar: __previewAspectModeForPhotoModes
@property (nonatomic, setter=_setPreviewAspectModeForVideoModes:) NSInteger _previewAspectModeForVideoModes; // ivar: __previewAspectModeForVideoModes
@property (readonly, nonatomic) CGFloat _resetTimeoutOverride; // ivar: __resetTimeoutOverride
@property (readonly, nonatomic) BOOL _shouldDisableCameraSwitchingDuringVideoRecording; // ivar: __shouldDisableCameraSwitchingDuringVideoRecording
@property (retain, nonatomic, getter=_underlyingUserDefaults, setter=_setUnderlyingUserDefaults:) NSUserDefaults *_underlyingUserDefaults; // ivar: __underlyingUserDefaults
@property (readonly, nonatomic, getter=isAutoAdjustmentsEnabled) BOOL autoAdjustmentsEnabled; // ivar: _autoAdjustmentsEnabled
@property (readonly, nonatomic) BOOL burstFollowsEncoderSettings; // ivar: _burstFollowsEncoderSettings
@property (retain, nonatomic) CAMCaptureConfiguration *captureConfiguration; // ivar: _captureConfiguration
@property (readonly, nonatomic) NSInteger cinematicConfiguration; // ivar: _cinematicConfiguration
@property (retain, nonatomic) CAMConflictingControlConfiguration *conflictingControlConfiguration; // ivar: _conflictingControlConfiguration
@property (nonatomic) BOOL didAcknowledgeCTMDescription; // ivar: _didAcknowledgeCTMDescription
@property (nonatomic) BOOL didAcknowledgeCinematicModeDescription; // ivar: _didAcknowledgeCinematicModeDescription
@property (nonatomic) BOOL didAcknowledgePortraitModeDescription; // ivar: _didAcknowledgePortraitModeDescription
@property (nonatomic) BOOL didAcknowledgeSemanticStylesDescription; // ivar: _didAcknowledgeSemanticStylesDescription
@property (readonly, nonatomic) BOOL didConfirmSlomo1080p240MostCompatible;
@property (readonly, nonatomic) BOOL didConfirmVideo4k60MostCompatible;
@property (nonatomic, setter=_setDidResetTorchMode:) BOOL didResetTorchMode; // ivar: _didResetTorchMode
@property (nonatomic) BOOL forceEnableQRBanners; // ivar: _forceEnableQRBanners
@property (readonly, nonatomic, getter=isImageAnalysisEnabled) BOOL imageAnalysisEnabled; // ivar: _imageAnalysisEnabled
@property (readonly, nonatomic, getter=isLockAsShutterEnabled) BOOL lockAsShutterEnabled; // ivar: _lockAsShutterEnabled
@property (readonly, nonatomic, getter=isLowLightVideoEnabled) BOOL lowLightVideoEnabled; // ivar: _lowLightVideoEnabled
@property (readonly, nonatomic, getter=isOverCapturePreviewEnabled) BOOL overCapturePreviewEnabled; // ivar: _overCapturePreviewEnabled
@property (readonly, nonatomic) NSInteger overriddenBackCaptureInterval; // ivar: _overriddenBackCaptureInterval
@property (readonly, nonatomic) NSInteger overriddenFrontCaptureInterval; // ivar: _overriddenFrontCaptureInterval
@property (readonly, nonatomic) NSInteger photoEncodingBehavior;
@property (nonatomic) NSInteger photoModeLastCapturedEffectFilterType; // ivar: _photoModeLastCapturedEffectFilterType
@property (readonly, nonatomic, getter=isPhotoOverCaptureEnabled) BOOL photoOverCaptureEnabled; // ivar: _photoOverCaptureEnabled
@property (nonatomic) NSInteger portraitModeLastCapturedEffectFilterType; // ivar: _portraitModeLastCapturedEffectFilterType
@property (nonatomic) NSInteger portraitModeRearDevice; // ivar: _portraitModeRearDevice
@property (readonly, nonatomic) NSInteger preferredMinimumFreeBytes; // ivar: _preferredMinimumFreeBytes
@property (readonly, nonatomic) BOOL preserveCaptureMode; // ivar: _preserveCaptureMode
@property (readonly, nonatomic) BOOL preserveEffectFilter; // ivar: _preserveEffectFilter
@property (readonly, nonatomic) BOOL preserveExposure; // ivar: _preserveExposure
@property (readonly, nonatomic) BOOL preserveLivePhoto; // ivar: _preserveLivePhoto
@property (readonly, nonatomic) BOOL preserveNightMode; // ivar: _preserveNightMode
@property (readonly, nonatomic) BOOL preservePortraitZoom; // ivar: _preservePortraitZoom
@property (readonly, nonatomic) BOOL preserveProRes; // ivar: _preserveProRes
@property (readonly, nonatomic) BOOL preserveRAW; // ivar: _preserveRAW
@property (readonly, nonatomic) BOOL preserveSuperWideAutoMacro; // ivar: _preserveSuperWideAutoMacro
@property (readonly, nonatomic, getter=isProResControlEnabled) BOOL proResControlEnabled; // ivar: _proResControlEnabled
@property (readonly, nonatomic) BOOL rawControlEnabled; // ivar: _rawControlEnabled
@property (retain, nonatomic, setter=_setResetTimeoutDate:) NSDate *resetTimeoutDate; // ivar: _resetTimeoutDate
@property (readonly, nonatomic) BOOL responsiveShutterEnabled; // ivar: _responsiveShutterEnabled
@property (readonly, nonatomic) BOOL semanticDevelopmentEnabled; // ivar: _semanticDevelopmentEnabled
@property (readonly, nonatomic) BOOL shouldCaptureHDREV0; // ivar: _shouldCaptureHDREV0
@property (readonly, nonatomic) BOOL shouldDelayRemotePersistence; // ivar: _shouldDelayRemotePersistence
@property (readonly, nonatomic) BOOL shouldForceMonoAudioRecording; // ivar: _shouldForceMonoAudioRecording
@property (nonatomic) BOOL shouldMirrorFrontCameraCaptures; // ivar: _shouldMirrorFrontCameraCaptures
@property (readonly, nonatomic) BOOL shouldShowGridView; // ivar: _shouldShowGridView
@property (readonly, nonatomic) BOOL shouldShowQRBanners;
@property (readonly, nonatomic) BOOL shouldUseContentAwareDistortionCorrection; // ivar: _shouldUseContentAwareDistortionCorrection
@property (readonly, nonatomic) BOOL shouldUseModernHDRBehavior; // ivar: _shouldUseModernHDRBehavior
@property (readonly, nonatomic) BOOL shouldUseVolumeUpBurst; // ivar: _shouldUseVolumeUpBurst
@property (readonly, nonatomic) NSInteger slomoConfiguration; // ivar: _slomoConfiguration
@property (nonatomic) NSInteger squareModeLastCapturedEffectFilterType; // ivar: _squareModeLastCapturedEffectFilterType
@property (readonly, nonatomic, getter=isSuperWideAutoMacroControlAllowed) BOOL superWideAutoMacroControlAllowed; // ivar: _superWideAutoMacroControlAllowed
@property (readonly, nonatomic) BOOL usingMostCompatibleEncoding;
@property (readonly, nonatomic) NSInteger videoConfiguration; // ivar: _videoConfiguration
@property (readonly, nonatomic, getter=isVideoConfigurationControlEnabled) BOOL videoConfigurationControlEnabled; // ivar: _videoConfigurationControlEnabled
@property (readonly, nonatomic, getter=isVideoOverCaptureEnabled) BOOL videoOverCaptureEnabled; // ivar: _videoOverCaptureEnabled


+(BOOL)_fallBackToCameraDefaultsForBundleIdentifier:(id)arg0 ;
+(BOOL)shouldEnableHDR10BitVideoForHEVCEnabled:(BOOL)arg0 capabilities:(id)arg1 ;
+(NSInteger)defaultDevice;
+(NSInteger)defaultDevicePosition;
+(NSInteger)defaultFilterTypeForMode:(NSInteger)arg0 ;
+(NSInteger)defaultLightingTypeForMode:(NSInteger)arg0 ;
+(NSInteger)defaultMode;
+(id)_defaultExposureBiasesByMode;
+(id)defaultCaptureConfiguration;
+(id)preferences;
+(void)performLowLightVideoMigrationWithCapabilities:(id)arg0 ;
+(void)performResponsiveShutterMigration;
+(void)performSuperWideAutoMacroMigrationWithCapabilities:(id)arg0 ;
-(BOOL)isAutoFPSVideoEnabledForMode:(NSInteger)arg0 device:(NSInteger)arg1 videoConfiguration:(NSInteger)arg2 encodingBehavior:(NSInteger)arg3 ;
-(BOOL)isOverCaptureEnabledForCTMCaptureType:(NSInteger)arg0 ;
-(BOOL)mirrorCameraCapturesForDevicePosition:(NSInteger)arg0 mode:(NSInteger)arg1 ;
-(BOOL)shouldDisableCameraSwitchingDuringVideoRecordingForMode:(NSInteger)arg0 ;
-(BOOL)shouldEnableHDR10BitVideoForMode:(NSInteger)arg0 ;
-(NSInteger)_sanitizeEffectFilterType:(NSInteger)arg0 forMode:(NSInteger)arg1 ;
-(NSInteger)_sanitizeLightingType:(NSInteger)arg0 forMode:(NSInteger)arg1 ;
-(NSInteger)defaultDeviceForModeChange:(NSInteger)arg0 devicePosition:(NSInteger)arg1 ;
-(NSInteger)maxSupportedPhotoQualityPrioritizationForMode:(NSInteger)arg0 ;
-(NSInteger)ppt_readPortraitLightingType;
-(NSInteger)previewViewAspectModeForMode:(NSInteger)arg0 ;
-(NSInteger)videoEncodingBehaviorForConfiguration:(NSInteger)arg0 mode:(NSInteger)arg1 wantsHDR10BitVideo:(BOOL)arg2 desiredProResVideoMode:(NSInteger)arg3 ;
-(id)filterTypesForMode:(NSInteger)arg0 ;
-(void)_publishAnalyticsIfNeeded;
-(void)_updateResetTimeoutDate;
-(void)setPreviewViewAspectMode:(NSInteger)arg0 forMode:(NSInteger)arg1 ;
-(void)writePreferences;


@end


#endif