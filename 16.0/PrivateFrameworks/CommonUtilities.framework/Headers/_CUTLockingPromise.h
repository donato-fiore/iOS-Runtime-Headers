// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CUTLOCKINGPROMISE_H
#define _CUTLOCKINGPROMISE_H

@class NSRecursiveLock, NSMutableArray;


#import "CUTPromise.h"
#import "CUTResult.h"

@interface _CUTLockingPromise : CUTPromise

@property (nonatomic) BOOL done; // ivar: _done
@property (retain, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (retain, nonatomic) CUTResult *result; // ivar: _result
@property (retain, nonatomic) NSMutableArray *resultBlocks; // ivar: _resultBlocks


-(id)init;
-(void)_fulfillWithResult:(id)arg0 ;
-(void)registerResultBlock:(id)arg0 ;


@end


#endif