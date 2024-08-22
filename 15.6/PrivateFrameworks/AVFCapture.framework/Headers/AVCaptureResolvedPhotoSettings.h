// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTURERESOLVEDPHOTOSETTINGS_H
#define AVCAPTURERESOLVEDPHOTOSETTINGS_H


#import <Foundation/Foundation.h>

#import "AVCaptureResolvedPhotoSettingsInternal.h"

@interface AVCaptureResolvedPhotoSettings : NSObject {
    AVCaptureResolvedPhotoSettingsInternal *_internal;
}


@property (readonly, getter=isContentAwareDistortionCorrectionEnabled) BOOL contentAwareDistortionCorrectionEnabled;
@property (readonly, getter=isDualCameraFusionEnabled) BOOL dualCameraFusionEnabled;
@property (readonly) ? embeddedThumbnailDimensions;
@property (readonly) NSUInteger expectedPhotoCount;
@property (readonly, getter=isFlashEnabled) BOOL flashEnabled;
@property (readonly) ? livePhotoMovieDimensions;
@property (readonly) ? photoDimensions;
@property (readonly) ? photoProcessingTimeRange;
@property (readonly) ? portraitEffectsMatteDimensions;
@property (readonly) ? previewDimensions;
@property (readonly) ? rawEmbeddedThumbnailDimensions;
@property (readonly) ? rawPhotoDimensions;
@property (readonly, getter=isRedEyeReductionEnabled) BOOL redEyeReductionEnabled;
@property (readonly, getter=isStillImageStabilizationEnabled) BOOL stillImageStabilizationEnabled;
@property (readonly) NSInteger uniqueID;
@property (readonly, getter=isVirtualDeviceFusionEnabled) BOOL virtualDeviceFusionEnabled;


+(id)resolvedSettingsWithUniqueID:(NSInteger)arg0 photoDimensions:(struct ? )arg1 rawPhotoDimensions:(struct ? )arg2 previewDimensions:(struct ? )arg3 embeddedThumbnailDimensions:(struct ? )arg4 rawEmbeddedThumbnailDimensions:(struct ? )arg5 livePhotoMovieEnabled:(BOOL)arg6 livePhotoMovieDimensions:(struct ? )arg7 portraitEffectsMatteDimensions:(struct ? )arg8 hairSegmentationMatteDimensions:(struct ? )arg9 skinSegmentationMatteDimensions:(struct ? )arg10 teethSegmentationMatteDimensions:(struct ? )arg11 glassesSegmentationMatteDimensions:(struct ? )arg12 spatialOverCapturePhotoDimensions:(struct ? )arg13 turboModeEnabled:(BOOL)arg14 flashEnabled:(BOOL)arg15 redEyeReductionEnabled:(BOOL)arg16 HDREnabled:(BOOL)arg17 adjustedPhotoFiltersEnabled:(BOOL)arg18 EV0PhotoDeliveryEnabled:(BOOL)arg19 stillImageStabilizationEnabled:(BOOL)arg20 virtualDeviceFusionEnabled:(BOOL)arg21 squareCropEnabled:(BOOL)arg22 deferredPhotoProxyDimensions:(struct ? )arg23 photoProcessingTimeRange:(struct ? )arg24 contentAwareDistortionCorrectionEnabled:(BOOL)arg25 photoManifest:(id)arg26 digitalFlashUserInterfaceHints:(NSUInteger)arg27 digitalFlashUserInterfaceRGBEstimate:(id)arg28 captureBeforeResolvingSettingsEnabled:(BOOL)arg29 ;
+(void)initialize;
-(BOOL)isAdjustedPhotoFilterRenderingEnabled;
-(BOOL)isCaptureBeforeResolvingSettingsEnabled;
-(BOOL)isEV0PhotoDeliveryEnabled;
-(BOOL)isHDREnabled;
-(BOOL)isSquareCropEnabled;
-(BOOL)isTurboModeEnabled;
-(BOOL)livePhotoMovieEnabled;
-(NSUInteger)digitalFlashUserInterfaceHints;
-(id)_initWithUniqueID:(NSInteger)arg0 photoDimensions:(struct ? )arg1 rawPhotoDimensions:(struct ? )arg2 previewDimensions:(struct ? )arg3 embeddedThumbnailDimensions:(struct ? )arg4 rawEmbeddedThumbnailDimensions:(struct ? )arg5 livePhotoMovieEnabled:(BOOL)arg6 livePhotoMovieDimensions:(struct ? )arg7 portraitEffectsMatteDimensions:(struct ? )arg8 hairSegmentationMatteDimensions:(struct ? )arg9 skinSegmentationMatteDimensions:(struct ? )arg10 teethSegmentationMatteDimensions:(struct ? )arg11 glassesSegmentationMatteDimensions:(struct ? )arg12 spatialOverCapturePhotoDimensions:(struct ? )arg13 turboModeEnabled:(BOOL)arg14 flashEnabled:(BOOL)arg15 redEyeReductionEnabled:(BOOL)arg16 HDREnabled:(BOOL)arg17 adjustedPhotoFiltersEnabled:(BOOL)arg18 EV0PhotoDeliveryEnabled:(BOOL)arg19 stillImageStabilizationEnabled:(BOOL)arg20 virtualDeviceFusionEnabled:(BOOL)arg21 squareCropEnabled:(BOOL)arg22 deferredPhotoProxyDimensions:(struct ? )arg23 photoProcessingTimeRange:(struct ? )arg24 contentAwareDistortionCorrectionEnabled:(BOOL)arg25 photoManifest:(id)arg26 digitalFlashUserInterfaceHints:(NSUInteger)arg27 digitalFlashUserInterfaceRGBEstimate:(id)arg28 captureBeforeResolvingSettingsEnabled:(BOOL)arg29 ;
-(id)debugDescription;
-(id)description;
-(id)digitalFlashRGBEstimate;
-(id)digitalFlashUserInterfaceRGBEstimate;
-(id)photoManifest;
-(struct ? )deferredPhotoProxyDimensions;
-(struct ? )dimensionsForSemanticSegmentationMatteOfType:(id)arg0 ;
-(struct ? )spatialOverCapturePhotoDimensions;
-(void)dealloc;


@end


#endif