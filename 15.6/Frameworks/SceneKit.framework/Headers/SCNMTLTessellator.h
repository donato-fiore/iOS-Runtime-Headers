// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNMTLTESSELLATOR_H
#define SCNMTLTESSELLATOR_H

@protocol MTLBuffer;

#import <Foundation/Foundation.h>

#import "SCNMTLResourceManager.h"

@interface SCNMTLTessellator : NSObject {
    ? _geometry;
    SCNMTLResourceManager *_resourceManager;
    ? _cachedTessellator;
    id<MTLBuffer> *_tessellationFactorBuffer;
}




-(?)initWithGeometryresourceManager;
-(id)newPipelineStateConfiguratorForMeshElement:(SEL)arg0 patchType:(id)arg1 device:(unsigned char)arg2 ;
-(struct ? )_pipelineStateHashForMeshElement:(id)arg0 patchType:(unsigned char)arg1 ;
-(unsigned char)pipelineStateHashForMeshElement:(id)arg0 patchType:(unsigned char)arg1 ;
-(void)constrainedEdgeLengthTessellationDrawMeshElement:(id)arg0 forMesh:(id)arg1 instanceCount:(NSUInteger)arg2 renderContext:(id)arg3 ;
-(void)dealloc;
-(void)draw:(struct ? )arg0 ;
-(void)screenSpaceAdaptiveTessellationDrawMeshElement:(id)arg0 forMesh:(id)arg1 instanceCount:(NSUInteger)arg2 renderContext:(id)arg3 ;
-(void)subdivisionSurfaceTessellationDraw:(struct ? )arg0 ;
-(void)uniformTessellationDrawMeshElement:(id)arg0 forMesh:(id)arg1 instanceCount:(NSUInteger)arg2 renderContext:(id)arg3 ;
-(void)update:(struct ? )arg0 ;
-(void)updateConstrainedEdgeLengthTessellator:(struct ? )arg0 parameters:(struct ? )arg1 ;
-(void)updateScreenSpaceAdaptiveTessellator:(struct ? )arg0 parameters:(struct ? )arg1 ;
-(void)updateSubdivisionSurfaceTessellator:(struct ? )arg0 parameters:(struct ? )arg1 ;
-(void)updateUniformTessellator:(struct ? )arg0 ;


@end


#endif