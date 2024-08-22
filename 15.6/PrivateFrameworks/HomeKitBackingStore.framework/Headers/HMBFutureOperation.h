// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBFUTUREOPERATION_H
#define HMBFUTUREOPERATION_H

@class HMFOperation, NAFuture;



@interface HMBFutureOperation : HMFOperation

@property (readonly, copy) id *block; // ivar: _block
@property (readonly) NAFuture *future; // ivar: _future


+(id)logCategory;
-(id)initWithBlock:(id)arg0 ;
-(void)cancelWithError:(id)arg0 ;
-(void)main;


@end


#endif