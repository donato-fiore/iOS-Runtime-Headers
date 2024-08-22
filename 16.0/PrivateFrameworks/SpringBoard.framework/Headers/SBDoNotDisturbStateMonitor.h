// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDONOTDISTURBSTATEMONITOR_H
#define SBDONOTDISTURBSTATEMONITOR_H

@class NSHashTable, DNDState, DNDStateService, NSString;
@protocol DNDStateUpdateListener;

#import <Foundation/Foundation.h>


@interface SBDoNotDisturbStateMonitor : NSObject <DNDStateUpdateListener>

 {
    os_unfair_lock_s _lock;
    NSHashTable *_lock_observers;
    DNDState *_lock_state;
    DNDStateService *_stateService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) DNDState *state;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_noteNewDNDState:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;


@end


#endif