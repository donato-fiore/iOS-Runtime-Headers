// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDFTMPRODUCERMETRICTRACKER_H
#define _HDFTMPRODUCERMETRICTRACKER_H

@class _HKExpiringCompletionTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _HDFTMProducerMetricTracker : NSObject {
    _HKExpiringCompletionTimer *_timer;
    id *_timeoutHandler;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _paused;
    BOOL _metricAvailable;
}






@end


#endif