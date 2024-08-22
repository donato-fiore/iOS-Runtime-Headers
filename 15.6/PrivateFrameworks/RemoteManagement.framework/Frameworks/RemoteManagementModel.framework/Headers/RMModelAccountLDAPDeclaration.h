// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMODELACCOUNTLDAPDECLARATION_H
#define RMMODELACCOUNTLDAPDECLARATION_H

@class NSString, NSNumber, NSArray;
@protocol RMModelRegisteredTypeProtocol;


#import "RMModelConfigurationBase.h"

@interface RMModelAccountLDAPDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference; // ivar: _payloadAuthenticationCredentialsAssetReference
@property (copy, nonatomic) NSString *payloadHostName; // ivar: _payloadHostName
@property (copy, nonatomic) NSNumber *payloadPort; // ivar: _payloadPort
@property (copy, nonatomic) NSArray *payloadSearchSettings; // ivar: _payloadSearchSettings
@property (copy, nonatomic) NSString *payloadVisibleName; // ivar: _payloadVisibleName
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 hostName:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 visibleName:(id)arg1 hostName:(id)arg2 port:(id)arg3 authenticationCredentialsAssetReference:(id)arg4 searchSettings:(id)arg5 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif