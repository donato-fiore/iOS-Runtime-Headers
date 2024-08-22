// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVOPERATIONQUEUEWITHFUNDAMENTALDEPENDENCY_H
#define AVOPERATIONQUEUEWITHFUNDAMENTALDEPENDENCY_H

@class NSOperationQueue, NSOperation;



@interface AVOperationQueueWithFundamentalDependency : NSOperationQueue {
    NSOperation *_fundamentalOperation;
}




-(id)initWithFundamentalOperation:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)addOperations:(id)arg0 waitUntilFinished:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif