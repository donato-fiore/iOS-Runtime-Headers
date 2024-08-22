// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSHARDWAREBUTTONEVENTMONITOR_H
#define DSHARDWAREBUTTONEVENTMONITOR_H

@class NSMutableSet, NSLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DSTestAutomation.h"

@interface DSHardwareButtonEventMonitor : NSObject {
    *__IOHIDEventSystemClient _buttonHIDSystemClient;
}


@property (nonatomic) BOOL allowEvents; // ivar: _allowEvents
@property (retain, nonatomic) NSMutableSet *buttonEventHandlers; // ivar: _buttonEventHandlers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *buttonEventQueue; // ivar: _buttonEventQueue
@property (retain, nonatomic) NSLock *eventHandlerChangeLock; // ivar: _eventHandlerChangeLock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *systemClientCreationQueue; // ivar: _systemClientCreationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (retain, nonatomic) DSTestAutomation *testAutomation; // ivar: _testAutomation


-(BOOL)_triggerHandlers:(id)arg0 event:(NSUInteger)arg1 ;
-(BOOL)hasTarget:(id)arg0 ;
-(id)_handlersForEvent:(NSUInteger)arg0 ;
-(id)_handlersForTarget:(id)arg0 ;
-(id)init;
-(void)addTarget:(id)arg0 action:(SEL)arg1 forButtonEvents:(NSUInteger)arg2 propagate:(BOOL)arg3 ;
-(void)removeTarget:(id)arg0 ;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 forButtonEvents:(NSUInteger)arg2 propagate:(BOOL)arg3 ;
-(void)startWithPriority:(NSInteger)arg0 completion:(id)arg1 ;
-(void)stopWithCompletion:(id)arg0 ;


@end


#endif