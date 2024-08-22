// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKSYNCCOMPOSITEOPERATION_H
#define _DKSYNCCOMPOSITEOPERATION_H

@class DKSyncOperation, NSHashTable, NSMutableArray;


#import "_DKSyncCompositeOperation.h"

@interface _DKSyncCompositeOperation : DKSyncOperation {
    _DKSyncCompositeOperation *_parent;
    uint8_t _isReadyToStart;
    NSHashTable *_children;
    os_unfair_lock_s _lock;
}


@property (readonly) NSMutableArray *errors; // ivar: _errors


-(BOOL)isAsynchronous;
-(BOOL)isReady;
-(id)init;
-(id)initWithParent:(id)arg0 ;
-(void)_shutdownOperation;
-(void)cancel;
-(void)childOperation:(id)arg0 didEndWithErrors:(id)arg1 ;
-(void)childOperationWasAdded:(id)arg0 ;
-(void)dealloc;
-(void)endOperation;
-(void)setReadyToStart:(BOOL)arg0 ;


@end


#endif