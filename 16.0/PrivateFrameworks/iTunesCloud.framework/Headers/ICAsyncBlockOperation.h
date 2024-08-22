// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASYNCBLOCKOPERATION_H
#define ICASYNCBLOCKOPERATION_H

@protocol OS_dispatch_queue;


#import "ICAsyncOperation.h"

@interface ICAsyncBlockOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id *_cancellationHandler;
}


@property (copy, nonatomic) id *cancellationHandler;
@property (readonly, copy, nonatomic) id *startHandler; // ivar: _startHandler


-(id)initWithStartHandler:(id)arg0 ;
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg0 ;


@end


#endif