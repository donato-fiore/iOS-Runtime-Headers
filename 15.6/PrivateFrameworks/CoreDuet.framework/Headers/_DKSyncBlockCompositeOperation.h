// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKSYNCBLOCKCOMPOSITEOPERATION_H
#define _DKSYNCBLOCKCOMPOSITEOPERATION_H

@class DKSyncCompositeOperation, NSMutableArray;



@interface _DKSyncBlockCompositeOperation : DKSyncCompositeOperation {
    os_unfair_lock_s _lock;
}


@property (readonly) NSMutableArray *blocks; // ivar: _blocks


-(BOOL)isAsynchronous;
-(id)executionBlocks;
-(void)main;


@end


#endif