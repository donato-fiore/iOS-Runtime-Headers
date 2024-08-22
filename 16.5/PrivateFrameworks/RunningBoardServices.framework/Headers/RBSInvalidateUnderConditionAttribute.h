// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSINVALIDATEUNDERCONDITIONATTRIBUTE_H
#define RBSINVALIDATEUNDERCONDITIONATTRIBUTE_H

@class NSString;


#import "RBSAttribute.h"

@interface RBSInvalidateUnderConditionAttribute : RBSAttribute

@property (readonly, copy, nonatomic) NSString *condition; // ivar: _condition
@property (readonly, nonatomic) NSInteger minValue; // ivar: _minValue


+(id)attributeWithCondition:(id)arg0 minValue:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif