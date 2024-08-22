// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMACCOUNTCARDDAVDECLARATION_COMMUNICATIONSERVICERULES_H
#define CEMACCOUNTCARDDAVDECLARATION_COMMUNICATIONSERVICERULES_H



#import "CEMPayloadBase.h"
#import "CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers.h"

@interface CEMAccountCardDAVDeclaration_CommunicationServiceRules : CEMPayloadBase

@property (copy, nonatomic) CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers *payloadDefaultServiceHandlers; // ivar: _payloadDefaultServiceHandlers


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithDefaultServiceHandlers:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif