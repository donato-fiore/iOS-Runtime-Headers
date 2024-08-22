// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPTIMER_H
#define VCPTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface VCPTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    uint8_t _active;
    BOOL _isOneShot;
    id *_block;
}




+(id)timerWithInterval:(NSUInteger)arg0 unit:(NSUInteger)arg1 oneShot:(BOOL)arg2 andBlock:(id)arg3 ;
+(id)timerWithIntervalSeconds:(NSUInteger)arg0 isOneShot:(BOOL)arg1 andBlock:(id)arg2 ;
-(id)initWithIntervalNanoseconds:(NSUInteger)arg0 isOneShot:(BOOL)arg1 andBlock:(id)arg2 ;
-(void)dealloc;
-(void)destroy;
-(void)handleTimerEvent;


@end


#endif