// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMMANAGEMENTORGANIZATIONINFORMATIONDECLARATION_H
#define CEMMANAGEMENTORGANIZATIONINFORMATIONDECLARATION_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMManagementOrganizationInformationDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadOrganizationAddress; // ivar: _payloadOrganizationAddress
@property (copy, nonatomic) NSString *payloadOrganizationEmail; // ivar: _payloadOrganizationEmail
@property (copy, nonatomic) NSString *payloadOrganizationMagic; // ivar: _payloadOrganizationMagic
@property (copy, nonatomic) NSString *payloadOrganizationName; // ivar: _payloadOrganizationName
@property (copy, nonatomic) NSString *payloadOrganizationPhone; // ivar: _payloadOrganizationPhone
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withOrganizationName:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withOrganizationName:(id)arg1 withOrganizationAddress:(id)arg2 withOrganizationPhone:(id)arg3 withOrganizationEmail:(id)arg4 withOrganizationMagic:(id)arg5 ;
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