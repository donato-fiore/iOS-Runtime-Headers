// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNPERSONSEGMENTATIONGENERATORFAST_H
#define VNPERSONSEGMENTATIONGENERATORFAST_H



#import "VNSegmentationGenerator.h"

@interface VNPersonSegmentationGeneratorFast : VNSegmentationGenerator



+(BOOL)inputMaskRequired;
+(BOOL)rotateImageToMatchNetworkOrientation;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(id)inputImageBlobName;
+(id)inputMaskBlobName;
+(id)outputMaskBlobNameToRequestKey;
+(id)outputMaskBlobNames;


@end


#endif