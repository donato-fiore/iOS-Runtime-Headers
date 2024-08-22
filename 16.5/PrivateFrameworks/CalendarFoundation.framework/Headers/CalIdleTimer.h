// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALIDLETIMER_H
#define CALIDLETIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CalIdleTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id *_timeoutBlock;
    NSObject<OS_dispatch_source> *_timer;
    NSUInteger _timeoutInSeconds;
    NSUInteger _leewayInSeconds;
}




-(id)initWithQueue:(id)arg0 timeoutInSeconds:(NSUInteger)arg1 leewayInSeconds:(NSUInteger)arg2 timeoutBlock:(id)arg3 ;
-(void)cancel;
-(void)poke;
-(void)start;


@end


#endif