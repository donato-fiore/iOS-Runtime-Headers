// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOVWRITERINTERFACE_H
#define MOVWRITERINTERFACE_H

@class MOVStreamWriter, NSMutableDictionary, NSString, NSMutableArray, NSDictionary;
@protocol MOVStreamWriterDelegate, MOVWriterInterfaceDelegate;


#import "CVACalibration.h"

@interface MOVWriterInterface : MOVStreamWriter <MOVStreamWriterDelegate>

 {
    NSMutableDictionary *_trackAddedByStream;
    NSString *_firstSteamID;
    BOOL _prepared;
    BOOL _writeLegacyTracks;
    NSMutableDictionary *_frameMetadataDictionary;
    NSMutableDictionary *_metadataAttachmentArrays;
    NSMutableDictionary *_metadataAttachmentArraysTimestamp;
    NSMutableArray *_movMetadataArray;
    NSDictionary *_fileSummary;
    ? _lastAppendMetadata;
}


@property (retain, nonatomic) NSString *accelTrackName; // ivar: _accelTrackName
@property (retain, nonatomic) NSString *alsTrackName; // ivar: _alsTrackName
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) CVACalibration *calibration; // ivar: _calibration
@property (retain, nonatomic) NSString *compassTrackName; // ivar: _compassTrackName
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *depthTOFTrackName; // ivar: _depthTOFTrackName
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) NSString *deviceString; // ivar: _deviceString
@property (retain, nonatomic) NSMutableDictionary *firstFrameContainer; // ivar: _firstFrameContainer
@property (retain, nonatomic) NSString *gyroTrackName; // ivar: _gyroTrackName
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MOVWriterInterfaceDelegate> *interface_delegate; // ivar: _interface_delegate
@property (nonatomic) BOOL isReady; // ivar: _isReady
@property (retain, nonatomic) NSString *osBuildVersion; // ivar: _osBuildVersion
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *version; // ivar: _version
@property (nonatomic) CGFloat writeMetadataTimeInterval; // ivar: _writeMetadataTimeInterval


+(BOOL)getSWToWExtrinsics:(struct ? *)arg0 ;
+(id)makeDeviceString;
+(struct ? )cmTimeFromTimestamp:(CGFloat)arg0 ;
-(BOOL)addVideoTrack:(struct opaqueCMFormatDescription *)arg0 streamID:(id)arg1 encoding:(id)arg2 ;
-(BOOL)processPixelBuffer:(struct __CVBuffer *)arg0 withTimeStamp:(struct ? )arg1 intrinsics:(struct ? *)arg2 exposureTime:(CGFloat)arg3 streamID:(id)arg4 ;
-(BOOL)receivedAllFramesForStreams:(id)arg0 ;
-(id)addDefaultSummary;
-(id)arrayFrom3x3Matrix:(struct ? *)arg0 ;
-(id)createFileMetadata;
-(id)getSuggestedEncodingOptionsForFormat:(struct opaqueCMFormatDescription *)arg0 streamID:(id)arg1 ;
-(id)initWithFileURL:(id)arg0 expectedFrameRate:(CGFloat)arg1 fileSummary:(id)arg2 ;
-(id)initWithFileURL:(id)arg0 expectedFrameRate:(CGFloat)arg1 fileSummary:(id)arg2 callbackQueue:(id)arg3 ;
-(struct __CVBuffer *)getFirstBufferForStream:(id)arg0 withTimestamp:(struct ? *)arg1 ;
-(void)addFirstBufferForStream:(id)arg0 buffer:(struct __CVBuffer *)arg1 withTimestamp:(struct ? )arg2 ;
-(void)addFrameMetadata:(id)arg0 streamID:(id)arg1 ;
-(void)addFrameMetadata:(id)arg0 value:(id)arg1 streamID:(id)arg2 ;
-(void)addJasperExtrinsics:(id)arg0 ;
-(void)addMovieMetadataDictionary:(id)arg0 value:(id)arg1 ;
-(void)addSWToWExtrinsics:(id)arg0 ;
-(void)appendAllMetadataWithTimeStamp:(struct ? )arg0 ;
-(void)appendMetadata:(id)arg0 metadataID:(id)arg1 ;
-(void)appendMetadata:(id)arg0 metadataID:(id)arg1 timestamp:(CGFloat)arg2 ;
-(void)clearAllMetadataBuffers;
-(void)clearFirstBufferForStream:(id)arg0 ;
-(void)disableLegacyTracks;
-(void)finishWriting:(*id)arg0 ;
-(void)intelligentlyAppendBuffersForStreams:(id)arg0 ;
-(void)processALSData:(id)arg0 location:(*NSInteger)arg1 ;
-(void)processAccelerometerData:(id)arg0 andAdditionalData:(id)arg1 ;
-(void)processAccelerometerData:(id)arg0 andAdditionalData:(id)arg1 location:(*NSInteger)arg2 ;
-(void)processCMData:(id)arg0 ;
-(void)processCVACameraCalibrationData:(id)arg0 ;
-(void)processCVADepthTOF:(id)arg0 ;
-(void)processCVAFeatureBuffer:(id)arg0 ;
-(void)processCVAPRDevice:(id)arg0 ;
-(void)processCVATimedValue:(id)arg0 ;
-(void)processCVAUserEvent:(id)arg0 ;
-(void)processClass:(id)arg0 andAdditionalData:(id)arg1 metadataID:(id)arg2 ;
-(void)processClass:(id)arg0 andAdditionalData:(id)arg1 metadataID:(id)arg2 timestamp:(CGFloat)arg3 ;
-(void)processCompassData:(id)arg0 ;
-(void)processCompassData:(id)arg0 location:(*NSInteger)arg1 ;
-(void)processCoreLocationData:(id)arg0 timestamp:(CGFloat)arg1 andAdditionalData:(id)arg2 ;
-(void)processDeviceMotionData:(id)arg0 andAdditionalData:(id)arg1 ;
-(void)processGyroscopeData:(id)arg0 andAdditionalData:(id)arg1 ;
-(void)processGyroscopeData:(id)arg0 andAdditionalData:(id)arg1 location:(*NSInteger)arg2 ;
-(void)processNSCoderObject:(id)arg0 metadataID:(id)arg1 ;
-(void)processNSCoderObject:(id)arg0 metadataID:(id)arg1 timestamp:(CGFloat)arg2 ;
-(void)registerALS:(*NSInteger)arg0 ;
-(void)registerAccelerometer;
-(void)registerAccelerometer:(*NSInteger)arg0 ;
-(void)registerCMData;
-(void)registerCVACameraCalibrationData;
-(void)registerCVADepthTOF;
-(void)registerCVAFeatureBuffer;
-(void)registerCVAPRDevice;
-(void)registerCVATimedValue;
-(void)registerCVAUserEvent;
-(void)registerCompass;
-(void)registerCompass:(*NSInteger)arg0 ;
-(void)registerGyro;
-(void)registerGyro:(*NSInteger)arg0 ;
-(void)registerLocation;
-(void)registerMetadataID:(id)arg0 ;
-(void)registerMotion;
-(void)registerStreamID:(id)arg0 config:(struct ? *)arg1 ;
-(void)registerStreamID:(id)arg0 withConfigObject:(id)arg1 ;
-(void)setMetadataAttachmentTo:(struct __CVBuffer *)arg0 streamID:(id)arg1 ;
-(void)setupMetadata:(id)arg0 ;
-(void)streamWriterDidFailWithError:(id)arg0 ;
-(void)streamWriterDidFinishPreparing;
-(void)streamWriterDidFinishRecording;
-(void)streamWriterEncounteredAnError:(id)arg0 ;


@end


#endif