// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFTILEPOOL_H
#define PDFTILEPOOL_H


#import <Foundation/Foundation.h>

#import "PDFTilePoolPrivate.h"

@interface PDFTilePool : NSObject {
    PDFTilePoolPrivate *_private;
}




+(id)sharedPool;
-(id)_createTileSurfaceForRequest:(id)arg0 ;
-(id)init;
-(int)activeTileCount;
-(int)tileSurfaceSize;
-(int)tileSurfaceType;
-(struct CGContext *)_createContextForTileSurface:(id)arg0 ofRequest:(id)arg1 ;
-(void)_renderTileForRequest:(id)arg0 ;
-(void)dealloc;
-(void)releasePDFTileSurface:(id)arg0 ;
-(void)requestPDFTileSurfaceForTarget:(id)arg0 forPage:(id)arg1 withRenderingProperties:(id)arg2 atZoomFactor:(CGFloat)arg3 frame:(struct CGRect )arg4 transform:(struct CGAffineTransform )arg5 tag:(int)arg6 ;
-(void)saveBitmapFiles;
-(void)setTileSurfaceType:(int)arg0 ;


@end


#endif