// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWREDEYEREDUCTIONCONTROLLER_H
#define BWREDEYEREDUCTIONCONTROLLER_H

@class NSDictionary, CIDualRedEyeRepairSession, NSMutableArray, NSString;
@protocol BWRedEyeReductionControllerInputDelegate;


#import "BWStillImageProcessorController.h"

@interface BWRedEyeReductionController : BWStillImageProcessorController <BWRedEyeReductionControllerInputDelegate>

 {
    NSDictionary *_redEyeReductionParametersByPortType;
    CIDualRedEyeRepairSession *_redEyeRepairSession;
    *opaqueCMFormatDescription _outputFormatDescription;
    NSMutableArray *_requestQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_newRedEyeRepairSessionWithMetalCommandQueue:(id)arg0 ;
+(void)initialize;
+(void)prewarm;
-(BOOL)_receivedRequiredFramesForRequest:(id)arg0 ;
-(NSUInteger)type;
-(id)_currentRequest;
-(id)_requestForInput:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(int)_configureRedEyeReductionSessionWithConfiguration:(id)arg0 ;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(void)_clearRequest:(id)arg0 ;
-(void)_processRedEyeReductionWhenNecessaryForRequest:(id)arg0 ;
-(void)_propagateSensorInterfaceRawFromAuxImage:(struct opaqueCMSampleBuffer *)arg0 toPrimaryImage:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_serviceRequests;
-(void)cancelProcessing;
-(void)dealloc;
-(void)didReceiveAllFramesForInput:(id)arg0 ;
-(void)didReceiveFrameForInput:(id)arg0 ;


@end


#endif