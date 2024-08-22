// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef METADATAWRAPPER_H
#define METADATAWRAPPER_H


#import <Foundation/Foundation.h>


@interface MetadataWrapper : NSObject



+(BOOL)locationFromTrackName:(id)arg0 location:(*NSInteger)arg1 ;
+(id)accelerometerTrackName:(*NSInteger)arg0 prefix:(id)arg1 ;
+(id)alsTrackName:(*NSInteger)arg0 prefix:(id)arg1 ;
+(id)compassTrackName:(*NSInteger)arg0 prefix:(id)arg1 ;
+(id)decodeALS:(id)arg0 ;
+(id)decodeAccel:(id)arg0 ;
+(id)decodeCLLocation:(id)arg0 ;
+(id)decodeCLLocation:(id)arg0 timestamp:(*CGFloat)arg1 ;
+(id)decodeCMData:(id)arg0 ;
+(id)decodeCMDeviceMotion:(id)arg0 ;
+(id)decodeCVACalibration:(id)arg0 ;
+(id)decodeCVACameraCalibrationData:(id)arg0 ;
+(id)decodeCVADepthTOF:(id)arg0 ;
+(id)decodeCVAFeatureBuffer:(id)arg0 ;
+(id)decodeCVATimedValue:(id)arg0 ;
+(id)decodeCVAUserEvent:(id)arg0 ;
+(id)decodeClass:(id)arg0 class:(Class)arg1 ;
+(id)decodeClass:(id)arg0 class:(Class)arg1 error:(*id)arg2 ;
+(id)decodeCommon:(id)arg0 ;
+(id)decodeCompass:(id)arg0 ;
+(id)decodeDictionary:(id)arg0 ;
+(id)decodeGyro:(id)arg0 ;
+(id)decodeLocationDict:(id)arg0 ;
+(id)decodeMotion:(id)arg0 ;
+(id)decodeNSCoderObject:(id)arg0 class:(Class)arg1 ;
+(id)decodeNSCoderObject:(id)arg0 class:(Class)arg1 error:(*id)arg2 ;
+(id)decodeNSCoderObject:(id)arg0 classes:(id)arg1 ;
+(id)decodeNSCoderObject:(id)arg0 classes:(id)arg1 error:(*id)arg2 ;
+(id)decodePRDevice:(id)arg0 ;
+(id)encodeALSData:(id)arg0 ;
+(id)encodeAccelerometerData:(id)arg0 andAdditionalData:(id)arg1 ;
+(id)encodeCMData:(id)arg0 ;
+(id)encodeCVACalibration:(id)arg0 ;
+(id)encodeCVACameraCalibrationData:(id)arg0 ;
+(id)encodeCVADepthTOF:(id)arg0 ;
+(id)encodeCVAFeatureBuffer:(id)arg0 ;
+(id)encodeCVATimedValue:(id)arg0 ;
+(id)encodeCVAUserEvent:(id)arg0 ;
+(id)encodeClass:(id)arg0 andAdditionalData:(id)arg1 ;
+(id)encodeCompassData:(id)arg0 ;
+(id)encodeCoreLocationData:(id)arg0 timestamp:(CGFloat)arg1 andAdditionalData:(id)arg2 ;
+(id)encodeDeviceMotionData:(id)arg0 andAdditionalData:(id)arg1 ;
+(id)encodeDictionary:(id)arg0 ;
+(id)encodeGyroscopeData:(id)arg0 andAdditionalData:(id)arg1 ;
+(id)encodeMotionData:(id)arg0 andAdditionalData:(id)arg1 ;
+(id)encodeNSCoderObject:(id)arg0 ;
+(id)encodePRDevice:(id)arg0 ;
+(id)gyroTrackName:(*NSInteger)arg0 prefix:(id)arg1 ;
+(id)version;


@end


#endif