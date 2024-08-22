// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTBROWSEABLEBANKAPPSRESPONSE_H
#define PKPAYMENTBROWSEABLEBANKAPPSRESPONSE_H

@class NSArray;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentBrowseableBankAppsResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *browseableBankApps; // ivar: _browseableBankApps


-(id)initWithData:(id)arg0 ;


@end


#endif