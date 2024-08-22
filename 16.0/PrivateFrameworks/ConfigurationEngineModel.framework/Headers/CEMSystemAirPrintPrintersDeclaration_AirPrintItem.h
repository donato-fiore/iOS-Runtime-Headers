// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMSYSTEMAIRPRINTPRINTERSDECLARATION_AIRPRINTITEM_H
#define CEMSYSTEMAIRPRINTPRINTERSDECLARATION_AIRPRINTITEM_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMSystemAirPrintPrintersDeclaration_AirPrintItem : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadForceTLS; // ivar: _payloadForceTLS
@property (copy, nonatomic) NSString *payloadIPAddress; // ivar: _payloadIPAddress
@property (copy, nonatomic) NSNumber *payloadPort; // ivar: _payloadPort
@property (copy, nonatomic) NSString *payloadResourcePath; // ivar: _payloadResourcePath


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIPAddress:(id)arg0 withResourcePath:(id)arg1 ;
+(id)buildWithIPAddress:(id)arg0 withResourcePath:(id)arg1 withPort:(id)arg2 withForceTLS:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif