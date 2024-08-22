// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFSYMMETRICKEY_H
#define _SFSYMMETRICKEY_H

@class SFKey;


#import "_SFSymmetricKeySpecifier.h"

@interface _SFSymmetricKey : SFKey {
    id *_symmetricKeyInternal;
}


@property (readonly, copy, nonatomic) _SFSymmetricKeySpecifier *keySpecifier;


+(Class)_attributesClass;
-(id)initRandomKeyWithSpecifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 specifier:(id)arg1 error:(*id)arg2 ;
-(id)keyData;


@end


#endif