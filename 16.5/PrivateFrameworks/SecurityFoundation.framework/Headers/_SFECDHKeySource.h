// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFECDHKEYSOURCE_H
#define _SFECDHKEYSOURCE_H


#import <Foundation/Foundation.h>

#import "_SFECKeyPair.h"
#import "_SFECPublicKey.h"

@interface _SFECDHKeySource : NSObject {
    id *_ecdhKeySourceInternal;
}


@property (retain, nonatomic) _SFECKeyPair *localKeyPair;
@property (retain, nonatomic) _SFECPublicKey *remotePublicKey;


-(id)initWithLocalKeyPair:(id)arg0 remotePublickKey:(id)arg1 ;


@end


#endif