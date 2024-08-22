// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAFAMILYPAYMENTINFORESPONSE_H
#define FAFAMILYPAYMENTINFORESPONSE_H

@class AAResponse;


#import "FAFamilyCreditCard.h"

@interface FAFamilyPaymentInfoResponse : AAResponse

@property (retain, nonatomic) FAFamilyCreditCard *creditCard; // ivar: _creditCard


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif