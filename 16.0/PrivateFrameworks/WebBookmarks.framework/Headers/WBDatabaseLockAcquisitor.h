// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBDATABASELOCKACQUISITOR_H
#define WBDATABASELOCKACQUISITOR_H

@class NSTimer;
@protocol WBDatabaseLockAcquisitorDelegate;

#import <Foundation/Foundation.h>


@interface WBDatabaseLockAcquisitor : NSObject {
    NSTimer *_timer;
    Class _webBookmarkCollectionClass;
    BOOL _lockAcquired;
    NSInteger _maxRetryCount;
    NSInteger _retryCount;
}


@property (weak, nonatomic) NSObject<WBDatabaseLockAcquisitorDelegate> *delegate; // ivar: _delegate


-(BOOL)_attemptToLockSyncAndNotifyDelegateOnFailure:(BOOL)arg0 ;
-(id)initWithWebBookmarkCollectionClass:(Class)arg0 ;
-(void)_retryTimerFired:(id)arg0 ;
-(void)_startTimerWithTimeout:(CGFloat)arg0 retryInterval:(CGFloat)arg1 ;
-(void)_stopTimer;
-(void)acquireLockWithTimeout:(CGFloat)arg0 ;
-(void)acquireLockWithTimeout:(CGFloat)arg0 retryInterval:(CGFloat)arg1 ;
-(void)dealloc;
-(void)releaseLock;


@end


#endif