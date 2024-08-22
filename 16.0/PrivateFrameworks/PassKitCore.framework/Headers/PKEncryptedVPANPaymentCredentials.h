// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKENCRYPTEDVPANPAYMENTCREDENTIALS_H
#define PKENCRYPTEDVPANPAYMENTCREDENTIALS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface PKEncryptedVPANPaymentCredentials : NSObject

@property (readonly, copy, nonatomic) NSData *encryptedCardData; // ivar: _encryptedCardData
@property (readonly, copy, nonatomic) NSData *ephemeralPublicKey; // ivar: _ephemeralPublicKey


-(id)initWithDictionary:(id)arg0 ;


@end


#endif