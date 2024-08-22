// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTREQUEST_H
#define PKPEERPAYMENTREQUEST_H



#import "PKPaymentRequest.h"
#import "PKPeerPaymentQuote.h"

@interface PKPeerPaymentRequest : PKPaymentRequest

@property (readonly, nonatomic) PKPeerPaymentQuote *peerPaymentQuote; // ivar: _peerPaymentQuote


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPeerPaymentQuote:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif