// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDISPATCHTIMER_H
#define IMDISPATCHTIMER_H

@class NSDate;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface IMDispatchTimer : NSObject

@property (retain, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (copy, nonatomic) id *handlerBlock; // ivar: _handlerBlock
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (nonatomic) BOOL repeats; // ivar: _repeats
@property (nonatomic) CGFloat timeInterval; // ivar: _timeInterval
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // ivar: _timerSource
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(id)initWithQueue:(id)arg0 interval:(NSUInteger)arg1 repeats:(BOOL)arg2 handlerBlock:(id)arg3 ;
-(id)initWithQueue:(id)arg0 interval:(NSUInteger)arg1 repeats:(BOOL)arg2 userInfo:(id)arg3 handlerBlock:(id)arg4 ;
-(void)fire;
-(void)invalidate;
-(void)stop;
-(void)updateTimerInterval:(NSUInteger)arg0 repeats:(BOOL)arg1 ;


@end


#endif