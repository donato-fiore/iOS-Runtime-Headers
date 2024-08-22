// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINTELLIGENTDISTORTIONCORRECTIONPROCESSORINPUT_H
#define BWINTELLIGENTDISTORTIONCORRECTIONPROCESSORINPUT_H

@class NSArray;
@protocol BWIntelligentDistortionCorrectionProcessorInputDelegate;


#import "BWStillImageProcessorInput.h"

@interface BWIntelligentDistortionCorrectionProcessorInput : BWStillImageProcessorInput {
    *opaqueCMSampleBuffer _image;
    BOOL _imageSet;
    NSUInteger _imageBufferType;
    *__CVBuffer _lowResPersonSegmentationMask;
    BOOL _lowResPersonSegmentationMaskSet;
    NSArray *_faceDetectionObservations;
    BOOL _faceDetectionObservationsSet;
}


@property (nonatomic) BOOL applyZoom; // ivar: _applyZoom
@property (retain, nonatomic) NSObject<BWIntelligentDistortionCorrectionProcessorInputDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *faceDetectionObservations;
@property (readonly, nonatomic) *opaqueCMSampleBuffer image;
@property (readonly, nonatomic) NSUInteger imageBufferType;
@property (readonly, nonatomic) *__CVBuffer lowResPersonSegmentationMask;
@property (nonatomic) BOOL processGeometricDistortionCorrection; // ivar: _processGeometricDistortionCorrection
@property (nonatomic) BOOL processIntelligentDistortionCorrection; // ivar: _processIntelligentDistortionCorrection
@property (nonatomic) BOOL receivedAllInputs; // ivar: _receivedAllInputs


-(id)description;
-(id)initWithSettings:(id)arg0 portType:(id)arg1 ;
-(void)addFaceDetectionObservations:(id)arg0 ;
-(void)addImage:(struct opaqueCMSampleBuffer *)arg0 imageBufferType:(NSUInteger)arg1 ;
-(void)addLowResPersonSegmentationMask:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif