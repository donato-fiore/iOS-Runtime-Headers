// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEEPFUSIONPROCESSORINPUT_H
#define BWDEEPFUSIONPROCESSORINPUT_H

@class NSDictionary, NSArray;
@protocol BWDeepFusionProcessorInputDelegate;


#import "BWStillImageProcessorControllerInput.h"

@interface BWDeepFusionProcessorInput : BWStillImageProcessorControllerInput {
    BOOL _allInferencesDelivered;
    NSDictionary *_inferenceAttachedMediaMetadata;
}


@property (nonatomic) BOOL canProcessEnhancedResolution; // ivar: _canProcessEnhancedResolution
@property (retain, nonatomic) NSObject<BWDeepFusionProcessorInputDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDictionary *evZeroReferenceFrameAttachments; // ivar: _evZeroReferenceFrameAttachments
@property (nonatomic) ? evZeroReferenceFramePTS; // ivar: _evZeroReferenceFramePTS
@property (readonly, nonatomic) NSArray *inputBuffers; // ivar: _inputBuffers
@property (readonly, nonatomic) BOOL processInferenceInputImage; // ivar: _processInferenceInputImage
@property (retain, nonatomic) NSArray *providedInferenceAttachedMedia; // ivar: _providedInferenceAttachedMedia


-(id)description;
-(id)initWithSettings:(id)arg0 portType:(id)arg1 processInferenceInputImage:(BOOL)arg2 ;
-(void)addBuffer:(struct __CVBuffer *)arg0 metadata:(id)arg1 bufferType:(NSUInteger)arg2 ;
-(void)allInferencesDelivered;
-(void)beginProcessingCachedBuffers;
-(void)dealloc;
-(void)releaseInputBuffers;


@end


#endif