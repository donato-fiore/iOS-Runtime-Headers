// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEFERREDPROCESSORCONTROLLER_H
#define BWDEFERREDPROCESSORCONTROLLER_H

@class NSMutableArray;


#import "BWStillImageProcessorController.h"
#import "BWDeferredProcessorRequest.h"
#import "FigStateMachine.h"

@interface BWDeferredProcessorController : BWStillImageProcessorController {
    NSMutableArray *_processorRequests;
    BWDeferredProcessorRequest *_currentRequest;
    FigStateMachine *_stateMachine;
    *opaqueCMFormatDescription _outputFormatDescription;
}




+(void)initialize;
-(NSUInteger)type;
-(id)init;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(void)cancelProcessing;
-(void)dealloc;
-(void)inputReadyForProcessing:(id)arg0 ;


@end


#endif