// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWVIDEOPROCESSINGINFERENCEPROVIDER_H
#define BWVIDEOPROCESSINGINFERENCEPROVIDER_H

@class VCPCaptureAnalysisSession, NSArray, NSString, NSSet;
@protocol BWInferenceProvider, BWInferenceSubmittable, BWInferenceExecutable, BWInferencePropagatable, BWInferenceExtractable;

#import <Foundation/Foundation.h>


@interface BWVideoProcessingInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferenceExecutable, BWInferencePropagatable>

 {
    NSUInteger _analysisType;
    VCPCaptureAnalysisSession *_vcpSession;
}


@property (readonly, nonatomic) unsigned int allowedPixelBufferCompressionDirection;
@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly, nonatomic) NSArray *cloneVideoRequirements; // ivar: _cloneVideoRequirements
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<BWInferenceExecutable> *executable;
@property (readonly, nonatomic) int executionTarget; // ivar: _executionTarget
@property (readonly, nonatomic) NSObject<BWInferenceExtractable> *extractable;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *inputMetadataRequirements; // ivar: _inputMetadataRequirements
@property (readonly, nonatomic) NSArray *inputVideoRequirements; // ivar: _inputVideoRequirements
@property (readonly, nonatomic) NSArray *outputMetadataRequirements; // ivar: _outputMetadataRequirements
@property (readonly, nonatomic) NSArray *outputVideoRequirements; // ivar: _outputVideoRequirements
@property (readonly, copy, nonatomic) NSSet *preventionReasons; // ivar: _preventionReasons
@property (readonly, nonatomic) NSObject<BWInferencePropagatable> *propagatable;
@property (readonly, nonatomic) NSObject<BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type; // ivar: _type


+(void)initialize;
-(id)bindOutputMetadataKeys:(id)arg0 ;
-(id)bindVideoInputFromAttachedMediaUsingKey:(id)arg0 preparedByAttachedMediaKey:(id)arg1 withVideoFormatProvider:(id)arg2 ;
-(id)initWithType:(int)arg0 analysisType:(NSUInteger)arg1 executionTarget:(int)arg2 schedulerPriority:(unsigned int)arg3 preventionReasons:(id)arg4 resourceProvider:(id)arg5 ;
-(id)newStorage;
-(int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withExecutionTime:(struct ? )arg2 completionHandler:(id)arg3 ;
-(int)prepareForExecution;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg0 ;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 ;


@end


#endif