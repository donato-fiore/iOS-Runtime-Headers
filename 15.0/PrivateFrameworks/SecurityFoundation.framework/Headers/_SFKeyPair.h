// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFKEYPAIR_H
#define _SFKEYPAIR_H

@class SFKey, NSString;


#import "_SFPublicKey.h"

@interface _SFKeyPair : SFKey {
    id *_keyPairInternal;
}


@property (readonly, copy, nonatomic) NSString *privateKeyDomain;
@property (readonly, nonatomic) _SFPublicKey *publicKey;
@property (readonly, nonatomic, getter=_secKey) *__SecKey secKey;


+(Class)_attributesClass;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg0 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg0 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg0 privateKeyDomain:(id)arg1 ;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithData:(id)arg0 specifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithSecKey:(struct __SecKey *)arg0 ;
-(id)keyData;


@end


#endif