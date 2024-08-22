// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWDESKCAMNODE_H
#define BWDESKCAMNODE_H

@class NSDictionary, CinematicFramingSession, NSString;
@protocol BWFigVideoCaptureDeviceOverheadCameraModeChangedDelegate;


#import "BWNode.h"
#import "BWDeviceOrientationMonitor.h"
#import "BWFigVideoCaptureDevice.h"
#import "BWNodeInput.h"
#import "BWNodeOutput.h"

@interface BWDeskCamNode : BWNode <BWFigVideoCaptureDeviceOverheadCameraModeChangedDelegate>

 {
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
    unsigned int _minLuxLevelNeeded;
    BOOL _stillImageCaptureEnabled;
    *OpaqueVTPixelTransferSession _stillImagePixelTransferSession;
    int _maxLossyCompressionLevel;
    NSString *_portType;
    NSString *_deviceModelName;
    int _overheadCameraMode;
    BWFigVideoCaptureDevice *_captureDevice;
    unsigned short _numberOfFramesReceivedBeforeFocusUpdate;
    unsigned short _numberOfFramesReceivedSinceLastFocusUpdate;
}


@property (copy, nonatomic) NSString *clientApplicationID; // ivar: _clientApplicationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BWNodeInput *detectionMetadataInput; // ivar: _detectionMetadataInput
@property (readonly, nonatomic) BWNodeOutput *detectionMetadataOutput; // ivar: _detectionMetadataOutput
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BWNodeInput *stillImageInput; // ivar: _stillImageInput
@property (readonly, nonatomic) BWNodeOutput *stillImageOutput; // ivar: _stillImageOutput
@property (readonly) Class superclass;
@property (readonly, nonatomic) BWNodeInput *videoCaptureInput; // ivar: _videoCaptureInput
@property (readonly, nonatomic) BWNodeOutput *videoCaptureOutput; // ivar: _videoCaptureOutput


+(void)initialize;
-(id)initWithOutputDimensions:(struct ? )arg0 cameraInfoByPortType:(id)arg1 horizontalSensorBinningFactor:(int)arg2 verticalSensorBinningFactor:(int)arg3 stillImageCaptureEnabled:(BOOL)arg4 objectMetadataIdentifiers:(id)arg5 maxLossyCompressionLevel:(int)arg6 portType:(id)arg7 deviceModelName:(id)arg8 overheadCameraMode:(int)arg9 captureDevice:(id)arg10 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didChangeOverheadCameraMode:(int)arg0 ;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif