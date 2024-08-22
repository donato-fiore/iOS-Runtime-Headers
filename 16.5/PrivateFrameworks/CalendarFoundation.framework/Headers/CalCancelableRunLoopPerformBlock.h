// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALCANCELABLERUNLOOPPERFORMBLOCK_H
#define CALCANCELABLERUNLOOPPERFORMBLOCK_H

@class NSRunLoop;
@protocol CalCancelable;

#import <Foundation/Foundation.h>


@interface CalCancelableRunLoopPerformBlock : NSObject <CalCancelable>



@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSRunLoop *runLoop; // ivar: _runLoop


// -(id)initWithBlock:(id)arg0 inRunLoop:(unk)arg1  ;
-(void)_performBlock:(id)arg0 ;
-(void)cancel;
-(void)performAfterDelay:(CGFloat)arg0 ;


@end


#endif