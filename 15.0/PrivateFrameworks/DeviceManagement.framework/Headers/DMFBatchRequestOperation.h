// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFBATCHREQUESTOPERATION_H
#define DMFBATCHREQUESTOPERATION_H

@class CATOperation, CATRemoteTaskOperation, CATOperationQueue, NSArray;



@interface DMFBatchRequestOperation : CATOperation

@property (retain, nonatomic) CATRemoteTaskOperation *activityTransactionOperation; // ivar: _activityTransactionOperation
@property (retain, nonatomic) CATOperationQueue *queue; // ivar: _queue
@property (copy, nonatomic) NSArray *subOperations; // ivar: _subOperations


-(BOOL)isAsynchronous;
-(id)initWithActivityTransactionOperation:(id)arg0 subOperations:(id)arg1 ;
-(void)activityTransactionOperationDidFinish:(id)arg0 ;
-(void)activityTransactionOperationDidStart:(id)arg0 ;
-(void)main;
-(void)setName:(id)arg0 ;


@end


#endif