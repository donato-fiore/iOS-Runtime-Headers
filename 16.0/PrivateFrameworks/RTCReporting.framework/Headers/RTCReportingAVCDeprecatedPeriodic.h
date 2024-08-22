// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTCREPORTINGAVCDEPRECATEDPERIODIC_H
#define RTCREPORTINGAVCDEPRECATEDPERIODIC_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "RTCReporting.h"

@interface RTCReportingAVCDeprecatedPeriodic : NSObject {
    int _counter;
    NSMutableDictionary *_periodicServiceDict;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_periodicTaskQueue;
    NSObject<OS_dispatch_source> *_timer;
    RTCReporting *_session;
}




-(BOOL)registerPeriodicTaskForModule:(unsigned int)arg0 needToUpdate:(BOOL)arg1 needToReport:(BOOL)arg2 serviceBlock:(id)arg3 ;
-(BOOL)unregisterPeriodTaskForModule:(unsigned int)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(void)_myPeriodicTask:(unsigned short)arg0 type:(unsigned short)arg1 intervalMultiplier:(int)arg2 updateTimeout:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)startLogTimerWithInterval:(int)arg0 reportingMultiplier:(int)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 ;
-(void)stopLogTimer;


@end


#endif