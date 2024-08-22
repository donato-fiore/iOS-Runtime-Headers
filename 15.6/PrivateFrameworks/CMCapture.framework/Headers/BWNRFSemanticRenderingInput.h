// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWNRFSEMANTICRENDERINGINPUT_H
#define BWNRFSEMANTICRENDERINGINPUT_H

@class NSDictionary, NSString, NSArray;
@protocol BWNoiseReductionAndFusionProcessorSemanticRenderingInput;

#import <Foundation/Foundation.h>


@interface BWNRFSemanticRenderingInput : NSObject <BWNoiseReductionAndFusionProcessorSemanticRenderingInput>

 {
    NSDictionary *_smartCameraClassifications;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *faceObservations; // ivar: _faceObservations
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceBoundingBoxes; // ivar: _lowResPersonInstanceBoundingBoxes
@property (readonly, nonatomic) NSArray *lowResPersonInstanceConfidences; // ivar: _lowResPersonInstanceConfidences
@property (readonly, nonatomic) NSArray *lowResPersonInstanceMasks; // ivar: _lowResPersonInstanceMasks
@property (readonly, nonatomic) *__CVBuffer lowResPersonMask; // ivar: _lowResPersonMask
@property (readonly, nonatomic) *__CVBuffer skinMask; // ivar: _skinMask
@property (readonly, nonatomic) NSArray *skinToneClassifications; // ivar: _skinToneClassifications
@property (readonly, nonatomic) *__CVBuffer skyMask; // ivar: _skyMask
@property (readonly) Class superclass;


-(id)initWithSkinMask:(struct __CVBuffer *)arg0 skyMask:(struct __CVBuffer *)arg1 lowResPersonMask:(struct __CVBuffer *)arg2 lowResPersonInstanceMasks:(id)arg3 lowResPersonInstanceConfidences:(id)arg4 lowResPersonInstanceBoundingBoxes:(id)arg5 skinToneClassifications:(id)arg6 faceObservations:(id)arg7 ;
-(void)dealloc;


@end


#endif