// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMACCOUNTLDAPDECLARATION_COMMUNICATIONSERVICERULES_H
#define CEMACCOUNTLDAPDECLARATION_COMMUNICATIONSERVICERULES_H



#import "CEMPayloadBase.h"
#import "CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers.h"

@interface CEMAccountLDAPDeclaration_CommunicationServiceRules : CEMPayloadBase

@property (copy, nonatomic) CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers *payloadDefaultServiceHandlers; // ivar: _payloadDefaultServiceHandlers


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithDefaultServiceHandlers:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif