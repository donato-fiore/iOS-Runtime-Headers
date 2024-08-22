// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBASSERTIONTRANSIENTSTATE_H
#define RBASSERTIONTRANSIENTSTATE_H

@class NSMutableDictionary, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RBAssertionTransientState : NSObject <NSCopying>

 {
    NSMutableDictionary *_cpuUsageViolationPoliciesByRole;
}


@property (readonly, nonatomic) NSSet *tags; // ivar: _tags


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)maxCPUUsageViolationPolicyForRole:(unsigned char)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)addTag:(id)arg0 ;
-(void)setMaxCPUUsageViolationPolicy:(NSUInteger)arg0 forRole:(unsigned char)arg1 ;
-(void)unionState:(id)arg0 ;


@end


#endif