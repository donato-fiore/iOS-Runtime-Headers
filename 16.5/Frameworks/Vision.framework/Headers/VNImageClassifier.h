// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNIMAGECLASSIFIER_H
#define VNIMAGECLASSIFIER_H


#import <Foundation/Foundation.h>


@interface VNImageClassifier : NSObject



+(?)computeImageCropWithImage:(?)arg0 regionOfInterest:(?)arg1 usingDescriptorProcessor:(?)arg2 scalingImage:(?)arg3 options:(?)arg4 pixelBuffererror;
+(?)computeImageDescriptorsWithImage:(?)arg0 pixelBuffer:(?)arg1 regionOfInterest:(?)arg2 usingDescriptorProcessor:(?)arg3 tileCount:(?)arg4 augmentationMode:(?)arg5 resultantDescriptorBuffer:(?)arg6 options:(?)arg7 metalContext:(?)arg8 canceller:(?)arg9 tileColumns:(?)arg10 tileRowserror;
+(BOOL)_dumpIntermediatesFullImage:(id)arg0 imageURL:(id)arg1 requiredImageSource:(struct __CVBuffer *)arg2 imageProcessingType:(int)arg3 error:(*id)arg4 ;
+(BOOL)_dumpIntermediatesTiles:(id)arg0 imageURL:(id)arg1 requiredImageSource:(struct __CVBuffer *)arg2 imageProcessingType:(int)arg3 allocatedTileCount:(unsigned int)arg4 imageTiles:(*void)arg5 bytesPerPixel:(int)arg6 numTiles:(unsigned int)arg7 scaleFactor:(float)arg8 augmentationMode:(unsigned int)arg9 scalingImage:(BOOL)arg10 error:(*id)arg11 ;
+(BOOL)computeLabelsAndConfidence:(*void)arg0 usingDescriptorBuffer:(*void)arg1 populateLabelsAndConfidence:(*void)arg2 options:(id)arg3 metalContext:(id)arg4 error:(*id)arg5 ;
+(id)classifyImageHierarchicallyWithDescriptors:(*void)arg0 usingImageClassifier:(*void)arg1 hierarchicalClassifier:(struct ImageClassifier_HierarchicalModel *)arg2 minimumClassificationConfidence:(float)arg3 minimumClassificationConfidenceRatio:(float)arg4 maximumLeafLabels:(NSUInteger)arg5 maximumHierarchicalLabels:(NSUInteger)arg6 options:(id)arg7 metalContext:(id)arg8 error:(*id)arg9 ;
+(id)classifyImageWithDescriptors:(*void)arg0 usingImageClassifier:(*void)arg1 andMinConfidenceForClassification:(float)arg2 options:(id)arg3 metalContext:(id)arg4 error:(*id)arg5 ;


@end


#endif