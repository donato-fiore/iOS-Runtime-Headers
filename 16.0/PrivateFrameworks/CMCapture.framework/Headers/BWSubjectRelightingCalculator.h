// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSUBJECTRELIGHTINGCALCULATOR_H
#define BWSUBJECTRELIGHTINGCALCULATOR_H

@class NSDictionary, SubjectRelightingStage, FigMetalContext, NSString;
@protocol BWInferenceEngineControllerDelegate, BWInferencePixelBufferPoolProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BWPhotoDecompressor.h"
#import "BWInferenceEngineController.h"

@interface BWSubjectRelightingCalculator : NSObject <BWInferenceEngineControllerDelegate, BWInferencePixelBufferPoolProvider>

 {
    NSObject<OS_dispatch_queue> *_prepareQueue;
    NSObject<OS_dispatch_queue> *_calculationQueue;
    BOOL _startedPrepare;
    BOOL _waitedForPrepare;
    BWPhotoDecompressor *_jpegDecompressor;
    BWInferenceEngineController *_inferenceController;
    NSDictionary *_inferenceOutputPoolsByAttachedMediaKey;
    SubjectRelightingStage *_subjectRelightingStage;
    FigMetalContext *_metalContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg0 format:(id)arg1 ;
-(id)startCalculationWithJPEGSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 stillImageRequestSettings:(id)arg1 stillImageCaptureSettings:(id)arg2 ;
-(struct __CVBuffer *)processorController:(id)arg0 newOutputPixelBufferForProcessorInput:(id)arg1 type:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)prepareForVideoFormatAsync:(id)arg0 ;
-(void)processorController:(id)arg0 didFinishProcessingInput:(id)arg1 err:(int)arg2 ;
-(void)processorController:(id)arg0 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 type:(NSUInteger)arg2 processorInput:(id)arg3 err:(int)arg4 ;


@end


#endif