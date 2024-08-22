// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSYNCOPERATIONQUEUE_H
#define HMDSYNCOPERATIONQUEUE_H

@class HMFObject, NSMutableArray, HMFExponentialBackoffTimer, NSString, NSArray;
@protocol HMFLogging;


#import "HMDSyncOperationManager.h"

@interface HMDSyncOperationQueue : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_stagedOperations;
    NSMutableArray *_waitingOperations;
}


@property (retain, nonatomic) HMFExponentialBackoffTimer *backoffTimer; // ivar: _backoffTimer
@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) NSInteger countTotal;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasExponentialBackoff; // ivar: _hasExponentialBackoff
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialBackoff; // ivar: _initialBackoff
@property (nonatomic) CGFloat initialDelay; // ivar: _initialDelay
@property (weak, nonatomic) HMDSyncOperationManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy) NSArray *stagedOperations;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *waitingOperations;


+(id)logCategory;
-(BOOL)isInMaximumTimeInterval;
-(BOOL)processFiredTimer:(id)arg0 ;
-(id)allOperations;
-(id)initName:(id)arg0 syncManager:(id)arg1 initialDelay:(CGFloat)arg2 initialBackoff:(CGFloat)arg3 hasBackoff:(BOOL)arg4 ;
-(id)nextOperation;
-(id)operationsToCancel;
-(void)_addOperation:(id)arg0 ;
-(void)_addStagedOperation:(id)arg0 ;
-(void)_addWaitingOperation:(id)arg0 ;
-(void)_createBackoffTimer;
-(void)_removeStagedOperation:(id)arg0 ;
-(void)_removeWaitingOperation:(id)arg0 ;
-(void)addOperation:(id)arg0 withDelay:(CGFloat)arg1 ;
-(void)dropAllOperations;
-(void)dropOperation:(id)arg0 ;
-(void)stageOperation:(id)arg0 ;


@end


#endif