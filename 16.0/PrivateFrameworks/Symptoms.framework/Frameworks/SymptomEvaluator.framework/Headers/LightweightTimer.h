// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LIGHTWEIGHTTIMER_H
#define LIGHTWEIGHTTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface LightweightTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id *_callback;
    CGFloat _slotScaleFactor;
    NSUInteger _timerExpiryTargetSlot;
    NSUInteger _numSlots;
    unsigned int _seqno;
    NSUInteger _nsecsPerSlot;
    NSUInteger _activeSlotBitmask;
    NSMutableArray" _entries;
}




-(BOOL)cancel:(NSUInteger)arg0 ;
-(NSUInteger)setRelativeTimer:(CGFloat)arg0 context:(id)arg1 ;
-(id)description;
-(id)initWithQueue:(id)arg0 maxDelay:(CGFloat)arg1 precision:(CGFloat)arg2 callback:(id)arg3 ;
-(void)_handleTimerExpiry;
-(void)dealloc;


@end


#endif