// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUICHARGINGCONTROLLER_H
#define POWERUICHARGINGCONTROLLER_H

@class NSDictionary;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PowerUIChargingController : NSObject

@property (nonatomic) int chargingStateNotification; // ivar: _chargingStateNotification
@property (nonatomic) NSUInteger currentControllerClientState; // ivar: _currentControllerClientState
@property (nonatomic) NSUInteger lastChargingStatus; // ivar: _lastChargingStatus
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSDictionary *stateDescriptions; // ivar: _stateDescriptions


+(id)sharedInstance;
-(BOOL)disableCharging;
-(BOOL)disableChargingWithClientState:(NSUInteger)arg0 ;
-(BOOL)enableCharging;
-(BOOL)enableChargingWithClientState:(NSUInteger)arg0 ;
-(BOOL)setChargingStatus:(BOOL)arg0 ;
-(BOOL)shouldPriortizeDecisionForClientState:(NSUInteger)arg0 ;
-(id)init;
-(id)readNumberForPreferenceKey:(id)arg0 ;
-(id)status;
-(struct PowerUIControllerChargingStatus )lastChargeStatus;
-(void)overrideLastChargingStatus;
-(void)resetState;
-(void)setNumber:(id)arg0 forPreferenceKey:(id)arg1 ;


@end


#endif