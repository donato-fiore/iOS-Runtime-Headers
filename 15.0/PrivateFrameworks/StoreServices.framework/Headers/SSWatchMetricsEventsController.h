// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSWATCHMETRICSEVENTSCONTROLLER_H
#define SSWATCHMETRICSEVENTSCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSWatchMetricsEventTable.h"

@interface SSWatchMetricsEventsController : NSObject {
    SSWatchMetricsEventTable *_table;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) SSWatchMetricsEventTable *table;


+(id)_numberFormatter;
-(BOOL)insertWatchMetricEvent:(id)arg0 error:(*id)arg1 ;
-(id)unreportedEventsSinceTimestamp:(NSInteger)arg0 ;
-(void)markAsCompleted:(id)arg0 ;
-(void)markAsFailed:(id)arg0 ;


@end


#endif