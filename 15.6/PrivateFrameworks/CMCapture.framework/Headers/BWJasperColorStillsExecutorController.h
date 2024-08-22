// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWJASPERCOLORSTILLSEXECUTORCONTROLLER_H
#define BWJASPERCOLORSTILLSEXECUTORCONTROLLER_H

@class ADJasperColorStillsExecutor, NSMutableArray, NSString;
@protocol BWJasperColorStillsExecutorInputDelegate;


#import "BWStillImageProcessorController.h"
#import "FigStateMachine.h"
#import "BWJasperColorStillsExecutorControllerConfiguration.h"
#import "BWJasperColorStillsExecutorRequest.h"

@interface BWJasperColorStillsExecutorController : BWStillImageProcessorController <BWJasperColorStillsExecutorInputDelegate>

 {
    FigStateMachine *_stateMachine;
    BWJasperColorStillsExecutorControllerConfiguration *_configuration;
    ADJasperColorStillsExecutor *_adStillImageExecutor;
    NSMutableArray *_requestQueue;
    BWJasperColorStillsExecutorRequest *_currentRequest;
    *opaqueCMFormatDescription _depthFormatDescription;
    ? _identityMatrix;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)finishProcessingCurrentInputNow;
-(NSUInteger)type;
-(id)initWithConfiguration:(id)arg0 ;
-(int)_createColorCameraCalibrationWithColorCameraCalibrationOverride:(id)arg0 colorCameraCalibrationOut:(*id)arg1 ;
-(int)_setupJasperColorStillsExecutor;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(void)_execute;
-(void)_serviceNextRequest;
-(void)_updateStateIfNeeded;
-(void)cancelProcessing;
-(void)dealloc;
-(void)inputReadyToExecute:(id)arg0 ;


@end


#endif