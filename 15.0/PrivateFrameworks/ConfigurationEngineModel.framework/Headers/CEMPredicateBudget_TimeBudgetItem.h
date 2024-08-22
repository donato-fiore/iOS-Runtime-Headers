// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMPREDICATEBUDGET_TIMEBUDGETITEM_H
#define CEMPREDICATEBUDGET_TIMEBUDGETITEM_H

@class NSArray, NSNumber;


#import "CEMPayloadBase.h"

@interface CEMPredicateBudget_TimeBudgetItem : CEMPayloadBase

@property (copy, nonatomic) NSArray *payloadDays; // ivar: _payloadDays
@property (copy, nonatomic) NSNumber *payloadSeconds; // ivar: _payloadSeconds


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithSeconds:(id)arg0 ;
+(id)buildWithSeconds:(id)arg0 withDays:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif