// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWTILEDESPRESSOINFERENCEPROVIDER_H
#define BWTILEDESPRESSOINFERENCEPROVIDER_H

@class NSArray, NSString, NSSet;
@protocol BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable, OS_dispatch_queue, BWInferenceResourceProvider, BWInferenceExecutable, BWInferenceExtractable;

#import <Foundation/Foundation.h>

#import "BWInferenceVideoRequirement.h"
#import "BWEspressoInferenceProvider.h"
#import "BWTiledEspressoInferenceConfiguration.h"

@interface BWTiledEspressoInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferencePropagatable>

 {
    NSArray *_inputVideoRequirements;
    BWInferenceVideoRequirement *_outputVideoRequirement;
    NSArray *_tileInputVideoRequirements;
    NSArray *_tileInputBindingNames;
    BWInferenceVideoRequirement *_tileOutputVideoRequirement;
    NSArray *_additionalVideoRequirements;
    ? _maxTileCount;
    BWEspressoInferenceProvider *_espressoProvider;
    NSObject<OS_dispatch_queue> *_espressoWorkQueue;
    BWTiledEspressoInferenceConfiguration *_configuration;
    id<BWInferenceResourceProvider> *_resourceProvider;
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
@property (readonly, nonatomic) int type; // ivar: type


+(id)videoFormatWithPixelFormat:(unsigned int)arg0 size;
+(id)videoFormatWithPixelFormat:(unsigned int)arg0 size:(BOOL)arg1 includesInvalidContent;
+(void)initialize;
-(id)initWithConfiguration:(id)arg0 inputVideoRequirements:(id)arg1 outputVideoRequirement:(id)arg2 resourceProvider:(id)arg3 ;
-(id)newStorage;
-(int)createInputTileFor:(id)arg0 to:(struct __CVBuffer *)arg1 withInputs:(id)arg2 atPosition:(*id)arg3 cmdBuffer;
-(int)loadNetworkWithURL:(id)arg0 configName:(id)arg1 inferenceType:(int)arg2 maxTileCount:(id)arg3 inputFormatsByBindingName:(id)arg4 outputBindingName:(id)arg5 outputVideoFormat:(id)arg6 additionalVideoRequirements;
-(int)preProcessOutputBuffer:(struct __CVBuffer *)arg0 ;
-(int)prepareForSubmissionWithWorkQueue:(id)arg0 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg0 ;
-(int)propagateInferenceResultsFrom:(struct __CVBuffer *)arg0 to:(struct opaqueCMSampleBuffer *)arg1 ;
-(int)purgeIntermediateResources;
-(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 ;
// -(int)submitForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 usingStorage:(id)arg1 withSubmissionTime:(struct ? )arg2 workQueue:(id)arg3 completionHandler:(id)arg4 currentTileCount:(unk)arg5  ;
-(int)writeOutputTile:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 withAdditionalPixelBuffers:(id)arg2 withInputTilePixelBuffers:(id)arg3 withInputFullPixelBuffers:(id)arg4 atPosition:(*id)arg5 cmdBuffer;
-(void)dealloc;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg0 usingStorage:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 ;


@end


#endif