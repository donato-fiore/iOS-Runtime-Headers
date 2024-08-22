// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVINSTRUCTIONGRAPHGENERATORNODE_H
#define PVINSTRUCTIONGRAPHGENERATORNODE_H



#import "PVInstructionGraphSourceNode.h"
#import "PVEffect.h"

@interface PVInstructionGraphGeneratorNode : PVInstructionGraphSourceNode

@property (retain, nonatomic) PVEffect *generatorEffect; // ivar: _generatorEffect


+(id)newGeneratorNode:(id)arg0 ;
-(id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(id)instructionGraphNodeDescription;
-(struct HGRef<HGNode> )internalHGNodeForTime:(struct ? )arg0 trackInputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct PCMatrix44Tmpl<double> )pixelTransformForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(struct PCRect<double> )inputSizeForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(void)loadIGNode:(struct HGRef<PVInstructionGraphContext> )arg0 returnLoadedEffects:(id)arg1 ;
-(void)unloadIGNode;


@end


#endif