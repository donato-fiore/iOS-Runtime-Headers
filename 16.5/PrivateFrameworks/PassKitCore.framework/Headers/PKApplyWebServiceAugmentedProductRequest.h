// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYWEBSERVICEAUGMENTEDPRODUCTREQUEST_H
#define PKAPPLYWEBSERVICEAUGMENTEDPRODUCTREQUEST_H



#import "PKApplyWebServiceRequest.h"
#import "PKPaymentInstallmentConfiguration.h"

@interface PKApplyWebServiceAugmentedProductRequest : PKApplyWebServiceRequest

@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration; // ivar: _installmentConfiguration


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif