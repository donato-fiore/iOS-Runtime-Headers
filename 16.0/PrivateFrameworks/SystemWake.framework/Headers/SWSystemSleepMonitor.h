// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWSYSTEMSLEEPMONITOR_H
#define SWSYSTEMSLEEPMONITOR_H

@class NSString, NSHashTable;
@protocol SWSystemSleepMonitorProvidingDelegate, BSInvalidatable, OS_dispatch_queue, SWSystemSleepMonitorProviding, SWSystemSleepAssertionProviding;

#import <Foundation/Foundation.h>


@interface SWSystemSleepMonitor : NSObject <SWSystemSleepMonitorProvidingDelegate, BSInvalidatable>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_identifier;
    id<SWSystemSleepMonitorProviding> *_monitorProvider;
    id<SWSystemSleepAssertionProviding> *_sleepAssertionProvider;
    os_unfair_lock_s _lock;
    NSHashTable *_lock_observers;
    NSUInteger _lock_messageID;
    NSUInteger _state;
    BOOL _allowsInvalidation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isSleepImminent) BOOL sleepImminent;
@property (readonly, getter=hasSleepBeenRequested) BOOL sleepRequested;
@property (readonly) Class superclass;


+(id)monitorUsingMainQueue;
-(id)initWithIdentifier:(id)arg0 queue:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 queue:(id)arg1 allowsInvalidation:(BOOL)arg2 monitorProvider:(id)arg3 sleepAssertionProvider:(id)arg4 ;
-(void)addObserver:(id)arg0 ;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)systemPowerChanged:(unsigned int)arg0 notificationID:(*void)arg1 ;


@end


#endif