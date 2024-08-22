// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKTIMEOUTHARNESSOPERATION_H
#define CRKTIMEOUTHARNESSOPERATION_H

@class CATOperation, NSString;
@protocol CRKOperationQueue, CRKCancelable, CRKTimerPrimitives;



@interface CRKTimeoutHarnessOperation : CATOperation

@property (readonly, nonatomic) CATOperation *operation; // ivar: _operation
@property (readonly, nonatomic) NSObject<CRKOperationQueue> *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout
@property (retain, nonatomic) NSObject<CRKCancelable> *timeoutTimer; // ivar: _timeoutTimer
@property (readonly, copy, nonatomic) NSString *timerIdentifier; // ivar: _timerIdentifier
@property (readonly, nonatomic) NSObject<CRKTimerPrimitives> *timerPrimitives; // ivar: _timerPrimitives


-(BOOL)isAsynchronous;
-(id)initWithOperationQueue:(id)arg0 operation:(id)arg1 timout:(CGFloat)arg2 ;
-(id)initWithTimerPrimitives:(id)arg0 operationQueue:(id)arg1 operation:(id)arg2 timerIdentifier:(id)arg3 timeout:(CGFloat)arg4 ;
-(void)cancel;
-(void)dependentOperationDidFinish:(id)arg0 ;
-(void)main;
-(void)run;


@end


#endif