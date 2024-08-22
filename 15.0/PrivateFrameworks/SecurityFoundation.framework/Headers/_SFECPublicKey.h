// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFECPUBLICKEY_H
#define _SFECPUBLICKEY_H

@class SFPublicKey;


#import "_SFECKeySpecifier.h"

@interface _SFECPublicKey : SFPublicKey {
    id *_ecPublicKeyInternal;
}


@property (readonly, copy, nonatomic) _SFECKeySpecifier *keySpecifier;


+(id)_secKeyCreationAttributesForSpecifier:(id)arg0 ;
+(id)_specifierForSecKey:(struct __SecKey *)arg0 ;
+(id)keyWithSubjectPublicKeyInfo:(id)arg0 ;
-(id)encodeSubjectPublicKeyInfo;
-(id)performWithCCKey:(id)arg0 ;


@end


#endif