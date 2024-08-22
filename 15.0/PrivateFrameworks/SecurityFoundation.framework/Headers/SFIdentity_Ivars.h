// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFIDENTITY_IVARS_H
#define SFIDENTITY_IVARS_H


#import <Foundation/Foundation.h>

#import "_SFPublicKey.h"
#import "_SFKeyPair.h"
#import "_SFCertificate.h"
#import "SFIdentityAttributes.h"

@interface SFIdentity_Ivars : NSObject {
    _SFPublicKey *publicKey;
    _SFKeyPair *keyPair;
    _SFCertificate *certificate;
    SFIdentityAttributes *attributes;
}






@end


#endif