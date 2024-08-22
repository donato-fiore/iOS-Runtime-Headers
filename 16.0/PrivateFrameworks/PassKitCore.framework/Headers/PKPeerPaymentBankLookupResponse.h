// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTBANKLOOKUPRESPONSE_H
#define PKPEERPAYMENTBANKLOOKUPRESPONSE_H

@class NSString;


#import "PKPeerPaymentWebServiceResponse.h"

@interface PKPeerPaymentBankLookupResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL success; // ivar: _success


-(id)initWithData:(id)arg0 ;


@end


#endif