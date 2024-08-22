// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMSECURITYINFORMATIONCOMMAND_STATUSSECURITYINFO_H
#define CEMSECURITYINFORMATIONCOMMAND_STATUSSECURITYINFO_H

@class NSNumber, NSData, NSString;


#import "CEMPayloadBase.h"
#import "CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings.h"
#import "CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus.h"

@interface CEMSecurityInformationCommand_StatusSecurityInfo : CEMPayloadBase

@property (copy, nonatomic) NSNumber *statusFDEEnabled; // ivar: _statusFDEEnabled
@property (copy, nonatomic) NSNumber *statusFDEHasInstitutionalRecoveryKey; // ivar: _statusFDEHasInstitutionalRecoveryKey
@property (copy, nonatomic) NSNumber *statusFDEHasPersonalRecoveryKey; // ivar: _statusFDEHasPersonalRecoveryKey
@property (copy, nonatomic) NSData *statusFDEPersonalRecoveryKeyCMS; // ivar: _statusFDEPersonalRecoveryKeyCMS
@property (copy, nonatomic) NSString *statusFDEPersonalRecoveryKeyDeviceKey; // ivar: _statusFDEPersonalRecoveryKeyDeviceKey
@property (copy, nonatomic) CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings *statusFirewallSettings; // ivar: _statusFirewallSettings
@property (copy, nonatomic) CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus *statusFirmwarePasswordStatus; // ivar: _statusFirmwarePasswordStatus
@property (copy, nonatomic) NSNumber *statusHardwareEncryptionCaps; // ivar: _statusHardwareEncryptionCaps
@property (copy, nonatomic) NSNumber *statusPasscodeCompliant; // ivar: _statusPasscodeCompliant
@property (copy, nonatomic) NSNumber *statusPasscodeCompliantWithProfiles; // ivar: _statusPasscodeCompliantWithProfiles
@property (copy, nonatomic) NSNumber *statusPasscodeLockGracePeriod; // ivar: _statusPasscodeLockGracePeriod
@property (copy, nonatomic) NSNumber *statusPasscodeLockGracePeriodEnforced; // ivar: _statusPasscodeLockGracePeriodEnforced
@property (copy, nonatomic) NSNumber *statusPasscodePresent; // ivar: _statusPasscodePresent
@property (copy, nonatomic) NSNumber *statusSystemIntegrityProtectionEnabled; // ivar: _statusSystemIntegrityProtectionEnabled


+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithHardwareEncryptionCaps:(id)arg0 withPasscodePresent:(id)arg1 withPasscodeCompliant:(id)arg2 withPasscodeCompliantWithProfiles:(id)arg3 withPasscodeLockGracePeriod:(id)arg4 withPasscodeLockGracePeriodEnforced:(id)arg5 withFDEEnabled:(id)arg6 withFDEHasPersonalRecoveryKey:(id)arg7 withFDEHasInstitutionalRecoveryKey:(id)arg8 withFDEPersonalRecoveryKeyCMS:(id)arg9 withFDEPersonalRecoveryKeyDeviceKey:(id)arg10 withSystemIntegrityProtectionEnabled:(id)arg11 withFirewallSettings:(id)arg12 withFirmwarePasswordStatus:(id)arg13 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif