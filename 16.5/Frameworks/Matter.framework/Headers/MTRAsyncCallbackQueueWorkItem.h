// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRASYNCCALLBACKQUEUEWORKITEM_H
#define MTRASYNCCALLBACKQUEUEWORKITEM_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MTRAsyncCallbackWorkQueue.h"

@interface MTRAsyncCallbackQueueWorkItem : NSObject

@property (copy, nonatomic) id *cancelHandler; // ivar: _cancelHandler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *readyHandler; // ivar: _readyHandler
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (retain, nonatomic) MTRAsyncCallbackWorkQueue *workQueue; // ivar: _workQueue


-(id)initWithQueue:(id)arg0 ;
-(void)callReadyHandlerWithContext:(id)arg0 ;
-(void)cancel;
-(void)endWork;
-(void)invalidate;
-(void)retryWork;


@end


#endif