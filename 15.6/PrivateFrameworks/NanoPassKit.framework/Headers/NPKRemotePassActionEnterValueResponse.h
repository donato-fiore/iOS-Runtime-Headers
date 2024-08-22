// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKREMOTEPASSACTIONENTERVALUERESPONSE_H
#define NPKREMOTEPASSACTIONENTERVALUERESPONSE_H

@class PKCurrencyAmount;


#import "NPKRemotePassActionResponse.h"
#import "NPKProtoRemotePassActionEnterValueResponse.h"

@interface NPKRemotePassActionEnterValueResponse : NPKRemotePassActionResponse {
    PKCurrencyAmount *_cachedCurrencyAmount;
}


@property (retain, nonatomic) NPKProtoRemotePassActionEnterValueResponse *protoResponse; // ivar: _protoResponse


-(id)currencyAmount;
-(id)description;
-(id)identifier;
-(id)initWithIdentifier:(id)arg0 cardType:(NSUInteger)arg1 passOrganizationName:(id)arg2 result:(int)arg3 incrementAmount:(NSInteger)arg4 currencyCode:(id)arg5 image:(id)arg6 passLocalizedDesciption:(id)arg7 caption:(id)arg8 summaryText:(id)arg9 message:(id)arg10 ;
-(id)initWithTopUpAmount:(id)arg0 fromRequest:(id)arg1 withResult:(int)arg2 ;
-(int)result;


@end


#endif