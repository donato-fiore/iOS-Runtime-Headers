// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMATTINGV2INFERENCEPROVIDER_H
#define BWMATTINGV2INFERENCEPROVIDER_H

@class NSDictionary, FigMatting, NSMutableArray, NSArray, NSMutableDictionary, NSString, NSSet;
@protocol BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable, MTLCommandQueue, BWInferenceExecutable, BWInferenceExtractable;

#import <Foundation/Foundation.h>

#import "BWInferenceVideoRequirement.h"
#import "BWInferenceCloneVideoRequirement.h"
#import "BWInferenceMetadataRequirement.h"

@interface BWMattingV2InferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable>

 {
    NSDictionary *_sensorConfigurationsByPortType;
    FigMatting *_mattingProcessor;
    int _mattingProcessorVersion;
    int _mattingTuningConfiguration;
    BOOL _submitWithoutSynchronization;
    NSMutableArray *_inputVideoRequirements;
    NSMutableArray *_outputVideoRequirements;
    NSMutableArray *_inputMetadataRequirements;
    NSMutableArray *_outputMetadataRequirements;
    BWInferenceVideoRequirement *_primaryFormatInputVideoRequirement;
    BWInferenceVideoRequirement *_depthInputVideoRequirement;
    BWInferenceVideoRequirement *_disparityInputVideoRequirement;
    BWInferenceVideoRequirement *_segmentationInputVideoRequirement;
    BWInferenceVideoRequirement *_segmentationOutputVideoRequirement;
    BWInferenceCloneVideoRequirement *_lowResSegmentationCloneOutputVideoRequirement;
    BWInferenceVideoRequirement *_refinedDepthOutputVideoRequirement;
    NSArray *_enabledSemanticMattingOutputTypes;
    NSMutableDictionary *_semanticMatteInputVideoRequirementsByMattingOutputType;
    NSMutableDictionary *_semanticMatteOutputVideoRequirementsByMattingOutputType;
    BWInferenceMetadataRequirement *_faceSegmentsWithLandmarksMetadataRequirement;
    BWInferenceMetadataRequirement *_outputMasksContainsValidContentRequirement;
    id<MTLCommandQueue> *_metalCommandQueue;
    *OpaqueVTPixelTransferSession _lowResSegmentationCloneCopySession;
    NSDictionary *_sdofRenderingTuningParameters;
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


+(id)inputAttachedMediaKeyForMattingOutputType:(unsigned int)arg0 ;
+(void)initialize;
-(id)initWithConfiguration:(id)arg0 ;
-(id)newStorage;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg0 ;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif