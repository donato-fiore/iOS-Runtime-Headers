// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWMATTINGINFERENCEPROVIDER_H
#define BWMATTINGINFERENCEPROVIDER_H

@class NSDictionary, FigMatting, NSArray, NSString, NSSet;
@protocol BWInferenceProvider, BWInferenceExecutable, BWInferencePropagatable, MTLCommandQueue, BWInferenceExtractable, BWInferenceSubmittable;

#import <Foundation/Foundation.h>

#import "BWInferenceVideoRequirement.h"

@interface BWMattingInferenceProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferencePropagatable>

 {
    BWInferenceVideoRequirement *_primaryFormatInputVideoRequirement;
    BWInferenceVideoRequirement *_segmentationInputVideoRequirement;
    BWInferenceVideoRequirement *_depthInputVideoRequirement;
    BWInferenceVideoRequirement *_disparityInputVideoRequirement;
    BWInferenceVideoRequirement *_segmentationOutputVideoRequirement;
    BWInferenceVideoRequirement *_refinedDepthOutputVideoRequirement;
    NSDictionary *_tuningParameters;
    NSDictionary *_sdofRenderingTuningParameters;
    FigMatting *_mattingProcessor;
    id<MTLCommandQueue> *_metalCommandQueue;
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
@property (readonly, nonatomic) NSArray *inputVideoRequirements; // ivar: _inputVideoRequirements
@property (readonly, nonatomic) NSArray *outputMetadataRequirements;
@property (readonly, nonatomic) NSArray *outputVideoRequirements; // ivar: _outputVideoRequirements
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSObject<BWInferencePropagatable> *propagatable;
@property (readonly, nonatomic) NSObject<BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type;


+(void)initialize;
-(id)initWithConfiguration:(id)arg0 ;
-(id)newStorage;
-(int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withExecutionTime:(struct ? )arg2 completionHandler:(id)arg3 ;
-(int)prepareForExecution;
-(int)prewarmUsingLimitedMemory:(BOOL)arg0 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif