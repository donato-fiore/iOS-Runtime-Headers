// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMSYSTEMDASHBOARDDECLARATION_WHITELISTITEM_H
#define CEMSYSTEMDASHBOARDDECLARATION_WHITELISTITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMSystemDashboardDeclaration_WhiteListItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadID; // ivar: _payloadID
@property (copy, nonatomic) NSString *payloadType; // ivar: _payloadType


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithType:(id)arg0 withID:(id)arg1 ;
+(id)buildWithType:(id)arg0 withID:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif