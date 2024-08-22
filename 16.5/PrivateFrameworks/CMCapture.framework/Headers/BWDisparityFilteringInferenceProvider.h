// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWDISPARITYFILTERINGINFERENCEPROVIDER_H
#define BWDISPARITYFILTERINGINFERENCEPROVIDER_H

@class ADPCEDisparityColorPipeline, MTLTextureDescriptor, NSArray, NSString, NSSet;
@protocol BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExecutable, BWInferenceExtractable;

#import <Foundation/Foundation.h>

#import "BWInferenceVideoRequirement.h"
#import "BWMetalInferenceContext.h"

@interface BWDisparityFilteringInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable>

 {
    BWInferenceVideoRequirement *_disparityInputRequirement;
    BWInferenceVideoRequirement *_outputRequirement;
    ADPCEDisparityColorPipeline *_stereoPipeline;
    *opaqueCMFormatDescription _outputFormatDescription;
    BWMetalInferenceContext *_metalInferenceContext;
    MTLTextureDescriptor *_disparityInputDescriptor;
    MTLTextureDescriptor *_disparityOutputDescriptor;
    NSInteger _requestedRotation;
    NSUInteger _inputSource;
    NSUInteger _concurrencyWidth;
    BOOL _isPreProcessing;
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
-(id)initWithDisparityInputRequirement:(id)arg0 disparityOutputRequirement:(id)arg1 resourceProvider:(id)arg2 configuration:(id)arg3 isPreprocessing:(BOOL)arg4 ;
-(id)newStorage;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg0 ;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif