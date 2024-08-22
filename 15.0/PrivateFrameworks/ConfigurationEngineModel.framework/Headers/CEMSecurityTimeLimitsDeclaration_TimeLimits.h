// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMSECURITYTIMELIMITSDECLARATION_TIMELIMITS_H
#define CEMSECURITYTIMELIMITSDECLARATION_TIMELIMITS_H



#import "CEMPayloadBase.h"
#import "CEMSecurityTimeLimitsDeclaration_Allowance.h"

@interface CEMSecurityTimeLimitsDeclaration_TimeLimits : CEMPayloadBase

@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekdayAllowance; // ivar: _payloadWeekdayAllowance
@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekdayCurfew; // ivar: _payloadWeekdayCurfew
@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekendAllowance; // ivar: _payloadWeekendAllowance
@property (copy, nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekendCurfew; // ivar: _payloadWeekendCurfew


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithWeekdayAllowance:(id)arg0 withWeekdayCurfew:(id)arg1 withWeekendAllowance:(id)arg2 withWeekendCurfew:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif