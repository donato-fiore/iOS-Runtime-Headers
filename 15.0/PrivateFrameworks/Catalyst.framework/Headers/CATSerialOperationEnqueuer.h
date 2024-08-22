// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATSERIALOPERATIONENQUEUER_H
#define CATSERIALOPERATIONENQUEUER_H

@class NSOperationQueue, NSOperation, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CATSerialOperationEnqueuer : NSObject {
    NSOperationQueue *mTargetQueue;
    NSOperation *mCurrentlyExecutingOperation;
    NSMutableArray *mPendingOperations;
    os_unfair_lock_s mLock;
    id *mStrongSelf;
}




-(id)initWithTargetOperationQueue:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)checkIfOperationIsFinished:(id)arg0 ;
-(void)dealloc;
-(void)enqueueNextOperation;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performThreadSafeBlock:(id)arg0 ;
-(void)startObservingOperation:(id)arg0 ;
-(void)stopObservingOperation:(id)arg0 ;


@end


#endif