// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALCANCELABLEDISPATCHBLOCK_H
#define CALCANCELABLEDISPATCHBLOCK_H

@protocol CalCancelable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CalCancelableDispatchBlock : NSObject <CalCancelable>



@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


// -(id)initWithBlock:(id)arg0 inQueue:(unk)arg1  ;
-(void)cancel;
-(void)performAfterDelay:(CGFloat)arg0 ;
-(void)performAsync;


@end


#endif