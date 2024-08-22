// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAPPLEIDIDENTITY_H
#define SFAPPLEIDIDENTITY_H

@class NSString, NSDate, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFAppleIDIdentity : NSObject <NSSecureCoding>

 {
    NSString *_encDSID;
    NSString *_intermediateCertificateSerialNumber;
}


@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, nonatomic) NSString *appleID; // ivar: _appleID
@property (retain, nonatomic) NSDate *certificateExpirationDate; // ivar: _certificateExpirationDate
@property (readonly, nonatomic) BOOL certificateExpired;
@property (retain, nonatomic) NSData *certificatePersistentReference; // ivar: _certificatePersistentReference
@property (retain, nonatomic) NSDate *intermediateCertificateExpirationDate; // ivar: _intermediateCertificateExpirationDate
@property (readonly, nonatomic) BOOL intermediateCertificateExpired;
@property (retain, nonatomic) NSData *intermediateCertificatePersistentReference; // ivar: _intermediateCertificatePersistentReference
@property (readonly, nonatomic) NSString *intermediateCertificateSerialNumber;
@property (readonly, nonatomic) BOOL isInvalid;
@property (retain, nonatomic) NSDate *lastValidationAttemptDate; // ivar: _lastValidationAttemptDate
@property (retain, nonatomic) NSDate *lastValidationDate; // ivar: _lastValidationDate
@property (nonatomic) BOOL linkedToCurrentUser; // ivar: _linkedToCurrentUser
@property (retain, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, nonatomic) BOOL needsRenewal;
@property (retain, nonatomic) NSData *privateKeyPersistentReference; // ivar: _privateKeyPersistentReference
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isDateInThePast:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdentity:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAppleID:(id)arg0 altDSID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(int)verifyKeys;
-(struct __SecCertificate *)copyCertificate;
-(struct __SecCertificate *)copyCertificateWithType:(NSInteger)arg0 ;
-(struct __SecCertificate *)copyIntermediateCertificate;
-(struct __SecIdentity *)copyIdentity;
-(struct __SecKey *)copyPrivateKey;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeFromKeychain;


@end


#endif