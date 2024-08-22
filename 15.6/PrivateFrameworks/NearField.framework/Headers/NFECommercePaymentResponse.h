// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFECOMMERCEPAYMENTRESPONSE_H
#define NFECOMMERCEPAYMENTRESPONSE_H

@class NSArray, NSDictionary, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFECommercePaymentResponse : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSArray *SEPcerts; // ivar: _SEPcerts
@property (readonly, retain, nonatomic) NSDictionary *certs; // ivar: _certs
@property (readonly, retain, nonatomic) NSData *confirmationBlobHash; // ivar: _confirmationBlobHash
@property (readonly, retain, nonatomic) NSData *confirmationBlobSignature; // ivar: _confirmationBlobSignature
@property (readonly, nonatomic) NSInteger confirmationBlobVersion; // ivar: _confirmationBlobVersion
@property (readonly, retain, nonatomic) NSData *transactionData; // ivar: _transactionData
@property (readonly, retain, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setSEPCerts:(id)arg0 ;


@end


#endif