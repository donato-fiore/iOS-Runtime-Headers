// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCFUTURE_H
#define GCFUTURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface GCFuture : NSObject {
    os_unfair_lock_s _lock;
    char _state;
    ? _flags;
    uint8_t _activated;
    uint8_t _cancelled;
    id *_resultOrError;
}


@property (copy) NSString *label; // ivar: _label


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)cancelledFuture;
+(id)futureOnQueue:(id)arg0 withBlock:(id)arg1 ;
+(id)futureOnQueue:(id)arg0 withOptions:(unsigned int)arg1 block:(id)arg2 ;
+(id)futureWithBlock:(id)arg0 ;
+(id)futureWithError:(id)arg0 ;
+(id)futureWithLabel:(id)arg0 block:(id)arg1 ;
+(id)futureWithLabel:(id)arg0 onQueue:(id)arg1 block:(id)arg2 ;
+(id)futureWithOptions:(unsigned int)arg0 block:(id)arg1 ;
+(id)futureWithResult:(id)arg0 ;
-(BOOL)_checkFinished:(BOOL)arg0 ;
-(BOOL)_setState:(NSInteger)arg0 result:(id)arg1 error:(id)arg2 ;
-(BOOL)isFinished;
-(NSInteger)waitForResult:(*id)arg0 error:(*id)arg1 ;
-(NSInteger)waitUntilFinished;
-(NSUInteger)_creatorFrame;
-(id)_thenRequiringState:(NSInteger)arg0 onQueue:(id)arg1 withOptions:(unsigned int)arg2 qosClass:(unsigned int)arg3 relativePriority:(int)arg4 label:(id)arg5 block:(id)arg6 ;
-(id)_thenSynchronouslyRequiringState:(NSInteger)arg0 onQueue:(id)arg1 withOptions:(unsigned int)arg2 qosClass:(unsigned int)arg3 relativePriority:(int)arg4 label:(id)arg5 block:(id)arg6 ;
-(id)debugDescription;
-(id)description;
-(id)error;
-(id)init;
-(id)initCancelled;
-(id)initOnQueue:(id)arg0 withBlock:(id)arg1 ;
-(id)initOnQueue:(id)arg0 withOptions:(unsigned int)arg1 block:(id)arg2 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithResult:(id)arg0 ;
-(id)redactedDescription;
-(id)result;
-(id)resultIfFinished;
-(id)thenOnQueue:(id)arg0 with:(id)arg1 ;
-(id)thenOnQueue:(id)arg0 withOptions:(unsigned int)arg1 qosClass:(unsigned int)arg2 relativePriority:(int)arg3 label:(id)arg4 block:(id)arg5 ;
-(id)thenOnQueue:(id)arg0 withResult:(id)arg1 ;
-(id)thenSynchronouslyOnQueue:(id)arg0 with:(id)arg1 ;
-(id)thenSynchronouslyOnQueue:(id)arg0 withOptions:(unsigned int)arg1 qosClass:(unsigned int)arg2 relativePriority:(int)arg3 label:(id)arg4 block:(id)arg5 ;
-(id)thenSynchronouslyWith:(id)arg0 ;
-(id)thenSynchronouslyWithResult:(id)arg0 ;
-(id)thenWith:(id)arg0 ;
-(id)thenWithResult:(id)arg0 ;
-(void)_observeFinishOnQueue:(id)arg0 withOptions:(unsigned int)arg1 qosClass:(unsigned int)arg2 relativePriority:(int)arg3 block:(id)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)observeCancellation:(id)arg0 ;
-(void)observeFailure:(id)arg0 ;
-(void)observeFinish:(id)arg0 ;
-(void)observeFinishOnQueue:(id)arg0 withBlock:(id)arg1 ;
-(void)observeFinishOnQueue:(id)arg0 withOptions:(unsigned int)arg1 block:(id)arg2 ;
-(void)observeFinishOnQueue:(id)arg0 withOptions:(unsigned int)arg1 qosClass:(unsigned int)arg2 relativePriority:(int)arg3 block:(id)arg4 ;
-(void)observeFinishWithOptions:(unsigned int)arg0 block:(id)arg1 ;
-(void)observeSuccess:(id)arg0 ;
-(void)observeSuccessOnQueue:(id)arg0 withBlock:(id)arg1 ;


@end


#endif