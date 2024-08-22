// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTCONTROLLERINTERNALSTATE_H
#define PKPEERPAYMENTCONTROLLERINTERNALSTATE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentRecipient.h"
#import "PKPeerPaymentRequestToken.h"
#import "PKPeerPaymentQuote.h"
#import "PKPeerPaymentPerformResponse.h"
#import "PKPeerPaymentQuoteCertificatesResponse.h"
#import "PKPeerPaymentQuoteRequest.h"

@interface PKPeerPaymentControllerInternalState : NSObject <NSSecureCoding>

 {
    NSUInteger state;
    NSUInteger mode;
    NSString *senderPhoneOrEmail;
    NSString *recipientPhoneOrEmail;
    PKPeerPaymentRecipient *recipient;
    NSString *recipientDisplayName;
    PKPeerPaymentRequestToken *requestToken;
    PKPeerPaymentQuote *quote;
    PKPeerPaymentPerformResponse *performQuoteResponse;
    BOOL supportsPreserveCurrentBalance;
    PKPeerPaymentQuoteCertificatesResponse *quoteCertificatesResponse;
    NSString *accountName;
    NSString *accountNumber;
    NSString *routingNumber;
    PKPeerPaymentQuoteRequest *quoteRequest;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPeerPaymentControllerInternalState:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif