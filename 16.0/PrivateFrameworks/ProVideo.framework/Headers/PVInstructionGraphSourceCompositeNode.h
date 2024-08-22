// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVINSTRUCTIONGRAPHSOURCECOMPOSITENODE_H
#define PVINSTRUCTIONGRAPHSOURCECOMPOSITENODE_H

@class NSString, NSURL, NSDictionary;
@protocol PVImageSeqDelegate, PVCompositeDelegate;

#import <Foundation/Foundation.h>

#import "PVInstructionGraphSourceNode.h"
#import "PVColorSpace.h"
#import "PVCompositeDelegateEffect.h"
#import "PVInstructionGraphNode.h"
#import "PVImageBuffer.h"

@interface PVInstructionGraphSourceCompositeNode : PVInstructionGraphSourceNode {
    HGRef<PVRenderManager> _renderManager;
}


@property (nonatomic) BOOL canPreprocess; // ivar: _canPreprocess
@property (nonatomic) BOOL canRender; // ivar: _canRender
@property (retain, nonatomic) PVColorSpace *colorSpace; // ivar: _colorSpace
@property (retain, nonatomic) PVCompositeDelegateEffect *delegateEffect; // ivar: _delegateEffect
@property (retain, nonatomic) PVInstructionGraphNode *graphNode; // ivar: _graphNode
@property (retain, nonatomic) PVImageBuffer *imageBuffer; // ivar: _imageBuffer
@property (retain, nonatomic) NSString *imageKey; // ivar: _imageKey
@property (retain, nonatomic) NSObject<PVImageSeqDelegate> *imageSeqDelegate; // ivar: _imageSeqDelegate
@property (retain, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (retain, nonatomic) NSDictionary *inputMap; // ivar: _inputMap
@property (retain, nonatomic) NSObject *metadata; // ivar: _metadata
@property (nonatomic) int nodeType; // ivar: _nodeType
@property (nonatomic) unsigned int outputFormat; // ivar: _outputFormat
@property (nonatomic) CGSize outputSize; // ivar: _outputSize
@property (retain, nonatomic) NSObject<PVCompositeDelegate> *renderDelegate; // ivar: _renderDelegate
@property (nonatomic) int trackID; // ivar: _trackID
@property (retain, nonatomic) id *userContext; // ivar: _userContext


+(id)newSourceCompositeNodeWithDelegate:(id)arg0 inputs:(id)arg1 metadata:(id)arg2 outputSize:(struct CGSize )arg3 outputFormat:(unsigned int)arg4 ;
+(id)newSourceCompositeNodeWithDelegate:(id)arg0 inputs:(id)arg1 userContext:(id)arg2 outputSize:(struct CGSize )arg3 outputFormat:(unsigned int)arg4 ;
+(id)newSourceCompositeNodeWithGraphNode:(id)arg0 outputSize:(struct CGSize )arg1 outputFormat:(unsigned int)arg2 ;
+(id)newSourceCompositeNodeWithPVImageBuffer:(id)arg0 ;
+(id)newSourceCompositeNodeWithTrack:(int)arg0 outputSize:(struct CGSize )arg1 ;
+(id)newSourceCompositeNodeWithURL:(id)arg0 key:(id)arg1 imageDelegate:(id)arg2 ;
-(id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(id)getAllSourceNodes;
-(id)init;
-(id)instructionGraphNodeDescription;
-(id)requiredSourceTrackIDs;
-(struct HGRef<HGNode> )conformInputImage:(id)arg0 colorSpace:(id)arg1 renderer:(*void)arg2 currentTime:(struct ? )arg3 igContext:(struct HGRef<PVInstructionGraphContext> )arg4 ;
-(struct HGRef<HGNode> )conformNode:(struct HGRef<HGNode> )arg0 toSize:(struct HGRect )arg1 ;
-(struct HGRef<HGNode> )internalHGNodeForTime:(struct ? )arg0 trackInputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct HGRef<HGNode> )nodeForCompositeTrackMap:(*void)arg0 ;
-(struct PCMatrix44Tmpl<double> )pixelTransformForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(struct PCRect<double> )inputSizeForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(void)addDotTreeLinks:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(void)loadIGNode:(struct HGRef<PVInstructionGraphContext> )arg0 returnLoadedEffects:(id)arg1 ;
-(void)unloadIGNode;


@end


#endif