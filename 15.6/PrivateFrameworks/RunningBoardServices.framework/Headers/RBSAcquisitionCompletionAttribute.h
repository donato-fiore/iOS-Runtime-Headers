// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSACQUISITIONCOMPLETIONATTRIBUTE_H
#define RBSACQUISITIONCOMPLETIONATTRIBUTE_H



#import "RBSAttribute.h"

@interface RBSAcquisitionCompletionAttribute : RBSAttribute

@property (readonly, nonatomic) NSUInteger policy; // ivar: _policy


+(id)attributeWithCompletionPolicy:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif