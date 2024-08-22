// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSERVICEPROVIDERPERFORMACTIONREQUEST_H
#define PKPAYMENTSERVICEPROVIDERPERFORMACTIONREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"
#import "PKServiceProviderPurchase.h"

@interface PKPaymentServiceProviderPerformActionRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *action; // ivar: _action
@property (retain, nonatomic) PKServiceProviderPurchase *purchase; // ivar: _purchase


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithAction:(id)arg0 purchase:(id)arg1 ;


@end


#endif