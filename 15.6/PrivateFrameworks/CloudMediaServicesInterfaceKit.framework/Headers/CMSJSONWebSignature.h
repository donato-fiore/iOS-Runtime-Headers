// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSJSONWEBSIGNATURE_H
#define CMSJSONWEBSIGNATURE_H

@class NSString, NSData, NSError;

#import <Foundation/Foundation.h>


@interface CMSJSONWebSignature : NSObject

@property (readonly, nonatomic) NSString *keyID; // ivar: _keyID
@property (readonly, nonatomic) NSData *payload; // ivar: _payload
@property (readonly, nonatomic) NSError *verificationError; // ivar: _verificationError


-(BOOL)_validateJWSProtectedHeader:(id)arg0 ;
-(id)_createASN1SignatureFromJWSSignature:(id)arg0 ;
-(id)initWithJWSCompactEncodedString:(id)arg0 keyID:(id)arg1 publicKey:(id)arg2 ;
-(struct __SecKey *)_createPublicKeyFromPEM:(id)arg0 ;
-(void)_validateJWSSignature:(id)arg0 ofHeader:(id)arg1 andPayload:(id)arg2 withPublicKey:(struct __SecKey *)arg3 ;


@end


#endif