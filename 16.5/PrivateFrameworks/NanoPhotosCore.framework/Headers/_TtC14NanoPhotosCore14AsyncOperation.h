// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14NANOPHOTOSCORE14ASYNCOPERATION_H
#define _TTC14NANOPHOTOSCORE14ASYNCOPERATION_H

@class NSOperation;



@interface _TtC14NanoPhotosCore14AsyncOperation : NSOperation {
    ? stateQueue;
    ? _state;
}


@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;
@property (nonatomic, readonly) BOOL ready;


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isReady;
-(id)init;
-(void)main;
-(void)start;


@end


#endif