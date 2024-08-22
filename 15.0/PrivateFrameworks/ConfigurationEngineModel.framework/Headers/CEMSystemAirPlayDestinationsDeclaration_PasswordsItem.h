// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMSYSTEMAIRPLAYDESTINATIONSDECLARATION_PASSWORDSITEM_H
#define CEMSYSTEMAIRPLAYDESTINATIONSDECLARATION_PASSWORDSITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMSystemAirPlayDestinationsDeclaration_PasswordsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadDeviceID; // ivar: _payloadDeviceID
@property (copy, nonatomic) NSString *payloadDeviceName; // ivar: _payloadDeviceName
@property (copy, nonatomic) NSString *payloadPassword; // ivar: _payloadPassword


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithDeviceName:(id)arg0 withPassword:(id)arg1 withDeviceID:(id)arg2 ;
+(id)buildWithDeviceName:(id)arg0 withPassword:(id)arg1 withDeviceID:(id)arg2 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif