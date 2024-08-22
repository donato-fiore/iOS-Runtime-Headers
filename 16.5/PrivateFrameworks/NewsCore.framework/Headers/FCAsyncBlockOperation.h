// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCASYNCBLOCKOPERATION_H
#define FCASYNCBLOCKOPERATION_H

@class NSOperation;



@interface FCAsyncBlockOperation : NSOperation {
    uint8_t _executing;
    uint8_t _finished;
}


@property (readonly, copy, nonatomic) id *block; // ivar: _block


+(id)asyncBlockOperationWithBlock:(id)arg0 ;
+(id)asyncBlockOperationWithMainThreadBlock:(id)arg0 ;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(void)start;


@end


#endif