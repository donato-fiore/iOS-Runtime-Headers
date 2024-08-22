// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDEVICEATTESTATIONINFO_H
#define MTRDEVICEATTESTATIONINFO_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MTRDeviceAttestationInfo : NSObject

@property (readonly, copy, nonatomic) NSData *certificationDeclaration; // ivar: _certificationDeclaration
@property (readonly, copy, nonatomic) NSData *challenge; // ivar: _challenge
@property (readonly, copy, nonatomic) NSData *deviceAttestationCertificate; // ivar: _deviceAttestationCertificate
@property (readonly, copy, nonatomic) NSData *elementsSignature; // ivar: _elementsSignature
@property (readonly, copy, nonatomic) NSData *elementsTLV; // ivar: _elementsTLV
@property (readonly, copy, nonatomic) NSData *firmwareInfo; // ivar: _firmwareInfo
@property (readonly, copy, nonatomic) NSData *nonce; // ivar: _nonce
@property (readonly, copy, nonatomic) NSData *productAttestationIntermediateCertificate; // ivar: _productAttestationIntermediateCertificate


-(id)initWithDeviceAttestationChallenge:(id)arg0 nonce:(id)arg1 elementsTLV:(id)arg2 elementsSignature:(id)arg3 deviceAttestationCertificate:(id)arg4 productAttestationIntermediateCertificate:(id)arg5 certificationDeclaration:(id)arg6 firmwareInfo:(id)arg7 ;


@end


#endif