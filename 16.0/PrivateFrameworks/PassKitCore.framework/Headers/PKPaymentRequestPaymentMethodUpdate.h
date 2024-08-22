// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTREQUESTPAYMENTMETHODUPDATE_H
#define PKPAYMENTREQUESTPAYMENTMETHODUPDATE_H

@class NSArray, NSString;
@protocol NSSecureCoding;


#import "PKPaymentRequestUpdate.h"
#import "PKPeerPaymentQuote.h"

@interface PKPaymentRequestPaymentMethodUpdate : PKPaymentRequestUpdate <NSSecureCoding>



@property (copy, nonatomic) NSArray *errors; // ivar: _errors
@property (copy, nonatomic) NSString *installmentGroupIdentifier; // ivar: _installmentGroupIdentifier
@property (retain, nonatomic) PKPeerPaymentQuote *peerPaymentQuote; // ivar: _peerPaymentQuote


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithErrors:(id)arg0 paymentSummaryItems:(id)arg1 ;
-(id)initWithPaymentSummaryItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif