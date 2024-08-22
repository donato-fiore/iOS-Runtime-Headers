// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NGMPUBLICDEVICEIDENTITY_H
#define NGMPUBLICDEVICEIDENTITY_H


#import <Foundation/Foundation.h>

#import "NGMPublicPreKey.h"
#import "SigningPublicKey.h"

@interface NGMPublicDeviceIdentity : NSObject

@property (retain, nonatomic) NGMPublicPreKey *prekey; // ivar: _prekey
@property (retain, nonatomic) SigningPublicKey *signingKey; // ivar: _signingKey


+(id)identityWithIdentityData:(id)arg0 prekeyData:(id)arg1 error:(*id)arg2 ;
-(BOOL)isValidSignature:(id)arg0 forMessage:(id)arg1 forType:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)isValidSigningDestination;
-(BOOL)verifySignature:(id)arg0 formatter:(id)arg1 ;
-(id)description;
-(id)identityData;
-(id)initWithPrekey:(id)arg0 signingKey:(id)arg1 ;
-(id)sealMessage:(id)arg0 signedByFullIdentity:(id)arg1 error:(*id)arg2 ;
-(id)sealMessage:(id)arg0 withEncryptedAttributes:(id)arg1 signedByFullIdentity:(id)arg2 error:(*id)arg3 ;


@end


#endif