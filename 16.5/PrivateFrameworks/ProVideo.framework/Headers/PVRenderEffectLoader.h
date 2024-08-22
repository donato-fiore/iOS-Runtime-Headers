// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVRENDEREFFECTLOADER_H
#define PVRENDEREFFECTLOADER_H


#import <Foundation/Foundation.h>


@interface PVRenderEffectLoader : NSObject {
    *void _loadedEffects;
    *HGSynchronizable _lock;
    BOOL _flushesOnEffectStackChanges;
}


@property (nonatomic) float unusedEffectTimeout; // ivar: _unusedEffectTimeout


-(id)init;
-(void)_loadEffects_noLock:(id)arg0 ;
-(void)_removeTimedOutEffects_noLock;
-(void)_removeUnusedEffects_noLock:(id)arg0 ;
-(void)ageOutEffects;
-(void)dealloc;
-(void)loadEffectsForGraphs:(id)arg0 loadContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(void)unloadEffects;


@end


#endif