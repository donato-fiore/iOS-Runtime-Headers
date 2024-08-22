// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASERVICECANCELABLEOPERATION_H
#define PHASERVICECANCELABLEOPERATION_H

@class NSInvocation;
@protocol OS_dispatch_group, PHAServiceOperationListener;

#import <Foundation/Foundation.h>


@interface PHAServiceCancelableOperation : NSObject {
    NSInteger _operationId;
    BOOL _cancelRequested;
    id *_cancellationBlock;
    NSObject<OS_dispatch_group> *_completionGroup;
}


@property (weak) NSObject<PHAServiceOperationListener> *delegate; // ivar: _delegate
@property (readonly) NSInvocation *invocation; // ivar: _invocation
@property (readonly) BOOL isCancelled;
@property (readonly) NSInteger operationId;


+(id)operationNotFoundError:(NSInteger)arg0 ;
-(BOOL)cancel;
-(id)description;
-(id)initWithOperationId:(NSInteger)arg0 invocation:(id)arg1 ;
-(id)operationCanceledError:(BOOL)arg0 ;
-(void)_startWork;
-(void)addCompletionBlock:(id)arg0 ;
-(void)enqueueOnQueue:(id)arg0 ;
-(void)runOperation;
-(void)setCancellationBlock:(id)arg0 ;
-(void)waitForCompletion;


@end


#endif