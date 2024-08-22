// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWINFERENCESCHEDULERSCALER_H
#define BWINFERENCESCHEDULERSCALER_H

@class NSString, NSArray;
@protocol BWInferenceJobProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePropagatable, BWInferenceJobProvider, BWInferencePreventable, BWInferenceProvider, BWInferenceExtractable;

#import <Foundation/Foundation.h>

#import "BWInferenceVideoRequirement.h"

@interface BWInferenceSchedulerScaler : NSObject <BWInferenceJobProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePropagatable, BWInferenceJobProvider, BWInferencePreventable>

 {
    BWInferenceVideoRequirement *_inputRequirement;
    id<BWInferenceProvider> *_provider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<BWInferenceExecutable> *executable;
@property (readonly, nonatomic) NSObject<BWInferenceExtractable> *extractable;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *inputVideoRequirements;
@property (readonly, nonatomic) BOOL mustExecuteWhenAllowed;
@property (readonly, nonatomic) NSArray *outputRequirements; // ivar: _outputRequirements
@property (readonly, nonatomic) NSObject<BWInferencePropagatable> *propagatable;
@property (readonly, nonatomic) NSObject<BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type;


-(id)initWithInputRequirement:(id)arg0 derivedFromRequirement:(id)arg1 outputRequirements:(id)arg2 options:(NSUInteger)arg3 ;
-(id)newStorage;
-(id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 executionTime:(struct ? )arg1 ;
-(int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withExecutionTime:(struct ? )arg2 completionHandler:(id)arg3 ;
-(int)prepareForExecution;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif