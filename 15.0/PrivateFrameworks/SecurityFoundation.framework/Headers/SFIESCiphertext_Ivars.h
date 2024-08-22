// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFIESCIPHERTEXT_IVARS_H
#define SFIESCIPHERTEXT_IVARS_H

@class NSData;

#import <Foundation/Foundation.h>

#import "_SFECPublicKey.h"

@interface SFIESCiphertext_Ivars : NSObject {
    _SFECPublicKey *ephemeralSenderPublicKey;
    NSData *authenticationCode;
}






@end


#endif