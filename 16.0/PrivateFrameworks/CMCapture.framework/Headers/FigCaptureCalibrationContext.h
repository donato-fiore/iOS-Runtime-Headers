// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURECALIBRATIONCONTEXT_H
#define FIGCAPTURECALIBRATIONCONTEXT_H

@class NSMutableDictionary, NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface FigCaptureCalibrationContext : NSObject {
    NSMutableDictionary *_lastSuccessfulCalibrationData;
    NSString *_preferenceString;
    NSString *_internalLogName;
    NSArray *_supportedDevices;
}


@property (readonly, nonatomic) NSString *activityName; // ivar: _activityName
@property (readonly, nonatomic) NSUInteger expectedDataSize; // ivar: _expectedDataSize
@property (readonly, nonatomic) int interval; // ivar: _interval
@property (retain, nonatomic) NSDictionary *lastSuccessfulCalibrationData;
@property (nonatomic) ? lastSuccessfulCalibrationMagneticField; // ivar: _lastSuccessfulCalibrationMagneticField
@property (nonatomic) CGFloat lastSuccessfulCalibrationTimeStamp; // ivar: _lastSuccessfulCalibrationTimeStamp
@property (readonly, nonatomic) int minimumBatteryLevelToRun; // ivar: _minimumBatteryLevelToRun
@property (readonly, nonatomic) NSString *propertyName; // ivar: _propertyName


+(id)calibrationDataStringForInternalLogging:(id)arg0 ;
+(id)createRawStreamCalibrationDataWithFailureReasons:(int)arg0 ;
+(unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)arg0 ;
+(void)initialize;
+(void)printDebugInfoForRawStreamCalibrationData:(id)arg0 ;
+(void)setStatusForCalibrationData:(id)arg0 status:(int)arg1 ;
-(id)calibrationDataHistory;
-(id)initWithPreferenceString:(id)arg0 withActivityName:(id)arg1 withPropertyName:(id)arg2 withExpectedDataSize:(NSUInteger)arg3 withInterval:(int)arg4 withMinimumBatteryLevel:(int)arg5 withInternalLogName:(id)arg6 supportedDeviceNames:(id)arg7 ;
-(id)initWithSupportedDeviceNames:(id)arg0 ;
-(void)pushCalibrationDataToHistory:(id)arg0 isRejected:(*BOOL)arg1 ;
-(void)reportLoggingWithCalibrationData:(id)arg0 isValid:(BOOL)arg1 magneticFieldMagnitude:(CGFloat)arg2 ;
-(void)updateWithNewCalibrationData:(id)arg0 orExternalErrors:(unsigned int)arg1 magneticFieldAttempts:(int)arg2 magneticField:(struct ? )arg3 isCalibrationValid:(*BOOL)arg4 calibrationStatus:(*unsigned int)arg5 ;


@end


#endif