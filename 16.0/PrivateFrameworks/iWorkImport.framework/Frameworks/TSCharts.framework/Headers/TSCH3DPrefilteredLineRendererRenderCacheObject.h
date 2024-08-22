// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DPREFILTEREDLINERENDERERRENDERCACHEOBJECT_H
#define TSCH3DPREFILTEREDLINERENDERERRENDERCACHEOBJECT_H



#import "TSCH3DSceneRenderCacheObject.h"
#import "TSCH3DStrokePatternTexture.h"

@interface TSCH3DPrefilteredLineRendererRenderCacheObject : TSCH3DSceneRenderCacheObject {
    TSCH3DStrokePatternTexture *_strokeTexture;
}


@property (nonatomic) BOOL didRenderOnce; // ivar: _didRenderOnce


-(id)init;
-(id)p_box;
-(id)p_diffuseTexcoords;
-(id)p_geometry;
-(id)p_normals;
-(id)p_originalGeometry;
-(id)p_texcoords;
-(void)allocateDynamicResourcesIntoArray:(id)arg0 ;
-(void)renderWithLineRenderer:(id)arg0 setting:(id)arg1 fromVertex:(*void)arg2 toVertex:(*void)arg3 ;
-(void)submitResourcesWithLineRenderer:(id)arg0 setting:(id)arg1 ;


@end


#endif