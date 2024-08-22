// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCBOOSTABLEOPERATIONTHROTTLER_H
#define FCBOOSTABLEOPERATIONTHROTTLER_H

@protocol FCOperationThrottler, FCBoostableOperationThrottlerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FCBoostableOperationThrottler : NSObject <FCOperationThrottler>



@property (weak, nonatomic) NSObject<FCBoostableOperationThrottlerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger mergedData; // ivar: _mergedData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue; // ivar: _serialWorkQueue
@property BOOL suspended; // ivar: _suspended
@property (nonatomic) BOOL workPending; // ivar: _workPending
@property (nonatomic) os_unfair_lock_s workPendingLock; // ivar: _workPendingLock
@property (nonatomic) NSUInteger workPendingMergedData; // ivar: _workPendingMergedData
@property (nonatomic) NSInteger workPendingQualityOfService; // ivar: _workPendingQualityOfService


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)boostToQualityOfService:(NSInteger)arg0 ;
-(void)tickle;
-(void)tickleWithCompletion:(id)arg0 ;
-(void)tickleWithQualityOfService:(NSInteger)arg0 ;
-(void)tickleWithQualityOfService:(NSInteger)arg0 completion:(id)arg1 ;
-(void)tickleWithQualityOfService:(NSInteger)arg0 data:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif