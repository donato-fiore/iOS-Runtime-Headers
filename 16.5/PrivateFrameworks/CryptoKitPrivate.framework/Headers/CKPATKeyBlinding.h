// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPATKEYBLINDING_H
#define CKPATKEYBLINDING_H


#import <Foundation/Foundation.h>


@interface CKPATKeyBlinding : NSObject



+(BOOL)isValidSignature:(id)arg0 forMessage:(id)arg1 signedBy:(struct __SecKey *)arg2 context:(id)arg3 ;
+(id)blindSignMessage:(id)arg0 blindedBy:(struct __SecKey *)arg1 withKey:(struct __SecKey *)arg2 context:(id)arg3 error:(*id)arg4 ;
+(id)compressedRepresentationFromSecKey:(struct __SecKey *)arg0 ;
+(id)privateScalarFromSecKey:(struct __SecKey *)arg0 ;
+(struct __SecKey *)blindPublicKey:(struct __SecKey *)arg0 withPrivateKey:(struct __SecKey *)arg1 context:(id)arg2 error:(*id)arg3 ;
+(struct __SecKey *)secKeyFromCompressedRepresentation:(id)arg0 ;
+(struct __SecKey *)unblindPublicKey:(struct __SecKey *)arg0 withPrivateKey:(struct __SecKey *)arg1 context:(id)arg2 error:(*id)arg3 ;


@end


#endif