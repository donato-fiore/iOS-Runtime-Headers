// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEPRESENTERASYNCHRONOUSOPERATION_H
#define NSFILEPRESENTERASYNCHRONOUSOPERATION_H



#import "NSOperation.h"

@interface NSFilePresenterAsynchronousOperation : NSOperation {
    id *_block;
    BOOL _isFinished;
    BOOL _isExecuting;
}




+(id)operationWithBlock:(id)arg0 ;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(void)finish;
-(void)start;


@end


#endif