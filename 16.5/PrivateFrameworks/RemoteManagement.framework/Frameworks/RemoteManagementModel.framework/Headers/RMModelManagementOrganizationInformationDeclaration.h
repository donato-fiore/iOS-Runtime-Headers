// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMMODELMANAGEMENTORGANIZATIONINFORMATIONDECLARATION_H
#define RMMODELMANAGEMENTORGANIZATIONINFORMATIONDECLARATION_H

@class NSString;
@protocol RMModelRegisteredTypeProtocol;


#import "RMModelManagementBase.h"
#import "RMModelManagementOrganizationInformationDeclaration_Proof.h"

@interface RMModelManagementOrganizationInformationDeclaration : RMModelManagementBase <RMModelRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadEmail; // ivar: _payloadEmail
@property (copy, nonatomic) NSString *payloadName; // ivar: _payloadName
@property (copy, nonatomic) RMModelManagementOrganizationInformationDeclaration_Proof *payloadProof; // ivar: _payloadProof
@property (copy, nonatomic) NSString *payloadURL; // ivar: _payloadURL
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 name:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 name:(id)arg1 email:(id)arg2 URL:(id)arg3 proof:(id)arg4 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif