// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMNETWORKCONFIGURATIONPROFILE_H
#define HMNETWORKCONFIGURATIONPROFILE_H

@class NSArray, NSString;
@protocol _HMNetworkConfigurationProfileDelegate, HMFLogging, HMNetworkConfigurationProfileDelegate;


#import "HMAccessoryProfile.h"
#import "HMAccessoryNetworkAccessViolation.h"

@interface HMNetworkConfigurationProfile : HMAccessoryProfile <_HMNetworkConfigurationProfileDelegate, HMFLogging>



@property (readonly) HMAccessoryNetworkAccessViolation *accessViolation;
@property (readonly) NSArray *allowedHosts;
@property (readonly) NSInteger credentialType;
@property (readonly) NSInteger currentProtectionMode;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMNetworkConfigurationProfileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isNetworkAccessRestricted) BOOL networkAccessRestricted;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsWiFiReconfiguration;
@property (readonly) NSInteger targetProtectionMode;


+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)initWithAccessoryIdentifier:(id)arg0 targetProtection:(NSInteger)arg1 currentProtection:(NSInteger)arg2 networkAccessRestricted:(BOOL)arg3 allowedHosts:(id)arg4 accessViolation:(id)arg5 supportsWiFiReconfiguration:(BOOL)arg6 credentialType:(NSInteger)arg7 ;
-(id)logIdentifier;
-(void)networkConfigurationProfileDidUpdateAccessViolation:(id)arg0 ;
-(void)networkConfigurationProfileDidUpdateAllowedHosts:(id)arg0 ;
-(void)networkConfigurationProfileDidUpdateNetworkAccessMode:(id)arg0 ;
-(void)networkConfigurationProfileDidUpdateProtectionMode:(id)arg0 ;
-(void)networkConfigurationProfileDidUpdateWiFiCredentialType:(id)arg0 ;
-(void)networkConfigurationProfileDidUpdateWiFiReconfigurationSupport:(id)arg0 ;
-(void)previewAllowedHostsForAutoProtectionModeWithCompletionHandler:(id)arg0 ;
-(void)reconfigureWiFiWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif