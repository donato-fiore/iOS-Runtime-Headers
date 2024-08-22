// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCESCHEDULERSCALER_H
#define BWINFERENCESCHEDULERSCALER_H

@class NSString, NSArray;
@protocol BWInferenceJobProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferenceJobProvider, BWInferencePreventable, BWInferenceProvider, BWInferenceExtractable, BWInferencePropagatable;

#import <Foundation/Foundation.h>

#import "BWInferenceVideoRequirement.h"

@interface BWInferenceSchedulerScaler : NSObject <BWInferenceJobProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferenceJobProvider, BWInferencePreventable>

 {
    id<BWInferenceProvider> *_provider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<BWInferenceExecutable> *executable;
@property (readonly, nonatomic) NSObject<BWInferenceExtractable> *extractable;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BWInferenceVideoRequirement *inputRequirement; // ivar: _inputRequirement
@property (readonly, nonatomic) BOOL mustExecuteWhenAllowed;
@property (readonly, nonatomic) NSArray *outputRequirements; // ivar: _outputRequirements
@property (readonly, nonatomic) NSObject<BWInferencePropagatable> *propagatable;
@property (readonly, nonatomic) NSObject<BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type;


-(id)_newProviderForWithOptions:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithInputRequirement:(id)arg0 outputRequirements:(id)arg1 options:(NSUInteger)arg2 ;
-(id)newStorage;
-(id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 executionTime:(struct ? )arg1 ;
-(int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withExecutionTime:(struct ? )arg2 completionHandler:(id)arg3 ;
-(int)prepareForExecution;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;


@end


#endif