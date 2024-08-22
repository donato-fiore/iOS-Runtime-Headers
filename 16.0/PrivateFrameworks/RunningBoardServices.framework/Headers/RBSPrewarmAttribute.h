// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSPREWARMATTRIBUTE_H
#define RBSPREWARMATTRIBUTE_H



#import "RBSAttribute.h"
#import "RBSProcessIdentity.h"

@interface RBSPrewarmAttribute : RBSAttribute

@property (readonly, nonatomic) RBSProcessIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval


+(id)attributeWithIdentity:(id)arg0 interval:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithidentity:(id)arg0 interval:(CGFloat)arg1 ;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif