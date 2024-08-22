// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BR_PACER_H
#define BR_PACER_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface br_pacer : NSObject {
    NSObject<OS_dispatch_source> *source;
    NSObject<OS_dispatch_source> *timer;
    NSObject<OS_dispatch_queue> *queue;
    id *event_block;
    CGFloat last_fire_time;
    CGFloat min_fire_interval;
    uint8_t ever_resumed;
}




-(void)dealloc;


@end


#endif