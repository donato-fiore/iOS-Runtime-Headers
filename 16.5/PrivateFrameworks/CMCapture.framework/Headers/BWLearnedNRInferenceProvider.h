// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWLEARNEDNRINFERENCEPROVIDER_H
#define BWLEARNEDNRINFERENCEPROVIDER_H

@class LearnedNRMetalStage;


#import "BWTiledEspressoInferenceProvider.h"
#import "BWInferenceVideoRequirement.h"
#import "BWLearnedNRInferenceConfiguration.h"

@interface BWLearnedNRInferenceProvider : BWTiledEspressoInferenceProvider {
    BWInferenceVideoRequirement *_inputVideoRequirement;
    BWInferenceVideoRequirement *_outputVideoRequirement;
    *opaqueCMFormatDescription _outputFormatDescription;
    BWLearnedNRInferenceConfiguration *_configuration;
    LearnedNRMetalStage *_metalStage;
    ? _numTiles;
    ? _tileSize;
    ? _renderROI;
    BOOL _isInputFormatRaw;
}




+(void)initialize;
-(id)initWithConfiguration:(id)arg0 resourceProvider:(id)arg1 ;
-(int)createInputTileFor:(id)arg0 to:(struct __CVBuffer *)arg1 withInputs:(id)arg2 atPosition:(*id)arg3 cmdBuffer;
-(int)preProcessOutputBuffer:(struct __CVBuffer *)arg0 forMediaKey:(id)arg1 ;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)propagateInferenceResultFrom:(struct __CVBuffer *)arg0 forMediaKey:(id)arg1 to:(struct opaqueCMSampleBuffer *)arg2 ;
-(int)purgeIntermediateResources;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
-(int)type;
-(int)writeOutputFor:(id)arg0 to:(struct __CVBuffer *)arg1 fromNetworkOutputTiles:(id)arg2 withAdditionalPixelBuffers:(id)arg3 withInputTilePixelBuffers:(id)arg4 withInputFullPixelBuffers:(id)arg5 atPosition:(*id)arg6 cmdBuffer;
-(void)dealloc;


@end


#endif