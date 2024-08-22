// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTEXPONENTIALBACKOFFTIMER_H
#define MTEXPONENTIALBACKOFFTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface MTExponentialBackOffTimer : NSObject

@property (nonatomic) NSUInteger backoffFactor; // ivar: _backoffFactor
@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic) NSUInteger currentBackoff; // ivar: _currentBackoff
@property (nonatomic) CGFloat initialTime; // ivar: _initialTime
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


+(id)timerWithInitialTime:(CGFloat)arg0 backoffFactor:(NSUInteger)arg1 fireBlock:(id)arg2 ;
// +(id)timerWithInitialTime:(CGFloat)arg0 backoffFactor:(NSUInteger)arg1 fireBlock:(id)arg2 queue:(unk)arg3  ;
+(id)timerWithInitialTime:(CGFloat)arg0 fireBlock:(id)arg1 ;
-(id)description;
// -(id)initWithInitialTime:(CGFloat)arg0 backoffFactor:(NSUInteger)arg1 fireBlock:(id)arg2 queue:(unk)arg3  ;
-(void)_cancel;
-(void)reset;
-(void)start;
-(void)stop;


@end


#endif