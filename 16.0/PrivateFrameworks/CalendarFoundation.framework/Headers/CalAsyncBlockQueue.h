// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALASYNCBLOCKQUEUE_H
#define CALASYNCBLOCKQUEUE_H

@class NSMutableSet;
@protocol CalAsyncBlockPerformer;

#import <Foundation/Foundation.h>


@interface CalAsyncBlockQueue : NSObject

@property (readonly, nonatomic) NSObject<CalAsyncBlockPerformer> *blockPerformer; // ivar: _blockPerformer
@property (readonly, nonatomic) NSMutableSet *pendingBlocks; // ivar: _pendingBlocks


-(id)initWithBlockPerformer:(id)arg0 ;
-(void)cancelAllPendingBlocks;
-(void)performAfterDelay:(CGFloat)arg0 block:(id)arg1 ;
-(void)performAsync:(id)arg0 ;


@end


#endif