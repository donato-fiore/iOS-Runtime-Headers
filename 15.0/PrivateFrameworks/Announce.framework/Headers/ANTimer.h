// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANTIMER_H
#define ANTIMER_H

@class NSString;
@protocol OS_os_log, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ANTimer : NSObject

@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) CGFloat timeoutValue; // ivar: _timeoutValue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


+(id)timerWithLabel:(id)arg0 identifier:(id)arg1 ;
-(id)description;
-(id)initWithLabel:(id)arg0 identifier:(id)arg1 ;
-(void)_createAndStartTimerWithQueue:(id)arg0 handler:(id)arg1 ;
-(void)_startTimer;
-(void)cancel;
-(void)reset;
-(void)startWithValue:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;


@end


#endif