// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMNETWORKDIRECTORYSERVICEDECLARATION_H
#define CEMNETWORKDIRECTORYSERVICEDECLARATION_H

@class NSString, NSNumber, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMNetworkDirectoryServiceDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadADAllowMultiDomainAuth; // ivar: _payloadADAllowMultiDomainAuth
@property (copy, nonatomic) NSNumber *payloadADAllowMultiDomainAuthFlag; // ivar: _payloadADAllowMultiDomainAuthFlag
@property (copy, nonatomic) NSNumber *payloadADCreateMobileAccountAtLogin; // ivar: _payloadADCreateMobileAccountAtLogin
@property (copy, nonatomic) NSNumber *payloadADCreateMobileAccountAtLoginFlag; // ivar: _payloadADCreateMobileAccountAtLoginFlag
@property (copy, nonatomic) NSString *payloadADDefaultUserShell; // ivar: _payloadADDefaultUserShell
@property (copy, nonatomic) NSNumber *payloadADDefaultUserShellFlag; // ivar: _payloadADDefaultUserShellFlag
@property (copy, nonatomic) NSArray *payloadADDomainAdminGroupList; // ivar: _payloadADDomainAdminGroupList
@property (copy, nonatomic) NSNumber *payloadADDomainAdminGroupListFlag; // ivar: _payloadADDomainAdminGroupListFlag
@property (copy, nonatomic) NSNumber *payloadADForceHomeLocal; // ivar: _payloadADForceHomeLocal
@property (copy, nonatomic) NSNumber *payloadADForceHomeLocalFlag; // ivar: _payloadADForceHomeLocalFlag
@property (copy, nonatomic) NSString *payloadADMapGGIDAttribute; // ivar: _payloadADMapGGIDAttribute
@property (copy, nonatomic) NSNumber *payloadADMapGGIDAttributeFlag; // ivar: _payloadADMapGGIDAttributeFlag
@property (copy, nonatomic) NSString *payloadADMapGIDAttribute; // ivar: _payloadADMapGIDAttribute
@property (copy, nonatomic) NSNumber *payloadADMapGIDAttributeFlag; // ivar: _payloadADMapGIDAttributeFlag
@property (copy, nonatomic) NSString *payloadADMapUIDAttribute; // ivar: _payloadADMapUIDAttribute
@property (copy, nonatomic) NSNumber *payloadADMapUIDAttributeFlag; // ivar: _payloadADMapUIDAttributeFlag
@property (copy, nonatomic) NSString *payloadADMountStyle; // ivar: _payloadADMountStyle
@property (copy, nonatomic) NSString *payloadADNamespace; // ivar: _payloadADNamespace
@property (copy, nonatomic) NSNumber *payloadADNamespaceFlag; // ivar: _payloadADNamespaceFlag
@property (copy, nonatomic) NSString *payloadADOrganizationalUnit; // ivar: _payloadADOrganizationalUnit
@property (copy, nonatomic) NSString *payloadADPacketEncrypt; // ivar: _payloadADPacketEncrypt
@property (copy, nonatomic) NSNumber *payloadADPacketEncryptFlag; // ivar: _payloadADPacketEncryptFlag
@property (copy, nonatomic) NSString *payloadADPacketSign; // ivar: _payloadADPacketSign
@property (copy, nonatomic) NSNumber *payloadADPacketSignFlag; // ivar: _payloadADPacketSignFlag
@property (copy, nonatomic) NSString *payloadADPreferredDCServer; // ivar: _payloadADPreferredDCServer
@property (copy, nonatomic) NSNumber *payloadADPreferredDCServerFlag; // ivar: _payloadADPreferredDCServerFlag
@property (copy, nonatomic) NSArray *payloadADRestrictDDNS; // ivar: _payloadADRestrictDDNS
@property (copy, nonatomic) NSNumber *payloadADRestrictDDNSFlag; // ivar: _payloadADRestrictDDNSFlag
@property (copy, nonatomic) NSNumber *payloadADTrustChangePassIntervalDays; // ivar: _payloadADTrustChangePassIntervalDays
@property (copy, nonatomic) NSNumber *payloadADTrustChangePassIntervalDaysFlag; // ivar: _payloadADTrustChangePassIntervalDaysFlag
@property (copy, nonatomic) NSNumber *payloadADUseWindowsUNCPath; // ivar: _payloadADUseWindowsUNCPath
@property (copy, nonatomic) NSNumber *payloadADUseWindowsUNCPathFlag; // ivar: _payloadADUseWindowsUNCPathFlag
@property (copy, nonatomic) NSNumber *payloadADWarnUserBeforeCreatingMA; // ivar: _payloadADWarnUserBeforeCreatingMA
@property (copy, nonatomic) NSNumber *payloadADWarnUserBeforeCreatingMAFlag; // ivar: _payloadADWarnUserBeforeCreatingMAFlag
@property (copy, nonatomic) NSString *payloadClientID; // ivar: _payloadClientID
@property (copy, nonatomic) NSString *payloadDescription; // ivar: _payloadDescription
@property (copy, nonatomic) NSString *payloadHostName; // ivar: _payloadHostName
@property (copy, nonatomic) NSString *payloadPassword; // ivar: _payloadPassword
@property (copy, nonatomic) NSString *payloadUserName; // ivar: _payloadUserName
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withHostName:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withHostName:(id)arg1 withUserName:(id)arg2 withPassword:(id)arg3 withClientID:(id)arg4 withDescription:(id)arg5 withADOrganizationalUnit:(id)arg6 withADMountStyle:(id)arg7 withADCreateMobileAccountAtLoginFlag:(id)arg8 withADCreateMobileAccountAtLogin:(id)arg9 withADWarnUserBeforeCreatingMAFlag:(id)arg10 withADWarnUserBeforeCreatingMA:(id)arg11 withADForceHomeLocalFlag:(id)arg12 withADForceHomeLocal:(id)arg13 withADUseWindowsUNCPathFlag:(id)arg14 withADUseWindowsUNCPath:(id)arg15 withADAllowMultiDomainAuthFlag:(id)arg16 withADAllowMultiDomainAuth:(id)arg17 withADDefaultUserShellFlag:(id)arg18 withADDefaultUserShell:(id)arg19 withADMapUIDAttributeFlag:(id)arg20 withADMapUIDAttribute:(id)arg21 withADMapGIDAttributeFlag:(id)arg22 withADMapGIDAttribute:(id)arg23 withADMapGGIDAttributeFlag:(id)arg24 withADMapGGIDAttribute:(id)arg25 withADPreferredDCServerFlag:(id)arg26 withADPreferredDCServer:(id)arg27 withADDomainAdminGroupListFlag:(id)arg28 withADDomainAdminGroupList:(id)arg29 withADNamespaceFlag:(id)arg30 withADNamespace:(id)arg31 withADPacketSignFlag:(id)arg32 withADPacketSign:(id)arg33 withADPacketEncryptFlag:(id)arg34 withADPacketEncrypt:(id)arg35 withADRestrictDDNSFlag:(id)arg36 withADRestrictDDNS:(id)arg37 withADTrustChangePassIntervalDaysFlag:(id)arg38 withADTrustChangePassIntervalDays:(id)arg39 ;
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