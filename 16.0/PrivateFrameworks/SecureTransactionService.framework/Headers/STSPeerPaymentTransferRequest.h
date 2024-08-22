// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSPEERPAYMENTTRANSFERREQUEST_H
#define STSPEERPAYMENTTRANSFERREQUEST_H

@class NSString, NSData;


#import "STSPaymentRequestBase.h"

@interface STSPeerPaymentTransferRequest : STSPaymentRequestBase

@property (retain, nonatomic) NSString *appleTransactionHash; // ivar: _appleTransactionHash
@property (retain, nonatomic) NSData *nonce; // ivar: _nonce
@property (retain, nonatomic) NSString *publicTransactionHash; // ivar: _publicTransactionHash


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransactionAmount:(id)arg0 currencyCode:(id)arg1 countryCode:(id)arg2 transactionDate:(id)arg3 appleTransactionHash:(id)arg4 publicTransactionHash:(id)arg5 nonce:(id)arg6 ;
-(id)toNFPeerPaymentTransferRequest;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif