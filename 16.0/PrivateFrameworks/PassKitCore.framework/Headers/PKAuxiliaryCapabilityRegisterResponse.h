// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAUXILIARYCAPABILITYREGISTERRESPONSE_H
#define PKAUXILIARYCAPABILITYREGISTERRESPONSE_H

@class NSArray;


#import "PKAuxiliaryCapabilityWebServiceResponse.h"

@interface PKAuxiliaryCapabilityRegisterResponse : PKAuxiliaryCapabilityWebServiceResponse

@property (retain, nonatomic) NSArray *deviceDecryptionCertificateChain; // ivar: _deviceDecryptionCertificateChain
@property (retain, nonatomic) NSArray *deviceSignatureCertificateChain; // ivar: _deviceSignatureCertificateChain
@property (retain, nonatomic) NSArray *serverDecryptionCertificateChain; // ivar: _serverDecryptionCertificateChain
@property (retain, nonatomic) NSArray *serverSignatureCertificateChain; // ivar: _serverSignatureCertificateChain


+(BOOL)jsonDataOptional;
-(id)_retrieveCertificateChainFromJSONObject:(id)arg0 withParameterName:(id)arg1 ;
-(id)initWithData:(id)arg0 ;


@end


#endif