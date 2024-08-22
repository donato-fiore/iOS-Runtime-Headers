// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWESPRESSOINFERENCEPROVIDER_H
#define BWESPRESSOINFERENCEPROVIDER_H

@class NSURL, NSString, NSMutableDictionary, NSMutableArray, NSArray, NSSet;
@protocol BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePropagatable, BWEspressoInferenceTensorMemoryProvider, BWInferenceExtractable;

#import <Foundation/Foundation.h>

#import "BWEspressoInferenceContext.h"
#import "BWFigCaptureISPProcessingSession.h"

@interface BWEspressoInferenceProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable>

 {
    NSUInteger _concurrentSubmissionLimit;
    NSURL *_networkURL;
    NSString *_networkConfiguration;
    NSString *_espressoNetworkVersion;
    BWEspressoInferenceContext *_context;
    BWFigCaptureISPProcessingSession *_ispProcessingSession;
    *void _espressoPlan;
    ? _espressoNetwork;
    int _espressoPriority;
    NSMutableDictionary *_bindingNamesByRequirement;
    id<BWInferencePropagatable> *_propagator;
    id<BWEspressoInferenceTensorMemoryProvider> *_tensorMemoryProvider;
    NSMutableArray *_pixelBuffersLockedDuringExecution;
}


@property (readonly, nonatomic) unsigned int allowedPixelBufferCompressionDirection; // ivar: _allowedCompressionDirection
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
@property (retain, nonatomic) NSObject<BWInferencePropagatable> *propagatable;
@property (readonly, nonatomic) NSObject<BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BWEspressoInferenceTensorMemoryProvider> *tensorMemoryProvider;
@property (readonly, nonatomic) int type; // ivar: _type


+(void)initialize;
-(id)_surfacePropertiesForTensor:(struct ? *)arg0 bindingName:(id)arg1 ;
-(id)bindEspressoInput:(id)arg0 fromAttachedMediaUsingKey:(id)arg1 withVideoFormat:(id)arg2 ;
-(id)bindEspressoInput:(id)arg0 fromMetadataUsingKeys:(id)arg1 ;
-(id)bindEspressoOutput:(id)arg0 asAttachedMediaUsingKey:(id)arg1 withVideoFormat:(id)arg2 ;
-(id)bindEspressoOutput:(id)arg0 asConsolidatedMetadataUsingKeys:(id)arg1 ;
-(id)bindEspressoOutput:(id)arg0 asMetadataUsingKey:(id)arg1 ;
-(id)bindEspressoOutput:(id)arg0 asMetadataUsingKeys:(id)arg1 ;
-(id)bindOutputByCloningInputRequirement:(id)arg0 toAttachedMediaUsingKey:(id)arg1 ;
-(id)initWithType:(int)arg0 networkURL:(id)arg1 networkConfiguration:(id)arg2 context:(id)arg3 executionTarget:(int)arg4 schedulerPriority:(unsigned int)arg5 preventionReasons:(id)arg6 resourceProvider:(id)arg7 allowedCompressionDirection:(unsigned int)arg8 concurrentSubmissionLimit:(NSUInteger)arg9 ;
-(id)newStorage;
-(int)_bindPixelBuffer:(struct __CVBuffer *)arg0 asAccelerateImageForRequirement:(id)arg1 withBindingName:(id)arg2 ;
-(int)_ensureEspressoBindingsUsingStorage:(id)arg0 ;
-(int)_espressoStorageTypeForExecutionTarget:(int)arg0 ;
-(int)_mapSchedulerToEspressoPriority:(unsigned int)arg0 ;
-(int)_prepareForInferenceWithWorkQueue:(id)arg0 ;
-(int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withExecutionTime:(struct ? )arg2 completionHandler:(id)arg3 ;
-(int)prepareForExecution;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg0 ;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;


@end


#endif