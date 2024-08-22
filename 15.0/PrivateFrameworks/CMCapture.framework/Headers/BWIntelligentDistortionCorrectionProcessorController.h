// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
    FigStateMachine *_stateMachine;
    NSMutableArray *_requestQueue;
    BWIntelligentDistortionCorrectionProcessorRequest *_currentRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)captureTypesWithIntelligentDistortionCorrectionSupport;
+(id)portTypesWithIntelligentDistortionCorrectionSupportWithSensorConfigurations:(id)arg0 intelligentDistortionCorrectionVersion:(int)arg1 ;
+(void)initialize;
-(NSUInteger)type;
-(id)initWithConfiguration:(id)arg0 ;
-(int)_customPrepareProcessor:(id)arg0 ;
-(int)_figErrorFromIntelligentDistortionCorrectionStatus:(int)arg0 ;
-(int)_loadSetupAndPrepareProcessor;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(struct CGRect )_smallerOrEqualRectWithValuesMultipleOfTwo:(struct CGRect )arg0 ;
-(void)_getAndAttachGDCInformationToDemosaicedRawSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 inputWidth:(NSUInteger)arg1 inputHeight:(NSUInteger)arg2 finalImageDimensions:(struct ? )arg3 settingsID:(NSInteger)arg4 ;
-(void)_process;
-(void)_resetProcessor;
-(void)_serviceNextRequest;
-(void)_updateStateIfNeeded;
-(void)cancelProcessing;
-(void)dealloc;
-(void)inputReceivedNewInputData:(id)arg0 ;


@end


#endif