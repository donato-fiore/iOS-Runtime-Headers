// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HVPOWERBUDGETTHROTTLINGSTATE_H
#define HVPOWERBUDGETTHROTTLINGSTATE_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface HVPowerBudgetThrottlingState : NSObject {
    _opaque_pthread_mutex_t _lock;
    NSObject<OS_os_log> *_log;
    ? _state;
    NSUInteger _absTimeAtOpStart;
    NSUInteger _timeSinceOpStart;
    int _fd;
    BOOL _opInProgress;
    BOOL _dirty;
    BOOL _wasOnBattery;
    BOOL _wasEnabled;
}




-(BOOL)canDoDiscretionaryWork;
-(BOOL)canDoDiscretionaryWork:(*unsigned int)arg0 ;
-(BOOL)canDoExtraDiscretionaryWork;
-(id)initWithPath:(id)arg0 log:(id)arg1 ;
-(id)state;
-(void)checkBatteryStateForRefill;
-(void)dealloc;
-(void)didConsumeAnExtraBudgetedOperation;
-(void)endWork;
-(void)refillState;
-(void)startWork;
-(void)updateState:(unsigned int)arg0 ;


@end


#endif