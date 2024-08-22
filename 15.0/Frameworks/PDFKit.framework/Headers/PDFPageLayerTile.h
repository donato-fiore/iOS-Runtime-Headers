// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFPAGELAYERTILE_H
#define PDFPAGELAYERTILE_H

@class CALayer;
@protocol PDFTilePoolDelegate;


#import "PDFPageLayer.h"
#import "PDFTileSurface.h"

@interface PDFPageLayerTile : CALayer <PDFTilePoolDelegate>

 {
    PDFPageLayer *pageLayer;
    CGAffineTransform renderingTransform;
    CGFloat tileContentsScale;
    PDFTileSurface *pageSurface;
    int generationID;
    uint8_t isWorking;
    CGRect originalFrame;
}


@property CGRect rootViewFrame; // ivar: _rootViewFrame


-(BOOL)isWorking;
-(id)initWithFrame:(struct CGRect )arg0 forPageLayer:(id)arg1 withRenderingTransform:(struct CGAffineTransform )arg2 tileContentsScale:(CGFloat)arg3 generationID:(int)arg4 ;
-(void)dealloc;
-(void)hasStartedWork;
-(void)recievePDFTileSurface:(id)arg0 ;


@end


#endif