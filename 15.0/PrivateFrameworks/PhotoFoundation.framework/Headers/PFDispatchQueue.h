// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFDISPATCHQUEUE_H
#define PFDISPATCHQUEUE_H


#import <Foundation/Foundation.h>


@interface PFDispatchQueue : NSObject



+(Class)concreteQueueClass;
+(id)_newQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 targetQueue:(id)arg2 ;
+(id)globalBackgroundQOSQueue;
+(id)globalCurrentQOSQueue;
+(id)globalDefaultQOSQueue;
+(id)globalQOSQueue:(unsigned int)arg0 ;
+(id)globalUserInitiatedQOSQueue;
+(id)globalUserInteractiveQOSQueue;
+(id)globalUtilityQOSQueue;
+(id)injectedExtensions;
+(id)mainQueue;
+(id)newConcurrentQueueWithLabel:(id)arg0 ;
+(id)newConcurrentQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 ;
+(id)newConcurrentQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 targetQueue:(id)arg2 extensions:(id)arg3 ;
+(id)newQueueWithLabel:(id)arg0 ;
+(id)newQueueWithLabel:(id)arg0 concurrencyLimit:(NSUInteger)arg1 ;
+(id)newQueueWithLabel:(id)arg0 concurrencyLimit:(NSUInteger)arg1 qos:(unsigned int)arg2 ;
+(id)newQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 ;
+(id)newQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 targetQueue:(id)arg2 extensions:(id)arg3 ;
+(id)newSerialQueueWithLabel:(id)arg0 ;
+(id)newSerialQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 ;
+(id)newSerialQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 targetQueue:(id)arg2 extensions:(id)arg3 ;
+(void)dispatchApply:(NSUInteger)arg0 ofBlock:(id)arg1 ;
+(void)dispatchApply:(NSUInteger)arg0 withConcurrencyLimit:(NSUInteger)arg1 canceler:(id)arg2 ofBlock:(id)arg3 ;
+(void)initialize;
-(id)_init;
-(void)dispatchAsyncWithCurrentQOS:(id)arg0 ;
-(void)dispatchAsyncWithQOS:(unsigned int)arg0 block:(id)arg1 ;
-(void)dispatchBarrierAsyncWithCurrentQOS:(id)arg0 ;
-(void)dispatchBarrierAsyncWithQOS:(unsigned int)arg0 block:(id)arg1 ;


@end


#endif