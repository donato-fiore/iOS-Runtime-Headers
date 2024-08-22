// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRPINCRYPTO_H
#define SPRPINCRYPTO_H


#import <Foundation/Foundation.h>


@interface SPRPINCrypto : NSObject {
    *__SecKey _peerPublicKey;
}




+(BOOL)verifySignature:(id)arg0 onRequest:(id)arg1 usingKey:(id)arg2 error:(*id)arg3 ;
-(id)encryptDigit:(unsigned char)arg0 error:(*id)arg1 ;
-(id)initWithAttestationData:(id)arg0 casdCertificate:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif