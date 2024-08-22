// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMODELMANAGEMENTORGANIZATIONINFORMATIONDECLARATION_PROOF_H
#define RMMODELMANAGEMENTORGANIZATIONINFORMATIONDECLARATION_PROOF_H

@class NSString;


#import "RMModelPayloadBase.h"

@interface RMModelManagementOrganizationInformationDeclaration_Proof : RMModelPayloadBase

@property (copy, nonatomic) NSString *payloadIdentityToken; // ivar: _payloadIdentityToken


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithIdentityToken:(id)arg0 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif