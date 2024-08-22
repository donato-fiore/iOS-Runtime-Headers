// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFDISPATCHQUEUEEXTENSION_H
#define PFDISPATCHQUEUEEXTENSION_H

@class NSString;
@protocol PFDispatchQueueExtending;

#import <Foundation/Foundation.h>


@interface PFDispatchQueueExtension : NSObject <PFDispatchQueueExtending>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)extendedQueue:(id)arg0 ;
+(id)extensionOnQueue:(id)arg0 ;
+(id)extensionOnQueue:(id)arg0 matching:(id)arg1 ;
+(id)newConcurrentQueueWithLabel:(id)arg0 ;
+(id)newConcurrentQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 ;
+(id)newConcurrentQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 targetQueue:(id)arg2 ;
+(id)newSerialQueueWithLabel:(id)arg0 ;
+(id)newSerialQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 ;
+(id)newSerialQueueWithLabel:(id)arg0 qos:(unsigned int)arg1 targetQueue:(id)arg2 ;
-(id)newBlockInfo;
-(id)queue:(id)arg0 receivedDispatchAfter:(id)arg1 ;
-(id)queue:(id)arg0 receivedDispatchAsync:(id)arg1 ;
-(id)queue:(id)arg0 receivedDispatchBarrierAsync:(id)arg1 ;
-(id)queue:(id)arg0 receivedDispatchBarrierSync:(id)arg1 ;
-(id)queue:(id)arg0 receivedDispatchGroup:(id)arg1 async:(id)arg2 ;
-(id)queue:(id)arg0 receivedDispatchGroup:(id)arg1 notify:(id)arg2 ;
-(id)queue:(id)arg0 receivedDispatchSync:(id)arg1 ;
-(id)queue:(id)arg0 willTargetQueue:(id)arg1 ;
-(void)installOnQueue:(id)arg0 ;
-(void)queue:(id)arg0 didDequeue:(id)arg1 skipExecution:(id)arg2 ;
-(void)queue:(id)arg0 didExecute:(id)arg1 ;
-(void)queue:(id)arg0 skippedExecuting:(id)arg1 ;
-(void)queue:(id)arg0 willEnqueueAsync:(id)arg1 when:(id)arg2 ;
-(void)queue:(id)arg0 willEnqueueSync:(id)arg1 ;
-(void)queue:(id)arg0 willExecute:(id)arg1 ;
-(void)queueDidSuspend:(id)arg0 ;
-(void)queueWillResume:(id)arg0 ;


@end


#endif