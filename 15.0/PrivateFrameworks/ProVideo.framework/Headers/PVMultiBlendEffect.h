// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVMULTIBLENDEFFECT_H
#define PVMULTIBLENDEFFECT_H



#import "PVHeliumEffect.h"

@interface PVMultiBlendEffect : PVHeliumEffect



+(void)registerEffectWithID:(id)arg0 displayName:(id)arg1 ;
-(struct HGRef<HGNode> )hgNodeForTime:(struct ? )arg0 inputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct HGRef<HGNode> )previewHGNodeForTime:(struct ? )arg0 inputHGNode:(struct HGRef<HGNode> )arg1 outputSize:(struct CGSize )arg2 renderer:(*void)arg3 ;


@end


#endif