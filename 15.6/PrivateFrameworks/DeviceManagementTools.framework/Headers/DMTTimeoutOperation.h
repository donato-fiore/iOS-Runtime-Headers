// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMTTIMEOUTOPERATION_H
#define DMTTIMEOUTOPERATION_H

@class CATOperation, NSTimer;



@interface DMTTimeoutOperation : CATOperation

@property (readonly, nonatomic) BOOL cancelsOnTimeout; // ivar: _cancelsOnTimeout
@property (readonly, nonatomic) CATOperation *observedOperation; // ivar: _observedOperation
@property (readonly, nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (retain, nonatomic) NSTimer *timeoutTimer; // ivar: _timeoutTimer


-(BOOL)isAsynchronous;
-(id)initWithOperation:(id)arg0 timeout:(CGFloat)arg1 cancelsOnTimeout:(BOOL)arg2 ;
-(void)beginWaitingForOperation;
-(void)cancel;
-(void)createTimer;
-(void)innerOperationDidFinish:(id)arg0 ;
-(void)main;
-(void)timerDidFire:(id)arg0 ;


@end


#endif