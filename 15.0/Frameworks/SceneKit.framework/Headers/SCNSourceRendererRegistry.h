// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNSOURCERENDERERREGISTRY_H
#define SCNSOURCERENDERERREGISTRY_H


#import <Foundation/Foundation.h>


@interface SCNSourceRendererRegistry : NSObject {
    *__CFDictionary _registry;
}




+(id)sharedRegistry;
-(id)init;
-(id)sourceRendererForEngineContext:(struct __C3DEngineContext *)arg0 source:(id)arg1 textureSource:(id)arg2 targetTexture:(id)arg3 ;
-(void)dealloc;
-(void)endFrameForEngineContext:(struct __C3DEngineContext *)arg0 ;
-(void)removeSourceRenderersForEngineContext:(struct __C3DEngineContext *)arg0 ;
-(void)removeSourceRenderersForSource:(id)arg0 ;
-(void)rendererDidChange:(id)arg0 ;


@end


#endif