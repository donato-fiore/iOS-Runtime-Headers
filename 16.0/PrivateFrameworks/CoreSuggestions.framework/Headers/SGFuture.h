// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGFUTURE_H
#define SGFUTURE_H

@class NSError;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SGFuture : NSObject {
    NSObject *_result;
    NSError *_error;
    _opaque_pthread_mutex_t _lock;
    NSObject<OS_dispatch_queue> *_callbacks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    BOOL _alwaysUseCallbacksQueue;
    BOOL _yoDontLeaveMeHangingBro;
    NSObject *_parentObject;
    *void _parentObjectKey;
}


@property (readonly, nonatomic) BOOL isComplete; // ivar: _isComplete
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)createAfter:(id)arg0 onCreate:(id)arg1 ;
+(id)createWithImmediateError:(id)arg0 ;
+(id)createWithImmediateResult:(id)arg0 ;
+(id)createWithImmediateResult:(id)arg0 error:(id)arg1 ;
+(id)futureForObject:(id)arg0 withKey:(*void)arg1 onCreate:(id)arg2 ;
+(void)waitForFuturesToComplete:(id)arg0 withCallback:(id)arg1 ;
-(BOOL)_finishWithResult:(id)arg0 orError:(id)arg1 ;
-(BOOL)completeWithResult:(id)arg0 error:(id)arg1 ;
-(BOOL)fail:(id)arg0 ;
-(BOOL)succeed:(id)arg0 ;
-(id)completer:(SEL)arg0 ;
-(id)error;
-(id)init;
-(id)result;
-(id)wait;
-(id)waitWithTimeout:(CGFloat)arg0 ;
-(void)_clearTimeoutNonThreadSafe;
// -(void)_wait:(id)arg0 forSyncAPI:(unk)arg1  ;
-(void)clearTimeout;
-(void)dealloc;
-(void)disassociateFromParentObject;
-(void)setTargetQueue:(id)arg0 useAfterCompletion:(BOOL)arg1 ;
-(void)setTimeout:(CGFloat)arg0 ;
-(void)wait:(id)arg0 ;


@end


#endif