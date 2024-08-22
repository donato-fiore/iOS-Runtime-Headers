// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFKEY_H
#define _SFKEY_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "_SFKeySpecifier.h"

@interface _SFKey : NSObject {
    id *_keyInternal;
}


@property (readonly, nonatomic) NSData *keyData; // ivar: _keyData
@property (readonly, copy, nonatomic) NSString *keyDomain;
@property (readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier;


+(Class)_attributesClass;
+(id)_specifierForSecKey:(struct __SecKey *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initRandomKeyWithSpecifier:(id)arg0 ;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithData:(id)arg0 specifier:(id)arg1 error:(*id)arg2 ;


@end


#endif