// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSCPUMAXIMUMUSAGELIMITATION_H
#define RBSCPUMAXIMUMUSAGELIMITATION_H



#import "RBSLimitation.h"

@interface RBSCPUMaximumUsageLimitation : RBSLimitation

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSUInteger percentage; // ivar: _percentage
@property (readonly, nonatomic) unsigned char role; // ivar: _role
@property (readonly, nonatomic) NSUInteger violationPolicy; // ivar: _violationPolicy


+(id)limitationForRole:(unsigned char)arg0 withPercentage:(NSUInteger)arg1 duration:(CGFloat)arg2 violationPolicy:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif