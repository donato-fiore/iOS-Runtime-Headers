// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPPERIODICTASK_H
#define _DPPERIODICTASK_H

@class NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DPPeriodicTask : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *executionCriteria; // ivar: _executionCriteria
@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL networkingRequired; // ivar: _networkingRequired
@property (readonly, nonatomic) NSUInteger periodSeconds; // ivar: _periodSeconds
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)taskWithName:(id)arg0 period:(NSUInteger)arg1 handler:(id)arg2 ;
// +(id)taskWithName:(id)arg0 period:(NSUInteger)arg1 handler:(id)arg2 networkingRequired:(unk)arg3  ;
-(id)init;
-(id)initWithName:(id)arg0 period:(NSUInteger)arg1 handler:(id)arg2 ;
// -(id)initWithName:(id)arg0 period:(NSUInteger)arg1 handler:(id)arg2 networkingRequired:(unk)arg3  ;


@end


#endif