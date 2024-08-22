// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWINFERENCEDEPTHSCALINGPROVIDER_H
#define BWINFERENCEDEPTHSCALINGPROVIDER_H

@class NSArray, FigMetalContext, NSDictionary, NSNumber, MTLTextureDescriptor, NSString, NSSet;
@protocol BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable;

#import <Foundation/Foundation.h>

#import "BWInferenceVideoRequirement.h"

@interface BWInferenceDepthScalingProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePropagatable>

 {
    BWInferenceVideoRequirement *_inputRequirement;
    NSArray *_outputRequirements;
    *opaqueCMFormatDescription _outputFormatDescription;
    FigMetalContext *_metalContext;
    int _requestedRotation;
    int _processingMode;
    BOOL _GPUDepthConversionSupported;
    NSDictionary *_pipelineStates;
    NSNumber *_NANValue;
    NSNumber *_clampMin;
    NSNumber *_clampMax;
    BOOL _flipX;
    BOOL _allowUpsampling;
    NSUInteger _concurrencyWidth;
    MTLTextureDescriptor *_srcdesc;
    MTLTextureDescriptor *_dstdesc;
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
@property (readonly, nonatomic) NSArray *outputMetadataRequirements;
@property (readonly, nonatomic) NSArray *outputVideoRequirements;
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSObject<BWInferencePropagatable> *propagatable;
@property (readonly, nonatomic) NSObject<BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type;


+(void)initialize;
-(id)bindVideoInputFromAttachedMediaUsingKey:(id)arg0 preparedByAttachedMediaKey:(id)arg1 withVideoFormatProvider:(id)arg2 ;
-(id)initWithOutputRequirements:(id)arg0 configuration:(id)arg1 ;
-(id)newStorage;
-(int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withExecutionTime:(struct ? )arg2 completionHandler:(id)arg3 ;
-(int)prepareForExecution;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg0 ;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)_resolveProcessingMode;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;
-(void)setInputRequirement:(id)arg0 ;


@end


#endif