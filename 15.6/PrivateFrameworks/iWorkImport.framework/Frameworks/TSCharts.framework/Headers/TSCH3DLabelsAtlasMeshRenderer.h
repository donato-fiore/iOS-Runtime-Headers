// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DLABELSATLASMESHRENDERER_H
#define TSCH3DLABELSATLASMESHRENDERER_H

@class TSUNoCopyDictionary;


#import "TSCH3DLabelsMeshRenderer.h"
#import "TSCH3DTextureAtlas.h"

@interface TSCH3DLabelsAtlasMeshRenderer : TSCH3DLabelsMeshRenderer {
    TSCH3DTextureAtlas *_atlas;
    TSUNoCopyDictionary *_externalAttributeVariables;
}




-(NSUInteger)p_indexForExternalAttribute:(id)arg0 ;
-(NSUInteger)p_resourceCount;
-(id)init;
-(id)p_resourceAtIndex:(NSUInteger)arg0 childIndex:(NSUInteger)arg1 dimension:(NSUInteger)arg2 createIfAbsent:(BOOL)arg3 ;
-(id)p_resourceForExternalLabelAttribute:(id)arg0 index:(NSUInteger)arg1 createIfAbsent:(BOOL)arg2 ;
-(id)p_texcoordResourceAtIndex:(NSUInteger)arg0 createIfAbsent:(BOOL)arg1 ;
-(id)p_vertexResourceAtIndex:(NSUInteger)arg0 createIfAbsent:(BOOL)arg1 ;
-(void)allocateDynamicResourcesIntoArray:(id)arg0 ;
-(void)beginResources:(id)arg0 samples:(float)arg1 ;
-(void)flushCache;
-(void)p_submitExternalAttributesForIndex:(NSUInteger)arg0 processor:(id)arg1 ;
-(void)renderWithMeshRenderLabelInfo:(id)arg0 ;
-(void)submitResourcesWithProcessor:(id)arg0 ;


@end


#endif