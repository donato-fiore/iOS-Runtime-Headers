// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKSYNCBLOCKOPERATION_H
#define _DKSYNCBLOCKOPERATION_H

@class DKSyncOperation, NSMutableArray;



@interface _DKSyncBlockOperation : DKSyncOperation {
    os_unfair_lock_s _lock;
}


@property (getter=isAsynchronous) BOOL asynchronous; // ivar: _asynchronous
@property (readonly) NSMutableArray *blocks; // ivar: _blocks


+(id)blockOperationWithBlock:(id)arg0 ;
-(id)executionBlocks;
-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(void)addExecutionBlock:(id)arg0 ;
-(void)main;


@end


#endif