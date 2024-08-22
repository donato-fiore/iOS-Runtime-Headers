// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWREDEYEREDUCTIONCONTROLLERINPUT_H
#define BWREDEYEREDUCTIONCONTROLLERINPUT_H

@class NSArray;
@protocol BWRedEyeReductionControllerInputDelegate, BWStillImageProcessorControllerDelegate;


#import "BWStillImageProcessorInput.h"

@interface BWRedEyeReductionControllerInput : BWStillImageProcessorInput

@property (readonly, nonatomic) *opaqueCMSampleBuffer auxImage; // ivar: _auxImage
@property (readonly, nonatomic) NSArray *faceObservations; // ivar: _faceObservations
@property (retain, nonatomic) NSObject<BWRedEyeReductionControllerInputDelegate> *inputDelegate; // ivar: _inputDelegate
@property (readonly, nonatomic) *opaqueCMSampleBuffer primaryImage; // ivar: _primaryImage
@property (retain, nonatomic) NSObject<BWStillImageProcessorControllerDelegate> *processorControllerDelegate; // ivar: _processorControllerDelegate
@property (nonatomic) BOOL requiresSensorInterfaceRawPropagation; // ivar: _requiresSensorInterfaceRawPropagation


+(BOOL)requiresInferencesFromFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)addFrame:(struct opaqueCMSampleBuffer *)arg0 faceObservations:(id)arg1 ;
-(void)dealloc;


@end


#endif