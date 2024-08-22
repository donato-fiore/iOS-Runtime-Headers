// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVINSTRUCTIONGRAPHIMAGEBUFFERSOURCENODE_H
#define PVINSTRUCTIONGRAPHIMAGEBUFFERSOURCENODE_H



#import "PVInstructionGraphSourceNode.h"
#import "PVImageBuffer.h"

@interface PVInstructionGraphImageBufferSourceNode : PVInstructionGraphSourceNode {
    PVImageBuffer *_imageBuffer;
    HGRef<PVRenderManager> _renderManager;
}




-(id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(id)initWithPVImageBuffer:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
-(id)instructionGraphNodeDescription;
-(struct HGRef<HGNode> )internalHGNodeForTime:(struct ? )arg0 trackInputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct PCMatrix44Tmpl<double> )pixelTransformForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(struct PCRect<double> )inputSizeForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(void)loadIGNode:(struct HGRef<PVInstructionGraphContext> )arg0 ;


@end


#endif