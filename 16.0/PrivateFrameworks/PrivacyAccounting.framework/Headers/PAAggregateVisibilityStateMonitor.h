// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAAGGREGATEVISIBILITYSTATEMONITOR_H
#define PAAGGREGATEVISIBILITYSTATEMONITOR_H

@protocol PAProcessStateMonitoring;

#import <Foundation/Foundation.h>


@interface PAAggregateVisibilityStateMonitor : NSObject {
    id<PAProcessStateMonitoring> *_rawMonitor;
    CGFloat _startupInterval;
}




-(id)initWithRawMonitor:(id)arg0 startupInterval:(CGFloat)arg1 ;
-(id)startMonitoringAggregateVisibilityStateForBundleIdentifiers:(id)arg0 onQueue:(id)arg1 withDelegate:(id)arg2 ;


@end


#endif