// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFIDENTITY_H
#define _SFIDENTITY_H


#import <Foundation/Foundation.h>

#import "SFIdentityAttributes.h"
#import "_SFCertificate.h"
#import "_SFKeyPair.h"
#import "_SFPublicKey.h"

@interface _SFIdentity : NSObject {
    id *_identityInternal;
}


@property (readonly, nonatomic) SFIdentityAttributes *attributes;
@property (retain, nonatomic) _SFCertificate *certificate;
@property (retain, nonatomic) _SFKeyPair *keyPair;
@property (readonly, nonatomic) _SFPublicKey *publicKey;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPair:(id)arg0 ;
-(id)initWithKeyPair:(id)arg0 certificate:(id)arg1 ;
-(id)initWithPublicKey:(id)arg0 ;
-(id)initWithPublicKey:(id)arg0 certificate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif