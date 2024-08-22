// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMNETWORKCONFIGURATIONPROFILE_H
#define _HMNETWORKCONFIGURATIONPROFILE_H

@class NSArray;
@protocol _HMNetworkConfigurationProfileDelegate;


#import "HMAccessoryProfile.h"
#import "HMAccessoryNetworkAccessViolation.h"

@interface _HMNetworkConfigurationProfile : HMAccessoryProfile

@property (readonly) HMAccessoryNetworkAccessViolation *accessViolation; // ivar: _accessViolation
@property (readonly) NSArray *allowedHosts; // ivar: _allowedHosts
@property (readonly) NSInteger credentialType; // ivar: _credentialType
@property (readonly) NSInteger currentProtectionMode; // ivar: _currentProtectionMode
@property (weak, nonatomic) NSObject<_HMNetworkConfigurationProfileDelegate> *delegate; // ivar: _delegate
@property (readonly, getter=isNetworkAccessRestricted) BOOL networkAccessRestricted; // ivar: _networkAccessRestricted
@property (readonly) BOOL supportsWiFiReconfiguration; // ivar: _supportsWiFiReconfiguration
@property (readonly) NSInteger targetProtectionMode; // ivar: _targetProtectionMode


-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(id)initWithAccessoryIdentifier:(id)arg0 targetProtection:(NSInteger)arg1 currentProtection:(NSInteger)arg2 networkAccessRestricted:(BOOL)arg3 allowedHosts:(id)arg4 accessViolation:(id)arg5 supportsWiFiReconfiguration:(BOOL)arg6 credentialType:(NSInteger)arg7 ;
-(id)messageDestination;
-(id)messageReceiveQueue;
-(id)messageTargetUUID;
-(void)_handleAccessViolationUpdated:(id)arg0 ;
-(void)_handleHostsUpdated:(id)arg0 ;
-(void)_handleWiFiReconfigurationUpdated:(id)arg0 ;
-(void)_notifyDelegateOfNetworkAccessModeChanged;
-(void)_notifyDelegateOfUpdatedAccessViolation;
-(void)_notifyDelegateOfUpdatedAllowedHosts;
-(void)_notifyDelegateOfUpdatedProtectionMode;
-(void)_notifyDelegateOfUpdatedWiFiCredentialType;
-(void)_notifyDelegateOfUpdatedWiFiReconfigurationSupport;
-(void)_registerNotificationHandlers;
-(void)previewAllowedHostsForAutoProtectionModeWithCompletionHandler:(id)arg0 ;
-(void)reconfigureWiFiWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif