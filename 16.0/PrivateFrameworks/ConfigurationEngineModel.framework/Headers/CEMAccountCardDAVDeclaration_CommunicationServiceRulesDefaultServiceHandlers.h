// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMACCOUNTCARDDAVDECLARATION_COMMUNICATIONSERVICERULESDEFAULTSERVICEHANDLERS_H
#define CEMACCOUNTCARDDAVDECLARATION_COMMUNICATIONSERVICERULESDEFAULTSERVICEHANDLERS_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadAudioCall; // ivar: _payloadAudioCall


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithAudioCall:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif