// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWEVENTSTATISTICS_H
#define AWEVENTSTATISTICS_H

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface AWEventStatistics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _timerResumed;
    NSUInteger _lastLogTime;
    NSDate *_lastLogDate;
    NSMutableDictionary *_stats;
}




+(id)sharedStatistics;
-(id)init;
-(void)logEvent:(NSUInteger)arg0 ;


@end


#endif