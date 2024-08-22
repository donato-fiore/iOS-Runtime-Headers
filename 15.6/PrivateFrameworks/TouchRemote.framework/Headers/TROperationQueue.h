// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TROPERATIONQUEUE_H
#define TROPERATIONQUEUE_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;



@interface TROperationQueue : NSOperationQueue

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cancellationQ; // ivar: _cancellationQ
@property (getter=isCancelled) BOOL cancelled; // ivar: _cancelled


-(id)init;
-(void)addOperation:(id)arg0 ;
-(void)addOperationWithBlock:(id)arg0 ;
-(void)addOperations:(id)arg0 waitUntilFinished:(BOOL)arg1 ;
-(void)invalidate;


@end


#endif