// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKREMOTEPASSACTIONENTERVALUERESPONSE_H
#define NPKREMOTEPASSACTIONENTERVALUERESPONSE_H

@class PKCurrencyAmount, NSString;


#import "NPKRemotePassActionEnterValueMessage.h"
#import "NPKProtoRemotePassActionEnterValueResponse.h"

@interface NPKRemotePassActionEnterValueResponse : NPKRemotePassActionEnterValueMessage {
    PKCurrencyAmount *_cachedCurrencyAmount;
}


@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NPKProtoRemotePassActionEnterValueResponse *protoResponse; // ivar: _protoResponse
@property (readonly, nonatomic) int result;


-(id)description;
-(id)initWithIdentifier:(id)arg0 passOrganizationName:(id)arg1 result:(int)arg2 incrementAmount:(NSInteger)arg3 currencyCode:(id)arg4 image:(id)arg5 passLocalizedDesciption:(id)arg6 caption:(id)arg7 summaryText:(id)arg8 message:(id)arg9 ;
-(id)initWithTopUpAmount:(id)arg0 fromRequest:(id)arg1 withResult:(int)arg2 ;


@end


#endif