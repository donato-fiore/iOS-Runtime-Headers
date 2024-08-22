// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICBACKOFFTIMER_H
#define ICBACKOFFTIMER_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface ICBackoffTimer : NSObject

@property (nonatomic) NSUInteger backoffCount; // ivar: _backoffCount
@property (nonatomic) CGFloat initialTimeInterval; // ivar: _initialTimeInterval
@property (nonatomic) CGFloat maxTimeInterval; // ivar: _maxTimeInterval
@property (nonatomic) SEL selector; // ivar: _selector
@property (weak, nonatomic) id *target; // ivar: _target
@property (retain) NSTimer *timer; // ivar: _timer
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)isScheduled;
-(CGFloat)nextTimeInterval;
-(id)init;
-(id)initWithInitialInterval:(CGFloat)arg0 maxInterval:(CGFloat)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
-(void)dealloc;
-(void)fire;
-(void)fire:(id)arg0 ;
-(void)invalidate;
-(void)scheduleToFire;


@end


#endif