// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNPERSONSEGMENTATIONGENERATORLEARNEDMATTINGTILED_H
#define VNPERSONSEGMENTATIONGENERATORLEARNEDMATTINGTILED_H



#import "VNPersonSegmentationGeneratorLearnedMatting.h"

@interface VNPersonSegmentationGeneratorLearnedMattingTiled : VNPersonSegmentationGeneratorLearnedMatting



+(BOOL)supportsTiling;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
-(struct BufferSize )calculateNumberOfTilesForNetworkInputImageSize:(struct BufferSize )arg0 networkInputMaskSize:(struct BufferSize )arg1 networkOutputMaskSize:(struct BufferSize )arg2 rotated:(BOOL)arg3 ;
-(struct BufferSize )outputMaskSize;


@end


#endif