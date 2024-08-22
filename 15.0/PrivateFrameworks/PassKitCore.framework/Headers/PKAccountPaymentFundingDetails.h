// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTPAYMENTFUNDINGDETAILS_H
#define PKACCOUNTPAYMENTFUNDINGDETAILS_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountPaymentFundingDetails : NSObject <NSSecureCoding>

 {
    NSData *_encryptedData;
    NSData *_publicKeyHash;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_encryptedDataWithCertificatesResponse:(id)arg0 publicKeyHash:(*id)arg1 ;
-(id)fundingDetailsUnencryptedDictionary;
-(id)hashComponentWithCertificatesResponse:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)jsonDictionaryRepresentation;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg0 ;
-(id)jsonString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif