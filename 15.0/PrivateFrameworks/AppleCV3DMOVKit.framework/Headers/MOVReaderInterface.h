// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOVREADERINTERFACE_H
#define MOVREADERINTERFACE_H

@class MOVStreamReader, NSString, NSNumber, NSDictionary;
@protocol MOVStreamReaderDelegate;


#import "JasperDepthFrameProcessor.h"

@interface MOVReaderInterface : MOVStreamReader <MOVStreamReaderDelegate>

 {
    JasperDepthFrameProcessor *_jdfp;
    NSString *_jasperDepthPCStreamID;
    NSString *_osVersion;
    CGFloat _machTimeSince1970;
    int _jasperCounter;
    BOOL _jasperEnabled;
    BOOL _accelLocationNil;
    BOOL _accelLocation0;
    BOOL _gyroLocationNil;
    BOOL _gyroLocation0;
    BOOL _compassLocationNil;
    BOOL _compassLocation0;
}


@property (retain, nonatomic) NSString *accelTrackName; // ivar: _accelTrackName
@property (retain, nonatomic) NSString *alsTrackName; // ivar: _alsTrackName
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *compassTrackName; // ivar: _compassTrackName
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *depthOutputFrameRate; // ivar: _depthOutputFrameRate
@property (readonly) NSNumber *depthSourceFrameRate;
@property (retain, nonatomic) NSString *depthTOFTrackName; // ivar: _depthTOFTrackName
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) NSString *deviceString; // ivar: _deviceString
@property (retain, nonatomic) NSDictionary *enforcedVideoTrackFormat; // ivar: _enforcedVideoTrackFormat
@property (retain, nonatomic) NSString *gyroTrackName; // ivar: _gyroTrackName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)grabSWToWExtrinsics:(struct ? *)arg0 summary:(id)arg1 backExtrinsics:(id)arg2 ;
+(BOOL)isSuperWideStream:(id)arg0 ;
+(id)grabCMSessionID:(id)arg0 ;
+(id)grabJasperExtrinsics:(id)arg0 backExtrinsics:(id)arg1 ;
-(BOOL)grabSWToWExtrinsics:(struct ? *)arg0 ;
-(id)deviceStringFromPlatformID:(id)arg0 ;
-(id)grabCalibration;
-(id)grabCalibration:(*NSInteger)arg0 ;
-(id)grabJasperExtrinsics;
-(id)grabMovieMetadataForKey:(id)arg0 ;
-(id)grabNextCLLocation;
-(id)grabNextCLLocation:(struct ? *)arg0 ;
-(id)grabNextCMData;
-(id)grabNextCMData:(struct ? *)arg0 ;
-(id)grabNextCMDeviceMotion;
-(id)grabNextCMDeviceMotion:(struct ? *)arg0 ;
-(id)grabNextCVACameraCalibrationData;
-(id)grabNextCVACameraCalibrationData:(struct ? *)arg0 ;
-(id)grabNextClass:(id)arg0 class:(Class)arg1 ;
-(id)grabNextClass:(id)arg0 class:(Class)arg1 timeRange:(struct ? *)arg2 ;
-(id)grabNextDepthIR:(id)arg0 ;
-(id)grabNextDepthIR:(id)arg0 timeRange:(struct ? *)arg1 ;
-(id)grabNextDepthTOF;
-(id)grabNextDepthTOF:(struct ? *)arg0 ;
-(id)grabNextDepthTOF:(struct ? *)arg0 sampleDropped:(*BOOL)arg1 ;
-(id)grabNextDeviceMotionData;
-(id)grabNextDeviceMotionData:(struct ? *)arg0 ;
-(id)grabNextDictionary:(id)arg0 ;
-(id)grabNextDictionary:(id)arg0 timeRange:(struct ? *)arg1 ;
-(id)grabNextFeatureBuffer;
-(id)grabNextFeatureBuffer:(struct ? *)arg0 ;
-(id)grabNextNSCoderObject:(id)arg0 class:(Class)arg1 ;
-(id)grabNextNSCoderObject:(id)arg0 class:(Class)arg1 timeRange:(struct ? *)arg2 ;
-(id)grabNextNSCoderObject:(id)arg0 classes:(id)arg1 ;
-(id)grabNextNSCoderObject:(id)arg0 classes:(id)arg1 timeRange:(struct ? *)arg2 ;
-(id)grabNextPRDevice;
-(id)grabNextPRDevice:(struct ? *)arg0 ;
-(id)grabNextRawALSData:(*NSInteger)arg0 ;
-(id)grabNextRawALSData:(struct ? *)arg0 location:(*NSInteger)arg1 ;
-(id)grabNextRawAccelData;
-(id)grabNextRawAccelData:(*NSInteger)arg0 ;
-(id)grabNextRawAccelData:(struct ? *)arg0 location:(*NSInteger)arg1 ;
-(id)grabNextRawCompassData;
-(id)grabNextRawCompassData:(*NSInteger)arg0 ;
-(id)grabNextRawCompassData:(struct ? *)arg0 location:(*NSInteger)arg1 ;
-(id)grabNextRawGyroData;
-(id)grabNextRawGyroData:(*NSInteger)arg0 ;
-(id)grabNextRawGyroData:(struct ? *)arg0 location:(*NSInteger)arg1 ;
-(id)grabNextTimedValue;
-(id)grabNextTimedValue:(struct ? *)arg0 ;
-(id)grabNextUserEvent;
-(id)grabNextUserEvent:(struct ? *)arg0 ;
-(id)grabSummary;
-(id)initWithFileURL:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(id)initWithFileURL:(id)arg0 enforcedVideoTrackFormat:(id)arg1 error:(*id)arg2 ;
-(id)initWithFileURL:(id)arg0 error:(*id)arg1 ;
-(id)mapProductToDevice:(id)arg0 ;
-(id)resolvedAccelStreamName:(*NSInteger)arg0 ;
-(id)resolvedCalibration:(*NSInteger)arg0 ;
-(id)resolvedCompassStreamName:(*NSInteger)arg0 ;
-(id)resolvedGyroStreamName:(*NSInteger)arg0 ;
-(unsigned int)reader:(id)arg0 pixelFormatForStream:(id)arg1 suggestedFormat:(unsigned int)arg2 ;


@end


#endif