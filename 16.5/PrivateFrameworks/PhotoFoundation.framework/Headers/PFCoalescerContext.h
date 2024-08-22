// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCOALESCERCONTEXT_H
#define PFCOALESCERCONTEXT_H

@class NSHashTable, NSArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFCoalescer.h"

@interface PFCoalescerContext : NSObject

@property NSUInteger coalescedUpdatesCount; // ivar: _coalescedUpdatesCount
@property (weak) PFCoalescer *coalescer; // ivar: _coalescer
@property (retain) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue; // ivar: _isolationQueue
@property (retain) NSHashTable *pendingActivityTokens; // ivar: _pendingActivityTokens
@property (readonly) NSArray *pendingActivityTokensSnapshot;


-(id)activityToken;
-(id)activityTokenWithReason:(id)arg0 ;
-(id)initWithCoalescer:(id)arg0 ;
-(void)cancelPendingActivityTokens;
-(void)delayNextInvocationByTimeInterval:(CGFloat)arg0 ;
-(void)notifyActivityTokenCompletionOnQueue:(id)arg0 handler:(id)arg1 ;
-(void)pushBack:(id)arg0 ;


@end


#endif