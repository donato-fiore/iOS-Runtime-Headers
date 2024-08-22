// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFAESKEY_H
#define _SFAESKEY_H

@class SFSymmetricKey;


#import "_SFAESKeySpecifier.h"

@interface _SFAESKey : SFSymmetricKey {
    id *_aesKeyInternal;
}


@property (readonly, copy, nonatomic) _SFAESKeySpecifier *keySpecifier;


-(id)initRandomKeyWithSpecifier:(id)arg0 error:(*id)arg1 ;


@end


#endif