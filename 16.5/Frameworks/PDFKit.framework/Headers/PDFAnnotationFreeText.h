// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFANNOTATIONFREETEXT_H
#define PDFANNOTATIONFREETEXT_H

@protocol NSCopying, NSCoding;


#import "PDFAnnotation.h"
#import "PDFAnnotationFreeTextPrivateVars.h"

@interface PDFAnnotationFreeText : PDFAnnotation <NSCopying, NSCoding>

 {
    PDFAnnotationFreeTextPrivateVars *_private2;
}




-(NSInteger)alignment;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)font;
-(id)fontColor;
-(id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg0 forPage:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(struct __CFDictionary *)commonCreateDictionaryRef;
-(void)commonInit;
-(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAlignment:(NSInteger)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setFontColor:(id)arg0 ;


@end


#endif