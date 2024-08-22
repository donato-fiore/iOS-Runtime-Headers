// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKWAITFORPROGRESSOPERATION_H
#define CRKWAITFORPROGRESSOPERATION_H

@class CATOperation, CATOperationQueue;



@interface CRKWaitForProgressOperation : CATOperation

@property (readonly, nonatomic) NSInteger expctedCompletedUnitCount; // ivar: _expctedCompletedUnitCount
@property (readonly, nonatomic) NSInteger expectedTotalUnitCount; // ivar: _expectedTotalUnitCount
@property (readonly, nonatomic) CATOperation *operation; // ivar: _operation
@property (readonly, nonatomic) CATOperationQueue *operationQueue; // ivar: _operationQueue


-(BOOL)isAsynchronous;
-(id)initWithOperationQueue:(id)arg0 operation:(id)arg1 expectedCompletedUnitCount:(NSInteger)arg2 expectedTotalUnitCount:(NSInteger)arg3 ;
-(void)cancel;
-(void)main;
-(void)observedOperationDidFail:(id)arg0 ;
-(void)observedOperationDidProgress:(id)arg0 ;


@end


#endif