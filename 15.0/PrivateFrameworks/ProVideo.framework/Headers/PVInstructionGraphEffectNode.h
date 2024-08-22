// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVINSTRUCTIONGRAPHEFFECTNODE_H
#define PVINSTRUCTIONGRAPHEFFECTNODE_H



#import "PVInstructionGraphNode.h"
#import "PVEffect.h"

@interface PVInstructionGraphEffectNode : PVInstructionGraphNode {
    map<unsigned int, PVInstructionGraphNode *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, PVInstructionGraphNode *>>> _inputMap;
}


@property (nonatomic) BOOL bypassOutOfRangeEffects; // ivar: _bypassOutOfRangeEffects
@property (retain, nonatomic) PVEffect *effect; // ivar: _effect


+(id)newEffectNodeToAddTitle:(id)arg0 effect:(id)arg1 ;
+(id)newEffectNodeToFilterInput:(id)arg0 effect:(id)arg1 ;
+(id)newEffectNodeToOverlayInputs:(id)arg0 inputIDs:(id)arg1 effect:(id)arg2 ;
+(id)newEffectNodeToTransitionFrom:(id)arg0 to:(id)arg1 effect:(id)arg2 ;
-(id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(id)getAllSourceNodes;
-(id)init;
-(id)instructionGraphNodeDescription;
-(id)requiredSourceTrackIDs;
-(struct HGRef<HGNode> )internalHGNodeForTime:(struct ? )arg0 trackInputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct PCMatrix44Tmpl<double> )pixelTransformForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(struct PCRect<double> )inputSizeForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(struct PVIGHGNodeCacheKey )contextHGNodeCacheKeyAtTime:(struct ? )arg0 ;
-(void)addDotTreeLinks:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(void)loadIGNode:(struct HGRef<PVInstructionGraphContext> )arg0 returnLoadedEffects:(id)arg1 ;
-(void)setInputNode:(id)arg0 forInputID:(unsigned int)arg1 ;
-(void)unloadIGNode;


@end


#endif