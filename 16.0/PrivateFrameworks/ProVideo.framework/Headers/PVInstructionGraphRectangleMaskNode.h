// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVINSTRUCTIONGRAPHRECTANGLEMASKNODE_H
#define PVINSTRUCTIONGRAPHRECTANGLEMASKNODE_H



#import "PVInstructionGraphNode.h"

@interface PVInstructionGraphRectangleMaskNode : PVInstructionGraphNode

@property (retain, nonatomic) PVInstructionGraphNode *inputNode; // ivar: _inputNode
@property (nonatomic) BOOL isInverted; // ivar: _isInverted
@property (nonatomic) CGRect normalizedMaskRect; // ivar: _normalizedMaskRect


+(id)newMaskNode:(id)arg0 normalizedMaskRect:(struct CGRect )arg1 ;
-(id)getAllSourceNodes;
-(id)initWithInputNode:(id)arg0 normalizedMaskRect:(struct CGRect )arg1 ;
-(id)requiredSourceTrackIDs;
-(struct CGRect )denormalizedMaskRectInSize:(struct CGSize )arg0 ;
-(struct HGRef<HGNode> )internalHGNodeForTime:(struct ? )arg0 trackInputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct PCMatrix44Tmpl<double> )pixelTransformForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(struct PCRect<double> )inputSizeForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(void)loadIGNode:(struct HGRef<PVInstructionGraphContext> )arg0 returnLoadedEffects:(id)arg1 ;
-(void)unloadIGNode;


@end


#endif