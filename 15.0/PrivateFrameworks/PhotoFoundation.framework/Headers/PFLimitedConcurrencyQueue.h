// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLIMITEDCONCURRENCYQUEUE_H
#define PFLIMITEDCONCURRENCYQUEUE_H



#import "PFDispatchQueue.h"

@interface PFLimitedConcurrencyQueue : PFDispatchQueue

@property (readonly) NSUInteger concurrencyLimit; // ivar: _concurrencyLimit


+(Class)concreteQueueClass;
+(NSUInteger)defaultConcurrency;
+(id)_newQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 targetQueue:(id)arg2 ;
+(id)newQueueWithLabel:(id)arg0 concurrencyLimit:(NSUInteger)arg1 ;
+(id)newQueueWithLabel:(id)arg0 concurrencyLimit:(NSUInteger)arg1 qos:(unsigned int)arg2 ;
+(id)newQueueWithLabel:(id)arg0 concurrencyLimit:(NSUInteger)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4 ;
+(id)newQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 targetQueue:(id)arg2 extensions:(id)arg3 ;


@end


#endif