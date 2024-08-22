// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWAUTOFOCUSPOSITIONSENSORMONITOR_H
#define BWAUTOFOCUSPOSITIONSENSORMONITOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FigCaptureDisplayLayoutMonitor.h"

@interface BWAutoFocusPositionSensorMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_apsMonitorQueue;
    FigCaptureDisplayLayoutMonitor *_displayLayoutMonitor;
}




+(id)sharedInstance;
+(void)clientHasBeenBackgrounded;
+(void)initialize;
+(void)logStillImageAPSStatistics:(id)arg0 ;
+(void)logVideoRecordingAPSStatistics:(struct BWAPSStatistics *)arg0 ;
+(void)processAPSOffsetEstimatorInfo:(id)arg0 portType:(id)arg1 ;
-(id)_getLogFileHandle;
-(id)init;
-(int)_highMagneticFieldCountOfOtherCameras:(id)arg0 portType:(id)arg1 ;
-(void)_appendApsMotionData:(id)arg0 sphereMotionData:(id)arg1 toDataString:(id)arg2 ;
-(void)_logAPSOffsetEstimatorInfo:(id)arg0 portType:(id)arg1 ;
-(void)_logStillImageAPSStatistics:(id)arg0 ;
-(void)_logVideoRecordingAPSStatistics:(struct BWAPSStatistics *)arg0 ;
-(void)_postMagneticDetectionUserNotification;
-(void)_processAPSOffsetEstimatorInfo:(id)arg0 portType:(id)arg1 ;
-(void)_reportAPSOffsetEstimatorInfoToAggdAndCoreAnalytics:(id)arg0 portType:(id)arg1 ;
-(void)_reportStillImageAPSStatisticsToAggd:(id)arg0 ;
-(void)_reportVideoRecordingAPSStatisticsToAggd:(struct BWAPSStatistics *)arg0 ;
-(void)clientHasBeenBackgrounded;
-(void)dealloc;
-(void)logStillImageAPSStatistics:(id)arg0 ;
-(void)logVideoRecordingAPSStatistics:(struct BWAPSStatistics *)arg0 ;
-(void)processAPSOffsetEstimatorInfo:(id)arg0 portType:(id)arg1 ;


@end


#endif