// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISBURSEMENTVOUCHERRESPONSE_H
#define PKDISBURSEMENTVOUCHERRESPONSE_H

@class NSURL, NSString;


#import "PKPeerPaymentWebServiceResponse.h"

@interface PKDisbursementVoucherResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSURL *redemptionURL; // ivar: _redemptionURL
@property (readonly, copy, nonatomic) NSString *voucher; // ivar: _voucher


-(id)initWithData:(id)arg0 ;


@end


#endif