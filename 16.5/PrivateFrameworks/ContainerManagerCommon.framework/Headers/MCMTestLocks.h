// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMTESTLOCKS_H
#define MCMTESTLOCKS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MCMTestLocks : NSObject {
    NSInteger _lockCount;
    NSObject<OS_dispatch_queue>" _lockQueue;
    NSObject<OS_dispatch_semaphore>" _lockSemaphore;
}


@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue


+(id)sharedInstance;
-(id)init;
-(void)_stateQueue_acquireLock:(NSUInteger)arg0 ;
-(void)_stateQueue_releaseLock:(NSUInteger)arg0 ;
-(void)_stateQueue_updateCountForLock:(NSUInteger)arg0 byCount:(NSInteger)arg1 ;
-(void)acquireLock:(NSUInteger)arg0 ;
-(void)releaseAllLocks;
-(void)releaseLock:(NSUInteger)arg0 ;
-(void)waitOnLock:(NSUInteger)arg0 ;


@end


#endif