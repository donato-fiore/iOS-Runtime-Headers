// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMPREDICATECOMPOSITEBUDGET_MONITORS_H
#define CEMPREDICATECOMPOSITEBUDGET_MONITORS_H

@class NSArray;


#import "CEMPayloadBase.h"

@interface CEMPredicateCompositeBudget_Monitors : CEMPayloadBase

@property (copy, nonatomic) NSArray *payloadApps; // ivar: _payloadApps
@property (copy, nonatomic) NSArray *payloadCategories; // ivar: _payloadCategories
@property (copy, nonatomic) NSArray *payloadCategoriesVersion2; // ivar: _payloadCategoriesVersion2
@property (copy, nonatomic) NSArray *payloadWebSites; // ivar: _payloadWebSites


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithApps:(id)arg0 withWebSites:(id)arg1 withCategories:(id)arg2 ;
+(id)buildWithApps:(id)arg0 withWebSites:(id)arg1 withCategories:(id)arg2 withCategoriesVersion2:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif