// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMNETWORKUSAGERULESDECLARATION_APPLICATIONRULESITEM_H
#define CEMNETWORKUSAGERULESDECLARATION_APPLICATIONRULESITEM_H

@class NSNumber, NSArray;


#import "CEMPayloadBase.h"

@interface CEMNetworkUsageRulesDeclaration_ApplicationRulesItem : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadAllowCellularData; // ivar: _payloadAllowCellularData
@property (copy, nonatomic) NSNumber *payloadAllowRoamingCellularData; // ivar: _payloadAllowRoamingCellularData
@property (copy, nonatomic) NSArray *payloadAppIdentifierMatches; // ivar: _payloadAppIdentifierMatches


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithAppIdentifierMatches:(id)arg0 withAllowRoamingCellularData:(id)arg1 withAllowCellularData:(id)arg2 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif