// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURESPHEREENDSTOPCALIBRATIONCONTEXT_H
#define FIGCAPTURESPHEREENDSTOPCALIBRATIONCONTEXT_H



#import "FigCaptureCalibrationContext.h"

@interface FigCaptureSphereEndStopCalibrationContext : FigCaptureCalibrationContext



+(id)calibrationDataStringForInternalLogging:(id)arg0 ;
+(id)createRawStreamCalibrationDataWithFailureReasons:(int)arg0 ;
+(unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)arg0 ;
+(void)initialize;
+(void)printDebugInfoForRawStreamCalibrationData:(id)arg0 ;
-(id)initWithSupportedDeviceNames:(id)arg0 ;
-(void)reportLoggingWithCalibrationData:(id)arg0 isValid:(BOOL)arg1 magneticFieldMagnitude:(CGFloat)arg2 ;


@end


#endif