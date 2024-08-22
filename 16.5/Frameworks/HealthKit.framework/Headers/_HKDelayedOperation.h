// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKDELAYEDOPERATION_H
#define _HKDELAYEDOPERATION_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

#import <Foundation/Foundation.h>


@interface _HKDelayedOperation : NSObject {
    id *_block;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _mode;
    NSInteger _clock;
    NSObject<OS_dispatch_source> *_timerSource;
    CGFloat _delay;
    CGFloat _lastExecution;
    CGFloat _nextScheduledExecution;
    NSString *_loggingName;
    NSObject<OS_os_log> *_loggingCategory;
}




-(id)initWithMode:(NSInteger)arg0 clock:(NSInteger)arg1 queue:(id)arg2 delay:(CGFloat)arg3 block:(id)arg4 ;
-(id)initWithMode:(NSInteger)arg0 queue:(id)arg1 delay:(CGFloat)arg2 block:(id)arg3 ;
-(id)initWithQueue:(id)arg0 delay:(CGFloat)arg1 block:(id)arg2 ;
-(void)_queue_executeBlockIfScheduled;
-(void)disableLogging;
-(void)enableLoggingWithName:(id)arg0 category:(id)arg1 ;
-(void)execute;
-(void)executeWithDelay:(CGFloat)arg0 ;
-(void)invalidate;


@end


#endif