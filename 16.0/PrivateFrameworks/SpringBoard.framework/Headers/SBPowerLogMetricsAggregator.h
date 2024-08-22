// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPOWERLOGMETRICSAGGREGATOR_H
#define SBPOWERLOGMETRICSAGGREGATOR_H

@class NSMutableDictionary, NSCalendar;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBPowerLogMetricsAggregator : NSObject {
    NSObject<OS_dispatch_queue> *_backgroundPowerLogQueue;
    BOOL _flushScheduled;
    NSMutableDictionary *_eventsWithDuration;
    NSCalendar *_gregorian;
}




-(id)init;
-(void)_flushEvents;
-(void)_startTimerIfNecessary;
-(void)emitEventOfType:(NSUInteger)arg0 ;
-(void)emitEventOfType:(NSUInteger)arg0 withDuration:(CGFloat)arg1 ;
-(void)flushEventsDueToIminentPowerdown;


@end


#endif