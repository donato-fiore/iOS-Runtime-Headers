// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSPROMISE_H
#define CPSPROMISE_H

@class NSConditionLock, NSError, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CPSPromise : NSObject {
    NSConditionLock *_stateLock;
    id *_result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}




+(id)promise;
-(BOOL)_isFinished;
-(id)init;
-(void)_finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)_flushCompletionBlocks;
-(void)addCompletionBlock:(id)arg0 ;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithResult:(id)arg0 ;


@end


#endif