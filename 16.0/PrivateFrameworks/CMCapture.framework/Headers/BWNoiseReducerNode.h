// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWNOISEREDUCERNODE_H
#define BWNOISEREDUCERNODE_H

@class NSDictionary;


#import "BWNode.h"

@interface BWNoiseReducerNode : BWNode {
    NSDictionary *_cameraTuningOptions;
    NSDictionary *_noiseReductionOptions;
    *opaqueCMFormatDescription _outputFormatDescription;
    *NoiseReductionCtx_s _context;
    int _contextSynchronization;
    int _gpuPriority;
    BOOL _threaded;
    BOOL _processLuma;
    BOOL _useInPlaceAlgorithm;
    BOOL _quadraHighResStillImageCaptureEnabled;
    *__CVBuffer _quadraResampledIntermediateBuffer;
    *opaqueCMFormatDescription _quadraResampledIntermediaBufferFormatDescription;
    *OpaqueVTPixelTransferSession _quadraResampledTransferSession;
}




+(void)initialize;
-(BOOL)quadraHighResStillImageCaptureEnabled;
-(id)initWithCameraTuningDictionary:(id)arg0 sensorIDDictionary:(id)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setQuadraHighResStillImageCaptureEnabled:(BOOL)arg0 ;


@end


#endif