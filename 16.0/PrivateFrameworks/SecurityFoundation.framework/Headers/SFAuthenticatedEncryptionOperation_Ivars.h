// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFAUTHENTICATEDENCRYPTIONOPERATION_IVARS_H
#define SFAUTHENTICATEDENCRYPTIONOPERATION_IVARS_H


#import <Foundation/Foundation.h>

#import "_SFAESKeySpecifier.h"

@interface SFAuthenticatedEncryptionOperation_Ivars : NSObject {
    _SFAESKeySpecifier *keySpecifier;
    NSInteger authenticationMode;
    NSInteger authenticationCodeLength;
}






@end


#endif