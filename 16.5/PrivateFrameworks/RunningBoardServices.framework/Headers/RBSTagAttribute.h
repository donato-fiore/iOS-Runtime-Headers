// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSTAGATTRIBUTE_H
#define RBSTAGATTRIBUTE_H

@class NSString;


#import "RBSAttribute.h"

@interface RBSTagAttribute : RBSAttribute

@property (readonly, copy, nonatomic) NSString *tag; // ivar: _tag


+(id)attributeWithTag:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif