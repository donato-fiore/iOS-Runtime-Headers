// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSATTSIRISTATEMONITOR_H
#define CSATTSIRISTATEMONITOR_H

@protocol OS_dispatch_queue;


#import "CSEventMonitor.h"

@interface CSAttSiriStateMonitor : CSEventMonitor

@property (nonatomic) NSUInteger attendingState; // ivar: _attendingState
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(BOOL)isAttending;
-(BOOL)isAttendingForDictation;
-(NSUInteger)getAttendingState;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)updateState:(NSUInteger)arg0 ;


@end


#endif