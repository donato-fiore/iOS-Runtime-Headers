// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CERTOPERATIONS_H
#define CERTOPERATIONS_H


#import <Foundation/Foundation.h>


@interface CertOperations : NSObject



+(?)verifyCertData:(?)arg0 withCert:(?)arg1 withPubKey:(?)arg2 stingray:(?)arg3 enroll:(?)arg4 altDSID:(?)arg5 env:(?)arg6 duplicate:(?)arg7 sigVerificationerror;
+(id)certVersion:(struct __SecCertificate *)arg0 ;
+(id)rootBaseVersionsForRootType:(unsigned int)arg0 altDSID:(id)arg1 inEnvironment:(id)arg2 duplicate:(BOOL)arg3 ;
+(id)rootCurrentVersionForRootType:(unsigned int)arg0 altDSID:(id)arg1 inEnvironment:(id)arg2 ;
+(id)rootTrustedVersionsForRootType:(unsigned int)arg0 altDSID:(id)arg1 inEnvironment:(id)arg2 duplicate:(BOOL)arg3 ;
+(void)fetchTermsWithAltDSID:(id)arg0 reply:(id)arg1 ;
+(void)storeTerms:(id)arg0 withAltDSID:(id)arg1 reply:(id)arg2 ;


@end


#endif