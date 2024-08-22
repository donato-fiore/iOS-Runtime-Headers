// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSSIGNINGOPTIONS_H
#define IDSSIGNINGOPTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "IDSSigningKeyDiversifier.h"

@interface IDSSigningOptions : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) IDSSigningKeyDiversifier *keyDiversifier; // ivar: _keyDiversifier
@property (nonatomic) unsigned int keyType; // ivar: _keyType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyType:(unsigned int)arg0 diversifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif