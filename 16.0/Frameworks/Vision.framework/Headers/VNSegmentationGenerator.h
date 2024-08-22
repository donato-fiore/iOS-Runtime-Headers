// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNSEGMENTATIONGENERATOR_H
#define VNSEGMENTATIONGENERATOR_H

@protocol MTLComputePipelineState;


#import "VNEspressoModelFileBasedDetector.h"
#import "VNProcessingDevice.h"

@interface VNSegmentationGenerator : VNEspressoModelFileBasedDetector {
    VNProcessingDevice *_processingDevice;
    unsigned int _outputMaskPixelFormat;
    BufferSize _espressoMaskInputBufferSize;
    unordered_map<NSString *, espresso_buffer_t, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, espresso_buffer_t>>> _espressoMaskOutputBuffers;
    unordered_map<NSString *, apple::vision::BufferSize, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, apple::vision::BufferSize>>> _espressoMaskOutputBufferSizes;
    BufferSize _espressoInputImageSize;
    BufferSize _espressoInputMaskSize;
    id<MTLComputePipelineState> *_createTileWithScaleComputePipelineState;
    id<MTLComputePipelineState> *_pasteTileComputePipelineState;
}


@property (readonly, nonatomic) BufferSize outputMaskSize;


+(BOOL)supportsTiling;
+(Class)detectorClassForConfigurationOptions:(id)arg0 error:(*id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)needsMetalContext;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(struct BufferSize )calculateNumberOfTilesForNetworkInputImageSize:(struct BufferSize )arg0 networkInputMaskSize:(struct BufferSize )arg1 networkOutputMaskSize:(struct BufferSize )arg2 rotated:(BOOL)arg3 ;


@end


#endif