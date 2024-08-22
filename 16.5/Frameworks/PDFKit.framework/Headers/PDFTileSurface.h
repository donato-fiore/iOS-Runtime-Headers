// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFTILESURFACE_H
#define PDFTILESURFACE_H


#import <Foundation/Foundation.h>


@interface PDFTileSurface : NSObject {
    int tileId;
    int pageNumber;
    int tileSize;
    int type;
    *__IOSurface ioSurfaceRef;
    *CGImage cgImageRef;
}




-(void)releaseSurface;


@end


#endif