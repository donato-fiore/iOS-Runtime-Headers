// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
    int _maxLossyCompressionLevel;
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
-(id)_supportedInputPixelFormats;
-(id)_supportedOutputPixelFormats;
-(id)initWithOutputDimensions:(struct ? )arg0 cameraInfoByPortType:(id)arg1 horizontalSensorBinningFactor:(int)arg2 verticalSensorBinningFactor:(int)arg3 stillImageCaptureEnabled:(BOOL)arg4 objectMetadataIdentifiers:(id)arg5 maxLossyCompressionLevel:(int)arg6 ;
-(id)nodeSubType;
-(id)nodeType;
-(struct __CVBuffer *)_createMatchingPixelBufferFromSavedVideoBuffersWithTargetPts:(struct ? )arg0 ;
-(struct __CVBuffer *)_newStillImageOutputPixelBufferFromVideoPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)_initCinematicFramingSession;
-(void)_reportCinematicFramingSessionCoreAnalyticsData;
-(void)_savePixelBufferForStillImageCaptureRequests:(struct __CVBuffer *)arg0 withPts:(struct ? )arg1 ;
-(void)_updateOutputRequirements;
-(void)_updateSampleBufferMetadata:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif