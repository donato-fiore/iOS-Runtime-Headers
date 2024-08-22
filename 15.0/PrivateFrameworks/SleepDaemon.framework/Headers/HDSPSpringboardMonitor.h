// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSPRINGBOARDMONITOR_H
#define HDSPSPRINGBOARDMONITOR_H

@class HKSPObserverSet;

#import <Foundation/Foundation.h>


@interface HDSPSpringboardMonitor : NSObject

@property (readonly, nonatomic) BOOL isAppleWatch; // ivar: _isAppleWatch
@property (readonly, nonatomic) BOOL isSpringboardStarted;
@property (readonly, nonatomic) int notifyToken; // ivar: _notifyToken
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (readonly, nonatomic) BOOL springboardStarted; // ivar: _springboardStarted
@property (readonly, nonatomic) os_unfair_lock_s springboardStartedLock; // ivar: _springboardStartedLock


-(BOOL)_checkSpringBoardStarted;
-(id)_processName;
-(id)initWithCallbackScheduler:(id)arg0 isAppleWatch:(BOOL)arg1 ;
-(void)_checkAndNotify;
-(void)_startMonitoring;
-(void)_stopMonitoring;
-(void)_withLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif