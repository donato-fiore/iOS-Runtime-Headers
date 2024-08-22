// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWCINEMATICFRAMINGNODE_H
#define BWCINEMATICFRAMINGNODE_H

@class NSDictionary, CinematicFramingSession, NSString;


#import "BWNode.h"
#import "BWDeviceOrientationMonitor.h"
#import "BWNodeInput.h"
#import "BWNodeOutput.h"

@interface BWCinematicFramingNode : BWNode {
    *opaqueCMFormatDescription _outputFormatDescription;
    os_unfair_lock_s _bufferServicingLock;
    int _horizontalSensorBinningFactor;
    int _verticalSensorBinningFactor;
    NSDictionary *_cameraInfoByPortType;
    ? _outputDimensions;
    ? _stillCaptureQueue;
    unsigned int _stillCaptureEnqueueIndex;
    CinematicFramingSession *_cinematicFramingSession;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
    unsigned int _maxPeopleDetected;
    unsigned int _minLuxLevelNeeded;
    BOOL _stillImageCaptureEnabled;
    *OpaqueVTPixelTransferSession _stillImagePixelTransferSession;
    BOOL _deviceOrientationCorrectionEnabled;
    int _maxLossyCompressionLevel;
    NSString *_portType;
    NSString *_deviceModelName;
}


@property (nonatomic) unsigned int cinematicFramingControlMode; // ivar: _cinematicFramingControlMode
@property (copy, nonatomic) NSString *clientApplicationID; // ivar: _clientApplicationID
@property (readonly, nonatomic) BWNodeInput *detectionMetadataInput; // ivar: _detectionMetadataInput
@property (readonly, nonatomic) BWNodeOutput *detectionMetadataOutput; // ivar: _detectionMetadataOutput
@property (readonly, nonatomic) BWNodeInput *stillImageInput; // ivar: _stillImageInput
@property (readonly, nonatomic) BWNodeOutput *stillImageOutput; // ivar: _stillImageOutput
@property (readonly, nonatomic) BWNodeInput *videoCaptureInput; // ivar: _videoCaptureInput
@property (readonly, nonatomic) BWNodeOutput *videoCaptureOutput; // ivar: _videoCaptureOutput


+(void)initialize;
-(id)initWithOutputDimensions:(struct ? )arg0 cameraInfoByPortType:(id)arg1 horizontalSensorBinningFactor:(int)arg2 verticalSensorBinningFactor:(int)arg3 deviceOrientationCorrectionEnabled:(BOOL)arg4 stillImageCaptureEnabled:(BOOL)arg5 objectMetadataIdentifiers:(id)arg6 maxLossyCompressionLevel:(int)arg7 portType:(id)arg8 deviceModelName:(id)arg9 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif