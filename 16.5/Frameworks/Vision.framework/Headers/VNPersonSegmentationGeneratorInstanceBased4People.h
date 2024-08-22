// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNPERSONSEGMENTATIONGENERATORINSTANCEBASED4PEOPLE_H
#define VNPERSONSEGMENTATIONGENERATORINSTANCEBASED4PEOPLE_H



#import "VNSegmentationGenerator.h"

@interface VNPersonSegmentationGeneratorInstanceBased4People : VNSegmentationGenerator {
    unordered_map<NSString *, espresso_buffer_t, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, espresso_buffer_t>>> _espressoConfidencesOutputBuffer;
}




+(BOOL)inputMaskRequired;
+(BOOL)rotateImageToMatchNetworkOrientation;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
+(id)inputImageBlobName;
+(id)inputMaskBlobName;
+(id)outputConfidenceBlobNames;
+(id)outputMaskBlobNameToRequestKey;
+(id)outputMaskBlobNames;
-(BOOL)bindOutputConfidenceBuffersAndReturnError:(*id)arg0 ;
-(float)maskConfidenceForOutputMaskBlobName:(id)arg0 ;
-(void)initializeOutputConfidenceBuffers:(*void)arg0 ;


@end


#endif