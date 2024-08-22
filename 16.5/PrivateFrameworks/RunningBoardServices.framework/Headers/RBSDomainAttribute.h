// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSDOMAINATTRIBUTE_H
#define RBSDOMAINATTRIBUTE_H

@class NSString;


#import "RBSAttribute.h"

@interface RBSDomainAttribute : RBSAttribute

@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, copy, nonatomic) NSString *fullyQualifiedName;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *sourceEnvironment; // ivar: _sourceEnvironment


+(id)attributeWithDomain:(id)arg0 name:(id)arg1 ;
+(id)attributeWithDomain:(id)arg0 name:(id)arg1 sourceEnvironment:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif