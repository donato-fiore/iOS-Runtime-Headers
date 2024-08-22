// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEREQUEST_H
#define PKACCOUNTWEBSERVICEREQUEST_H



#import "PKPaymentWebServiceRequest.h"

@interface PKAccountWebServiceRequest : PKPaymentWebServiceRequest



+(id)currencyAmountFormattedDictionary:(id)arg0 ;
-(id)_murlRequestWithServiceURL:(id)arg0 endpointComponents:(id)arg1 queryParameters:(id)arg2 appleAccountInformation:(id)arg3 ;


@end


#endif