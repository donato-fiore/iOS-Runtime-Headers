// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFDISPATCHQUEUECLEARINGEXTENSION_H
#define PFDISPATCHQUEUECLEARINGEXTENSION_H

@class NSCountedSet, NSString;
@protocol PFDispatchQueueExtending;


#import "PFDispatchQueueExtension.h"

@interface PFDispatchQueueClearingExtension : PFDispatchQueueExtension <PFDispatchQueueExtending>

 {
    _opaque_pthread_mutex_t _lock;
    NSCountedSet *_activeOnQueues;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)countOfPurgingQueues;
+(id)alloc;
+(void)initialize;
-(NSUInteger)countOfPurgingQueues;
-(id)init;
-(id)initInternal;
-(id)queue:(id)arg0 receivedDispatchBarrierAsync:(id)arg1 ;
-(id)queue:(id)arg0 receivedDispatchBarrierSync:(id)arg1 ;
-(void)doPurge:(id)arg0 wait:(BOOL)arg1 ;
-(void)queue:(id)arg0 didDequeue:(id)arg1 skipExecution:(id)arg2 ;


@end


#endif