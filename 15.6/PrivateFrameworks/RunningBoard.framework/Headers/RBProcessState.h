// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBPROCESSSTATE_H
#define RBPROCESSSTATE_H

@class NSMutableDictionary, NSMutableSet, RBSProcessIdentity, NSSet;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "RBInheritanceCollection.h"

@interface RBProcessState : NSObject <NSCopying, NSMutableCopying>

 {
    NSMutableDictionary *_maxCPULimitsByRole;
    NSMutableDictionary *_minCPULimitsByRole;
    NSMutableDictionary *_jetsamLenientModeByRole;
    NSMutableSet *_tags;
    NSMutableSet *_legacyAssertions;
    NSMutableSet *_primitiveAssertions;
    unsigned char _flags;
}


@property (readonly, nonatomic) BOOL effectiveJetsamLenientMode;
@property (readonly, nonatomic) NSUInteger effectiveMaxCPUDuration;
@property (readonly, nonatomic) NSUInteger effectiveMaxCPUPercentage;
@property (readonly, nonatomic) NSUInteger effectiveMaxCPUUsageViolationPolicy;
@property (readonly, nonatomic) NSUInteger effectiveMinCPUDuration;
@property (readonly, nonatomic) NSUInteger effectiveMinCPUPercentage;
@property (readonly, nonatomic) NSUInteger explicitJetsamBand; // ivar: _explicitJetsamBand
@property (readonly, nonatomic) BOOL forceRoleManage;
@property (readonly, nonatomic) unsigned char gpuRole; // ivar: _gpuRole
@property (readonly, nonatomic) BOOL guaranteedRunning; // ivar: _guaranteedRunning
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) RBInheritanceCollection *inheritances; // ivar: _inheritances
@property (readonly, nonatomic) BOOL isBeingDebugged;
@property (readonly, nonatomic) BOOL jetsamLenientMode;
@property (readonly, copy, nonatomic) NSSet *legacyAssertions;
@property (readonly, nonatomic) NSUInteger legacyFinishTaskReason; // ivar: _legacyFinishTaskReason
@property (readonly, nonatomic) BOOL preventIdleSleep;
@property (readonly, nonatomic) NSSet *preventIdleSleepIdentifiers; // ivar: _preventIdleSleepIdentifiers
@property (readonly, nonatomic) NSSet *preventLaunchReasons; // ivar: _preventLaunchReasons
@property (readonly, nonatomic) BOOL preventSuspend;
@property (readonly, copy, nonatomic) NSSet *primitiveAssertions;
@property (readonly, nonatomic) unsigned char role; // ivar: _role
@property (readonly, copy, nonatomic) NSSet *tags;
@property (readonly, nonatomic) unsigned char terminationResistance; // ivar: _terminationResistance
@property (readonly, nonatomic) BOOL throttleBestEffortNetworking;


-(BOOL)isAppNapEqualToProcessState:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToProcessStateIgnoringIdentity:(id)arg0 ;
-(BOOL)isEqualToProcessStateIgnoringInheritances:(id)arg0 ;
-(NSUInteger)hash;
-(id)clientStateForProcess:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)inheritancesForEnvironment:(id)arg0 ;
-(id)init;
-(id)initWithIdentity:(id)arg0 ;
-(id)maxCPUUsageLimitsForRole:(unsigned char)arg0 ;
-(id)minCPUUsageLimitsForRole:(unsigned char)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif