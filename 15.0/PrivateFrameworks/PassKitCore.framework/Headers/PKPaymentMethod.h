// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTMETHOD_H
#define PKPAYMENTMETHOD_H

@class CNContact, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKDisbursementVoucher.h"
#import "PKPaymentPass.h"
#import "PKRemotePaymentInstrument.h"
#import "PKSecureElementPass.h"

@interface PKPaymentMethod : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) CNContact *billingAddress; // ivar: _billingAddress
@property (copy, nonatomic) NSString *bindToken; // ivar: _bindToken
@property (retain, nonatomic) PKDisbursementVoucher *disbursementVoucher; // ivar: _disbursementVoucher
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *network; // ivar: _network
@property (copy, nonatomic) PKPaymentPass *paymentPass;
@property (copy, nonatomic) NSString *peerPaymentQuoteIdentifier; // ivar: _peerPaymentQuoteIdentifier
@property (retain, nonatomic) PKRemotePaymentInstrument *remoteInstrument; // ivar: _remoteInstrument
@property (copy, nonatomic) PKSecureElementPass *secureElementPass; // ivar: _secureElementPass
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) BOOL usePeerPaymentBalance; // ivar: _usePeerPaymentBalance


+(BOOL)supportsSecureCoding;
+(NSInteger)version;
+(id)paymentMethodWithProtobuf:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithBindToken:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisbursementVoucher:(id)arg0 ;
-(id)initWithPaymentPass:(id)arg0 obfuscateNetworks:(BOOL)arg1 ;
-(id)initWithPaymentPass:(id)arg0 paymentApplication:(id)arg1 obfuscateNetworks:(BOOL)arg2 ;
-(id)initWithPeerPaymentQuote:(id)arg0 ;
-(id)initWithRemotePaymentInstrument:(id)arg0 ;
-(id)initWithRemotePaymentInstrument:(id)arg0 paymentApplication:(id)arg1 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif