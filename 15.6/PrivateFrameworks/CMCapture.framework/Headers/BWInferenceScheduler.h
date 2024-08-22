// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWINFERENCESCHEDULER_H
#define BWINFERENCESCHEDULER_H

@class NSMapTable;
@protocol OS_dispatch_workloop;

#import <Foundation/Foundation.h>


@interface BWInferenceScheduler : NSObject {
    os_unfair_lock_s _connectionsLock;
    NSMapTable *_connectionsByIdentifier;
    NSObject<OS_dispatch_workloop> *_inferenceWorkloop;
    NSObject<OS_dispatch_workloop> *_scalingWorkloop;
    NSObject<OS_dispatch_workloop> *_submissionWorkloop;
}




+(void)initialize;
-(NSUInteger)registerInferenceConnection;
-(id)_queueForJob:(struct ? *)arg0 fromConnection:(id)arg1 ;
-(id)init;
-(int)performInferencesForConnection:(NSUInteger)arg0 usingInputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 skippingInferencesWithTypes:(id)arg3 ;
-(int)prepareForInferenceRequirements:(id)arg0 dependencyProviderSource:(id)arg1 formatProvider:(id)arg2 pixelBufferPoolProvider:(id)arg3 connection:(NSUInteger)arg4 ;
// -(void)_processJobsFromFramebuffer:(id)arg0 usingInputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 inferencePropagationHandler:(id)arg2 atExecutionTime:(unk)arg3 forConnection:(struct ? )arg4  ;
-(void)dealloc;
-(void)unregisterInferenceConnection:(NSUInteger)arg0 ;


@end


#endif