// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREAUTOFOCUSPOSITIONSENSORCALIBRATIONCONTEXT_H
#define FIGCAPTUREAUTOFOCUSPOSITIONSENSORCALIBRATIONCONTEXT_H

@class NSMutableDictionary, NSMutableArray;


#import "FigCaptureCalibrationContext.h"

@interface FigCaptureAutoFocusPositionSensorCalibrationContext : FigCaptureCalibrationContext {
    BOOL _shouldDeleteOldVersion;
    NSMutableDictionary *_iStopZEstimateDeltaHistory;
    CGFloat _previousAngleDelta;
    CGFloat _currentAngleDelta;
    NSMutableArray *_calibrationDataHistoryQueue;
    int _maxHistoryBuffer;
    BOOL _lastSuccessfulCalibrationWasDiscarded;
    BOOL _supportsHistoryChecking;
    int _maxIStopZEstimateDifference;
    int _minCompassHeadingChange;
}


@property (nonatomic) BOOL disableHistoryChecking; // ivar: _disableHistoryChecking


+(id)calibrationDataStringForInternalLogging:(id)arg0 ;
+(id)createRawStreamCalibrationDataWithFailureReasons:(int)arg0 ;
+(unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)arg0 ;
+(void)initialize;
+(void)printDebugInfoForRawStreamCalibrationData:(id)arg0 ;
+(void)setStatusForCalibrationData:(id)arg0 status:(int)arg1 ;
-(BOOL)_calibrationDataCompassHeadingHasMovedPastMinimum:(id)arg0 basedOnCalibrationHistory:(id)arg1 ;
-(BOOL)_calibrationDataIsWithinIStopZEstimateLimits:(id)arg0 basedOnCalibrationHistory:(id)arg1 ;
-(BOOL)_shouldRejectCalibrationData:(id)arg0 ;
-(CGFloat)currentAngleDelta;
-(CGFloat)previousAngleDelta;
-(id)_initForUnitTestsSupportsHistoryChecking:(BOOL)arg0 ;
-(id)calibrationDataHistory;
-(id)initWithSupportedDeviceNames:(id)arg0 ;
-(int)currentIStopZEstimateDeltaForPosition:(id)arg0 ;
-(int)passingIStopZEstimateDeltaForPosition:(id)arg0 ;
-(int)previousIStopZEstimateDeltaForPosition:(id)arg0 ;
-(void)_pushToCalibrationHistoryQueue:(id)arg0 ;
-(void)pushCalibrationDataToHistory:(id)arg0 isRejected:(*BOOL)arg1 ;
-(void)reportLoggingWithCalibrationData:(id)arg0 isValid:(BOOL)arg1 magneticFieldMagnitude:(CGFloat)arg2 ;
-(void)setLastSuccessfulCalibrationData:(id)arg0 ;


@end


#endif