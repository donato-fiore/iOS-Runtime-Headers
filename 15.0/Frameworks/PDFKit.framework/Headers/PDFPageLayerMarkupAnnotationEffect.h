// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFPAGELAYERMARKUPANNOTATIONEFFECT_H
#define PDFPAGELAYERMARKUPANNOTATIONEFFECT_H



#import "PDFPageLayerEffect.h"

@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect



-(id)UUID;
-(id)annotation;
-(void)_updateNoteLayer;
-(void)removeFromSuperlayer;
-(void)update;


@end


#endif