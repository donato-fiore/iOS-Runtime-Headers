// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKCOMPONENT_H
#define DKCOMPONENT_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DKComponentIdentity.h"

@interface DKComponent : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) DKComponentIdentity *identity; // ivar: _identity


+(BOOL)supportsSecureCoding;
+(id)componentWithIdentity:(id)arg0 attributes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryForJSON;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 attributes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif