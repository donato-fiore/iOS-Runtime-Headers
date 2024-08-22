// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDPERIODICSCHEDULERJOB_H
#define _CDPERIODICSCHEDULERJOB_H

@class NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CDPeriodicSchedulerJob : NSObject

@property (retain) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (readonly) NSObject<OS_xpc_object> *executionCriteria; // ivar: _executionCriteria
@property (readonly) id *handler; // ivar: _handler
@property (readonly) CGFloat interval; // ivar: _interval
@property (readonly) BOOL isHandlerAsynchronous; // ivar: _isHandlerAsynchronous
@property (readonly) NSString *jobName; // ivar: _jobName
@property (readonly) NSInteger period; // ivar: _period
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)jobWithInterval:(CGFloat)arg0 schedulerJobName:(id)arg1 handler:(id)arg2 ;
+(id)jobWithInterval:(CGFloat)arg0 schedulerJobName:(id)arg1 queue:(id)arg2 asynchronousHandler:(BOOL)arg3 handler:(id)arg4 ;
+(id)jobWithPeriod:(NSInteger)arg0 schedulerJobName:(id)arg1 handler:(id)arg2 ;
-(id)init;
-(id)initWithPeriod:(NSInteger)arg0 interval:(CGFloat)arg1 schedulerJobName:(id)arg2 queue:(id)arg3 asynchronousHandler:(BOOL)arg4 handler:(id)arg5 ;


@end


#endif