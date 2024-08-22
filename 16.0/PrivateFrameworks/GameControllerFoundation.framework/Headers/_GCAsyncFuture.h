// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCASYNCFUTURE_H
#define _GCASYNCFUTURE_H

@protocol OS_dispatch_group, OS_voucher;


#import "GCFuture.h"

@interface _GCAsyncFuture : GCFuture {
    NSObject<OS_dispatch_group> *_condGroup;
    NSObject<OS_voucher> *_creationVoucher;
    ContinuationList _continuations;
    NSUInteger _creatorFrame;
}




-(BOOL)_checkFinished:(BOOL)arg0 ;
-(BOOL)_setState:(NSInteger)arg0 result:(id)arg1 error:(id)arg2 ;
-(NSUInteger)_creatorFrame;
-(id)debugDescription;
-(void)_observeFinishOnQueue:(id)arg0 withOptions:(unsigned int)arg1 qosClass:(unsigned int)arg2 relativePriority:(int)arg3 block:(id)arg4 ;


@end


#endif