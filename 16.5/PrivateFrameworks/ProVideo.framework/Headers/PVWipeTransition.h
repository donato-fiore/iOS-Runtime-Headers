// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVWIPETRANSITION_H
#define PVWIPETRANSITION_H



#import "PVHeliumEffect.h"

@interface PVWipeTransition : PVHeliumEffect

@property (nonatomic) int transitionDirection; // ivar: _transitionDirection


+(void)registerEffectWithID:(id)arg0 displayName:(id)arg1 ;
-(struct HGRef<HGNode> )hgNodeForTime:(struct ? )arg0 inputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;


@end


#endif