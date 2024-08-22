// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICECREDENTIAL_H
#define MTSDEVICECREDENTIAL_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTSDeviceCredential : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSData *certificationDeclaration; // ivar: _certificationDeclaration
@property (readonly, copy) NSData *deviceAttestationCertificate; // ivar: _deviceAttestationCertificate
@property (readonly, copy) NSData *productAttestationIntermediateCertificate; // ivar: _productAttestationIntermediateCertificate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCertificationDeclaration:(id)arg0 deviceAttestationCertificate:(id)arg1 productAttestationIntermediateCertificate:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif