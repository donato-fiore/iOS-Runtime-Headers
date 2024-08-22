// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVPUSHTRANSITION_H
#define PVPUSHTRANSITION_H



#import "PVHeliumEffect.h"

@interface PVPushTransition : PVHeliumEffect

@property (nonatomic) int transitionDirection; // ivar: _transitionDirection


+(void)registerEffectWithID:(id)arg0 displayName:(id)arg1 ;
-(struct HGRef<HGNode> )hgNodeForTime:(struct ? )arg0 inputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;


@end


#endif