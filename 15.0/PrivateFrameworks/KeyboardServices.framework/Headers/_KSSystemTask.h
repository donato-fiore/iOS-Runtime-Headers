// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _KSSYSTEMTASK_H
#define _KSSYSTEMTASK_H

@class NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _KSSystemTask : NSObject

@property (nonatomic) CGFloat checkInTime; // ivar: _checkInTime
@property (readonly, nonatomic) NSObject<OS_xpc_object> *executionCriteria; // ivar: _executionCriteria
@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) CGFloat maxRunTime; // ivar: _maxRunTime
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger periodSeconds; // ivar: _periodSeconds
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(id)initWithName:(id)arg0 delay:(NSUInteger)arg1 handler:(id)arg2 ;
-(id)initWithName:(id)arg0 isPeriodic:(BOOL)arg1 period:(NSUInteger)arg2 handler:(id)arg3 ;


@end


#endif