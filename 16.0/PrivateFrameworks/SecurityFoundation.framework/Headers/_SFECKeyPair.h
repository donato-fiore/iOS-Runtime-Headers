// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFECKEYPAIR_H
#define _SFECKEYPAIR_H

@class SFKeyPair;


#import "_SFECKeySpecifier.h"

@interface _SFECKeyPair : SFKeyPair {
    id *_ecKeyPairInternal;
}


@property (readonly, copy, nonatomic) _SFECKeySpecifier *keySpecifier;


+(id)_secKeyCreationAttributesForSpecifier:(id)arg0 ;
+(id)_specifierForSecKey:(struct __SecKey *)arg0 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg0 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg0 privateKeyDomain:(id)arg1 ;
-(id)performWithCCKey:(id)arg0 ;
-(id)publicKey;


@end


#endif