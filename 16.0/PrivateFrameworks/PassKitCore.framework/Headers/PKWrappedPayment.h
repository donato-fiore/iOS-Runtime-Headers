// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKWRAPPEDPAYMENT_H
#define PKWRAPPEDPAYMENT_H

@class NSArray, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKSecureElementCertificateSet.h"

@interface PKWrappedPayment : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *SEPCertificates; // ivar: _SEPCertificates
@property (copy, nonatomic) PKSecureElementCertificateSet *certificates; // ivar: _certificates
@property (copy, nonatomic) NSData *confirmationBlobHash; // ivar: _confirmationBlobHash
@property (nonatomic) NSInteger confirmationBlobVersion; // ivar: _confirmationBlobVersion
@property (copy, nonatomic) NSData *enrollmentSignature; // ivar: _enrollmentSignature
@property (copy, nonatomic) NSString *kextBlacklistVersion; // ivar: _kextBlacklistVersion
@property (copy, nonatomic) NSString *merchantCountryCode; // ivar: _merchantCountryCode
@property (copy, nonatomic) NSData *transactionData; // ivar: _transactionData
@property (copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier
@property (copy, nonatomic) NSData *transactionInstructionsSignature; // ivar: _transactionInstructionsSignature


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif