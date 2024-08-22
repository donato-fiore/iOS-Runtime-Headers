// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(id)init;
-(void)dealloc;


@end


#endif