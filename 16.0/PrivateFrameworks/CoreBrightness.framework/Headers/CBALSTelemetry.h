// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBALSTELEMETRY_H
#define CBALSTELEMETRY_H

@class SWSystemSleepMonitor, NSUserDefaults, NSString;
@protocol SWSystemSleepObserver, OS_dispatch_source;


#import "CBModule.h"

@interface CBALSTelemetry : CBModule <SWSystemSleepObserver>

 {
    *__IOHIDServiceClient _alsService;
    SWSystemSleepMonitor *_systemSleepMonitor;
    NSObject<OS_dispatch_source> *_timer;
    NSUserDefaults *_defaults;
    CGFloat _timeFactor;
    NSUInteger _lastTimestampInMicroseconds;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)setALSService:(struct __IOHIDServiceClient *)arg0 ;
-(NSUInteger)getBootTimeInMicroSeconds;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)sendNotificationForKey:(id)arg0 andValue:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)systemSleepMonitor:(id)arg0 prepareForSleepWithCompletion:(id)arg1 ;
-(void)systemSleepMonitorDidWakeFromSleep:(id)arg0 ;
-(void)timerFired;
-(void)updateLastTimestampInDefaults;


@end


#endif