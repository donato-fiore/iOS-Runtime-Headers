// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCEFUSIONTRACKERSCALINGPROVIDER_H
#define BWINFERENCEFUSIONTRACKERSCALINGPROVIDER_H

@class NSMutableArray, FTMSRScaler, NSArray, NSString, NSSet;
@protocol BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePreventable, BWInferencePropagatable, BWInferenceExtractable;

#import <Foundation/Foundation.h>

#import "BWInferenceVideoRequirement.h"
#import "BWMetalInferenceContext.h"
#import "BWInferenceFusionTrackerMeanPixelCalculator.h"

@interface BWInferenceFusionTrackerScalingProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePreventable, BWInferencePropagatable>

 {
    BWInferenceVideoRequirement *_inputRequirement;
    BWInferenceVideoRequirement *_orderBufferRequirement;
    BWInferenceVideoRequirement *_outputRequirement;
    *opaqueCMFormatDescription _outputFormatDescription;
    NSMutableArray *_outputMetadataRequirements;
    NSInteger _operation;
    FTMSRScaler *_scaler;
    BWMetalInferenceContext *_metalInferenceContext;
    BWInferenceFusionTrackerMeanPixelCalculator *_meanPixelCalculator;
}


@property (readonly, nonatomic) unsigned int allowedPixelBufferCompressionDirection;
@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly, nonatomic) NSArray *cloneVideoRequirements;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<BWInferenceExecutable> *executable;
@property (readonly, nonatomic) int executionTarget;
@property (readonly, nonatomic) NSObject<BWInferenceExtractable> *extractable;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *inputMetadataRequirements;
@property (readonly, nonatomic) NSArray *inputVideoRequirements;
@property (readonly, nonatomic) BOOL mustExecuteWhenAllowed;
@property (readonly, nonatomic) NSArray *outputMetadataRequirements;
@property (readonly, nonatomic) NSArray *outputVideoRequirements;
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSObject<BWInferencePropagatable> *propagatable;
@property (readonly, nonatomic) NSObject<BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type;


-(id)initWithInputRequirement:(id)arg0 orderBufferRequirement:(id)arg1 descriptor:(id)arg2 resourceProvider:(id)arg3 meanPixelCalculator:(id)arg4 operation:(NSInteger)arg5 ;
-(id)newStorage;
-(id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 executionTime:(struct ? )arg1 ;
// -(int)_executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 meanPixel:(struct ? )arg2 withExecutionTime:(id)arg3 completionHandler:(unk)arg4  ;
-(int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withExecutionTime:(struct ? )arg2 completionHandler:(id)arg3 ;
-(int)prepareForExecution;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg0 ;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 ;


@end


#endif