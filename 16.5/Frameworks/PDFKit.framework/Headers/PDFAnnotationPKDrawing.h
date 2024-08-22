// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFANNOTATIONPKDRAWING_H
#define PDFANNOTATIONPKDRAWING_H

@class AKInkAnnotation, PKDrawing;


#import "PDFAnnotation.h"

@interface PDFAnnotationPKDrawing : PDFAnnotation {
    AKInkAnnotation *_akInkAnnotation;
}


@property (retain, nonatomic) PKDrawing *drawing; // ivar: _drawing


-(id)initWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg0 forPage:(id)arg1 ;
-(id)initWithPKDrawing:(id)arg0 bounds:(struct CGRect )arg1 ;
-(struct __CFDictionary *)dictionaryRef;
-(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif