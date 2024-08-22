// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC26DOCUMENTMANAGEREXECUTABLES12DOCOPERATION_H
#define _TTC26DOCUMENTMANAGEREXECUTABLES12DOCOPERATION_H

@class NSOperation;



@interface _TtC26DocumentManagerExecutables12DOCOperation : NSOperation {
    ? synchronizationQueue;
    ? callbackQueue;
    ? _isFinished;
    ? _isExecuting;
    ? finishedBlock;
}


@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)cancel;
-(void)start;


@end


#endif