// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSATTSIRISTATEMONITOR_H
#define CSATTSIRISTATEMONITOR_H



#import "CSEventMonitor.h"

@interface CSAttSiriStateMonitor : CSEventMonitor

@property (nonatomic) NSUInteger currentState; // ivar: _currentState


+(id)sharedInstance;
-(BOOL)isInAttendingState;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)notifyUpdatedState:(NSUInteger)arg0 ;


@end


#endif