// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXAUTOLOOPVIDEOTASK_H
#define PXAUTOLOOPVIDEOTASK_H

@class NSError, NSString;
@protocol OS_dispatch_queue, PXAutoloopVideoTaskDelegate;

#import <Foundation/Foundation.h>


@interface PXAutoloopVideoTask : NSObject {
    NSObject<OS_dispatch_queue> *_performQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    *void _ivarQueueIdentifier;
    id<PXAutoloopVideoTaskDelegate> *_ivarQueue_delegate;
    NSInteger _ivarQueue_status;
    CGFloat _ivarQueue_progress;
    NSError *_ivarQueue_error;
    ? _ivarQueue_delegateFlags;
}


@property (weak, nonatomic) NSObject<PXAutoloopVideoTaskDelegate> *delegate;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) CGFloat progress;
@property (readonly, nonatomic) NSInteger status;
@property (readonly, copy, nonatomic) NSString *temporaryFilesDirectory; // ivar: _temporaryFilesDirectory


-(BOOL)_isOnIvarQueue;
-(BOOL)_isRunning;
-(id)init;
-(void)_performIvarRead:(id)arg0 ;
-(void)_performIvarWrite:(id)arg0 ;
-(void)_reset;
-(void)cancel;
-(void)performTaskWithInput:(id)arg0 ;
-(void)runWithInput:(id)arg0 ;


@end


#endif