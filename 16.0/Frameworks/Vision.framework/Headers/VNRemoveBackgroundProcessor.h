// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNREMOVEBACKGROUNDPROCESSOR_H
#define VNREMOVEBACKGROUNDPROCESSOR_H

@class MPSImageSpatioTemporalGuidedFilter;
@protocol MTLComputePipelineState, OS_dispatch_semaphore;


#import "VNEspressoModelFileBasedDetector.h"

@interface VNRemoveBackgroundProcessor : VNEspressoModelFileBasedDetector {
    NSUInteger _networkWidth;
    NSUInteger _networkHeight;
    ? _outputMaskEspressoBuffer;
    ? _outputConfidenceEspressoBuffer;
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;
    id<MTLComputePipelineState> *_assembleConstraintsState;
    id<MTLComputePipelineState> *_applyMaskComputeState;
    id<MTLComputePipelineState> *_copyCropComputeState;
    NSObject<OS_dispatch_semaphore> *_removeBackgroundSemaphore;
}




+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg0 ;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg0 ;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)needsMetalContext;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(void)dealloc;


@end


#endif