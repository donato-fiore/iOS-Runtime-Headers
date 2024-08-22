// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SECJWSDECODER_H
#define SECJWSDECODER_H

@class NSString, NSData, NSError;

#import <Foundation/Foundation.h>


@interface SecJWSDecoder : NSObject

@property (readonly, nonatomic) NSString *keyID; // ivar: _keyID
@property (readonly, nonatomic) NSData *payload; // ivar: _payload
@property (readonly, nonatomic) NSError *verificationError; // ivar: _verificationError


-(BOOL)_validateJWSProtectedHeader:(id)arg0 ;
-(id)_createASN1SignatureFromJWSSignature:(id)arg0 ;
-(id)dataWithBase64URLEncodedString:(id)arg0 ;
-(id)initWithJWSCompactEncodedString:(id)arg0 keyID:(id)arg1 publicKey:(struct __SecKey *)arg2 ;
-(void)_validateJWSSignature:(id)arg0 ofHeader:(id)arg1 andPayload:(id)arg2 withPublicKey:(struct __SecKey *)arg3 ;


@end


#endif