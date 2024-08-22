// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUTASYNCREDUCERSTATE_H
#define CUTASYNCREDUCERSTATE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CUTResult.h"

@interface CUTAsyncReducerState : NSObject

@property (copy, nonatomic) id *cancelBlock; // ivar: _cancelBlock
@property (copy, nonatomic) id *continueBlock; // ivar: _continueBlock
@property (retain, nonatomic) id *currentItem; // ivar: _currentItem
@property (retain, nonatomic) CUTResult *currentResult; // ivar: _currentResult
@property (retain, nonatomic) NSArray *pendingItems; // ivar: _pendingItems
@property (copy, nonatomic) id *stopBlock; // ivar: _stopBlock
@property (retain, nonatomic) NSArray *visitedItems; // ivar: _visitedItems


-(void)cancelWithError:(id)arg0 ;
-(void)continueWithResult:(id)arg0 ;
-(void)stopWithResult:(id)arg0 ;


@end


#endif