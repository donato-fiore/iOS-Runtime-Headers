// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMACCOUNTMAILDECLARATION_H
#define CEMACCOUNTMAILDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMAccountMailDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowMailDrop; // ivar: _payloadAllowMailDrop
@property (copy, nonatomic) NSNumber *payloadDisableMailRecentsSyncing; // ivar: _payloadDisableMailRecentsSyncing
@property (copy, nonatomic) NSString *payloadEmailAccountDescription; // ivar: _payloadEmailAccountDescription
@property (copy, nonatomic) NSString *payloadEmailAccountName; // ivar: _payloadEmailAccountName
@property (copy, nonatomic) NSString *payloadEmailAccountType; // ivar: _payloadEmailAccountType
@property (copy, nonatomic) NSString *payloadEmailAddress; // ivar: _payloadEmailAddress
@property (copy, nonatomic) NSString *payloadIncomingCredentials; // ivar: _payloadIncomingCredentials
@property (copy, nonatomic) NSString *payloadIncomingMailServerAuthentication; // ivar: _payloadIncomingMailServerAuthentication
@property (copy, nonatomic) NSString *payloadIncomingMailServerHostName; // ivar: _payloadIncomingMailServerHostName
@property (copy, nonatomic) NSString *payloadIncomingMailServerIMAPPathPrefix; // ivar: _payloadIncomingMailServerIMAPPathPrefix
@property (copy, nonatomic) NSNumber *payloadIncomingMailServerPortNumber; // ivar: _payloadIncomingMailServerPortNumber
@property (copy, nonatomic) NSNumber *payloadIncomingMailServerUseSSL; // ivar: _payloadIncomingMailServerUseSSL
@property (copy, nonatomic) NSString *payloadOutgoingCredentials; // ivar: _payloadOutgoingCredentials
@property (copy, nonatomic) NSString *payloadOutgoingMailServerAuthentication; // ivar: _payloadOutgoingMailServerAuthentication
@property (copy, nonatomic) NSNumber *payloadOutgoingMailServerPortNumber; // ivar: _payloadOutgoingMailServerPortNumber
@property (copy, nonatomic) NSNumber *payloadOutgoingMailServerUseSSL; // ivar: _payloadOutgoingMailServerUseSSL
@property (copy, nonatomic) NSString *payloadOutgoingMailServerUsername; // ivar: _payloadOutgoingMailServerUsername
@property (copy, nonatomic) NSNumber *payloadOutgoingPasswordSameAsIncomingPassword; // ivar: _payloadOutgoingPasswordSameAsIncomingPassword
@property (copy, nonatomic) NSNumber *payloadPreventAppSheet; // ivar: _payloadPreventAppSheet
@property (copy, nonatomic) NSNumber *payloadPreventMove; // ivar: _payloadPreventMove
@property (copy, nonatomic) NSNumber *payloadSMIMEEnableEncryptionPerMessageSwitch; // ivar: _payloadSMIMEEnableEncryptionPerMessageSwitch
@property (copy, nonatomic) NSNumber *payloadSMIMEEnablePerMessageSwitch; // ivar: _payloadSMIMEEnablePerMessageSwitch
@property (copy, nonatomic) NSNumber *payloadSMIMEEnabled; // ivar: _payloadSMIMEEnabled
@property (copy, nonatomic) NSNumber *payloadSMIMEEncryptByDefault; // ivar: _payloadSMIMEEncryptByDefault
@property (copy, nonatomic) NSNumber *payloadSMIMEEncryptByDefaultOverrideable; // ivar: _payloadSMIMEEncryptByDefaultOverrideable
@property (copy, nonatomic) NSString *payloadSMIMEEncryptionCertificateUUID; // ivar: _payloadSMIMEEncryptionCertificateUUID
@property (copy, nonatomic) NSNumber *payloadSMIMEEncryptionCertificateUUIDOverrideable; // ivar: _payloadSMIMEEncryptionCertificateUUIDOverrideable
@property (copy, nonatomic) NSNumber *payloadSMIMEEncryptionEnabled; // ivar: _payloadSMIMEEncryptionEnabled
@property (copy, nonatomic) NSString *payloadSMIMESigningCertificateUUID; // ivar: _payloadSMIMESigningCertificateUUID
@property (copy, nonatomic) NSNumber *payloadSMIMESigningCertificateUUIDOverrideable; // ivar: _payloadSMIMESigningCertificateUUIDOverrideable
@property (copy, nonatomic) NSNumber *payloadSMIMESigningEnabled; // ivar: _payloadSMIMESigningEnabled
@property (copy, nonatomic) NSNumber *payloadSMIMESigningOverrideable; // ivar: _payloadSMIMESigningOverrideable
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withEmailAccountType:(id)arg1 withIncomingMailServerAuthentication:(id)arg2 withIncomingMailServerHostName:(id)arg3 withOutgoingMailServerAuthentication:(id)arg4 ;
+(id)buildWithIdentifier:(id)arg0 withEmailAccountDescription:(id)arg1 withEmailAccountName:(id)arg2 withEmailAccountType:(id)arg3 withEmailAddress:(id)arg4 withIncomingMailServerAuthentication:(id)arg5 withIncomingMailServerHostName:(id)arg6 withIncomingMailServerPortNumber:(id)arg7 withIncomingMailServerUseSSL:(id)arg8 withOutgoingPasswordSameAsIncomingPassword:(id)arg9 withOutgoingMailServerAuthentication:(id)arg10 withOutgoingMailServerPortNumber:(id)arg11 withOutgoingMailServerUseSSL:(id)arg12 withOutgoingMailServerUsername:(id)arg13 withPreventMove:(id)arg14 withPreventAppSheet:(id)arg15 withSMIMEEnabled:(id)arg16 withSMIMESigningEnabled:(id)arg17 withSMIMESigningCertificateUUID:(id)arg18 withSMIMEEncryptionEnabled:(id)arg19 withSMIMEEncryptionCertificateUUID:(id)arg20 withSMIMEEnablePerMessageSwitch:(id)arg21 withDisableMailRecentsSyncing:(id)arg22 withAllowMailDrop:(id)arg23 withIncomingMailServerIMAPPathPrefix:(id)arg24 withIncomingCredentials:(id)arg25 withOutgoingCredentials:(id)arg26 withSMIMESigningOverrideable:(id)arg27 withSMIMESigningCertificateUUIDOverrideable:(id)arg28 withSMIMEEncryptByDefault:(id)arg29 withSMIMEEncryptByDefaultOverrideable:(id)arg30 withSMIMEEncryptionCertificateUUIDOverrideable:(id)arg31 withSMIMEEnableEncryptionPerMessageSwitch:(id)arg32 ;
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