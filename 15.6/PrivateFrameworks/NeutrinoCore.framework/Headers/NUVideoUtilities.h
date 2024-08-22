// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUVIDEOUTILITIES_H
#define NUVIDEOUTILITIES_H


#import <Foundation/Foundation.h>


@interface NUVideoUtilities : NSObject



+(BOOL)compositionInstructions:(id)arg0 areEqualToCompositionInstructions:(id)arg1 ;
+(BOOL)deviceSupportsHardware10BitHEVCEncoding;
+(BOOL)deviceSupportsHardwareHEVCEncoding;
+(BOOL)deviceSupportsHighDynamicRangeVideo;
+(BOOL)isAVAssetDolbyProfile5:(id)arg0 error:(*id)arg1 ;
+(BOOL)isAVAssetHDR:(id)arg0 error:(*id)arg1 ;
+(BOOL)isAssetUnsupportedCorruptPortraitVideo:(id)arg0 ;
+(BOOL)isAssetUnsupportedLegacyPortraitVideo:(id)arg0 ;
+(BOOL)isMetadataTrackStillImageDisplayTimeMarkerInLivePhoto:(id)arg0 ;
+(BOOL)isMetadataTrackWithLivePhotoInfo:(id)arg0 ;
+(BOOL)isMetadataTrackWithStillImageDimensionsInLivePhoto:(id)arg0 ;
+(BOOL)isMetadataTrackWithStillImageTransformInLivePhoto:(id)arg0 ;
+(BOOL)metadataTrack:(id)arg0 containsIdentifier:(id)arg1 ;
+(BOOL)metadataTrack:(id)arg0 containsIdentifiers:(id)arg1 ;
+(BOOL)metadataTrackContainsPortraitVideoData:(id)arg0 ;
+(BOOL)readFromReader:(id)arg0 andWriteToWriter:(id)arg1 stillImageTime:(struct ? )arg2 createCustomMetadata:(BOOL)arg3 geometryTransform:(id)arg4 inputSize:(struct CGSize )arg5 outputSize:(struct CGSize )arg6 progress:(id)arg7 error:(*id)arg8 ;
+(BOOL)track:(id)arg0 hasSamplesForEachSampleInTrack:(id)arg1 ;
+(BOOL)updateVideoMetadataAtURL:(id)arg0 withItems:(id)arg1 stillImageTime:(struct ? )arg2 error:(*id)arg3 ;
+(BOOL)videoTrackContainsDolbyVisionMetadata:(id)arg0 ;
+(NSInteger)videoOrientationForAsset:(id)arg0 videoComposition:(id)arg1 ;
+(NSInteger)videoOrientationForAssetPreferredTransform:(struct CGAffineTransform )arg0 ;
+(id)auxiliaryTrackInAsset:(id)arg0 ofType:(NSInteger)arg1 error:(*id)arg2 ;
+(id)bestOutputSettingsPresetForTargetVideoSize:(struct ? )arg0 codec:(unsigned int)arg1 ;
+(id)cleanApertureVideoSettingsFor:(struct ? )arg0 scale:(struct ? )arg1 videoSize:(struct ? )arg2 ;
+(id)compositionFromVideoComposition:(id)arg0 ;
+(id)debugDescriptionOfAssetTrack:(id)arg0 ;
+(id)deepMutableCopyVideoComposition:(id)arg0 ;
+(id)defaultExportCodecForComposition:(id)arg0 ;
+(id)defaultOutputColorSpaceForComposition:(id)arg0 ;
+(id)defaultVideoSettingsForAVAssetReaderWithHDR:(BOOL)arg0 forAuxiliaryImageType:(NSInteger)arg1 ;
+(id)firstEnabledVideoTrackInAsset:(id)arg0 error:(*id)arg1 ;
+(id)metadataTrackWithPortraitVideoDataInAsset:(id)arg0 ;
+(id)metadataTrackWithStillImageDimensionsInLivePhotoAsset:(id)arg0 ;
+(id)metadataTrackWithStillImageDisplayTimeMarkerInLivePhotoAsset:(id)arg0 ;
+(id)metadataTrackWithStillImageTransformInLivePhotoAsset:(id)arg0 ;
+(id)newPixelBufferOfSize:(struct ? )arg0 format:(unsigned int)arg1 ;
+(id)pixelFormatStringForCVPixelBuffer:(struct __CVBuffer *)arg0 ;
+(id)readTimedMetadataGroupAtTime:(struct ? )arg0 fromTrack:(id)arg1 outputSettings:(id)arg2 videoComposition:(id)arg3 error:(*id)arg4 ;
+(id)readerOutputForAsset:(id)arg0 outputSettings:(id)arg1 videoComposition:(id)arg2 auxiliaryImageType:(NSInteger)arg3 error:(*id)arg4 ;
+(id)repeatAudio:(id)arg0 count:(NSInteger)arg1 error:(*id)arg2 ;
+(id)repeatVideo:(id)arg0 count:(NSInteger)arg1 error:(*id)arg2 ;
+(id)repeatVideoComposition:(id)arg0 count:(NSInteger)arg1 error:(*id)arg2 ;
+(id)requiredVideoCompositionOutputTracksForAsset:(id)arg0 ;
+(id)rgbVideoSettingsForAVAssetReader;
+(id)urlOfAVAsset:(id)arg0 ;
+(id)videoCompositionDescription:(id)arg0 ;
+(id)videoDescription:(id)arg0 ;
+(struct ? )cleanApertureOfTrack:(id)arg0 oriented:(BOOL)arg1 ;
+(struct ? )conformRange:(struct ? )arg0 inRange:(struct ? )arg1 ;
+(struct ? )encodedPixelSizeOfTrack:(id)arg0 oriented:(BOOL)arg1 ;
+(struct ? )minimumFrameDurationForAsset:(id)arg0 ;
+(struct ? )minimumFrameDurationForAsset:(id)arg0 videoComposition:(id)arg1 ;
+(struct ? )minimumFrameDurationForAssetTrack:(id)arg0 ;
+(struct ? )naturalSizeOfTrack:(id)arg0 oriented:(BOOL)arg1 ;
+(struct ? )readStillImageTimeFromVideoAsset:(id)arg0 ;
+(struct CGAffineTransform )preferredTransformFromOrientation:(NSInteger)arg0 size:(struct ? )arg1 ;
+(struct __CVBuffer *)readVideoFrameAtTime:(struct ? )arg0 fromAsset:(id)arg1 outputSettings:(id)arg2 videoComposition:(id)arg3 auxiliaryImageType:(NSInteger)arg4 error:(*id)arg5 ;
+(void)readNextPixelBuffer:(id)arg0 output:(id)arg1 block:(id)arg2 ;
+(void)readNextSampleBuffer:(id)arg0 output:(id)arg1 block:(id)arg2 ;


@end


#endif