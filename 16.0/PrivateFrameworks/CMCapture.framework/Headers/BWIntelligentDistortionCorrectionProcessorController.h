// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINTELLIGENTDISTORTIONCORRECTIONPROCESSORCONTROLLER_H
#define BWINTELLIGENTDISTORTIONCORRECTIONPROCESSORCONTROLLER_H

@class NSDictionary, NSMutableArray, NSString;
@protocol BWIntelligentDistortionCorrectionProcessorInputDelegate, FigIntelligentDistortionCorrectionProcessor;


#import "BWStillImageProcessorController.h"
#import "BWIntelligentDistortionCorrectionProcessorControllerConfiguration.h"
#import "FigStateMachine.h"
#import "BWIntelligentDistortionCorrectionProcessorRequest.h"

@interface BWIntelligentDistortionCorrectionProcessorController : BWStillImageProcessorController <BWIntelligentDistortionCorrectionProcessorInputDelegate>

 {
    BWIntelligentDistortionCorrectionProcessorControllerConfiguration *_configuration;
    NSDictionary *_idcMaxZoomScaleFactorByPortType;
    id<FigIntelligentDistortionCorrectionProcessor> *_processor;
    *opaqueCMFormatDescription _outputImageFormatDescription;
    *opaqueCMFormatDescription _outputImageGainMapFormatDescription;
    *opaqueCMFormatDescription _outputImageDemosaicedRawFormatDescription;
    FigStateMachine *_stateMachine;
    NSMutableArray *_requestQueue;
    BWIntelligentDistortionCorrectionProcessorRequest *_currentRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)captureTypesWithIntelligentDistortionCorrectionSupport;
+(void)initialize;
-(NSUInteger)type;
-(id)initWithConfiguration:(id)arg0 ;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(void)cancelProcessing;
-(void)dealloc;
-(void)inputReceivedNewInputData:(id)arg0 ;


@end


#endif