// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STKINCOMINGCALLUISTATEMONITOR_H
#define STKINCOMINGCALLUISTATEMONITOR_H

@class NSHashTable, BSTimer;

#import <Foundation/Foundation.h>


@interface STKIncomingCallUIStateMonitor : NSObject {
    os_unfair_lock_s _observersLock;
    NSHashTable *_observersLock_observers;
    BSTimer *_fallbackTimer;
    os_unfair_lock_s _lock;
    BOOL _lock_showingIncomingCallUI;
    int _inCallAlertVisibleNotifyToken;
}


@property (nonatomic) BOOL isShowingIncomingCallUI; // ivar: _isShowingIncomingCallUI


+(id)sharedInstance;
-(CGFloat)_fallbackTimerDuration;
-(id)init;
-(void)_refreshState;
-(void)_setIncomingCallUIState:(BOOL)arg0 forReason:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif