// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAUTHORIZEDPEERPAYMENTQUOTE_H
#define PKAUTHORIZEDPEERPAYMENTQUOTE_H

@class NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKContact.h"
#import "PKPeerPaymentQuote.h"

@interface PKAuthorizedPeerPaymentQuote : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *certificates; // ivar: _certificates
@property (retain, nonatomic) PKContact *contact; // ivar: _contact
@property (readonly, nonatomic) PKPeerPaymentQuote *peerPaymentQuote; // ivar: _peerPaymentQuote
@property (readonly, nonatomic) NSData *transactionData; // ivar: _transactionData


+(BOOL)supportsSecureCoding;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuote:(id)arg0 transactionData:(id)arg1 certificates:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif