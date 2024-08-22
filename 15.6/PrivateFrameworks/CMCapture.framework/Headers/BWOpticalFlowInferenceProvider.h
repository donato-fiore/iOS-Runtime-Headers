// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWOPTICALFLOWINFERENCEPROVIDER_H
#define BWOPTICALFLOWINFERENCEPROVIDER_H

@class PTDisparityPostProcessing, MTLTextureDescriptor, NSString, NSArray, NSSet;
@protocol BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExecutable, BWInferenceExtractable;

#import <Foundation/Foundation.h>

#import "BWInferenceVideoRequirement.h"
#import "BWMetalInferenceContext.h"

@interface BWOpticalFlowInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable>

 {
    BWInferenceVideoRequirement *_inputRequirement;
    BWInferenceVideoRequirement *_outputRequirement;
    PTDisparityPostProcessing *_disparityPostProcessor;
    BWMetalInferenceContext *_metalInferenceContext;
    MTLTextureDescriptor *_colorOutputDescriptor;
    MTLTextureDescriptor *_colorInputDescriptor;
    NSString *_portType;
    NSUInteger _concurrencyWidth;
}


@property (readonly, nonatomic) unsigned int allowedPixelBufferCompressionDirection;
@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly, nonatomic) NSArray *cloneVideoRequirements; // ivar: _cloneVideoRequirements
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
-(id)bindOutputByCloningInputRequirement:(id)arg0 toAttachedMediaUsingKey:(id)arg1 ;
-(id)initWithInputRequirement:(id)arg0 outputRequirement:(id)arg1 portType:(id)arg2 resourceProvider:(id)arg3 configuration:(id)arg4 ;
-(id)newStorage;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg0 ;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif