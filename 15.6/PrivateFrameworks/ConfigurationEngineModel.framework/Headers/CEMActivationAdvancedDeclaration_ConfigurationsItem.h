// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMACTIVATIONADVANCEDDECLARATION_CONFIGURATIONSITEM_H
#define CEMACTIVATIONADVANCEDDECLARATION_CONFIGURATIONSITEM_H

@class NSString;


#import "CEMPayloadBase.h"
#import "CEMAnyPayload.h"

@interface CEMActivationAdvancedDeclaration_ConfigurationsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadIdentifier; // ivar: _payloadIdentifier
@property (copy, nonatomic) CEMAnyPayload *payloadOverrides; // ivar: _payloadOverrides


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withOverrides:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif