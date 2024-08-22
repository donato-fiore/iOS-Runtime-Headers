// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNPERSONSEGMENTATIONGENERATORSEMANTICS_H
#define VNPERSONSEGMENTATIONGENERATORSEMANTICS_H



#import "VNSegmentationGenerator.h"

@interface VNPersonSegmentationGeneratorSemantics : VNSegmentationGenerator



+(BOOL)inputMaskRequired;
+(BOOL)rotateImageToMatchNetworkOrientation;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(id)inputImageBlobName;
+(id)inputMaskBlobName;
+(id)outputMaskBlobNames;


@end


#endif