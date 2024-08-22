// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVINSTRUCTIONGRAPHNODE_H
#define PVINSTRUCTIONGRAPHNODE_H


#import <Foundation/Foundation.h>


@interface PVInstructionGraphNode : NSObject {
    NSUInteger _uuid;
}


@property (nonatomic) BOOL isDebugDrawingEnabled; // ivar: _isDebugDrawingEnabled


-(BOOL)isPassthru;
-(id)description;
-(id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(id)getAllSourceNodes;
-(id)init;
-(id)instructionGraphNodeDescription;
-(id)requiredSourceSampleDataTrackIDs;
-(id)requiredSourceTrackIDs;
-(struct HGRef<HGNode> )hgNodeForTime:(struct ? )arg0 trackInputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct HGRef<HGNode> )internalHGNodeForTime:(struct ? )arg0 trackInputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct PCMatrix44Tmpl<double> )pixelTransformForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(struct PCRect<double> )inputSizeForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(struct PVIGHGNodeCacheKey )contextHGNodeCacheKeyAtTime:(struct ? )arg0 ;
-(void)loadIGNode:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(void)loadIGNode:(struct HGRef<PVInstructionGraphContext> )arg0 returnLoadedEffects:(id)arg1 ;
-(void)unloadIGNode;


@end


#endif