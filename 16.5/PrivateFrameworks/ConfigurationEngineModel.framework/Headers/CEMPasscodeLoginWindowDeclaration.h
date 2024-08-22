// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMPASSCODELOGINWINDOWDECLARATION_H
#define CEMPASSCODELOGINWINDOWDECLARATION_H

@class NSString, NSArray, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMPasscodeLoginWindowDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadAdminHostInfo; // ivar: _payloadAdminHostInfo
@property (copy, nonatomic) NSArray *payloadAllowList; // ivar: _payloadAllowList
@property (copy, nonatomic) NSArray *payloadDenyList; // ivar: _payloadDenyList
@property (copy, nonatomic) NSNumber *payloadDisableConsoleAccess; // ivar: _payloadDisableConsoleAccess
@property (copy, nonatomic) NSNumber *payloadDisableScreenLockImmediate; // ivar: _payloadDisableScreenLockImmediate
@property (copy, nonatomic) NSNumber *payloadHideAdminUsers; // ivar: _payloadHideAdminUsers
@property (copy, nonatomic) NSNumber *payloadHideLocalUsers; // ivar: _payloadHideLocalUsers
@property (copy, nonatomic) NSNumber *payloadHideMobileAccounts; // ivar: _payloadHideMobileAccounts
@property (copy, nonatomic) NSNumber *payloadIncludeNetworkUser; // ivar: _payloadIncludeNetworkUser
@property (copy, nonatomic) NSNumber *payloadLogOutDisabledWhileLoggedIn; // ivar: _payloadLogOutDisabledWhileLoggedIn
@property (copy, nonatomic) NSString *payloadLoginwindowText; // ivar: _payloadLoginwindowText
@property (copy, nonatomic) NSNumber *payloadPowerOffDisabledWhileLoggedIn; // ivar: _payloadPowerOffDisabledWhileLoggedIn
@property (copy, nonatomic) NSNumber *payloadRestartDisabled; // ivar: _payloadRestartDisabled
@property (copy, nonatomic) NSNumber *payloadRestartDisabledWhileLoggedIn; // ivar: _payloadRestartDisabledWhileLoggedIn
@property (copy, nonatomic) NSNumber *payloadSHOWFULLNAME; // ivar: _payloadSHOWFULLNAME
@property (copy, nonatomic) NSNumber *payloadSHOWOTHERUSERSMANAGED; // ivar: _payloadSHOWOTHERUSERSMANAGED
@property (copy, nonatomic) NSNumber *payloadShutDownDisabled; // ivar: _payloadShutDownDisabled
@property (copy, nonatomic) NSNumber *payloadShutDownDisabledWhileLoggedIn; // ivar: _payloadShutDownDisabledWhileLoggedIn
@property (copy, nonatomic) NSNumber *payloadSleepDisabled; // ivar: _payloadSleepDisabled
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withSHOWFULLNAME:(id)arg1 withHideLocalUsers:(id)arg2 withIncludeNetworkUser:(id)arg3 withHideAdminUsers:(id)arg4 withSHOWOTHERUSERSMANAGED:(id)arg5 withAdminHostInfo:(id)arg6 withAllowList:(id)arg7 withDenyList:(id)arg8 withHideMobileAccounts:(id)arg9 withShutDownDisabled:(id)arg10 withRestartDisabled:(id)arg11 withSleepDisabled:(id)arg12 withDisableConsoleAccess:(id)arg13 withLoginwindowText:(id)arg14 withShutDownDisabledWhileLoggedIn:(id)arg15 withRestartDisabledWhileLoggedIn:(id)arg16 withPowerOffDisabledWhileLoggedIn:(id)arg17 withLogOutDisabledWhileLoggedIn:(id)arg18 withDisableScreenLockImmediate:(id)arg19 ;
+(id)profileType;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)activationLevel;


@end


#endif