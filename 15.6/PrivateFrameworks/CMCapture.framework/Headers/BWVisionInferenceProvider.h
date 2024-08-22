// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWVISIONINFERENCEPROVIDER_H
#define BWVISIONINFERENCEPROVIDER_H

@class NSArray, NSMapTable, NSMutableDictionary, NSString, NSSet;
@protocol BWInferenceProvider, BWInferenceExecutable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceSubmittable;

#import <Foundation/Foundation.h>

#import "BWVisionInferenceConfiguration.h"
#import "BWVisionInferenceContext.h"
#import "BWInferenceVideoRequirement.h"

@interface BWVisionInferenceProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferencePropagatable>

 {
    BWVisionInferenceConfiguration *_configuration;
    NSArray *_prototypeRequests;
    BWVisionInferenceContext *_context;
    NSUInteger _indexOfRequestForMaximumNumberOfFaces;
    NSUInteger _maximumNumberOfFaces;
    BOOL _clampToLargestMaximumNumberOfFaces;
    BOOL _alwaysExecuteForRedEyeReduction;
    NSUInteger _indexOfRequestForMergedFaceDetection;
    NSUInteger _indexOfRequestForMergedFoodAndDrinkRecognition;
    NSMapTable *_requestIndexByRequest;
    NSMutableDictionary *_requestIndexByRequirement;
    BOOL _executesRequestsIndividually;
    BOOL _considerISPRectsIfVisionFails;
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
@property (retain, nonatomic) BWInferenceVideoRequirement *primaryInputVideoRequirement; // ivar: _primaryInputVideoRequirement
@property (readonly, nonatomic) NSObject<BWInferencePropagatable> *propagatable;
@property (readonly, nonatomic) NSObject<BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type; // ivar: _type


+(void)initialize;
-(id)bindIdealInputForRequest:(id)arg0 fromAttachedMediaUsingKey:(id)arg1 ;
-(id)bindInputForRequest:(id)arg0 fromAttachedMediaUsingKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 withVideoFormatProvider:(id)arg3 ;
-(id)bindInputForRequest:(id)arg0 fromMetadataUsingKeys:(id)arg1 ;
-(id)bindOutputByCloningInputRequirement:(id)arg0 toAttachedMediaUsingKey:(id)arg1 ;
-(id)bindOutputForRequest:(id)arg0 asAttachedMediaUsingKey:(id)arg1 withVideoFormat:(id)arg2 ;
-(id)bindOutputForRequest:(id)arg0 asConsolidatedMetadataUsingKeys:(id)arg1 ;
-(id)bindOutputForRequest:(id)arg0 asMetadataUsingKey:(id)arg1 ;
-(id)bindOutputForRequest:(id)arg0 asMetadataUsingKeys:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 requests:(id)arg1 executesRequestsIndividually:(BOOL)arg2 executionTarget:(int)arg3 preventionReasons:(id)arg4 resourceProvider:(id)arg5 ;
-(id)newStorage;
-(int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withExecutionTime:(struct ? )arg2 completionHandler:(id)arg3 ;
-(int)prepareForExecution;
-(int)prewarmUsingLimitedMemory:(BOOL)arg0 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif