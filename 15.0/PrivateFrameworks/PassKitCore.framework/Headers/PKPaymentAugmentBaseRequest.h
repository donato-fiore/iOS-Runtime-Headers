// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTAUGMENTBASEREQUEST_H
#define PKPAYMENTAUGMENTBASEREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"
#import "PKSecureElementApplet.h"
#import "PKPaymentPass.h"
#import "PKPaymentApplication.h"

@interface PKPaymentAugmentBaseRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKSecureElementApplet *applet; // ivar: _applet
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (copy, nonatomic) NSString *merchantCountryCode; // ivar: _merchantCountryCode
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (retain, nonatomic) PKPaymentApplication *paymentApplication; // ivar: _paymentApplication
@property (nonatomic) NSInteger type; // ivar: _type


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)bodyDictionary;
-(id)endpointComponents;
-(id)initWithPaymentPass:(id)arg0 ;


@end


#endif