// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBALSTELEMETRY_H
#define CBALSTELEMETRY_H

@class NSUserDefaults, NSString;
@protocol CBContainerModuleProtocol, OS_dispatch_source;


#import "CBModule.h"

@interface CBALSTelemetry : CBModule <CBContainerModuleProtocol>

 {
    *__IOHIDServiceClient _alsService;
    NSObject<OS_dispatch_source> *_timer;
    NSUserDefaults *_defaults;
    CGFloat _timeFactor;
    NSUInteger _lastTimestampInMicroseconds;
    BOOL _alsLiveOnTelemetryEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)setALSService:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSUInteger)getBootTimeInMicroSeconds;
-(id)copyALSSampleHistoryWithLength:(int)arg0 frequency:(float)arg1 lastTimestamp:(*NSUInteger)arg2 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)handleSystemDidWakeFromSleepPropertyHandler:(id)arg0 ;
-(void)handleSystemPrepareForSleepPropertyHandler:(id)arg0 ;
-(void)sendNotificationForKey:(id)arg0 andValue:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)timerFired;
-(void)updateLastTimestampInDefaults;


@end


#endif