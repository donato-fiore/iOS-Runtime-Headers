// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSYSTEMTVREMOTEDECLARATION_ALLOWEDREMOTESITEM_H
#define CEMSYSTEMTVREMOTEDECLARATION_ALLOWEDREMOTESITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMSystemTVRemoteDeclaration_AllowedRemotesItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadRemoteDeviceID; // ivar: _payloadRemoteDeviceID


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithRemoteDeviceID:(id)arg0 ;
+(id)buildWithRemoteDeviceID:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif