// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLDICTIONARYCONSTRAINT_H
#define MLDICTIONARYCONSTRAINT_H

@protocol MLFeatureValueConstraint, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLDictionaryConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger keyType; // ivar: _keyType


+(BOOL)supportsSecureCoding;
+(id)constraintWithInt64Keys;
+(id)constraintWithStringKeys;
-(BOOL)isAllowedValue:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif