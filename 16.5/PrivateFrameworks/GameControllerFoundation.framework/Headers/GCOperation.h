// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCOPERATION_H
#define GCOPERATION_H

@protocol OS_dispatch_queue, OS_voucher, OS_dispatch_object;


#import "GCFuture.h"

@interface GCOperation : GCFuture {
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_voucher> *_creationVoucher;
    unsigned int _qos;
    int _relativePriority;
    ContinuationList _continuations;
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSObject<OS_dispatch_object> *_syncBoostQueueOrAsyncGroup;
    NSUInteger _creatorFrame;
}


@property (copy, nonatomic) id *asyncBlock; // ivar: _asyncBlock
@property (copy, nonatomic) id *syncBlock; // ivar: _syncBlock


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_checkFinished:(BOOL)arg0 ;
-(BOOL)_setState:(NSInteger)arg0 result:(id)arg1 error:(id)arg2 ;
-(NSUInteger)_creatorFrame;
-(id)_thenSynchronouslyRequiringState:(NSInteger)arg0 onQueue:(id)arg1 withOptions:(unsigned int)arg2 qosClass:(unsigned int)arg3 relativePriority:(int)arg4 label:(id)arg5 block:(id)arg6 ;
-(id)activate;
-(id)debugDescription;
-(id)initCancelled;
-(id)initOnQueue:(id)arg0 withBlock:(id)arg1 ;
-(id)initOnQueue:(id)arg0 withOptions:(unsigned int)arg1 ;
-(id)initOnQueue:(id)arg0 withOptions:(unsigned int)arg1 block:(id)arg2 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithResult:(id)arg0 ;
-(id)startAsynchronously;
-(void)_observeFinishOnQueue:(id)arg0 withOptions:(unsigned int)arg1 qosClass:(unsigned int)arg2 relativePriority:(int)arg3 block:(id)arg4 ;
-(void)setLabel:(id)arg0 ;


@end


#endif