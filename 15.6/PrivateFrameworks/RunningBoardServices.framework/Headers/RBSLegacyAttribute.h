// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSLEGACYATTRIBUTE_H
#define RBSLEGACYATTRIBUTE_H



#import "RBSAttribute.h"

@interface RBSLegacyAttribute : RBSAttribute {
    NSUInteger _requestedReason;
    NSUInteger _flags;
}


@property (readonly, nonatomic) NSUInteger flags;
@property (nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSUInteger requestedReason;


+(id)attributeWithReason:(NSUInteger)arg0 flags:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif