// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVASYNCOPERATION_H
#define MSVASYNCOPERATION_H

@class NSOperation, NSError;
@protocol OS_dispatch_queue;



@interface MSVAsyncOperation : NSOperation

@property (nonatomic, getter=_isExecuting, setter=_setExecuting:) BOOL _executing; // ivar: __executing
@property (nonatomic, getter=_isFinished, setter=_setFinished:) BOOL _finished; // ivar: __finished
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (copy, nonatomic) NSError *error; // ivar: _error


-(BOOL)isAsynchronous;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)execute;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif