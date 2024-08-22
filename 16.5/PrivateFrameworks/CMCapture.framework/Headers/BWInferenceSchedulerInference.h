// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWINFERENCESCHEDULERINFERENCE_H
#define BWINFERENCESCHEDULERINFERENCE_H

@class NSString;
@protocol BWInferenceJobProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePreventable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceProvider;

#import <Foundation/Foundation.h>


@interface BWInferenceSchedulerInference : NSObject <BWInferenceJobProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePreventable>

 {
    id<BWInferencePreventable> *_preventable;
    uint8_t _previousExecutionTimeInSeconds;
    BOOL _mustExecuteWhenAllowed;
    BOOL _propagatesFrameRatePrevention;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<BWInferenceExecutable> *executable;
@property (readonly, nonatomic) NSObject<BWInferenceExtractable> *extractable;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) int inferenceType; // ivar: _inferenceType
@property (readonly, nonatomic) float maximumFramesPerSecond; // ivar: _maximumFramesPerSecond
@property (readonly, nonatomic) BOOL mustExecuteWhenAllowed;
@property (readonly, nonatomic) ? previousExecutionTime;
@property (readonly, nonatomic) unsigned int priority; // ivar: _priority
@property (readonly, nonatomic) NSObject<BWInferencePropagatable> *propagatable;
@property (readonly, nonatomic) NSObject<BWInferenceProvider> *provider; // ivar: _provider
@property (readonly, nonatomic) NSObject<BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type;


+(void)initialize;
-(id)initWithInferenceRequirement:(id)arg0 ;
-(id)newStorage;
-(id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 executionTime:(struct ? )arg1 ;
-(int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withExecutionTime:(struct ? )arg2 completionHandler:(id)arg3 ;
-(int)prepareForExecution;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;


@end


#endif