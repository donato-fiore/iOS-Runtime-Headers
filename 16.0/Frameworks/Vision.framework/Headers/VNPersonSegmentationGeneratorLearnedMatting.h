// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNPERSONSEGMENTATIONGENERATORLEARNEDMATTING_H
#define VNPERSONSEGMENTATIONGENERATORLEARNEDMATTING_H



#import "VNSegmentationGenerator.h"

@interface VNPersonSegmentationGeneratorLearnedMatting : VNSegmentationGenerator



+(BOOL)inputMaskRequired;
+(BOOL)rotateImageToMatchNetworkOrientation;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(id)inputImageBlobName;
+(id)inputMaskBlobName;
+(id)outputMaskBlobNames;


@end


#endif