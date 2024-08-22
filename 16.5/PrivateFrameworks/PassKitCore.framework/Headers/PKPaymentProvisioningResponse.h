// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPROVISIONINGRESPONSE_H
#define PKPAYMENTPROVISIONINGRESPONSE_H

@class NSArray, NSString;


#import "PKPaymentWebServiceResponse.h"
#import "PKContactInformation.h"

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSArray *downloadablePasses; // ivar: _downloadablePasses
@property (readonly, nonatomic) PKContactInformation *idmsContactInformation; // ivar: _idmsContactInformation
@property (readonly, copy, nonatomic) NSArray *moreInfoURLs; // ivar: _moreInfoURLs
@property (readonly, nonatomic) NSString *nonce; // ivar: _nonce


-(id)initWithData:(id)arg0 ;


@end


#endif