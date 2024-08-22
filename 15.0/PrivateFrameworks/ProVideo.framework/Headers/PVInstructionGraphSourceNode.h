// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVINSTRUCTIONGRAPHSOURCENODE_H
#define PVINSTRUCTIONGRAPHSOURCENODE_H



#import "PVInstructionGraphNode.h"
#import "PVTransformAnimation.h"

@interface PVInstructionGraphSourceNode : PVInstructionGraphNode

@property (nonatomic) BOOL isOverlayTrack; // ivar: _isOverlayTrack
@property (nonatomic) int textureWrapMode; // ivar: _textureWrapMode
@property (nonatomic) CGAffineTransform transform; // ivar: _transform
@property (retain, nonatomic) PVTransformAnimation *transformAnimation; // ivar: _transformAnimation
@property (nonatomic) int transformAnimationContentMode; // ivar: _transformAnimationContentMode


-(BOOL)isPortrait;
-(id)getAllSourceNodes;
-(id)init;
-(id)instructionGraphNodeDescription;
-(struct HGRef<HGNode> )applyWrapModeToInput:(struct HGRef<HGNode> )arg0 ;


@end


#endif