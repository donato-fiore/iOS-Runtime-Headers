// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCAPTURECONVERSIONS_H
#define CAMCAPTURECONVERSIONS_H


#import <Foundation/Foundation.h>


@interface CAMCaptureConversions : NSObject



+(NSInteger)AVCaptureDeviceVideoZoomRampTuningForCAMVideoZoomRampTuning:(NSInteger)arg0 ;
+(NSInteger)AVCapturePhotoQualityPrioritizationForCAMPhotoQualityPrioritization:(NSInteger)arg0 ;
+(NSInteger)AVDevicePositionForCAMDevicePosition:(NSInteger)arg0 ;
+(NSInteger)CAMDevicePositionForAVDevicePosition:(NSInteger)arg0 ;
+(NSInteger)CAMPhotoQualityPrioritizationForAVCapturePhotoQualityPrioritization:(NSInteger)arg0 ;
+(NSInteger)captureDigitalFlashModeForLowLightMode:(NSInteger)arg0 ;
+(NSInteger)captureExposureModeForExposureMode:(NSInteger)arg0 ;
+(NSInteger)captureFlashModeForFlashMode:(NSInteger)arg0 ;
+(NSInteger)captureFocusModeForFocusMode:(NSInteger)arg0 isPerformingContrastBasedFocus:(BOOL)arg1 ;
+(NSInteger)captureHDRModeForHDRMode:(NSInteger)arg0 ;
+(NSInteger)captureTorchModeForTorchMode:(NSInteger)arg0 ;
+(NSInteger)captureWhiteBalanceModeForWhiteBalanceMode:(NSInteger)arg0 ;
+(NSInteger)exposureModeForCaptureExposureMode:(NSInteger)arg0 ;
+(NSInteger)flashModeForCaptureFlashMode:(NSInteger)arg0 ;
+(NSInteger)flashModeForTorchMode:(NSInteger)arg0 ;
+(NSInteger)focusModeForCaptureFocusMode:(NSInteger)arg0 ;
+(NSInteger)hdrModeForCaptureHDRMode:(NSInteger)arg0 ;
+(NSInteger)lowLightStatusForCaptureStatus:(NSInteger)arg0 ;
+(NSInteger)overCapturePreviewStatusForAVPreviewStatus:(NSInteger)arg0 ;
+(NSInteger)shallowDepthOfFieldStatusForCaptureStatus:(NSInteger)arg0 ;
+(NSInteger)stagePreviewStatusForCaptureStatus:(NSInteger)arg0 ;
+(NSInteger)torchModeForCaptureTorchMode:(NSInteger)arg0 ;
+(NSInteger)torchModeForFlashMode:(NSInteger)arg0 ;
+(NSInteger)viewContentModeForPreviewViewAspectMode:(NSInteger)arg0 ;
+(NSInteger)whiteBalanceModeForCaptureWhiteBalanceMode:(NSInteger)arg0 ;
+(NSUInteger)AVCaptureMetadataObjectSyntheticFocusModeForCAMMetadataObjectSyntheticFocusMode:(NSUInteger)arg0 ;
+(NSUInteger)CAMMetadataObjectSyntheticFocusModeForAVCaptureMetadataObjectSyntheticFocusMode:(NSUInteger)arg0 ;
+(id)AVCaptureDeviceTypeForCAMCaptureDevice:(NSInteger)arg0 ;
+(id)AVSemanticStyleForCAMSemanticStyle:(id)arg0 ;
+(id)CAMSemanticStyleForAVSemanticStyle:(id)arg0 presetType:(NSInteger)arg1 ;
+(id)previewLayerVideoGravityForPreviewViewAspectMode:(NSInteger)arg0 ;
+(struct ? )CMVideoDimensionsForCAMPhotoResolution:(NSInteger)arg0 ;


@end


#endif