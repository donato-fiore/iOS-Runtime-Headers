// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCBOOSTABLEOPERATIONTHROTTLER_H
#define RCBOOSTABLEOPERATIONTHROTTLER_H

@protocol RCOperationThrottler, RCOperationThrottlerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RCBoostableOperationThrottler : NSObject <RCOperationThrottler>



@property (weak, nonatomic) NSObject<RCOperationThrottlerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue; // ivar: _serialWorkQueue
@property BOOL suspended;
@property (nonatomic) BOOL workPending; // ivar: _workPending
@property (nonatomic) os_unfair_lock_s workPendingLock; // ivar: _workPendingLock


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)tickle;
-(void)tickleWithCompletion:(id)arg0 ;
-(void)tickleWithQualityOfService:(NSInteger)arg0 ;
-(void)tickleWithQualityOfService:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif