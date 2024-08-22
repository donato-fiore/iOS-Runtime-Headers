// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLOUDPHOTOSERVICES_H
#define CLOUDPHOTOSERVICES_H

@protocol CPLDerivativeGenerator;

#import <Foundation/Foundation.h>


@interface CloudPhotoServices : NSObject <CPLDerivativeGenerator>





+(BOOL)_createVideoResourcesFromInputURL:(id)arg0 withItemScopedIdentifier:(id)arg1 videoAdjustments:(id)arg2 resourceType:(NSUInteger)arg3 forIris:(BOOL)arg4 destinationDirectory:(id)arg5 outputResources:(id)arg6 error:(*id)arg7 ;
+(BOOL)_shouldGenerateHDRMediumVideoDerivative;
+(BOOL)_shouldGenerateLargeVideoDerivativeForAVAsset:(id)arg0 ;
+(BOOL)canGenerateImageDerivativesFromUTI:(id)arg0 ;
+(BOOL)isMovieUTI:(id)arg0 ;
+(BOOL)isUnsupportedOriginalFormatError:(id)arg0 ;
+(BOOL)shouldGenerateVideoDerivativeForAVAsset:(id)arg0 forResourceType:(NSUInteger)arg1 adjusted:(BOOL)arg2 ;
+(NSInteger)paMediaConversionColorSpaceForCloudPhotoDerivativeColorOutput:(NSInteger)arg0 ;
+(NSUInteger)_bestImageResourceTypeForPixelCount:(NSInteger)arg0 ;
+(id)_createCPLResourceFromURL:(id)arg0 withResourceType:(NSUInteger)arg1 uniformType:(id)arg2 itemScopedIdentifier:(id)arg3 ;
+(id)_extractVideoMetadataResourceFrom:(id)arg0 destinationDirectory:(id)arg1 ;
+(id)_filenameForResourceWithItemScopedIdentifier:(id)arg0 resourceType:(NSUInteger)arg1 extension:(id)arg2 ;
+(id)_imageServiceClient;
+(id)_videoServiceClient;
+(id)derivativeImageResourceUniformTypeForResourceType:(NSUInteger)arg0 ;
+(id)generateGIFForVideoAtURL:(id)arg0 destinationURL:(id)arg1 completionHandler:(id)arg2 ;
+(id)transcodeVideoAtURL:(id)arg0 withAdjustments:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 reason:(id)arg4 isCancellable:(BOOL)arg5 completionHandler:(id)arg6 ;
+(id)workQueue;
+(void)_createDerivativeResourcesFromInputURL:(id)arg0 resourceTypes:(id)arg1 withItemScopedIdentifier:(id)arg2 destinationDirectory:(id)arg3 outputResources:(id)arg4 convertToSRGB:(BOOL)arg5 ;
// +(void)_createPosterFrameResourcesFromInputURL:(id)arg0 withItemScopedIdentifier:(id)arg1 includeDerivative:(id)arg2 destinationDirectory:(unk)arg3 outputResources:(id)arg4  ;
+(void)_generateImageDerivativeResourcesFromInputResource:(id)arg0 destinationDirectory:(id)arg1 isAdjusted:(BOOL)arg2 derivativesFilter:(id)arg3 recordChangeType:(NSUInteger)arg4 completionHandler:(id)arg5 ;
+(void)_generateVideoDerivativeResourcesFromInputResource:(id)arg0 withCPLAdjustments:(id)arg1 destinationDirectory:(id)arg2 derivativesFilter:(id)arg3 recordChangeType:(NSUInteger)arg4 includePosterFrame:(BOOL)arg5 completionHandler:(id)arg6 ;
+(void)generateDerivativeResourcesFromInputResource:(id)arg0 withAdjustments:(id)arg1 destinationDirectory:(id)arg2 derivativesFilter:(id)arg3 recordChangeType:(NSUInteger)arg4 includePosterFrameForVideo:(BOOL)arg5 completionHandler:(id)arg6 ;
+(void)generateDerivativeResourcesFromInputResource:(id)arg0 withAdjustments:(id)arg1 destinationDirectory:(id)arg2 includePosterFrameForVideo:(BOOL)arg3 completionHandler:(id)arg4 ;
+(void)generateFullSizeJPEGIfNecessaryFromInputResource:(id)arg0 destinationDirectory:(id)arg1 completionHandler:(id)arg2 ;
+(void)generatePosterFrameForVideoAtURL:(id)arg0 maximumPixelCount:(NSInteger)arg1 destinationURL:(id)arg2 reason:(id)arg3 completionHandler:(id)arg4 ;
+(void)initialize;
+(void)resizeImageAtURL:(id)arg0 destinationURL:(id)arg1 maximumPixelCount:(NSInteger)arg2 bakeInOrientation:(BOOL)arg3 colorOutput:(NSInteger)arg4 reason:(id)arg5 completionHandler:(id)arg6 ;
+(void)resizeImageAtURL:(id)arg0 destinationURL:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif