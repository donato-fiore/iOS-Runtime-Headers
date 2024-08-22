// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGECAMERACALIBRATIONDATANODE_H
#define BWSTILLIMAGECAMERACALIBRATIONDATANODE_H

@class NSDictionary, NSSet, NSMutableDictionary, FigCalibration;


#import "BWNode.h"
#import "BWStillImageCaptureSettings.h"

@interface BWStillImageCameraCalibrationDataNode : BWNode {
    NSDictionary *_sensorConfigurationsByPortType;
    BOOL _propagatesDetectedObjects;
    NSDictionary *_baseZoomFactorsByPortType;
    NSSet *_expectedPortTypes;
    BWStillImageCaptureSettings *_captureSettings;
    int _processingMode;
    NSMutableDictionary *_inputSbufsByPortType;
    FigCalibration *_calibrationProcessor;
}




+(void)initialize;
-(BOOL)propagatesDetectedObjects;
-(id)baseZoomFactorsByPortType;
-(id)initWithSensorConfigurationsByPortType:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setBaseZoomFactorsByPortType:(id)arg0 ;
-(void)setPropagatesDetectedObjects:(BOOL)arg0 ;


@end


#endif