// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVEFFECTSCHEDULER_H
#define PVEFFECTSCHEDULER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PVEffectScheduler : NSObject {
    set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::allocator<HGRef<LoadableInstruction>>> _effectSchedule;
    set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::allocator<HGRef<LoadableInstruction>>> _previousScheduleToUnload;
    __tree_const_iterator<HGRef<LoadableInstruction>, std::__tree_node<HGRef<LoadableInstruction>, void *> *, long> _lastLoadedEffectSetIterator;
    ? _endTime;
    BOOL _loadedFinalInstructions;
    BOOL _isExporting;
    NSObject<OS_dispatch_queue> *_loadQueue;
    atomic<bool> _isScheduling;
    *HGSynchronizable _effectScheduleLock;
    HGRef<PVInstructionGraphContext> _effectLoadRenderContext;
}




-(BOOL)loadTimeIsNearEnd:(struct ? )arg0 ;
-(BOOL)previousLoadedIteratorIsLastInList;
-(id)init;
-(void)dealloc;
-(void)loadEffects:(struct ? )arg0 playerRate:(float)arg1 ;
-(void)releaseAllUnusedEffects:(struct ? )arg0 ;
-(void)resetSchedule:(id)arg0 ;
-(void)resetSearchPoint;
-(void)setEffectLoadingRenderContext:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(void)setIsExporting:(BOOL)arg0 ;
-(void)unloadInstructionFromPreviousSchedule;


@end


#endif