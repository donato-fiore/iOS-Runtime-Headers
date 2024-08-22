// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARUIRINGSRENDERER_H
#define ARUIRINGSRENDERER_H

@protocol MTLBuffer;

#import <Foundation/Foundation.h>

#import "ARUIRingUniformsCache.h"

@interface ARUIRingsRenderer : NSObject {
    id<MTLBuffer> *_vertexPositionsBuffer;
    id<MTLBuffer> *_indexBuffer;
    NSUInteger _indexCount;
    ARUIRingUniformsCache *_cache;
}




-(id)initWithDevice:(id)arg0 ;
-(void)_renderEntireRings:(id)arg0 intoContext:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3 ;
-(void)_renderRingsFollowingPercent:(id)arg0 intoContext:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3 ;
-(void)beginRenderingWithCommandEncoder:(id)arg0 ;
-(void)clearCaches;
-(void)renderRings:(id)arg0 intoContext:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3 ;


@end


#endif