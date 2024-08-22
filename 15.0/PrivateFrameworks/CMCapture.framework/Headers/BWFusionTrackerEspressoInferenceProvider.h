// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWFUSIONTRACKERESPRESSOINFERENCEPROVIDER_H
#define BWFUSIONTRACKERESPRESSOINFERENCEPROVIDER_H

@class NSString;
@protocol BWInferencePreventable, BWInferenceExecutable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceSubmittable;


#import "BWEspressoInferenceProvider.h"

@interface BWFusionTrackerEspressoInferenceProvider : BWEspressoInferenceProvider <BWInferencePreventable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<BWInferenceExecutable> *executable;
@property (readonly, nonatomic) NSObject<BWInferenceExtractable> *extractable;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL mustExecuteWhenAllowed;
@property NSInteger operation; // ivar: _operation
@property (readonly, nonatomic) NSObject<BWInferencePropagatable> *propagatable;
@property (readonly, nonatomic) NSObject<BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type;


-(id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 executionTime:(struct ? )arg1 ;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif