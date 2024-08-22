// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMACCOUNTMACOSSERVERDECLARATION_CONFIGUREDACCOUNTSITEM_H
#define CEMACCOUNTMACOSSERVERDECLARATION_CONFIGUREDACCOUNTSITEM_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMAccountmacOSServerDeclaration_ConfiguredAccountsItem : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadPort; // ivar: _payloadPort
@property (copy, nonatomic) NSString *payloadType; // ivar: _payloadType


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithType:(id)arg0 ;
+(id)buildWithType:(id)arg0 withPort:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif