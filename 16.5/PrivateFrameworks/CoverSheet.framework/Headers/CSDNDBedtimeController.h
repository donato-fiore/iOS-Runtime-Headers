// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDNDBEDTIMECONTROLLER_H
#define CSDNDBEDTIMECONTROLLER_H

@class DNDStateService, NSHashTable, BSAbsoluteMachTimer, HKSPSleepStore, HKSPSleepSettings, NSString;
@protocol DNDStateUpdateListener, HKSPSleepStoreObserver;

#import <Foundation/Foundation.h>


@interface CSDNDBedtimeController : NSObject <DNDStateUpdateListener, HKSPSleepStoreObserver>

 {
    DNDStateService *_stateService;
    NSHashTable *_observers;
    BSAbsoluteMachTimer *_greetingGracePeriodTimer;
    BOOL _deactivated;
    HKSPSleepStore *_sleepStore;
    HKSPSleepSettings *_sleepSettings;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isGreetingDisabled) BOOL greetingDisabled;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldShowGreeting; // ivar: _shouldShowGreeting
@property (readonly) Class superclass;


-(id)init;
-(id)initWithStateService:(id)arg0 initialObserver:(id)arg1 ;
-(void)_cleanUpGreetingGracePeriodTimer;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)sleepStore:(id)arg0 sleepSettingsDidChange:(id)arg1 ;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;


@end


#endif