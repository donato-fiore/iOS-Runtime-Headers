// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAUXILIARYCAPABILITYWEBSERVICEREQUEST_H
#define PKAUXILIARYCAPABILITYWEBSERVICEREQUEST_H



#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentPass.h"

@interface PKAuxiliaryCapabilityWebServiceRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass


-(id)_murlRequestWithServiceURL:(id)arg0 endpointComponents:(id)arg1 queryParameters:(id)arg2 appleAccountInformation:(id)arg3 ;


@end


#endif