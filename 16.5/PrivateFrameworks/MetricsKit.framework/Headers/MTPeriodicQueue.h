// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPERIODICQUEUE_H
#define MTPERIODICQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface MTPeriodicQueue : NSObject

@property (copy, nonatomic) id *flushHandler; // ivar: _flushHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *flushQueue; // ivar: _flushQueue
@property (nonatomic) CGFloat flushTimeInterval; // ivar: _flushTimeInterval
@property (nonatomic, getter=isFlushTimerEnabled) BOOL flushTimerEnabled; // ivar: _flushTimerEnabled
@property (nonatomic) NSInteger maximumBatchSize; // ivar: _maximumBatchSize
@property (retain, nonatomic) NSMutableArray *mutableObjects; // ivar: _mutableObjects
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


-(id)__clearObjects;
-(id)init;
-(void)__beginFlushTimer;
-(void)__endFlushTimer;
-(void)__flushObjects;
-(void)__flushObjects:(id)arg0 ;
-(void)__flushObjects:(id)arg0 maximumBatchSize:(NSInteger)arg1 flushHandler:(id)arg2 ;
-(void)_beginFlushTimer;
-(void)_endFlushTimer;
-(void)appendObject:(id)arg0 ;
-(void)dealloc;
-(void)flushObjects;
-(void)insertObject:(id)arg0 ;
-(void)insertObjects:(id)arg0 ;


@end


#endif