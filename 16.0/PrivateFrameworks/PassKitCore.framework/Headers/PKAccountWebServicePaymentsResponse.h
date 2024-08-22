// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEPAYMENTSRESPONSE_H
#define PKACCOUNTWEBSERVICEPAYMENTSRESPONSE_H

@class NSArray;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServicePaymentsResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *payments; // ivar: _payments


-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 account:(id)arg1 ;


@end


#endif