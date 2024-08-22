// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMSECURITYSINGLESIGNONDECLARATION_H
#define CEMSECURITYSINGLESIGNONDECLARATION_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"
#import "CEMSecuritySingleSignOnDeclaration_Kerberos.h"

@interface CEMSecuritySingleSignOnDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CEMSecuritySingleSignOnDeclaration_Kerberos *payloadKerberos; // ivar: _payloadKerberos
@property (copy, nonatomic) NSString *payloadName; // ivar: _payloadName
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withName:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withName:(id)arg1 withKerberos:(id)arg2 ;
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