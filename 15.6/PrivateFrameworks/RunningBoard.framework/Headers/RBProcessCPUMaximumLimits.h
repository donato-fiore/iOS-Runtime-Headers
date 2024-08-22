// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBPROCESSCPUMAXIMUMLIMITS_H
#define RBPROCESSCPUMAXIMUMLIMITS_H


#import <Foundation/Foundation.h>


@interface RBProcessCPUMaximumLimits : NSObject

@property (readonly, nonatomic) NSUInteger duration; // ivar: _duration
@property (readonly, nonatomic) NSUInteger percentage; // ivar: _percentage
@property (readonly, nonatomic) NSUInteger violationPolicy; // ivar: _violationPolicy


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithPercentage:(NSUInteger)arg0 duration:(NSUInteger)arg1 violationPolicy:(NSUInteger)arg2 ;
-(id)unionLimit:(id)arg0 ;


@end


#endif