// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMAPPLICATIONINSTALLDECLARATION_H
#define CEMAPPLICATIONINSTALLDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMAnyPayload.h"

@interface CEMApplicationInstallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadApplication; // ivar: _payloadApplication
@property (copy, nonatomic) CEMAnyPayload *payloadConfiguration; // ivar: _payloadConfiguration
@property (copy, nonatomic) NSString *payloadContentFilterUUID; // ivar: _payloadContentFilterUUID
@property (copy, nonatomic) NSString *payloadDNSProxyUUID; // ivar: _payloadDNSProxyUUID
@property (copy, nonatomic) NSNumber *payloadInstallWhenActivated; // ivar: _payloadInstallWhenActivated
@property (copy, nonatomic) NSNumber *payloadManageData; // ivar: _payloadManageData
@property (copy, nonatomic) NSNumber *payloadMandatory; // ivar: _payloadMandatory
@property (copy, nonatomic) NSNumber *payloadPreventDataBackup; // ivar: _payloadPreventDataBackup
@property (copy, nonatomic) NSNumber *payloadRemoveWhenDeactivated; // ivar: _payloadRemoveWhenDeactivated
@property (copy, nonatomic) NSString *payloadVPNUUID; // ivar: _payloadVPNUUID
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withApplication:(id)arg1 withMandatory:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withApplication:(id)arg1 withMandatory:(id)arg2 withInstallWhenActivated:(id)arg3 withRemoveWhenDeactivated:(id)arg4 withManageData:(id)arg5 withVPNUUID:(id)arg6 withPreventDataBackup:(id)arg7 withConfiguration:(id)arg8 ;
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