// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDEBOUNCER_H
#define WFDEBOUNCER_H

@class NSMapTable;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFDebouncer : NSObject

@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (retain, nonatomic) NSObject<OS_dispatch_source> *delayTimer; // ivar: _delayTimer
@property (readonly, nonatomic) CGFloat maximumDelay; // ivar: _maximumDelay
@property (retain, nonatomic) NSObject<OS_dispatch_source> *maximumDelayTimer; // ivar: _maximumDelayTimer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMapTable *targetTable; // ivar: _targetTable
@property (readonly, nonatomic) id *userInfo; // ivar: _userInfo


-(id)initWithDelay:(CGFloat)arg0 maximumDelay:(CGFloat)arg1 queue:(id)arg2 ;
-(id)initWithDelay:(CGFloat)arg0 maximumDelay:(CGFloat)arg1 queue:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithDelay:(CGFloat)arg0 queue:(id)arg1 ;
-(void)addTarget:(id)arg0 action:(SEL)arg1 ;
-(void)fire;
-(void)poke;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 ;
-(void)restartDelayTimer;
-(void)startMaximumDelayTimerIfNecessary;


@end


#endif