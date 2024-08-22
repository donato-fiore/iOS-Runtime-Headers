// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRDEVICECREDENTIAL_H
#define HMMTRDEVICECREDENTIAL_H

@class NSData;

#import <Foundation/Foundation.h>


@interface HMMTRDeviceCredential : NSObject

@property (readonly, nonatomic) NSData *certificationDeclaration; // ivar: _certificationDeclaration
@property (readonly, nonatomic) NSData *deviceAttestationCertificate; // ivar: _deviceAttestationCertificate
@property (readonly, nonatomic) NSData *productAttestationIntermediateCertificate; // ivar: _productAttestationIntermediateCertificate


-(id)initWithCertificationDeclaration:(id)arg0 deviceAttestationCertificate:(id)arg1 productAttestationIntermediateCertificate:(id)arg2 ;


@end


#endif