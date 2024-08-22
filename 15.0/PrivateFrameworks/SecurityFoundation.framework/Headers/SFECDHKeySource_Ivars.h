// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFECDHKEYSOURCE_IVARS_H
#define SFECDHKEYSOURCE_IVARS_H


#import <Foundation/Foundation.h>

#import "_SFECKeyPair.h"
#import "_SFECPublicKey.h"

@interface SFECDHKeySource_Ivars : NSObject {
    _SFECKeyPair *localKeyPair;
    _SFECPublicKey *remotePublicKey;
}






@end


#endif