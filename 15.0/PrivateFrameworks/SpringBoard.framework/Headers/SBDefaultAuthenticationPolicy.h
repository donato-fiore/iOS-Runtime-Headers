// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDEFAULTAUTHENTICATIONPOLICY_H
#define SBDEFAULTAUTHENTICATIONPOLICY_H

@class NSString, SecureBackup;
@protocol SBFAuthenticationPolicy;

#import <Foundation/Foundation.h>

#import "SBiCloudPasscodeRequirementLockoutController.h"
#import "SBSoftwareUpdatePasscodePolicyManager.h"

@interface SBDefaultAuthenticationPolicy : NSObject <SBFAuthenticationPolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBiCloudPasscodeRequirementLockoutController *iCloudPasscodeRequirementLockoutController; // ivar: _iCloudPasscodeRequirementLockoutController
@property (retain, nonatomic, getter=_secureBackupHelper, setter=_setSecureBackupHelper:) SecureBackup *secureBackupHelper; // ivar: _secureBackupHelper
@property (retain, nonatomic) SBSoftwareUpdatePasscodePolicyManager *softwareUpdatePasscodePolicyManager; // ivar: _softwareUpdatePasscodePolicyManager
@property (readonly) Class superclass;


-(BOOL)allowAuthenticationRevocation;
-(BOOL)shouldClearBlockStateOnSync;
-(BOOL)usesSecureMode;
-(void)cachePasscode:(id)arg0 ;
-(void)clearPasscodeCache;
-(void)passcodeAuthenticationFailedWithError:(id)arg0 ;
-(void)wipeDeviceWithReason:(id)arg0 ;


@end


#endif