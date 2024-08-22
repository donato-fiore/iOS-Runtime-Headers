// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAUTHENTICATEDCIPHERTEXT_IVARS_H
#define SFAUTHENTICATEDCIPHERTEXT_IVARS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SFAuthenticatedCiphertext_Ivars : NSObject {
    NSData *authenticationCode;
    NSData *initializationVector;
}






@end


#endif