// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREPOPULATEZONESREQUEST_H
#define PKPAYMENTREPOPULATEZONESREQUEST_H

@class NSArray;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentRepopulateZonesRequest : PKPaymentWebServiceRequest

@property (readonly, nonatomic) NSArray *cloudStoreZoneNames; // ivar: _cloudStoreZoneNames


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithCloudStoreZoneNames:(id)arg0 ;


@end


#endif