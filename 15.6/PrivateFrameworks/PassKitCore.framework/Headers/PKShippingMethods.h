// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSHIPPINGMETHODS_H
#define PKSHIPPINGMETHODS_H

@class NSArray, NSOrderedSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKShippingMethod.h"

@interface PKShippingMethods : NSObject <NSCopying, NSSecureCoding>

 {
    NSArray *_legacyShippingMethods;
    NSOrderedSet *_methodsSet;
}


@property (readonly, nonatomic) PKShippingMethod *defaultMethod; // ivar: _defaultMethod
@property (readonly, nonatomic) NSArray *legacyShippingMethods;
@property (readonly, nonatomic) NSArray *methods;


+(BOOL)supportsSecureCoding;
+(id)shippingMethodsWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToShippingMethods:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLegacyShippingMethods:(id)arg0 ;
-(id)initWithMethods:(id)arg0 defaultMethod:(id)arg1 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif