// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLUPDATEPROGRESSHANDLERS_H
#define MLUPDATEPROGRESSHANDLERS_H


#import <Foundation/Foundation.h>


@interface MLUpdateProgressHandlers : NSObject

@property (copy) id *completionHandler; // ivar: _completionHandler
@property NSInteger interestedEvents; // ivar: _interestedEvents
@property (copy) id *progressHandler; // ivar: _progressHandler


-(id)description;
// -(id)initForEvents:(NSInteger)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)_dispatchUpdateProgressHandlerForEvent:(NSInteger)arg0 metrics:(id)arg1 parameters:(id)arg2 error:(id)arg3 onQueue:(id)arg4 ;
-(void)dispatchEpochEndProgressHandlerWithMetrics:(id)arg0 parameters:(id)arg1 onQueue:(id)arg2 ;
-(void)dispatchMiniBatchEndProgressHandlerWithMetrics:(id)arg0 parameters:(id)arg1 onQueue:(id)arg2 ;
-(void)dispatchTrainingBeginProgressHandlerWithMetrics:(id)arg0 parameters:(id)arg1 onQueue:(id)arg2 ;
-(void)dispatchTrainingCompletionHandlerWithError:(id)arg0 onQueue:(id)arg1 ;
-(void)dispatchTrainingCompletionHandlerWithMetrics:(id)arg0 parameters:(id)arg1 onQueue:(id)arg2 ;


@end


#endif