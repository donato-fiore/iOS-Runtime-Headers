// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFPAGELAYERANNOTATIONEFFECT_H
#define PDFPAGELAYERANNOTATIONEFFECT_H



#import "PDFPageLayerEffect.h"

@interface PDFPageLayerAnnotationEffect : PDFPageLayerEffect



-(id)UUID;
-(id)annotation;
-(struct CGRect )pageFrame;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)update;


@end


#endif