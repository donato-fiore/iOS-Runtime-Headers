// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICERESPONSE_H
#define PKACCOUNTWEBSERVICERESPONSE_H



#import "PKPaymentWebServiceResponse.h"

@interface PKAccountWebServiceResponse : PKPaymentWebServiceResponse



+(BOOL)jsonDataOptional;
+(id)responseWithData:(id)arg0 account:(id)arg1 request:(id)arg2 ;
-(id)initWithData:(id)arg0 account:(id)arg1 request:(id)arg2 ;


@end


#endif