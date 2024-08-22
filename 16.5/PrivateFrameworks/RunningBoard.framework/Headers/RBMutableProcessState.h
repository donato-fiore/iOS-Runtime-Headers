// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBMUTABLEPROCESSSTATE_H
#define RBMUTABLEPROCESSSTATE_H



#import "RBProcessState.h"

@interface RBMutableProcessState : RBProcessState



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addInheritance:(id)arg0 ;
-(void)addLegacyAssertion:(id)arg0 ;
-(void)addPreventIdleSleepIdentifier:(id)arg0 ;
-(void)addRBAssertion:(id)arg0 ;
-(void)addTag:(id)arg0 ;
-(void)removeAllInheritances;
-(void)removeAllPreventIdleSleepIdentifiers;
-(void)removeInheritance:(id)arg0 ;
-(void)removePreventIdleSleepIdentifier:(id)arg0 ;
-(void)setExplicitJetsamBand:(NSUInteger)arg0 ;
-(void)setForceRoleManage:(BOOL)arg0 ;
-(void)setGPURole:(unsigned char)arg0 ;
-(void)setGuaranteedRunning:(BOOL)arg0 ;
-(void)setIsBeingDebugged:(BOOL)arg0 ;
-(void)setJetsamLenientMode:(BOOL)arg0 ;
-(void)setLegacyFinishTaskReason:(NSUInteger)arg0 ;
-(void)setMaxCPUUsageLimits:(id)arg0 forRole:(unsigned char)arg1 ;
-(void)setMemoryLimit:(int)arg0 ;
-(void)setMemoryLimitCategory:(id)arg0 ;
-(void)setMemoryLimitStrength:(unsigned char)arg0 ;
-(void)setMinCPUUsageLimits:(id)arg0 forRole:(unsigned char)arg1 ;
-(void)setPreventBaseMemoryLimitReduction:(BOOL)arg0 ;
-(void)setPreventIdleSleep:(BOOL)arg0 ;
-(void)setPreventSuspend:(BOOL)arg0 ;
-(void)setRole:(unsigned char)arg0 ;
-(void)setTargetedBySuspendableAssertion:(BOOL)arg0 ;
-(void)setTerminationResistance:(unsigned char)arg0 ;
-(void)setThrottleBestEffortNetworking:(BOOL)arg0 ;
-(void)unionState:(id)arg0 ;


@end


#endif