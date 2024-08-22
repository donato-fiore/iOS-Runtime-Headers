// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNIMAGECLASSIFIER_H
#define VNIMAGECLASSIFIER_H


#import <Foundation/Foundation.h>


@interface VNImageClassifier : NSObject



+(BOOL)computeImageDescriptorsWithImage:(id)arg0 regionOfInterest:(struct CGRect )arg1 usingDescriptorProcessor:(struct ImageDescriptorProcessorAbstract *)arg2 tileCount:(int)arg3 augmentationMode:(unsigned int)arg4 scalingImage:(BOOL)arg5 resultantDescriptorBuffer:(*void)arg6 debugIntermediatesDumpPath:(id)arg7 outputDebugDictionary:(id)arg8 options:(id)arg9 metalContext:(id)arg10 canceller:(id)arg11 error:(*id)arg12 ;
+(BOOL)computeLabelsAndConfidence:(*void)arg0 usingDescriptorBuffer:(*void)arg1 populateLabelsAndConfidence:(*void)arg2 options:(id)arg3 metalContext:(id)arg4 error:(*id)arg5 ;
+(id)classifyImageHierarchicallyWithDescriptors:(*void)arg0 usingImageClassifier:(*void)arg1 hierarchicalClassifier:(struct ImageClassifier_HierarchicalModel *)arg2 minimumClassificationConfidence:(float)arg3 minimumClassificationConfidenceRatio:(float)arg4 maximumLeafLabels:(NSUInteger)arg5 maximumHierarchicalLabels:(NSUInteger)arg6 outputDebugDictionary:(id)arg7 options:(id)arg8 metalContext:(id)arg9 error:(*id)arg10 ;
+(id)classifyImageWithDescriptors:(*void)arg0 usingImageClassifier:(*void)arg1 andMinConfidenceForClassification:(float)arg2 outputDebugDictionary:(id)arg3 options:(id)arg4 metalContext:(id)arg5 error:(*id)arg6 ;


@end


#endif