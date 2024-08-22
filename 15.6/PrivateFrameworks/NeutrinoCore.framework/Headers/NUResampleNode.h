// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NURESAMPLENODE_H
#define NURESAMPLENODE_H



#import "NUAbstractScaleNode.h"
#import "NUSubsampleNode.h"

@interface NUResampleNode : NUAbstractScaleNode

@property (readonly) NSInteger sampleMode; // ivar: _sampleMode
@property (readonly) NSInteger subsampleFactor; // ivar: _subsampleFactor
@property (readonly) NUSubsampleNode *subsampleNode; // ivar: _subsampleNode


-(BOOL)isGeometryNode;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)initWithInput:(id)arg0 settings:(id)arg1 ;
-(id)initWithPreparedInput:(id)arg0 subsampleNode:(id)arg1 ;
-(id)initWithSubsampleFactor:(NSInteger)arg0 sampleMode:(NSInteger)arg1 source:(id)arg2 subsampleNode:(id)arg3 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(struct ? )_additionalScale;


@end


#endif