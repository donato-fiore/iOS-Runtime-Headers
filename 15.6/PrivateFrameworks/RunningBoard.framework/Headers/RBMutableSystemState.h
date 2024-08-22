// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBMUTABLESYSTEMSTATE_H
#define RBMUTABLESYSTEMSTATE_H



#import "RBSystemState.h"

@interface RBMutableSystemState : RBSystemState



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)addPreventIdleSleepIdentifier:(id)arg0 ;
-(void)addPreventLaunchPredicate:(id)arg0 ;
-(void)addTag:(id)arg0 ;
-(void)removeAllPreventIdleSleepIdentifiers;
-(void)removePreventIdleSleepIdentifier:(id)arg0 ;
-(void)setPreventIdleSleep:(BOOL)arg0 ;
-(void)setPreventLaunch:(BOOL)arg0 ;
-(void)unionState:(id)arg0 ;


@end


#endif