// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIPHOTOEDITHELPER_H
#define PIPHOTOEDITHELPER_H


#import <Foundation/Foundation.h>


@interface PIPhotoEditHelper : NSObject



+(BOOL)areCPVAssetsEditable;
+(BOOL)canInterpretDataWithFormatIdentifier:(id)arg0 formatVersion:(id)arg1 ;
+(BOOL)is3DEffect:(id)arg0 ;
+(BOOL)isAVAssetEditable:(id)arg0 ;
+(BOOL)isPortraitEffect:(id)arg0 ;
+(BOOL)isPortraitStageEffect:(id)arg0 ;
+(id)_imageRenderRequestWithComposition:(id)arg0 wideGamut:(BOOL)arg1 ;
+(id)adjustmentConstants;
+(id)assetIdentifierForURL:(id)arg0 type:(id)arg1 useEmbeddedPreview:(BOOL)arg2 ;
+(id)compositionByRemovingVideoAndLivePhotoAdjustments:(id)arg0 ;
+(id)effectNameForFilterName:(id)arg0 ;
+(id)filterNameForEffectName:(id)arg0 ;
+(id)geometryRequestWithComposition:(id)arg0 ;
+(id)imagePropertiesRequestWithComposition:(id)arg0 ;
+(id)imageRenderRequestWithComposition:(id)arg0 fillInSize:(struct CGSize )arg1 wideGamut:(BOOL)arg2 ;
+(id)imageRenderRequestWithComposition:(id)arg0 fitInSize:(struct CGSize )arg1 wideGamut:(BOOL)arg2 ;
+(id)imageSourceWithCIImage:(id)arg0 orientation:(NSInteger)arg1 ;
+(id)imageSourceWithURL:(id)arg0 type:(id)arg1 proxyImage:(id)arg2 orientation:(NSInteger)arg3 useEmbeddedPreview:(BOOL)arg4 ;
+(id)imageSourceWithURL:(id)arg0 type:(id)arg1 useEmbeddedPreview:(BOOL)arg2 ;
+(id)knownFormatsVersionsMap;
+(id)livePhotoSourceWithPhotoSource:(id)arg0 videoSource:(id)arg1 ;
+(id)newAdjustmentWithIdentifier:(id)arg0 ;
+(id)newAdjustmentWithName:(id)arg0 ;
+(id)newComposition;
+(id)newCompositionControllerWithComposition:(id)arg0 ;
+(id)newImageRenderClientWithName:(id)arg0 ;
+(id)photosSchema;
+(id)pipelineFiltersForCropping;
+(id)pipelineFiltersForOriginalGeometry;
+(id)pipelineFiltersForRAWShowingOriginalWithGeometry;
+(id)pipelineFiltersForShowingOriginal;
+(id)pipelineFiltersForShowingOriginalWithGeometry;
+(id)priorityWithLevel:(NSInteger)arg0 ;
+(id)updateCropAdjustmentController:(id)arg0 after:(id)arg1 error:(*id)arg2 ;
+(id)validatedCompositionCopyForComposition:(id)arg0 mediaType:(NSInteger)arg1 ;
+(id)videoPropertiesRequestWithComposition:(id)arg0 ;
+(id)videoRenderRequestWithComposition:(id)arg0 fitInSize:(struct CGSize )arg1 ;
+(id)videoSourceWithURL:(id)arg0 ;
+(struct CGImage *)newCGImageFromBufferImage:(id)arg0 ;
+(void)handlePIGlobalSettings:(id)arg0 ;
+(void)initialize;
+(void)preheatEditDependencies;


@end


#endif