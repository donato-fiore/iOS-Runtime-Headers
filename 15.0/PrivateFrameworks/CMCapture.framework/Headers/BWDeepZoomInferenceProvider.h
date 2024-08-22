// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWDEEPZOOMINFERENCEPROVIDER_H
#define BWDEEPZOOMINFERENCEPROVIDER_H



#import "BWTiledEspressoInferenceProvider.h"
#import "BWInferenceVideoRequirement.h"
#import "FigDeepZoomMetalStage.h"
#import "BWDeepZoomInferenceConfiguration.h"

@interface BWDeepZoomInferenceProvider : BWTiledEspressoInferenceProvider {
    BWInferenceVideoRequirement *_inputVideoRequirement;
    BWInferenceVideoRequirement *_outputVideoRequirement;
    *opaqueCMFormatDescription _outputFormatDescription;
    FigDeepZoomMetalStage *_deepZoomMetalStage;
    BWDeepZoomInferenceConfiguration *_inferenceConfig;
    ? _tileConfig;
    ? _tileCount;
    ? _tileScale;
    ? _inputSize;
    ? _inputROI;
    CGRect _denormalizedSourceCropRect;
}




+(void)initialize;
-(id)initWithConfiguration:(id)arg0 resourceProvider:(id)arg1 ;
-(int)createInputTileFor:(id)arg0 to:(struct __CVBuffer *)arg1 withInputs:(id)arg2 atPosition:(*id)arg3 cmdBuffer;
-(int)preProcessOutputBuffer:(struct __CVBuffer *)arg0 ;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)propagateInferenceResultsFrom:(struct __CVBuffer *)arg0 to:(struct opaqueCMSampleBuffer *)arg1 ;
-(int)purgeIntermediateResources;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
-(int)type;
-(int)writeOutputTile:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 withAdditionalPixelBuffers:(id)arg2 withInputTilePixelBuffers:(id)arg3 withInputFullPixelBuffers:(id)arg4 atPosition:(*id)arg5 cmdBuffer;
-(void)dealloc;


@end


#endif