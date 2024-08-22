// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWJASPERDISPARITYPROCESSORCONTROLLER_H
#define BWJASPERDISPARITYPROCESSORCONTROLLER_H

@class ADJasperColorV2Executor, NSMutableArray, NSString;
@protocol BWJasperDisparityProcessorInputDelegate;


#import "BWStillImageProcessorController.h"
#import "FigStateMachine.h"
#import "BWJasperDisparityProcessorControllerConfiguration.h"
#import "BWJasperDisparityProcessorRequest.h"

@interface BWJasperDisparityProcessorController : BWStillImageProcessorController <BWJasperDisparityProcessorInputDelegate>

 {
    FigStateMachine *_stateMachine;
    BWJasperDisparityProcessorControllerConfiguration *_configuration;
    ADJasperColorV2Executor *_adStillImageExecutor;
    NSMutableArray *_requestQueue;
    BWJasperDisparityProcessorRequest *_currentRequest;
    *opaqueCMFormatDescription _depthFormatDescription;
    ? _identityMatrix;
    NSMutableArray *_pointClouds;
    os_unfair_lock_s _pointCloudsLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)finishProcessingCurrentInputNow;
-(NSUInteger)type;
-(id)initWithConfiguration:(id)arg0 ;
-(id)jasperPointCloudForColorBuffer:(id)arg0 ;
-(int)_setupJasperDisparityProcessor;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(void)_execute;
-(void)_serviceNextRequest;
-(void)_updateStateIfNeeded;
-(void)addPointCloudToTimeMachine:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)cancelProcessing;
-(void)dealloc;
-(void)inputReadyToExecute:(id)arg0 ;


@end


#endif