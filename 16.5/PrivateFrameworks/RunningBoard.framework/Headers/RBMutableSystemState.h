// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBMUTABLESYSTEMSTATE_H
#define RBMUTABLESYSTEMSTATE_H



#import "RBSystemState.h"

@interface RBMutableSystemState : RBSystemState



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)addAllowLaunchPredicate:(id)arg0 ;
-(void)addPreventIdleSleepIdentifier:(id)arg0 ;
-(void)addPreventLaunchPredicate:(id)arg0 ;
-(void)addTag:(id)arg0 ;
-(void)prewarmIdentity:(id)arg0 withInterval:(CGFloat)arg1 ;
-(void)removeAllPreventIdleSleepIdentifiers;
-(void)removePreventIdleSleepIdentifier:(id)arg0 ;
-(void)setPreventIdleSleep:(BOOL)arg0 ;
-(void)setPreventLaunch:(BOOL)arg0 ;
-(void)unionState:(id)arg0 ;
-(void)upgradeCondition:(id)arg0 toValue:(NSInteger)arg1 ;


@end


#endif