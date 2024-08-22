// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRASYNCCALLBACKWORKQUEUE_H
#define MTRASYNCCALLBACKWORKQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTRAsyncCallbackWorkQueue : NSObject

@property (readonly, nonatomic) id *context; // ivar: _context
@property (readonly, nonatomic) NSMutableArray *items; // ivar: _items
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSUInteger runningWorkItemCount; // ivar: _runningWorkItemCount


-(id)description;
-(id)initWithContext:(id)arg0 queue:(id)arg1 ;
-(void)_callNextReadyWorkItem;
-(void)_postProcessWorkItem:(id)arg0 retry:(BOOL)arg1 ;
-(void)endWork:(id)arg0 ;
-(void)enqueueWorkItem:(id)arg0 ;
-(void)invalidate;
-(void)retryWork:(id)arg0 ;


@end


#endif