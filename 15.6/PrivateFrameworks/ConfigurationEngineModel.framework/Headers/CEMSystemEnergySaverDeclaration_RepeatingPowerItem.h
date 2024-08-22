// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMSYSTEMENERGYSAVERDECLARATION_REPEATINGPOWERITEM_H
#define CEMSYSTEMENERGYSAVERDECLARATION_REPEATINGPOWERITEM_H

@class NSString, NSNumber;


#import "CEMPayloadBase.h"

@interface CEMSystemEnergySaverDeclaration_RepeatingPowerItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadEventtype; // ivar: _payloadEventtype
@property (copy, nonatomic) NSNumber *payloadTime; // ivar: _payloadTime
@property (copy, nonatomic) NSNumber *payloadWeekdays; // ivar: _payloadWeekdays


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithEventtype:(id)arg0 ;
+(id)buildWithEventtype:(id)arg0 withWeekdays:(id)arg1 withTime:(id)arg2 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif