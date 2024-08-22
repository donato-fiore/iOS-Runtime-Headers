// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKSEQUENTIALOPERATION_H
#define CRKSEQUENTIALOPERATION_H

@class CATOperation, NSArray, CATOperationQueue;



@interface CRKSequentialOperation : CATOperation

@property (retain, nonatomic) CATOperation *failedOperation; // ivar: _failedOperation
@property (nonatomic) NSUInteger frontOfQueue; // ivar: _frontOfQueue
@property (readonly, nonatomic) NSArray *operations; // ivar: _operations
@property (readonly, nonatomic) CATOperationQueue *queue; // ivar: _queue


+(id)sequentialOperationWithOperations:(id)arg0 ;
-(BOOL)isAsynchronous;
-(id)init;
-(id)initWithSequentialOperations:(id)arg0 queue:(id)arg1 ;
-(void)cancel;
-(void)frontOperationDidFinish:(id)arg0 ;
-(void)main;


@end


#endif