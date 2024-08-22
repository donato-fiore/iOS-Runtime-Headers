// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAIRPLAYACCESSORY_H
#define HMDAIRPLAYACCESSORY_H

@class HMFExponentialBackoffTimer, NSString, HMFPairingIdentity;
@protocol HMDAccessoryMinimumUserPrivilegeCapable, HMDDevicePreferenceDataSource, HMFTimerDelegate, HMDAccessoryDisassociation, HMDAccessoryUserManagement, HMFLogging;


#import "HMDMediaAccessory.h"

@interface HMDAirPlayAccessory : HMDMediaAccessory <HMDAccessoryMinimumUserPrivilegeCapable, HMDDevicePreferenceDataSource, HMFTimerDelegate, HMDAccessoryDisassociation, HMDAccessoryUserManagement, HMFLogging>



@property (readonly, nonatomic) HMFExponentialBackoffTimer *configurationRetryTimer; // ivar: _configurationRetryTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger minimumUserPriviledge; // ivar: _minimumUserPriviledge
@property (readonly, copy) HMFPairingIdentity *pairingIdentity; // ivar: _pairingIdentity
@property (readonly, copy) NSString *password; // ivar: _password
@property (readonly) Class superclass;
@property (readonly) BOOL supportsDisassociation;
@property (readonly) BOOL supportsUserManagement;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)supportsDeviceWithCapabilities:(id)arg0 ;
-(BOOL)supportsMinimumUserPrivilege;
-(id)advertisement;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransaction:(id)arg0 home:(id)arg1 ;
-(id)messageSendPolicy;
-(id)transactionWithObjectChangeType:(NSUInteger)arg0 ;
-(void)_handleUpdatedName:(id)arg0 ;
-(void)addUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)configureWithHome:(id)arg0 msgDispatcher:(id)arg1 configurationTracker:(id)arg2 initialConfiguration:(BOOL)arg3 ;
-(void)disassociateUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)disassociateWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleUpdatedAdvertisement:(id)arg0 ;
-(void)handleUpdatedMinimumUserPrivilege:(NSInteger)arg0 ;
-(void)handleUpdatedPassword:(id)arg0 ;
-(void)pairingsWithCompletionHandler:(id)arg0 ;
-(void)populateModelObject:(id)arg0 version:(NSInteger)arg1 ;
-(void)removeUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)setAdvertisement:(id)arg0 ;
-(void)setReachable:(BOOL)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif