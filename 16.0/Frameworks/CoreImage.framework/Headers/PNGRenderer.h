// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PNGRENDERER_H
#define PNGRENDERER_H



#import "CGRenderer.h"

@interface PNGRenderer : CGRenderer {
    *__CFURL fullURL;
    *CGColor background;
    *CGColorSpace colorSpace;
}




-(BOOL)setCanvasWidth:(unsigned int)arg0 height:(unsigned int)arg1 ;
-(id)init;
-(struct CGImage *)cgimage;
-(void)dealloc;
-(void)flushRender;
-(void)setFileURL:(id)arg0 ;


@end


#endif