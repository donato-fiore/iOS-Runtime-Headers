// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPUBLICKEY_H
#define _SFPUBLICKEY_H

@class SFKey;



@interface _SFPublicKey : SFKey {
    id *_publicKeyInternal;
}


@property (readonly, nonatomic, getter=_secKey) *__SecKey secKey;


+(Class)_attributesClass;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg0 ;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithData:(id)arg0 specifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithSecKey:(struct __SecKey *)arg0 ;
-(id)keyData;


@end


#endif