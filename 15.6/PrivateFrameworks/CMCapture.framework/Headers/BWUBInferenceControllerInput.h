// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWUBINFERENCECONTROLLERINPUT_H
#define BWUBINFERENCECONTROLLERINPUT_H



#import "BWStillImageProcessorInput.h"

@interface BWUBInferenceControllerInput : BWStillImageProcessorInput {
    *opaqueCMSampleBuffer _propagationImage;
}


@property (nonatomic) BOOL generateFaceObservations; // ivar: _generateFaceObservations
@property (nonatomic) BOOL generateLowResPersonInstanceMasks; // ivar: _generateLowResPersonInstanceMasks
@property (nonatomic) BOOL generateLowResPersonSegmentationMask; // ivar: _generateLowResPersonSegmentationMask
@property (nonatomic) BOOL generateSemanticSkinMatte; // ivar: _generateSemanticSkinMatte
@property (nonatomic) BOOL generateSemanticSkyMatte; // ivar: _generateSemanticSkyMatte
@property (nonatomic) BOOL generateSmartCameraClassifications; // ivar: _generateSmartCameraClassifications
@property (readonly, nonatomic) *opaqueCMSampleBuffer inferenceImage; // ivar: _inferenceImage
@property (readonly, nonatomic) *opaqueCMSampleBuffer propagationImage;


-(void)addInferenceImage:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)addPropagationImage:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;


@end


#endif