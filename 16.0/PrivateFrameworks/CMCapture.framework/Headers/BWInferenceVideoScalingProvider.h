// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCEVIDEOSCALINGPROVIDER_H
#define BWINFERENCEVIDEOSCALINGPROVIDER_H

@class NSArray, NSDictionary, FigM2MController, NSString, NSSet;
@protocol BWInferenceProvider, BWInferenceExecutable, BWInferencePreventable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceSubmittable;

#import <Foundation/Foundation.h>

#import "BWInferenceVideoRequirement.h"

@interface BWInferenceVideoScalingProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferencePreventable, BWInferencePropagatable>

 {
    BWInferenceVideoRequirement *_inputRequirement;
    BWInferenceVideoRequirement *_derivedFromRequirement;
    NSArray *_outputRequirements;
    NSDictionary *_colorSpaceProperties;
    BOOL _applyUprightExifOrientation;
    int _offsetRotationDegrees;
    BOOL _applyValidBufferRect;
    BOOL _applyCustomCrop;
    BOOL _computeAndApplyAspectRatioCrop;
    FigM2MController *_scalerController;
    float _customFiltersLastUsedHorizontalRatio;
    float _customFiltersLastUsedVerticalRatio;
    BOOL _enableFencing;
    float _outputAspectRatio;
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
@property (readonly, nonatomic) BOOL mustExecuteWhenAllowed;
@property (readonly, nonatomic) NSArray *outputMetadataRequirements;
@property (readonly, nonatomic) NSArray *outputVideoRequirements;
@property (readonly, copy, nonatomic) NSSet *preventionReasons;
@property (readonly, nonatomic) NSObject<BWInferencePropagatable> *propagatable;
@property (readonly, nonatomic) NSObject<BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type;


+(void)initialize;
-(id)bindOutputByCloningInputRequirement:(id)arg0 toAttachedMediaUsingKey:(id)arg1 ;
-(id)initWithInputRequirement:(id)arg0 derivedFromRequirement:(id)arg1 outputRequirements:(id)arg2 enableFencing:(BOOL)arg3 ;
-(id)newStorage;
-(id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 executionTime:(struct ? )arg1 ;
-(int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withExecutionTime:(struct ? )arg2 completionHandler:(id)arg3 ;
-(int)prepareForExecution;
-(int)prewarmUsingLimitedMemory:(BOOL)arg0 ;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif