// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16CRYPTOKITPRIVATE18CKPIETFKEYBLINDING_H
#define _TTC16CRYPTOKITPRIVATE18CKPIETFKEYBLINDING_H


#import <Foundation/Foundation.h>


@interface _TtC16CryptoKitPrivate18CKPIETFKeyBlinding : NSObject



+(BOOL)isValidWithSignature:(id)arg0 for:(id)arg1 with:(struct __SecKey *)arg2 context:(id)arg3 ;
+(id)blindSign:(id)arg0 blindedBy:(struct __SecKey *)arg1 with:(struct __SecKey *)arg2 context:(id)arg3 error:(*id)arg4 ;
+(id)compressedRepresentationFromSecKey:(struct __SecKey *)arg0 ;
+(id)privateScalarFromSecKey:(struct __SecKey *)arg0 ;
+(struct __SecKey *)blindPublicKeyWithPublicKey:(struct __SecKey *)arg0 with:(struct __SecKey *)arg1 context:(id)arg2 error:(*id)arg3 ;
+(struct __SecKey *)secKeyFromCompressedRepresentation:(id)arg0 ;
+(struct __SecKey *)unblindPublicKey:(struct __SecKey *)arg0 with:(struct __SecKey *)arg1 context:(id)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif