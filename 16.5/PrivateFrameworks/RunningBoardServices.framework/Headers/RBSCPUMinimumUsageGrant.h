// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSCPUMINIMUMUSAGEGRANT_H
#define RBSCPUMINIMUMUSAGEGRANT_H



#import "RBSGrant.h"

@interface RBSCPUMinimumUsageGrant : RBSGrant

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSUInteger percentage; // ivar: _percentage
@property (readonly, nonatomic) unsigned char role; // ivar: _role


+(id)grantForRole:(unsigned char)arg0 withPercentage:(NSUInteger)arg1 duration:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif