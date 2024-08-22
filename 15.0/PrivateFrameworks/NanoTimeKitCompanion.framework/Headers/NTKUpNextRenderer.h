// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKUPNEXTRENDERER_H
#define NTKUPNEXTRENDERER_H

@class CARenderer;
@protocol MTLTexture;

#import <Foundation/Foundation.h>


@interface NTKUpNextRenderer : NSObject {
    CARenderer *_renderer;
    *__IOSurface _ioSurface;
    id<MTLTexture> *_texture;
}




-(id)renderView:(id)arg0 ;
-(struct __IOSurface *)newSurfaceWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif