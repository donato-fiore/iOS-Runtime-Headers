// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMODELACCOUNTMAILDECLARATION_H
#define RMMODELACCOUNTMAILDECLARATION_H

@class NSString;
@protocol RMModelRegisteredTypeProtocol;


#import "RMModelConfigurationBase.h"
#import "RMModelAccountMailDeclaration_IncomingServer.h"
#import "RMModelAccountMailDeclaration_OutgoingServer.h"

@interface RMModelAccountMailDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) RMModelAccountMailDeclaration_IncomingServer *payloadIncomingServer; // ivar: _payloadIncomingServer
@property (copy, nonatomic) RMModelAccountMailDeclaration_OutgoingServer *payloadOutgoingServer; // ivar: _payloadOutgoingServer
@property (copy, nonatomic) NSString *payloadUserIdentityAssetReference; // ivar: _payloadUserIdentityAssetReference
@property (copy, nonatomic) NSString *payloadVisibleName; // ivar: _payloadVisibleName
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 incomingServer:(id)arg1 outgoingServer:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 visibleName:(id)arg1 userIdentityAssetReference:(id)arg2 incomingServer:(id)arg3 outgoingServer:(id)arg4 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif