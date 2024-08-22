// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECJWSENCODER_H
#define SECJWSENCODER_H


#import <Foundation/Foundation.h>


@interface SecJWSEncoder : NSObject

@property *__SecKey privateKey; // ivar: _privateKey
@property *__SecKey publicKey; // ivar: _publicKey


-(id)base64URLEncodedStringRepresentationWithData:(id)arg0 ;
-(id)base64URLEncodedStringRepresentationWithDictionary:(id)arg0 ;
-(id)compactJSONStringRepresentationWithDictionary:(id)arg0 ;
-(id)createKeyPair;
-(id)encodedJWSWithPayload:(id)arg0 kid:(id)arg1 nonce:(id)arg2 url:(id)arg3 error:(*id)arg4 ;
-(id)init;
-(id)initWithPublicKey:(struct __SecKey *)arg0 privateKey:(struct __SecKey *)arg1 ;
-(id)jwkPublicKey;
-(id)signatureWithProtectedHeader:(id)arg0 payload:(id)arg1 ;
-(void)dealloc;


@end


#endif