// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCERTIFICATES_H
#define MTRCERTIFICATES_H


#import <Foundation/Foundation.h>


@interface MTRCertificates : NSObject



+(BOOL)isCertificate:(id)arg0 equalTo:(id)arg1 ;
+(BOOL)keypair:(id)arg0 matchesCertificate:(id)arg1 ;
+(id)convertMatterCertificate:(id)arg0 ;
+(id)convertX509Certificate:(id)arg0 ;
+(id)createCertificateSigningRequest:(id)arg0 error:(*id)arg1 ;
+(id)createIntermediateCertificate:(id)arg0 rootCertificate:(id)arg1 intermediatePublicKey:(struct __SecKey *)arg2 issuerID:(id)arg3 fabricID:(id)arg4 error:(*id)arg5 ;
+(id)createOperationalCertificate:(id)arg0 signingCertificate:(id)arg1 operationalPublicKey:(struct __SecKey *)arg2 fabricID:(id)arg3 nodeID:(id)arg4 caseAuthenticatedTags:(id)arg5 error:(*id)arg6 ;
+(id)createRootCertificate:(id)arg0 issuerID:(id)arg1 fabricID:(id)arg2 error:(*id)arg3 ;
+(id)generateCertificateSigningRequest:(id)arg0 error:(*id)arg1 ;
+(id)generateIntermediateCertificate:(id)arg0 rootCertificate:(id)arg1 intermediatePublicKey:(struct __SecKey *)arg2 issuerId:(id)arg3 fabricId:(id)arg4 error:(*id)arg5 ;
+(id)generateOperationalCertificate:(id)arg0 signingCertificate:(id)arg1 operationalPublicKey:(struct __SecKey *)arg2 fabricId:(id)arg3 nodeId:(id)arg4 caseAuthenticatedTags:(id)arg5 error:(*id)arg6 ;
+(id)generateRootCertificate:(id)arg0 issuerId:(id)arg1 fabricId:(id)arg2 error:(*id)arg3 ;
+(id)publicKeyFromCSR:(id)arg0 error:(*id)arg1 ;
+(void)initialize;


@end


#endif