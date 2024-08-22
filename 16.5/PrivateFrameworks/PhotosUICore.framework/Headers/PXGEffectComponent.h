// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGEFFECTCOMPONENT_H
#define PXGEFFECTCOMPONENT_H

@class NSMapTable, NSMutableSet;
@protocol PXGMutableEffectComponent, PXGEffectComponentDelegate;


#import "PXGComponent.h"

@interface PXGEffectComponent : PXGComponent <PXGMutableEffectComponent>

 {
    os_unfair_lock_s _lock;
    NSMapTable *_lock_effectById;
    NSMutableSet *_allEffects;
}


@property (weak, nonatomic) NSObject<PXGEffectComponentDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) *unsigned int effectIds;
@property (readonly, nonatomic) *unsigned int mutableEffectIds;


+(NSUInteger)elementSize;
-(id)effectForId:(unsigned int)arg0 ;
-(id)initWithDataStore:(id)arg0 ;
-(void)cleanupUnusedObjects;
-(void)didUseEffect:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)registerEffect:(id)arg0 withEffectId:(unsigned int)arg1 ;
-(void)unregisterEffectId:(unsigned int)arg0 ;
-(void)willDestroyEntities:(struct ? *)arg0 count:(NSInteger)arg1 ;


@end


#endif