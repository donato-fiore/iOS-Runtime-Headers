// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVEFFECTTIMEDPROPERTIESCOMPONENT_H
#define PVEFFECTTIMEDPROPERTIESCOMPONENT_H

@class NSMutableSet;
@protocol PVEffectTimedProperties;


#import "PVEffectComponent.h"

@interface PVEffectTimedPropertiesComponent : PVEffectComponent <PVEffectTimedProperties>

 {
    NSMutableSet *_delegateWrappers;
    unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> _delegateCollectionLock;
}




-(BOOL)addTimedPropertiesToDict:(id)arg0 time:(struct ? )arg1 ;
-(BOOL)applyTimedPropertiesForTime:(struct ? )arg0 ;
-(BOOL)hasTimedPropertiesDelegate:(id)arg0 ;
-(BOOL)hasTimedPropertiesDelegates;
-(id)delegateWrappers;
-(id)initWithEffect:(id)arg0 ;
-(id)timedPropertiesDelegates;
-(id)userContextForTimedPropertiesDelegate:(id)arg0 ;
-(void)addTimedPropertiesDelegate:(id)arg0 userContext:(id)arg1 ;
-(void)addTimedPropertiesDelegateWrapper:(id)arg0 ;
-(void)effectDidLoad:(id)arg0 isReady:(BOOL)arg1 ;
-(void)effectDidUnload:(id)arg0 ;
-(void)removeAllTimedPropertiesDelegates;
-(void)removeTimedPropertiesDelegate:(id)arg0 ;


@end


#endif