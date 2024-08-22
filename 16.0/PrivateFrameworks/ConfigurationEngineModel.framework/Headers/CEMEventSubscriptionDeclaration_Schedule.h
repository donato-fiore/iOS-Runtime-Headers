// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMEVENTSUBSCRIPTIONDECLARATION_SCHEDULE_H
#define CEMEVENTSUBSCRIPTIONDECLARATION_SCHEDULE_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMEventSubscriptionDeclaration_Schedule : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadDay; // ivar: _payloadDay
@property (copy, nonatomic) NSString *payloadFrequency; // ivar: _payloadFrequency
@property (copy, nonatomic) NSString *payloadLocalTime; // ivar: _payloadLocalTime
@property (copy, nonatomic) NSNumber *payloadSpread; // ivar: _payloadSpread


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithFrequency:(id)arg0 ;
+(id)buildWithFrequency:(id)arg0 withLocalTime:(id)arg1 withSpread:(id)arg2 withDay:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif