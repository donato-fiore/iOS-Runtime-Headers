// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEBALANCEHISTORYRESPONSE_H
#define PKACCOUNTWEBSERVICEBALANCEHISTORYRESPONSE_H

@class NSArray;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceBalanceHistoryResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *balances; // ivar: _balances


-(id)initWithData:(id)arg0 ;


@end


#endif