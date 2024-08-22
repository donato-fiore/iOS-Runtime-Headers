// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSDISPATCHTIMER_H
#define BSDISPATCHTIMER_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface BSDispatchTimer : NSObject {
    NSString *_identifier;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_lock_queue;
    NSObject<OS_dispatch_source> *_lock_source;
    id *_lock_context;
    id *_lock_handler;
    NSUInteger _lock_fireTime;
    NSInteger _lock_repeatNanoseconds;
    NSInteger _lock_leewayNanoseconds;
    NSUInteger _lock_fireCount;
    unsigned int _lock_scheduleToken;
    BOOL _lock_invalidated;
}




-(id)init;
-(void)dealloc;


@end


#endif