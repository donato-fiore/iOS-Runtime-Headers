// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATOPERATIONQUEUE_H
#define CATOPERATIONQUEUE_H

@class NSOperationQueue;
@protocol CATOperationQueueDelegate;



@interface CATOperationQueue : NSOperationQueue

@property (weak, nonatomic) NSObject<CATOperationQueueDelegate> *delegate; // ivar: _delegate


+(id)backgroundQueue;
+(id)currentQueue;
+(id)mainQueue;
-(id)description;
-(void)addOperation:(id)arg0 ;
-(void)addOperations:(id)arg0 waitUntilFinished:(BOOL)arg1 ;
-(void)delegateOperationDidFinish:(id)arg0 ;
-(void)delegateWillAddOperation:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setUnderlyingQueue:(id)arg0 ;
-(void)startObserving:(id)arg0 ;
-(void)stopObserving:(id)arg0 ;


@end


#endif