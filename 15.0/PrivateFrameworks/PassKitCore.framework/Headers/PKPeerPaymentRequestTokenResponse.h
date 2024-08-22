// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTREQUESTTOKENRESPONSE_H
#define PKPEERPAYMENTREQUESTTOKENRESPONSE_H



#import "PKPeerPaymentWebServiceResponse.h"
#import "PKPeerPaymentRequestToken.h"

@interface PKPeerPaymentRequestTokenResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentRequestToken *requestToken; // ivar: _requestToken
@property (readonly, nonatomic) BOOL success; // ivar: _success


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 deviceScoreIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif