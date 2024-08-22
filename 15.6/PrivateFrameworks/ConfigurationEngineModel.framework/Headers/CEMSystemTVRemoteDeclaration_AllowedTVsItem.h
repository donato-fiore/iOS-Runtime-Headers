// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMSYSTEMTVREMOTEDECLARATION_ALLOWEDTVSITEM_H
#define CEMSYSTEMTVREMOTEDECLARATION_ALLOWEDTVSITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMSystemTVRemoteDeclaration_AllowedTVsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadTVDeviceID; // ivar: _payloadTVDeviceID


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithTVDeviceID:(id)arg0 ;
+(id)buildWithTVDeviceID:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif