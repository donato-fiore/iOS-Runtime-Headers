// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNMTLMORPH_H
#define SCNMTLMORPH_H

@class NSArray;
@protocol MTLBuffer;

#import <Foundation/Foundation.h>

#import "SCNMTLResourceManager.h"
#import "SCNMTLComputePipeline.h"

@interface SCNMTLMorph : NSObject {
    SCNMTLResourceManager *_resourceManager;
    ? _baseBuffer;
    unsigned int _baseVertexCount;
    short _baseBufferTypes;
    unsigned int _baseBufferTypesCount;
    unsigned int _baseBufferStride;
    short _targetBufferTypes;
    unsigned int _targetBufferTypesCount;
    unsigned int _targetBufferStride;
    unsigned int _dstSemanticUsageMask;
    unsigned int _srcSemanticUsageMask;
    *void _bufferPool;
    BOOL _unifyPostMorphNormals;
    BOOL _shouldMorphNormals;
    BOOL _nextMorphRequiresReset;
    unsigned char _dataKindForMorphing;
    id<MTLBuffer> *_splatProvokingVertices;
    ? _postUnifyInfo;
    *Target _targets;
    NSUInteger _targetCount;
    NSArray *_originalTargets;
    SCNMTLComputePipeline *_copyCPS;
    SCNMTLComputePipeline *_blendCPS;
    SCNMTLComputePipeline *_blendSparseCPS;
    SCNMTLComputePipeline *_splatCPS;
}




-(BOOL)isCompatibleWithMorph:(struct __C3DMorph *)arg0 ;
-(id)initWithMorph:(struct __C3DMorph *)arg0 baseGeometry:(struct __C3DGeometry *)arg1 resourceManager:(id)arg2 ;
-(struct ? )newBufferWithLength:(NSUInteger)arg0 ;
-(unsigned int)sparseIndexSize;
-(void)_createPipelineStates:(id)arg0 ;
-(void)_prepareTargetDataForIndex:(NSInteger)arg0 morph:(struct __C3DMorph *)arg1 baseMesh:(struct __C3DMesh *)arg2 ;
-(void)_writeSources:(struct __C3DMeshSource **)arg0 dstTypes:(*short)arg1 sourcesCount:(unsigned int)arg2 inBuffer:(*void)arg3 stride:(unsigned int)arg4 length:(NSUInteger)arg5 sparse:(BOOL)arg6 positionScale:(float)arg7 ;
-(void)dealloc;
-(void)morphIncrementallyForMorpher:(struct __C3DMorpher *)arg0 renderContext:(id)arg1 positionBuffer:(id)arg2 normalBuffer:(id)arg3 ;
-(void)morphSparseMorpher:(struct __C3DMorpher *)arg0 renderContext:(id)arg1 positionBuffer:(id)arg2 normalBuffer:(id)arg3 ;
-(void)setNextMorphRequiresReset;
-(void)unifyMeshWithRenderContext:(id)arg0 positionBuffer:(id)arg1 normalBuffer:(id)arg2 ;


@end


#endif