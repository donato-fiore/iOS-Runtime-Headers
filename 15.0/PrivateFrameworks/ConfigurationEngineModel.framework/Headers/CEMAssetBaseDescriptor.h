// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMASSETBASEDESCRIPTOR_H
#define CEMASSETBASEDESCRIPTOR_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMAssetBaseDescriptor : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadDescription; // ivar: _payloadDescription
@property (copy, nonatomic) NSString *payloadTitle; // ivar: _payloadTitle


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithTitle:(id)arg0 ;
+(id)buildWithTitle:(id)arg0 withDescription:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif