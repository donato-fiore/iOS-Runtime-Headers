// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFRENDERER_H
#define PDFRENDERER_H



#import "CGRenderer.h"

@interface PDFRenderer : CGRenderer {
    *__CFDictionary info;
    *__CFData data;
    *CGDataConsumer dataConsumer;
}




-(BOOL)setCanvasWidth:(unsigned int)arg0 height:(unsigned int)arg1 ;
-(id)init;
-(struct __CFData *)pdfdata;
-(void)dealloc;
-(void)flushRender;
-(void)setFileTitle:(id)arg0 ;
-(void)setFileURL:(id)arg0 ;


@end


#endif