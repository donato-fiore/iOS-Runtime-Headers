// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HIDANALYTICSREPORTER_H
#define HIDANALYTICSREPORTER_H

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface HIDAnalyticsReporter : NSObject {
    NSMutableSet *_events;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    os_unfair_lock_s _lock;
}




-(id)createBucketData:(id)arg0 fieldvalue:(id)arg1 fieldDescription:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)dispatchAnalyticsForEvent:(id)arg0 ;
-(void)logAnalyticsEvent:(id)arg0 ;
-(void)logAnalyticsEvent:(id)arg0 eventDescription:(id)arg1 eventValue:(id)arg2 ;
-(void)registerEvent:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)unregisterEvent:(id)arg0 ;


@end


#endif