// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMSYSTEMAIRPLAYDESTINATIONSDECLARATION_WHITELISTITEM_H
#define CEMSYSTEMAIRPLAYDESTINATIONSDECLARATION_WHITELISTITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMSystemAirPlayDestinationsDeclaration_WhitelistItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadDeviceID; // ivar: _payloadDeviceID


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithDeviceID:(id)arg0 ;
+(id)buildWithDeviceID:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif