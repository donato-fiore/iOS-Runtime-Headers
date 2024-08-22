// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNPERSONSEGMENTATIONGENERATORLEARNEDMATTINGTILED_H
#define VNPERSONSEGMENTATIONGENERATORLEARNEDMATTINGTILED_H

@protocol MTLComputePipelineState;


#import "VNPersonSegmentationGeneratorLearnedMatting.h"

@interface VNPersonSegmentationGeneratorLearnedMattingTiled : VNPersonSegmentationGeneratorLearnedMatting {
    id<MTLComputePipelineState> *_createTileWithScaleComputePipelineState;
    id<MTLComputePipelineState> *_pasteTileComputePipelineState;
}




+(BOOL)supportsTiling;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg0 ;
-(id)_bindPixelBufferToTexture:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(struct BufferSize )_calculateNumberOfTilesForNetworkInputImageSize:(struct BufferSize )arg0 networkInputMaskSize:(struct BufferSize )arg1 networkOutputMaskSize:(struct BufferSize )arg2 rotated:(BOOL)arg3 ;
-(struct BufferSize )outputMaskSize;
-(struct optional<std::tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>>> )_processTiledImageBuffer:(id)arg0 inputMaskObservation:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(struct optional<std::tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>>> )processLockedImageBuffer:(struct __CVBuffer *)arg0 inputMaskObservation:(id)arg1 options:(id)arg2 error:(*id)arg3 ;


@end


#endif