// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSENSORRECORDER_H
#define CMSENSORRECORDER_H


#import <Foundation/Foundation.h>


@interface CMSensorRecorder : NSObject



+(BOOL)isAccelerometerRecordingAvailable;
+(BOOL)isAuthorizedForRecording;
+(BOOL)isGyroRecordingAvailable;
+(BOOL)isPressureRecordingAvailable;
+(BOOL)isRecordingAvailableForType:(int)arg0 ;
+(NSInteger)authorizationStatus;
-(BOOL)sendAccelDataToUrl:(id)arg0 fromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)sendGyroDataToUrl:(id)arg0 fromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)sendPressureDataToUrl:(id)arg0 fromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)sendSensorDataToUrl:(id)arg0 fromDate:(id)arg1 toDate:(id)arg2 forType:(int)arg3 ;
-(BOOL)setAccelSampleRate:(unsigned int)arg0 ;
-(BOOL)setGyroSampleRate:(unsigned int)arg0 ;
-(BOOL)setPressureSampleRate:(unsigned int)arg0 ;
-(BOOL)setSensorSampleRate:(unsigned int)arg0 forType:(int)arg1 ;
-(BOOL)validateTimesFromDate:(*id)arg0 toDate:(id)arg1 ;
-(id)accelerometerDataFrom:(id)arg0 to:(id)arg1 ;
-(id)accelerometerDataFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)accelerometerDataSince:(NSUInteger)arg0 ;
-(id)accelerometerDataSinceId:(NSUInteger)arg0 ;
-(id)gyroDataFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)gyroDataSinceId:(NSUInteger)arg0 ;
-(id)pressureDataFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)pressureDataSinceId:(NSUInteger)arg0 ;
-(id)sensorDataFromDate:(id)arg0 toDate:(id)arg1 forType:(int)arg2 ;
-(void)recordAccelerometerFor:(CGFloat)arg0 ;
-(void)recordAccelerometerForDuration:(CGFloat)arg0 ;
-(void)recordDataType:(int)arg0 forDuration:(CGFloat)arg1 ;
-(void)recordGyroForDuration:(CGFloat)arg0 ;
-(void)recordPressureForDuration:(CGFloat)arg0 ;


@end


#endif