// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMANYPAYLOAD_H
#define CEMANYPAYLOAD_H

@class NSDictionary;


#import "CEMPayloadBase.h"

@interface CEMAnyPayload : CEMPayloadBase

@property (copy) NSDictionary *payloadKeys; // ivar: _payloadKeys


+(id)buildFromDictionary:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif