// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKASYNCTRANSACTION_H
#define CKASYNCTRANSACTION_H

@class NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKAsyncTransaction : NSObject {
    NSObject<OS_dispatch_group> *_group;
    NSMutableArray *_operations;
}


@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


-(id)initWithCallbackQueue:(id)arg0 completionBlock:(id)arg1 ;
-(void)_ensureTransactionData;
// -(void)addAsyncOperationWithBlock:(id)arg0 queue:(unk)arg1 completion:(id)arg2  ;
-(void)addCompletionBlock:(id)arg0 ;
// -(void)addOperationWithBlock:(id)arg0 queue:(unk)arg1 completion:(id)arg2  ;
-(void)cancel;
-(void)commit;
-(void)dealloc;


@end


#endif