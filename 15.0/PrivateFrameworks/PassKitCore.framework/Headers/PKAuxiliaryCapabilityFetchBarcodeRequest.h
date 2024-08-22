// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAUXILIARYCAPABILITYFETCHBARCODEREQUEST_H
#define PKAUXILIARYCAPABILITYFETCHBARCODEREQUEST_H

@class NSString, NSArray, NSData;


#import "PKAuxiliaryCapabilityWebServiceRequest.h"
#import "PKSecureElementSignatureInfo.h"

@interface PKAuxiliaryCapabilityFetchBarcodeRequest : PKAuxiliaryCapabilityWebServiceRequest

@property (nonatomic) NSInteger barcodeCount; // ivar: _barcodeCount
@property (copy, nonatomic) NSString *dpanIdentifier; // ivar: _dpanIdentifier
@property (copy, nonatomic) NSArray *encryptionCertificateChain; // ivar: _encryptionCertificateChain
@property (nonatomic) NSInteger fetchReason; // ivar: _fetchReason
@property (copy, nonatomic) NSString *lastUsedBarcodeIdentifier; // ivar: _lastUsedBarcodeIdentifier
@property (copy, nonatomic) NSData *signatureData; // ivar: _signatureData
@property (retain, nonatomic) PKSecureElementSignatureInfo *signatureInfo; // ivar: _signatureInfo


-(id)_dataToSign;
-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;


@end


#endif