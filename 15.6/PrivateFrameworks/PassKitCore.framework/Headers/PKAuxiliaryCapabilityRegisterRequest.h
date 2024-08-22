// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAUXILIARYCAPABILITYREGISTERREQUEST_H
#define PKAUXILIARYCAPABILITYREGISTERREQUEST_H

@class NSData, NSArray;


#import "PKAuxiliaryCapabilityWebServiceRequest.h"
#import "PKSecureElementSignatureInfo.h"

@interface PKAuxiliaryCapabilityRegisterRequest : PKAuxiliaryCapabilityWebServiceRequest

@property (copy, nonatomic) NSData *deviceDecryptionKeyAttestation; // ivar: _deviceDecryptionKeyAttestation
@property (copy, nonatomic) NSData *deviceSignatureKeyAttestation; // ivar: _deviceSignatureKeyAttestation
@property (copy, nonatomic) NSArray *dpanIdentifiers; // ivar: _dpanIdentifiers
@property (copy, nonatomic) NSData *signatureData; // ivar: _signatureData
@property (retain, nonatomic) PKSecureElementSignatureInfo *signatureInfo; // ivar: _signatureInfo
@property (copy, nonatomic) NSArray *validCertificatesOnDevice; // ivar: _validCertificatesOnDevice


-(id)_dataToSign;
-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;


@end


#endif