// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSCONSTRAINTSATTRIBUTE_H
#define RBSCONSTRAINTSATTRIBUTE_H



#import "RBSAttribute.h"

@interface RBSConstraintsAttribute : RBSAttribute

@property (readonly, nonatomic) NSUInteger constraints; // ivar: _constraints


+(id)attributeWithConstraints:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif