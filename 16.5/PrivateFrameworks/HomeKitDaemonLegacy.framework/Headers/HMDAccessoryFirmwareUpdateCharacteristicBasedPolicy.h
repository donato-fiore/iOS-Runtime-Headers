// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYFIRMWAREUPDATECHARACTERISTICBASEDPOLICY_H
#define HMDACCESSORYFIRMWAREUPDATECHARACTERISTICBASEDPOLICY_H

@class NSString, HMFTimer;
@protocol HMFTimerDelegate;


#import "HMDAccessoryFirmwareUpdatePolicy.h"
#import "HMDCharacteristic.h"

@interface HMDAccessoryFirmwareUpdateCharacteristicBasedPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFTimerDelegate>



@property (readonly) HMDCharacteristic *characteristic;
@property (readonly) NSString *characteristicType; // ivar: _characteristicType
@property (readonly) NSUInteger debounceDuration; // ivar: _debounceDuration
@property (retain, nonatomic) HMFTimer *debounceTimer; // ivar: _debounceTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) id *policyHandler; // ivar: _policyHandler
@property (readonly) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_policyStatusFromCharacteristic:(id)arg0 ;
-(BOOL)evaluate;
-(BOOL)isEqual:(id)arg0 ;
// -(id)initWithAccessory:(id)arg0 serviceType:(id)arg1 characteristicType:(id)arg2 debounceDuration:(NSUInteger)arg3 policyHandler:(id)arg4 workQueue:(unk)arg5  ;
-(void)_startDebounceTimer;
-(void)_stopDebounceTimer;
-(void)configure;
-(void)dealloc;
-(void)handleCharacteristicValuesChanged:(id)arg0 ;
-(void)registerForNotifications;
-(void)timerDidFire:(id)arg0 ;


@end


#endif