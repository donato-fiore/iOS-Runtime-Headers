// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVOPERATION_H
#define AVOPERATION_H

@class NSOperation, NSError;
@protocol OS_dispatch_queue;



@interface AVOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    NSInteger _status;
    NSError *_error;
}


@property (readonly) NSError *error;
@property (readonly) NSInteger status;


+(NSInteger)statusOfOperations:(id)arg0 error:(*id)arg1 ;
+(void)initialize;
-(BOOL)evaluateDependenciesAndMarkAsExecuting;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isReady;
-(id)init;
-(void)dealloc;
-(void)didEnterTerminalState;
-(void)markAsCancelled;
-(void)markAsCompleted;
-(void)markAsFailedWithError:(id)arg0 ;


@end


#endif