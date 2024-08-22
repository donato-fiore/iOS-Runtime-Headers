// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKREMOTEPASSACTIONSELECTITEMRESPONSE_H
#define NPKREMOTEPASSACTIONSELECTITEMRESPONSE_H

@class PKCurrencyAmount, NSDictionary;


#import "NPKRemotePassActionResponse.h"
#import "NPKProtoRemotePassActionSelectItemResponse.h"

@interface NPKRemotePassActionSelectItemResponse : NPKRemotePassActionResponse {
    PKCurrencyAmount *_cachedCurrencyAmount;
    NSDictionary *_cachedServiceProviderData;
}


@property (retain, nonatomic) NPKProtoRemotePassActionSelectItemResponse *protoResponse; // ivar: _protoResponse


-(id)currencyAmount;
-(id)description;
-(id)identifier;
-(id)initWithIdentifier:(id)arg0 cardType:(NSUInteger)arg1 passOrganizationName:(id)arg2 result:(int)arg3 incrementAmount:(NSInteger)arg4 currencyCode:(id)arg5 serviceProviderDataData:(id)arg6 image:(id)arg7 passLocalizedDesciption:(id)arg8 caption:(id)arg9 summaryText:(id)arg10 message:(id)arg11 ;
-(id)initWithRenewalAmount:(id)arg0 serviceProviderData:(id)arg1 fromRequest:(id)arg2 withResult:(int)arg3 ;
-(id)serviceProviderData;
-(int)result;


@end


#endif