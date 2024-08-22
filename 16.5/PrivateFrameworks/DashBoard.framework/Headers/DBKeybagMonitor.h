// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBKEYBAGMONITOR_H
#define DBKEYBAGMONITOR_H

@class CARObserverHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DBKeybagMonitor : NSObject

@property (nonatomic) CGFloat backoffInterval; // ivar: _backoffInterval
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) NSInteger currentState;
@property (nonatomic) int lockStateNotificationToken; // ivar: _lockStateNotificationToken
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic) NSInteger lockedState; // ivar: _lockedState
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (nonatomic) BOOL permanentlyBlocked; // ivar: _permanentlyBlocked
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)_handleKeybagStatusChanged;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif