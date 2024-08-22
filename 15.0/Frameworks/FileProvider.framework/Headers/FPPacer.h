// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPPACER_H
#define FPPACER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface FPPacer : NSObject {
    CGFloat _lastFireTime;
    CGFloat _minFireInterval;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    uint8_t _sourceSuspendCount;
}


@property (copy, nonatomic) id *eventBlock; // ivar: _eventBlock


-(CGFloat)_computeNextTime;
-(id)initWithName:(id)arg0 queue:(id)arg1 minFireInterval:(CGFloat)arg2 ;
-(void)_fire;
-(void)_scheduleNextFire;
-(void)dealloc;
-(void)resume;
-(void)signal;
-(void)suspend;


@end


#endif