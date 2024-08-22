// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDKEYTRANSFERAGENTCLIENT_H
#define HMDKEYTRANSFERAGENTCLIENT_H

@class HMFExponentialBackoffTimer, NSMutableDictionary, NSString, HMFNetMonitor, HMFNetServiceBrowser, NSMutableSet;
@protocol HMFNetServiceDelegate, HMFTimerDelegate, HMFNetMonitorDelegate, HMFNetServiceBrowserDelegate;


#import "HMDKeyTransferAgent.h"

@interface HMDKeyTransferAgentClient : HMDKeyTransferAgent <HMFNetServiceDelegate, HMFTimerDelegate, HMFNetMonitorDelegate, HMFNetServiceBrowserDelegate>



@property (retain, nonatomic) HMFExponentialBackoffTimer *atHomeRetryTimer; // ivar: _atHomeRetryTimer
@property (retain, nonatomic) NSMutableDictionary *bonjourKeys; // ivar: _bonjourKeys
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL haveCulledPlist; // ivar: _haveCulledPlist
@property (retain, nonatomic) NSMutableDictionary *idsKeys; // ivar: _idsKeys
@property (retain, nonatomic) HMFNetMonitor *netMonitor; // ivar: _netMonitor
@property (retain, nonatomic) NSString *pairingWithUUID; // ivar: _pairingWithUUID
@property (nonatomic) NSUInteger residentProvisioningStatus; // ivar: _residentProvisioningStatus
@property (nonatomic) BOOL resolutionInProgress; // ivar: _resolutionInProgress
@property (retain, nonatomic) HMFNetServiceBrowser *serviceBrowser; // ivar: _serviceBrowser
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *targetsToProcess; // ivar: _targetsToProcess
@property (nonatomic) NSInteger tfaState; // ivar: _tfaState


+(id)logCategory;
+(void)twoFactorAuthenticationEnabledForAccount:(id)arg0 altDSID:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)_newDeviceSeen:(id)arg0 ;
-(id)_deviceWithUUID:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 ;
-(void)__accessoryIsReachable:(id)arg0 ;
-(void)__accountChanged:(id)arg0 ;
-(void)__deviceAddedToAccount:(id)arg0 ;
-(void)__deviceRemovedFromAccount:(id)arg0 ;
-(void)__deviceUpdated:(id)arg0 ;
-(void)_beginBonjourResolution:(BOOL)arg0 ;
-(void)_device:(id)arg0 addedToAccount:(id)arg1 ;
-(void)_device:(id)arg0 removedFromAccount:(id)arg1 ;
-(void)_endPairingWithError:(id)arg0 suspendingTimer:(BOOL)arg1 ;
-(void)_handleKeyTransferAgentMessage:(id)arg0 ;
-(void)_handleResidentProvisioningStatusChanged:(id)arg0 ;
-(void)_havePairVerifiedAccessoryWithKeyUUID:(id)arg0 forDevice:(id)arg1 ;
-(void)_haveVerifiedTwoFactorAuthenticationWithKeyUUID:(id)arg0 forTarget:(id)arg1 ;
-(void)_reallyBeginBonjourResolution;
-(void)_restartKeyTransfer:(id)arg0 ;
-(void)_saveKeyPlist;
-(void)_sendATVPrivateKey:(id)arg0 withDevice:(id)arg1 retry:(NSUInteger)arg2 ;
-(void)_sendIOSPublicKey:(id)arg0 withDevice:(id)arg1 ;
-(void)_startBrowser;
-(void)_startPairingWithKeyUUID:(id)arg0 forTarget:(id)arg1 ;
-(void)_stopBrowser;
-(void)_tfaVerificationCompleteForKeyUUID:(id)arg0 forTarget:(id)arg1 ;
-(void)_tryPairingWithAccessories:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)netService:(id)arg0 didUpdateTXTRecord:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didAddService:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didStopBrowsingWithError:(id)arg1 ;
-(void)networkMonitorIsReachable:(id)arg0 ;
-(void)queryPlistDevices;
-(void)receivedBonjourTXTFrom:(id)arg0 withUUIDData:(id)arg1 ;
-(void)resetConfig;
-(void)timerDidFire:(id)arg0 ;


@end


#endif