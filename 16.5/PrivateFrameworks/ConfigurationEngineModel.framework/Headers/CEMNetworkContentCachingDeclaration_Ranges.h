// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMNETWORKCONTENTCACHINGDECLARATION_RANGES_H
#define CEMNETWORKCONTENTCACHINGDECLARATION_RANGES_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMNetworkContentCachingDeclaration_Ranges : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadFirst; // ivar: _payloadFirst
@property (copy, nonatomic) NSString *payloadLast; // ivar: _payloadLast
@property (copy, nonatomic) NSString *payloadType; // ivar: _payloadType


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithFirst:(id)arg0 withLast:(id)arg1 ;
+(id)buildWithType:(id)arg0 withFirst:(id)arg1 withLast:(id)arg2 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif