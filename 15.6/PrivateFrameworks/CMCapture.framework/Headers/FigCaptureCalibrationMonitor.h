// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURECALIBRATIONMONITOR_H
#define FIGCAPTURECALIBRATIONMONITOR_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FigCaptureAutoFocusPositionSensorCalibrationContext.h"
#import "FigCaptureAutoFocusCalibrationContext.h"
#import "FigCaptureAPSSphereInteractionCalibrationContext.h"
#import "FigCaptureSphereCalibrationContext.h"
#import "FigCaptureSphereEndStopCalibrationContext.h"

@interface FigCaptureCalibrationMonitor : NSObject {
    NSMutableArray *_streamCalibrationInformation;
    NSObject<OS_dispatch_queue> *_calibrationRunQueue;
    *OpaqueFigSimpleMutex _calibrationPipelineMutex;
    BOOL _calibrationShouldAbort;
    os_unfair_lock_s _calibrationLock;
    ? _coreMotionMagneticField;
    CGFloat _coreMotionMagneticFieldMagnitude;
    int _magneticFieldAttempt;
    int _magneticFieldAccuracyAttemptCount;
    ? _magneticFieldMagnitudeTiers;
    FigCaptureAutoFocusPositionSensorCalibrationContext *_autoFocusPositionSensorCalibrationContext;
    FigCaptureAutoFocusCalibrationContext *_autoFocusCalibrationContext;
    FigCaptureAPSSphereInteractionCalibrationContext *_apsSphereInteractionCalibrationContext;
    FigCaptureSphereCalibrationContext *_sphereCalibrationContext;
    FigCaptureSphereEndStopCalibrationContext *_sphereEndStopCalibrationContext;
}




+(id)sharedInstance;
+(void)initialize;
+(void)initializeSharedInstance;
-(id)apsSphereInteractionCalibrationData;
-(id)autoFocusCalibrationData;
-(id)autoFocusPositionSensorCalibrationData;
-(id)init;
-(id)runAutoFocusPositionSensorCalibrationAndGetResultsForDeviceType:(int)arg0 devicePosition:(int)arg1 ;
-(id)sphereCalibrationData;
-(id)sphereEndStopCalibrationData;


@end


#endif