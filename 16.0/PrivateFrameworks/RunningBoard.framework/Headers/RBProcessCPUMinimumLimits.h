// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBPROCESSCPUMINIMUMLIMITS_H
#define RBPROCESSCPUMINIMUMLIMITS_H


#import <Foundation/Foundation.h>


@interface RBProcessCPUMinimumLimits : NSObject

@property (readonly, nonatomic) NSUInteger duration; // ivar: _duration
@property (readonly, nonatomic) NSUInteger percentage; // ivar: _percentage


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithPercentage:(NSUInteger)arg0 duration:(NSUInteger)arg1 ;
-(id)unionLimit:(id)arg0 ;


@end


#endif