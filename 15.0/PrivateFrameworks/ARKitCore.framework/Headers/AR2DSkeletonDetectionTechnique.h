// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AR2DSKELETONDETECTIONTECHNIQUE_H
#define AR2DSKELETONDETECTIONTECHNIQUE_H



#import "ARMLImageProcessingTechnique.h"
#import "AR2DSkeletonDetectionPostProcessGPU.h"

@interface AR2DSkeletonDetectionTechnique : ARMLImageProcessingTechnique {
    AR2DSkeletonDetectionPostProcessGPU *_postProcessorGPU;
    *__CVPixelBufferPool _heatmapPool;
    *__CVPixelBufferPool _affinityPool;
}




-(?)createResultDataFromPixelBuffer:(?)arg0 numberOfOutputTensors:(?)arg1 imageDataForNeuralNetwork:(?)arg2 inputImageData:(?)arg3 rotationNeededregionOfInterest;
-(CGFloat)requiredTimeInterval;
-(id)init;
-(id)networkModesForOrientation:(NSInteger)arg0 ;
-(struct ? )networkInputParams;
-(void)_endLoadingMLModelSignpost;
-(void)_endMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startLoadingMLModelSignpost;
-(void)_startMLCreateResultSignpostWithTimestamp:(CGFloat)arg0 orientation:(NSInteger)arg1 outputSize:(struct CGSize )arg2 ;
-(void)_startMLProcessingSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif