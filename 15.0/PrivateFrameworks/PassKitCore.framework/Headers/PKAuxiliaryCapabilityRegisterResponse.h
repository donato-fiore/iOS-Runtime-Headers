// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAUXILIARYCAPABILITYREGISTERRESPONSE_H
#define PKAUXILIARYCAPABILITYREGISTERRESPONSE_H

@class NSArray;


#import "PKAuxiliaryCapabilityWebServiceResponse.h"

@interface PKAuxiliaryCapabilityRegisterResponse : PKAuxiliaryCapabilityWebServiceResponse

@property (readonly, nonatomic) NSArray *deviceDecryptionCertificateChain; // ivar: _deviceDecryptionCertificateChain
@property (readonly, nonatomic) NSArray *deviceSignatureCertificateChain; // ivar: _deviceSignatureCertificateChain
@property (readonly, nonatomic) NSArray *serverDecryptionCertificateChain; // ivar: _serverDecryptionCertificateChain
@property (readonly, nonatomic) NSArray *serverSignatureCertificateChain; // ivar: _serverSignatureCertificateChain


-(id)_retrieveCertificateChainFromJSONObject:(id)arg0 withParameterName:(id)arg1 ;
-(id)initWithData:(id)arg0 ;


@end


#endif