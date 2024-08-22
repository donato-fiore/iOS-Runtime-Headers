// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSTIMER_H
#define STSTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface STSTimer : NSObject

@property (nonatomic) BOOL monotonic; // ivar: _monotonic
@property (nonatomic) NSUInteger popTimeInSeconds; // ivar: _popTimeInSeconds
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *src; // ivar: _src


-(id)description;
// -(id)initSleepTimerWithCallback:(id)arg0 queue:(unk)arg1  ;
// -(id)initWithCallback:(id)arg0 queue:(unk)arg1  ;
-(void)dealloc;
-(void)startTimer:(CGFloat)arg0 ;
-(void)startTimer:(CGFloat)arg0 leeway:(CGFloat)arg1 ;
-(void)stopTimer;


@end


#endif