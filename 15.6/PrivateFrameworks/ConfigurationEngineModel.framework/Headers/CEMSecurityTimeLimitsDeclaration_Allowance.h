// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMSECURITYTIMELIMITSDECLARATION_ALLOWANCE_H
#define CEMSECURITYTIMELIMITSDECLARATION_ALLOWANCE_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMSecurityTimeLimitsDeclaration_Allowance : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadEnabled; // ivar: _payloadEnabled
@property (copy, nonatomic) NSString *payloadEnd; // ivar: _payloadEnd
@property (copy, nonatomic) NSNumber *payloadRangeType; // ivar: _payloadRangeType
@property (copy, nonatomic) NSNumber *payloadSecondsPerDay; // ivar: _payloadSecondsPerDay
@property (copy, nonatomic) NSString *payloadStart; // ivar: _payloadStart


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithEnabled:(id)arg0 withRangeType:(id)arg1 ;
+(id)buildWithEnabled:(id)arg0 withRangeType:(id)arg1 withStart:(id)arg2 withEnd:(id)arg3 withSecondsPerDay:(id)arg4 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif