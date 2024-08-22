// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCOALESCER_H
#define CKCOALESCER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CKCoalescer : NSObject {
    _opaque_pthread_mutex_t _lock;
    BOOL _finished;
    BOOL _delegateProcessingInProgress;
    NSObject<OS_dispatch_source> *_fireTimer;
    NSUInteger _coalesceStart;
    NSUInteger _fireDelay;
    NSUInteger _eventCount;
    NSUInteger _noticeCount;
}


@property NSUInteger activityDelay; // ivar: _activityDelay
@property NSUInteger coalescingInterval; // ivar: _coalescingInterval
@property NSUInteger maxActivityDelay; // ivar: _maxActivityDelay
@property (readonly, copy, nonatomic) id *notifyBlock; // ivar: _notifyBlock
@property NSUInteger processingDelay; // ivar: _processingDelay


-(id)initWithActivityDelay:(NSUInteger)arg0 maxActivityDelay:(NSUInteger)arg1 coalescingInterval:(NSUInteger)arg2 processingDelay:(NSUInteger)arg3 notifyBlock:(id)arg4 ;
-(id)initWithNotifyBlock:(id)arg0 ;
-(id)initWithNotifyFrequency:(NSUInteger)arg0 notifyBlock:(id)arg1 ;
-(void)coalesce:(id)arg0 ;
-(void)dealloc;
-(void)delayPostBy:(NSUInteger)arg0 ;
-(void)finish:(id)arg0 ;
-(void)mutate:(id)arg0 ;
-(void)postFinishedNotice;
-(void)postNotice;
-(void)processingComplete;


@end


#endif